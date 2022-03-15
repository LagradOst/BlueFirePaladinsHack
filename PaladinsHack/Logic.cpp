// MADE BY BLUEFIRE1337

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <random>
#include <stdint.h>
#include "def.h"
#include <list>

#include "SDK/Paladins_classes.hpp"
#include "Overlay.h"
#include <thread>
#include "Mhyprot/mhyprot.hpp"
#include "skCrypter.h"
#include "settings.h"

/*
bool tracersEnabled = true;
bool aimbotEnabled = true;
bool boxESPEnabled = true;
bool hpESPEnabled = true;
bool thirdPerson = true;
bool glowEnabled = true;
bool noRecoil = true;
bool noSpread = true;
bool nameESP = true;
bool smoothing = true;
bool lockWhenClose = true;
float smoothingValue = 0.1f; // from 0-1
bool isPredictionAim = false;*/
bool useNvidiaOverlay = true; // change this if you have problems with overlay
bool overrideFOV = true;
float deafultFOV = 130.f;

struct Vec2
{
public:
	float x;
	float y;
};

void ESPLoop();
void RecoilLoop();

uint64_t process_base = 0;

LONG WINAPI SimplestCrashHandler(EXCEPTION_POINTERS* ExceptionInfo)
{
	std::cout << skCrypt("[!!] Crash at addr 0x") << ExceptionInfo->ExceptionRecord->ExceptionAddress << skCrypt(" by 0x") << std::hex << ExceptionInfo->ExceptionRecord->ExceptionCode << std::endl;

	return EXCEPTION_EXECUTE_HANDLER;
}

bool rendering = true;
int frame = 0;
FOverlay* g_overlay;
uint32_t uEngineOffset;


template<class T>
T PatternScan(uintptr_t moduleAdress, const char* signature, int offset) {
	int instructionLength = offset + sizeof(T);
	IMAGE_DOS_HEADER dos_header;
	IMAGE_NT_HEADERS64 nt_headers;
	read(process_base, dos_header);
	read(process_base + dos_header.e_lfanew, nt_headers);

	const size_t target_len = nt_headers.OptionalHeader.SizeOfImage;

	static auto patternToByte = [](const char* pattern)
	{
		auto       bytes = std::vector<int>{};
		const auto start = const_cast<char*>(pattern);
		const auto end = const_cast<char*>(pattern) + strlen(pattern);

		for(auto current = start; current < end; ++current)
		{
			if(*current == '?')
			{
				++current;
				bytes.push_back(-1);
			}
			else { bytes.push_back(strtoul(current, &current, 16)); }
		}
		return bytes;
	};

	auto       patternBytes = patternToByte(signature);
	const auto s = patternBytes.size();
	const auto d = patternBytes.data();

	auto target = std::unique_ptr<uint8_t[]>(new uint8_t[target_len]);
	if(read_array(process_base, target.get(), target_len)) {
		for(auto i = 0ul; i < nt_headers.OptionalHeader.SizeOfImage - s; ++i)
		{
			bool found = true;
			for(auto j = 0ul; j < s; ++j)
			{
				if(target[static_cast<size_t>(i) + j] != d[j] && d[j] != -1)
				{
					found = false;
					break;
				}
			}
			if(found) {
				return read<T>(moduleAdress + i + offset) + i + instructionLength;
			}
		}
	}

	return NULL;
}

namespace math
{
	// Constants that we need for maths stuff
#define Const_URotation180        32768
#define Const_PI                  3.14159265358979323
#define Const_RadToUnrRot         10430.3783504704527
#define Const_UnrRotToRad         0.00009587379924285
#define Const_URotationToRadians  Const_PI / Const_URotation180 

	int ClampYaw(int angle) {
		static const auto max = Const_URotation180 * 2;

		while(angle > max)
		{
			angle -= max;
		}

		while(angle < 0) {
			angle += max;
		}
		return angle;
	}

