#include "Unreal_classes.hpp"
#include "Paladins_enums.hpp"
#include "Paladins_sdk.hpp"
using namespace off;

class ATgProjectile : public UObject {
public:
	inline float GetSpeed() {
		return read<float>(data + n_AProjectile::Speed);
	}
};

class USkeletalMeshComponent : public UObject {
public:
	inline FBoxSphereBounds GetBounds() {
		return read<FBoxSphereBounds>(data + n_UPrimitiveComponent::Bounds);
	}

	inline float GetLastRenderTime() {
		return read<float>(data + n_UPrimitiveComponent::LastRenderTime);
	}

	inline bool IsVisible(float timeSeconds) {
		float lastRenderTime = GetLastRenderTime();
		return (lastRenderTime > timeSeconds - 0.05f);
	}
};

class ATeamInfo : public UObject {
public:
	inline int GetTeamIndex() {
		return read<int>(data + n_ATeamInfo::TeamIndex);
	}
};

class APlayerReplicationInfo : public UObject {
public:
	ATeamInfo GetTeamInfo() {
		return read<ATeamInfo>(data + n_ATgRepInfo_Player::r_TaskForce);
	}

	FString GetName() {
		return read<FString>(data + n_APlayerReplicationInfo::PlayerName);
	}
};

struct FRecoilSettings {
	int bUsesRecoil;           
	float fRecoilReductionPerSec;
	float fRecoilCenterDelay;    
	float fRecoilSmoothRate;     
};

struct FAccuracySettings
{
	int bUsesAdvancedAccuracy; 
	float fMaxAccuracy;          
	float fMinAccuracy;          
	float fAccuracyLossPerShot;  
	float fAccuracyGainPerSec;   
	float fAccuracyGainDelay;    
	int nNumFreeShots;         
};

static FRecoilSettings oldRecoilSettings;
static bool hasRecoil = true;
static FAccuracySettings oldAccuracySettings;
static bool hasSpread = true;

class ATgDevice : public UObject {
public:
	inline FRecoilSettings GetRecoil() {
		return read<FRecoilSettings>(data + n_ATgDevice::m_RecoilSettings);
	}

	inline bool SetRecoil(FRecoilSettings settings) {
		return write(data + n_ATgDevice::m_RecoilSettings, settings);
	}

	inline FAccuracySettings GetAccuracy() {
		return read<FAccuracySettings>(data + n_ATgDevice::m_AccuracySettings);
	}

	inline bool SetAccuracy(FAccuracySettings settings) {
		return write(data + n_ATgDevice::m_AccuracySettings, settings);
	}

	inline void NoRecoil(bool toggle = true) {
		if(toggle) {
			auto recoil = GetRecoil();
			if(recoil.bUsesRecoil) {
				oldRecoilSettings = recoil;
			}
			recoil.bUsesRecoil = false;
			recoil.fRecoilCenterDelay = 0;
			recoil.fRecoilReductionPerSec = 0;
			recoil.fRecoilSmoothRate = 0;
			hasRecoil = false;
			SetRecoil(recoil);
		}
		else {
			if(!hasRecoil) {
				hasRecoil = true;
				SetRecoil(oldRecoilSettings);
			}
		}
	}

	inline void NoSpread(bool toggle) {
		if(toggle) {
			auto accuracy = GetAccuracy();
			accuracy.fAccuracyGainPerSec = 0;
			accuracy.fMaxAccuracy = 1;
			accuracy.fMinAccuracy = 1;
			hasSpread = false;
			SetAccuracy(accuracy);
		}
		else {
			if(!hasSpread) {
				hasSpread = true;
				SetAccuracy(oldAccuracySettings);
			}
		}
	}

	inline TArray<ATgProjectile> GetProjectiles() {
		return read<TArray<ATgProjectile>>(data + n_ATgDevice::m_FiredProjectiles);
	}

	inline int GetMaxAmmoCount() {
		return read<int>(data + n_ATgDevice::r_nMaxAmmoClipCount);
	}

	inline void SetPerspective(bool thirdPerson) {
		write<float>(data + n_ATgDevice::m_fForce3PPersistTimer, thirdPerson ? 1.f : 0.f); // THIS SETS THE DURATION OF THE PERSPECIVE IN SEC
	}
};

class APawn : public UObject {
public:
	inline ATgDevice GetWeapon() {
		return read<ATgDevice>(data + n_APawn::Weapon);
	}

	inline int GetHealth() {
		return read<int>(data + n_APawn::Health);
	}

	inline int GetMaxHealth() {
		return (int)read<float>(data + n_ATgPawn::r_fCachedMaxHealth);
	}

	inline void SetRotation(FRotator rotation) {
		write(data + n_AActor::Rotation, rotation);
	}

	inline APlayerReplicationInfo GetPlayerReplicationInfo() {
		return read<APlayerReplicationInfo>(data + n_APawn::PlayerReplicationInfo);
	}

	inline APawn GetNextPawn() {
		return read<APawn>(data + n_APawn::NextPawn);
	}

	inline float GetEyeHeight() {
		return read<float>(data + n_APawn::BaseEyeHeight);
	}

	inline USkeletalMeshComponent GetMesh() {
		return read<USkeletalMeshComponent>(data + n_APawn::Mesh);
	}

	inline void SetGlowhack(bool isGlowing) {
		auto offset = data + n_ATgPawn::r_bIsWallHacking;
		auto current = read<unsigned long>(offset);
		if(isGlowing) {
			current |= (1u << 17);
		}
		else {
			current &= ~(1u << 17);
		}

		write(offset, current);
	}

	inline FVector GetLocation() {
		return read<FVector>(data + n_AActor::Location);
	}

	inline FRotator GetRotation() {
		return read<FRotator>(data + n_AActor::Rotation);
	}

	inline FVector GetVelocity() {
		return read<FVector>(data + n_AActor::Velocity);
	}
};

class ACamera : public UObject {
public:
	inline float GetDeafultFov() {
		return read<float>(data + n_ACamera::DefaultFOV);
	}

	inline FVector GetRealLocation() {
		return read<FVector>(data + n_ACamera::LastFrameCameraCache + 0x4);
	}

	inline bool SetDefaultFOV(float fov) {
		return write(data + n_ACamera::DefaultFOV, fov);
	}
};

class AWorldInfo : public UObject {
public:
	inline float GetTimeSeconds() {
		return read<float>(data + n_AWorldInfo::TimeSeconds);
	}

	inline APawn GetPawnList() {
		return read<APawn>(data + n_AWorldInfo::PawnList);
	}
};

class AActor : public APawn { };

class APlayerController : public AActor {
public:
	inline float GetFovMultiplier() {
		return read<float>(data + n_APlayerController::LODDistanceFactor);
	}

	inline APawn GetAcknowledgedPawn() {
		return read<APawn>(data + n_APlayerController::AcknowledgedPawn);
	}

	inline ACamera GetCamera() {
		return read<ACamera>(data + n_APlayerController::PlayerCamera);
	}

	inline AWorldInfo GetWorldInfo() {
		return read<AWorldInfo>(data + n_AActor::WorldInfo);
	}
};

class ULocalPlayer : public UObject  {
public:
	inline APlayerController GetController() {
		return read<APlayerController>(data + n_UPlayer::Actor);
	}
};

class UEngine : public UObject {
public:
	inline ULocalPlayer GetLocalPlayer() {
		return read<ULocalPlayer>(read<uint64_t>(data + n_UEngine::GamePlayers));
	}
};