	int ClampPitch(int angle) {
		if(angle > 16000) {
			angle = 16000;
		}
		if(angle < -16000) {
			angle = -16000;
		}
		return angle;
	}


	float VectorMagnitude(Vec2 Vec) {
		return sqrt((Vec.x * Vec.x) + (Vec.y * Vec.y));
	}

	void Normalize(Vec2& v)
	{
		float size = VectorMagnitude(v);

		if(!size)
		{
			v.x = v.y = 1;
		}
		else
		{
			v.x /= size;
			v.y /= size;
		}
	}


	void GetAxes(FRotator R, FVector& X, FVector& Y, FVector& Z)
	{
		X = RotationToVector(R);
		X = X.Normalize();
		R.Yaw += 16384;
		FRotator R2 = R;
		R2.Pitch = 0.f;
		Y = RotationToVector(R2);
		Y = Y.Normalize();
		Y.Z = 0.f;
		R.Yaw -= 16384;
		R.Pitch += 16384;
		Z = RotationToVector(R);
		Z = Z.Normalize();
	}

	FVector GetAngleTo(FVector TargetVec, FVector OriginVec)
	{
		FVector Diff;
		Diff.X = TargetVec.X - OriginVec.X;
		Diff.Y = TargetVec.Y - OriginVec.Y;
		Diff.Z = TargetVec.Z - OriginVec.Z;

		return Diff;
	}

	float GetDistance(FVector to, FVector from) {
		float deltaX = to.X - from.X;
		float deltaY = to.Y - from.Y;
		float deltaZ = to.Z - from.Z;

		return (float)sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
	}

	float GetCrosshairDistance(float Xx, float Yy, float xX, float yY)
	{
		return sqrt((yY - Yy) * (yY - Yy) + (xX - Xx) * (xX - Xx));
	}
}

UEngine CurrentUEngine;
ULocalPlayer CurrentLocalPlayer;
APlayerController CurrentController;
APawn CurrentAcknowledgedPawn;
ACamera CurrentCamera;
AWorldInfo CurrentWorldInfo;
APawn CurrentPawnList;

int CurrentHealth;
float CurrentFOV;
int CurrentLoopFrame = 0;

struct FAimData {
	FVector StartTrace; // 0x0
	FVector EndTrace; // 0xc
	FVector AimVector; // 0x18
	uint64_t HitActor; // 0x24
	float ClientMovementTimeStamp; // 0x2c
	uint32_t bResult : 1; // 0x30
};

bool MainAddress() {
#define NAMEOF(name) #name // USE FOR DEBUGGING
#define CHECKVAL(_name)		\
	/*printf("%s : 0x%llX\n", NAMEOF(_name), _name.data);*/ \
	if(!_name.IsValid()) {	\
		return false;			\
	}							\

	//kinda dirty defines, use for debugging
#define PRINTVAL(_name) printf(skCrypt("%s : 0x%llX\n"), NAMEOF(_name), _name);
#define PRINTVALD(_name) printf(skCrypt("%s : %d\n"), NAMEOF(_name), _name);
#define PRINTVALF(_name) printf(skCrypt("%s : %f\n"), NAMEOF(_name), _name);

#define BREAK(_name) 	if(!_name.IsValid()) {	\
		continue;			\
	}
//TODO SpaceBases
	CurrentLoopFrame++;

	CurrentUEngine = read<UEngine>(process_base + uEngineOffset);
	CHECKVAL(CurrentUEngine);

	CurrentLocalPlayer = CurrentUEngine.GetLocalPlayer();
	CHECKVAL(CurrentLocalPlayer);

	CurrentController = CurrentLocalPlayer.GetController();
	CHECKVAL(CurrentController);

	CurrentAcknowledgedPawn = CurrentController.GetAcknowledgedPawn();
	CHECKVAL(CurrentAcknowledgedPawn);

	CurrentCamera = CurrentController.GetCamera();
	CHECKVAL(CurrentCamera);

	CurrentWorldInfo = CurrentController.GetWorldInfo();
	CHECKVAL(CurrentWorldInfo);

	CurrentPawnList = CurrentWorldInfo.GetPawnList();
	CHECKVAL(CurrentPawnList);

	CurrentHealth = CurrentAcknowledgedPawn.GetHealth();

	CurrentFOV = CurrentCamera.GetDeafultFov() * CurrentController.GetFovMultiplier();

	auto wep = CurrentAcknowledgedPawn.GetWeapon();
	CHECKVAL(wep);
	wep.SetPerspective(thirdPersonEnabled);

	CurrentAcknowledgedPawn.SetGlowhack(glowEnabled);
	return true;
}

float ScreenCenterX;
float ScreenCenterY;

bool Locked;
APawn LockedPawn;
// W2S (WorldToScreen) is used to map the 3D game's world coordinates to 2D screen space coordinates.
bool W2S(FVector target, Vec2& dst, FRotator myRot, FVector myLoc, float fov, bool showBehind = true)
{
	FVector AxisX, AxisY, AxisZ, Delta, Transformed;
	math::GetAxes(myRot, AxisX, AxisY, AxisZ);

	Delta = target - myLoc;
	Transformed.X = Delta.Dot(AxisY);
	Transformed.Y = Delta.Dot(AxisZ);
	Transformed.Z = Delta.Dot(AxisX);

	if(Transformed.Z < 1.00f)
		Transformed.Z = 1.00f;

	dst.x = ScreenCenterX + Transformed.X * (ScreenCenterX / tan(fov * Const_PI / 360.0f)) / Transformed.Z;
	dst.y = ScreenCenterY + -Transformed.Y * (ScreenCenterX / tan(fov * Const_PI / 360.0f)) / Transformed.Z;
	if(showBehind)
		return true; // I WANT TO SEE PPL BEHIND ME

	if(dst.x >= 0.0f && dst.x <= FOverlay::ScreenWidth)
	{
		if(dst.y >= 0.0f && dst.y <= FOverlay::ScreenHeight)
		{
			return true;
		}
	}
	return false;
}

void HackTick() {
	if(MainAddress()) { // 0-1ms
		ESPLoop();
	}
	else {
		Sleep(100);
	}
}

float speed = 7000.0f;
void CallAimbot() {
	if(!LockedPawn.IsValid()) return;

	int Hp = LockedPawn.GetHealth();

	if(Hp > 1)
	{
		FRotator AimRotation = FRotator();

		bool isPawnVisible = LockedPawn.GetMesh().IsVisible(CurrentWorldInfo.GetTimeSeconds());

		if(isPawnVisible)
		{
			FVector TargetLocation = LockedPawn.GetLocation();
			if(aimbotPredictionEnabled) {
				auto currentProjectiles = CurrentAcknowledgedPawn.GetWeapon().GetProjectiles();

				if(currentProjectiles.Length() > 0)
				{
					speed = currentProjectiles.GetById(0).GetSpeed();
				}

				FVector TargetVelocity = LockedPawn.GetVelocity();
				float TravelTime = math::GetDistance(CurrentAcknowledgedPawn.GetLocation(), TargetLocation) / speed;
				TargetLocation = {
					(TargetLocation.X + TargetVelocity.X * TravelTime),
					(TargetLocation.Y + TargetVelocity.Y * TravelTime),
					 TargetLocation.Z
				};
			}

			FVector RealLocation = CurrentCamera.GetRealLocation();

			AimAtVector(TargetLocation + FVector(0, 0, LockedPawn.GetEyeHeight()), RealLocation, AimRotation);

			AimRotation.Yaw = math::ClampYaw(AimRotation.Yaw);
			AimRotation.Pitch = math::ClampPitch(AimRotation.Pitch);

			if(aimbotSmoothingEnabled) { // idk kinda spagetti to me, but it works
				FRotator currentRotation = CurrentController.GetRotation();
				currentRotation.Roll = 0;

				auto diff = currentRotation - AimRotation;

				auto realDiff = diff;
				auto a = math::ClampYaw(currentRotation.Yaw);
				auto b = math::ClampYaw(AimRotation.Yaw);
				const auto Full360 = Const_URotation180 * 2;

				auto dist1 = -(a - b + Full360) % Full360;
				auto dist2 = (b - a + Full360) % Full360;

				auto dist = dist1;
				if(abs(dist2) < abs(dist1)) {
					dist = dist2;
				}

				auto smoothAmount = aimbotSpeed;

				if(aimbotLockWhenClose && abs(dist) + abs(diff.Pitch) < Const_URotation180 / 100) {
					smoothAmount = 1;
				}

				diff.Yaw = (int)(dist * smoothAmount);
				diff.Pitch = (int)(diff.Pitch * smoothAmount);
				AimRotation = currentRotation + diff;
			}
			CurrentController.SetRotation(AimRotation);
		}
	}
	else
	{
		Locked = false;
		LockedPawn = APawn{};
		return;
	}
}

void RecoilLoop() {
	if(!CurrentAcknowledgedPawn.IsValid()) return;
	auto wep = CurrentAcknowledgedPawn.GetWeapon();
	if(!wep.IsValid()) return;
	wep.NoRecoil(noRecoilEnabled);
	wep.NoSpread(noSpreadEnabled);
	if(overrideFOV) {
		CurrentCamera.SetDefaultFOV(deafultFOV);
	}
}

bool isAimbotOn = false;
void AimbotKey() {
	while(true) {
		bool shouldRun = false;
		if(isHold) {
			shouldRun = (GetKeyState(holdKey) & 0x8000);
			if(invertHold) shouldRun = !shouldRun;
		}
		else {
			shouldRun = (GetKeyState(holdKey) == 1);
		}

		if(!shouldRun) {
			Sleep(10);
		}

		isAimbotOn = shouldRun;
	}
}

struct FBoneAtom {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	float Scale; // 0x1c
};

void ESPLoop() {
	APawn CurrentPawn = CurrentPawnList;
	int players = 0;
	bool isAimbotActive = aimbotEnabled && isAimbotOn;

	if(!isAimbotActive || !LockedPawn.IsValid() || !LockedPawn.GetMesh().IsVisible(CurrentWorldInfo.GetTimeSeconds())) {
		LockedPawn = APawn{};
		Locked = false;
	}

	float ClosestDistance = 999999.0f;

	auto currentTeamIndex = CurrentAcknowledgedPawn.GetPlayerReplicationInfo().GetTeamInfo().GetTeamIndex();

	if(aimbotFovEnabled) {
		g_overlay->draw_circle(ScreenCenterX, ScreenCenterY, aimbotFov, 1.0f, &aimbotFovColor);
	}

	while(CurrentPawn.IsValid())
	{
		APawn nextPawn = CurrentPawn.GetNextPawn();
		if(!CurrentPawn.IsValid())
		{
			CurrentPawn = nextPawn;
			continue;
		}

		int Hp = CurrentPawn.GetHealth();
		players++;
		auto repInfo = CurrentPawn.GetPlayerReplicationInfo();
		if(!repInfo.IsValid()) {
			CurrentPawn = nextPawn;
			continue;
		}

		auto teamInfo = repInfo.GetTeamInfo();
		if(!teamInfo.IsValid()) {
			CurrentPawn = nextPawn;
			continue;
		}

		auto teamIndex = teamInfo.GetTeamIndex();

		//teamIndex != currentTeamIndex to aim at teammates
		if(teamIndex == currentTeamIndex ||
			CurrentPawn == CurrentAcknowledgedPawn ||
			Hp < 1 || Hp > 10000)
		{
			CurrentPawn = nextPawn;
			continue;
		}

		auto mesh = CurrentPawn.GetMesh();
		if(!mesh.IsValid()) {
			CurrentPawn = nextPawn;
			continue;
		}

		FBoxSphereBounds PlayerHitbox = mesh.GetBounds();

		Vec2 smin, smax, pos;

		FVector min = PlayerHitbox.Origin - PlayerHitbox.BoxExtent;
		FVector max = PlayerHitbox.Origin + PlayerHitbox.BoxExtent;
		FVector pawnPos = CurrentPawn.GetLocation();

		FRotator playerRotation = CurrentController.GetRotation();
		FVector camLocation = CurrentCamera.GetRealLocation();
		bool showBehind = !tracersEnabled || (tracersType == 0);

		bool isPawnVisible = mesh.IsVisible(CurrentWorldInfo.GetTimeSeconds());
		auto posw2s = W2S(pawnPos, pos, playerRotation, camLocation, CurrentFOV, showBehind);

		// TRACERS
		auto tracerDistance = (camLocation - pawnPos).Size() / 50.f;
		Vec2 normalizedHead;
		normalizedHead.x = pos.x - ScreenCenterX;
		normalizedHead.y = pos.y - ScreenCenterY;
		math::Normalize(normalizedHead);
		const float offsetCircle = 10.0f;

		auto lerp = std::clamp(tracerDistance / 150.f, 0.f, 1.f);

		auto tracerColorF = D2D1::ColorF(
			tracersFarColor.x * lerp + tracersNearColor.x * (1 - lerp),
			tracersFarColor.y * lerp + tracersNearColor.y * (1 - lerp),
			tracersFarColor.z * lerp + tracersNearColor.z * (1 - lerp),
			tracersFarColor.w * lerp + tracersNearColor.w * (1 - lerp));

		void* tracerColor = &tracerColorF;

		auto isLockedOnPawn = LockedPawn.data == CurrentPawn.data;
		if(isLockedOnPawn) {
			tracerColor = &targetColor;
		}

		if(tracersEnabled && posw2s) {
			auto tracerStartY = ScreenCenterY;
			auto tracerStartX = ScreenCenterX;
			if(tracersType == 0) {
				tracerStartY += normalizedHead.y * offsetCircle;
				tracerStartX += normalizedHead.x * offsetCircle;
			}
			else if(tracersType == 1) {
				tracerStartY = 0;
			}
			else if(tracersType == 2) {
				tracerStartY *= 2;
			}

			g_overlay->draw_line(tracerStartX, tracerStartY, pos.x, pos.y, tracerColor);
		}


		try {
			if(W2S(min, smin, playerRotation, camLocation, CurrentFOV, false) &&
				W2S(max, smax, playerRotation, camLocation, CurrentFOV, false) &&
				posw2s)
			{

				float flWidth = fabs((smax.y - smin.y) / 4);

				//BOX
				if(boxEnabled) {
					void* boxDrawColor = isLockedOnPawn ? &targetColor : (isPawnVisible ? &boxColor : &boxBehindWallColor);
					g_overlay->draw_line(pos.x - flWidth, smin.y, pos.x + flWidth, smin.y, boxDrawColor); // bottom
					g_overlay->draw_line(pos.x - flWidth, smax.y, pos.x + flWidth, smax.y, boxDrawColor); // up
					g_overlay->draw_line(pos.x - flWidth, smin.y, pos.x - flWidth, smax.y, boxDrawColor); // left
					g_overlay->draw_line(pos.x + flWidth, smin.y, pos.x + flWidth, smax.y, boxDrawColor); // right
					if(boxFillEnabled)
						g_overlay->draw_rect(pos.x - flWidth, smin.y, pos.x + flWidth, smax.y, &boxFillColor);
				}

				// ye idk I cant get this working
#ifdef BONES
				if(bonesEnabled) {
					auto bones = read<TArray<FBoneAtom>>(mesh.data + off::n_USkeletalMeshComponent::SpaceBases);
					//auto mLocal = read<FMatrix>(mesh.data + off::n_USkeletalMeshComponent::LocalToWorldBoneAtom)
					auto mLocal = read<FMatrix>(mesh.data + off::n_UPrimitiveComponent::LocalToWorld);
					//auto mLocalBone = read<FBoneAtom>(mesh.data + off::n_USkeletalMeshComponent::LocalToWorldBoneAtom);
					//
					//auto localTransform = FTransform();
					//localTransform.Rotation = mLocalBone.Rotation;
					//localTransform.Translation = mLocalBone.Translation;
					//localTransform.Scale3D = FVector(mLocalBone.Scale, mLocalBone.Scale, mLocalBone.Scale);
					//auto mLocal2 = localTransform.ToMatrixWithScale();
					for(size_t i = 0; i < bones.Length(); i++)
					{
						auto bone = bones.GetById(i);
						auto transform = FTransform();
						bone.Rotation.Z = -bone.Rotation.Z;
						transform.Rotation = bone.Rotation;
						transform.Translation = bone.Translation;
						transform.Scale3D = FVector();//FVector(bone.Scale, bone.Scale, bone.Scale);
						FVector pos = (transform.ToMatrixWithScale() * mLocal).WPlane;
						Vec2 bonePos;
						if(W2S(pos, bonePos, playerRotation, camLocation, CurrentFOV)) {
							g_overlay->draw_text_red(bonePos.x, bonePos.y, "%d", i);
						}
					}

				}
#endif // BONES
				auto maxHP = CurrentPawn.GetMaxHealth();

				if(hpBarEnabled) {
					float hpScale = (float)Hp / (float)maxHP;
					auto hpColorF = D2D1::ColorF(
						hpBarHighColor.x * hpScale + hpBarLowColor.x * (1 - hpScale),
						hpBarHighColor.y * hpScale + hpBarLowColor.y * (1 - hpScale),
						hpBarHighColor.z * hpScale + hpBarLowColor.z * (1 - hpScale),
						hpBarHighColor.w * hpScale + hpBarLowColor.w * (1 - hpScale));
					g_overlay->draw_rect(pos.x - flWidth - 5, smin.y, pos.x - flWidth - 7, smax.y, &hpBarBgColor);
					g_overlay->draw_rect(pos.x - flWidth - 5, smin.y, pos.x - flWidth - 7, smin.y + (smax.y - smin.y) * (hpScale), &hpColorF);
				}
				//HP
				if(hpnameEnabled) {
					g_overlay->draw_text(pos.x + flWidth + 10, smax.y, &hpnameColor, skCrypt("%d / %d"), Hp, maxHP);
				}

				if(nameEnabled) {
					auto str = repInfo.GetName().ToWString();
					g_overlay->draw_text(pos.x + flWidth + 10, smax.y + (hpnameEnabled ? 10 : 0), &nameColor, skCrypt("%S"), str.c_str());
				}

				if(isAimbotActive && isPawnVisible && !Locked) {
					Vec2 headPos;
					if(W2S(pawnPos, headPos, playerRotation, camLocation, CurrentFOV))
					{
						float crosshairDistance = math::GetCrosshairDistance(headPos.x, headPos.y, ScreenCenterX, ScreenCenterY);
						if(crosshairDistance < aimbotFov)
						{
							if(crosshairDistance < ClosestDistance)
							{
								ClosestDistance = crosshairDistance;
								LockedPawn = CurrentPawn;
							}
						}
						CurrentPawn = nextPawn;
						continue;
					}
				}
			}
			CurrentPawn = nextPawn;
		}
		catch(const std::exception&) {
			CurrentPawn = nextPawn;
			continue;
		}
	}

	if(LockedPawn.IsValid())
	{
		Locked = true;
		CallAimbot();
	}

	auto running = "";
	auto loopFrame = (frame % 400);
	if(loopFrame < 100) {
		running = "|";
	}
	else if(loopFrame < 200) {
		running = "/";
	}
	else if(loopFrame < 300) {
		running = "-";
	}
	else if(loopFrame < 400) {
		running = "\\";
	}

	// this is under the GPL-v3, do not sell this and give credit
	static D2D1::ColorF bluecolor = D2D1::ColorF(0.18f, 0.24f, 0.64f);
	g_overlay->draw_text(5, 5, &bluecolor, skCrypt("BLUEFIRE1337 PALADINS %s"), running);
}

static void render(FOverlay* overlay)
{
	while(rendering)
	{
		overlay->begin_scene();

		overlay->clear_scene();
		frame++;

		HackTick();
		if(frame % 60 == 0) { // once a second (given a 60hz updaterate) because the results are cached 
			RecoilLoop();
		}

		//	overlay->draw_text(200, 200, D2D1::ColorF(1.f, 1.f, 0), "render %d", frame
		overlay->end_scene();
	}
}

void exiting() {
	std::cout << skCrypt("Exiting");

	rendering = false;
	g_overlay->begin_scene();

	g_overlay->clear_scene();

	g_overlay->end_scene();
}

static void _init(FOverlay* overlay)
{
	// Initialize the window
	if(!overlay->window_init(useNvidiaOverlay))
		return;

	// D2D Failed to initialize?
	if(!overlay->init_d2d())
		return;

	// render loop
	std::thread r(render, overlay);
	std::thread aim(AimbotKey);

	r.join(); // threading

	overlay->d2d_shutdown();

	return;
}

void Shutdown() {
	g_overlay->d2d_shutdown();
}

bool InitHack()
{
	//SetConsoleTitle(skCrypt("BLUEFIRE1337's Paladins Cheat V5"));
	SetUnhandledExceptionFilter(SimplestCrashHandler);
	//initTrace();

	system(skCrypt("sc stop mhyprot2")); // RELOAD DRIVER JUST IN CASE
	system(skCrypt("CLS")); // CLEAR

	auto process_name = skCrypt("Paladins.exe");
	auto process_id = GetProcessId(process_name);
	if(!process_id)
	{
		printf(skCrypt("[!] process \"%s\ was not found\n"), process_name);
		return false;
	}

	printf(skCrypt("[+] %s (%d)\n"), process_name, process_id);

	//
	// initialize its service, etc
	//
	if(!mhyprot::init())
	{
		printf(skCrypt("[!] failed to initialize vulnerable driver\n"));
		return false;
	}

	if(!mhyprot::driver_impl::driver_init(
		false, // print debug
		false // print seedmap
	))
	{
		printf(skCrypt("[!] failed to initialize driver properly\n"));
		mhyprot::unload();
		return false;
	}
	process_base = GetProcessBase(process_id);
	if(!process_base) {
		printf(skCrypt("[!] failed to get baseadress\n"));
		mhyprot::unload();
		return false;
	}

	//printf("[+] Game Base is 0x%llX\n", process_base);
	IMAGE_DOS_HEADER dos_header = read<IMAGE_DOS_HEADER>(process_base);
	printf(skCrypt("[+] Game header Magic is 0x%llX\n"), dos_header.e_magic);
	if(dos_header.e_magic != 0x5A4D) {
		printf(skCrypt("[!] Game header Magic should be 0x5A4D\n"));
	}

	uEngineOffset = PatternScan<uint32_t>(process_base, skCrypt("48 8B 0D ? ? ? ? 48 85 C9 0F 84 ? ? ? ? 48"), 3);
	if(uEngineOffset == 0) {
		exit(0);
	}

	RECT desktop;
	// Get a handle to the desktop window
	const HWND hDesktop = GetDesktopWindow();
	// Get the size of screen to the variable desktop
	GetWindowRect(hDesktop, &desktop);
	HDC monitor = GetDC(hDesktop);

	int current = GetDeviceCaps(monitor, VERTRES);
	int total = GetDeviceCaps(monitor, DESKTOPVERTRES);

	FOverlay::ScreenWidth = (desktop.right - desktop.left) * total / current;
	FOverlay::ScreenHeight = (desktop.bottom - desktop.top) * total / current;

	ScreenCenterX = FOverlay::ScreenWidth / 2.f;
	ScreenCenterY = FOverlay::ScreenHeight / 2.f;
	g_overlay = { 0 };
	_init(g_overlay);
	return true;
}
