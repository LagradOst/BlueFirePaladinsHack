#include "settings.h"
#include <fstream>
#include <iostream>
#include <string>
#include <map>

ImVec4 hex(int hex, float alpha)
{
	int red = (hex >> 16) & 255;
	int green = (hex >> 8) & 255;
	int blue = (hex >> 0) & 255;
	return ImVec4(red / 255.f, green / 255.f, blue / 255.f, alpha);
}

// handy way to convert to ImVec4 from hex
ImVec4 operator "" _h(unsigned long long h) {
	return hex(static_cast<int>(h));
}

#ifdef AIMBOT
ImVec4 aimbotFovColor = 0xFFFFFF_h;
bool aimbotEnabled = true;
float aimbotSpeed = 0.5;
float aimbotFov = 400;
bool aimbotFovEnabled = true;
bool aimbotSmoothingEnabled = true;
bool aimbotLockWhenClose = true;

bool isHold = true;
bool invertHold = false;
int holdKey = VK_MENU;
int holdKeyIndex = -1;
#ifdef AIMBOT_PREDICTION
extern bool aimbotPredictionEnabled = false;
#endif // AIMBOT_PREDICTION
#endif
#ifdef TRIGGERBOT
bool triggerbotEnabled = true;
#endif // TRIGGERBOT

#ifdef NORECOIL
bool noRecoilEnabled = true;
bool noSpreadEnabled = true;
#endif

#ifdef THIRDPERSON
bool thirdPersonEnabled;
#endif
#ifdef GLOW 
bool glowEnabled;
#endif

#ifdef ESP
ImVec4 boxColor = 0xFFFFFF_h;
ImVec4 boxBehindWallColor = 0xFFFFFF_h;
ImVec4 targetColor = 0xFFFFFF_h;
bool boxEnabled = true;
ImVec4 boxFillColor = hex(0, 0.1f);
bool boxFillEnabled = true;
ImVec4 tracersNearColor = 0xFF0000_h;
ImVec4 tracersFarColor = 0x00FF00_h;
bool tracersEnabled = true;
int tracersType = 0;

#ifdef NAME_ESP
ImVec4 nameColor = 0xFFFFFF_h;
bool nameEnabled = true;
#endif // NAME_ESP
#ifdef BONES
ImVec4 boneColor = 0x0000FF_h;
bool bonesEnabled = true;
#endif // BONES
#ifdef HP_NAME
ImVec4 hpnameColor = 0x00FF00_h;
bool hpnameEnabled = true;
#endif // HP_BAR
#ifdef HP_BAR
extern ImVec4 hpBarLowColor = 0xFF0000_h;
extern ImVec4 hpBarHighColor = 0x00FF00_h;
extern ImVec4 hpBarBgColor = hex(0,0.3f);
extern bool hpBarEnabled = true;
#endif // HP_BAR
#endif // ESP

constexpr auto configFileName = "config.ini";

#define NAMEOF(name) #name

bool SaveConfig() {
#define WRITE(variable) outfile << NAMEOF(variable) << "=" << variable << std::endl;
#define WRITE4(variable) WRITE(variable.x) WRITE(variable.y) WRITE(variable.z) WRITE(variable.w);

	std::ofstream outfile(configFileName);
#ifdef AIMBOT
	WRITE4(aimbotFovColor);
	WRITE(aimbotEnabled);
	WRITE(aimbotSmoothingEnabled);
	WRITE(aimbotLockWhenClose);
	WRITE(aimbotSpeed);
	WRITE(aimbotFov);
	WRITE(aimbotFovEnabled);
	WRITE(holdKey);
	WRITE(isHold);
	WRITE(invertHold);
#ifdef AIMBOT_PREDICTION
	WRITE(aimbotPredictionEnabled);
#endif // AIMBOT_PREDICTION

#endif // AIMBOT
#ifdef TRIGGERBOT
	WRITE(triggerbotEnabled);
#endif // TRIGGERBOT


#ifdef NORECOIL
	WRITE(noRecoilEnabled);
	WRITE(noSpreadEnabled);
#endif // NO_RECOIL

#ifdef THIRDPERSON
	WRITE(thirdPersonEnabled);
#endif // THIRDPERSON
#ifdef GLOW
	WRITE(glowEnabled);
#endif // GLOW



#ifdef ESP
	WRITE(boxEnabled);
	WRITE(boxFillEnabled);
	WRITE4(boxColor);
	WRITE4(boxBehindWallColor);
	WRITE4(targetColor);
	WRITE4(boxFillColor);
	WRITE(tracersEnabled);
	WRITE(tracersType);
	WRITE4(tracersNearColor);
	WRITE4(tracersFarColor);

#ifdef HP_NAME
	WRITE(hpnameEnabled);
	WRITE4(hpnameColor);
#endif

#ifdef HP_BAR
	WRITE(hpBarEnabled);
	WRITE4(hpBarHighColor);
	WRITE4(hpBarLowColor);
	WRITE4(hpBarBgColor);
#endif

#ifdef BONES
	WRITE(bonesEnabled);
	WRITE4(boneColor);
#endif
#ifdef NAME_ESP
	WRITE(nameEnabled);
	WRITE4(nameColor);
#endif
#endif

	outfile.close();
	std::cout << "Saved Config.\n" << std::endl;

	return true;
}

bool LoadConfig() {

	std::map<std::string, std::string> values;

	std::ifstream myfile;
	myfile.open(configFileName);
	if(myfile.is_open())
	{
		std::string line;
		long long count = 0;
		while(std::getline(myfile, line))
		{
			line.erase(std::remove_if(line.begin(), line.end(), isspace),
				line.end());
			if(line[0] == '[' || line[0] == ';' || line.empty()) // COMMETS
				continue;
			auto delimiterPos = line.find("=");
			auto name = line.substr(0, delimiterPos);
			auto value = line.substr(delimiterPos + 1);
			values[name] = value;
		}
		myfile.close();

#define READ(variable) if(values.find(NAMEOF(variable)) != values.end()) variable = atof(values[NAMEOF(variable)].c_str());
#define READ4(variable) READ(variable.x) READ(variable.y) READ(variable.z) READ(variable.w);

#ifdef AIMBOT
		READ(aimbotEnabled);
		READ4(aimbotFovColor);
		READ(aimbotSmoothingEnabled);
		READ(aimbotLockWhenClose);
		READ(aimbotSpeed);
		READ(aimbotFov);
		READ(aimbotFovEnabled);
		READ(holdKey);
		READ(isHold);
		READ(invertHold);
#ifdef AIMBOT_PREDICTION
		READ(aimbotPredictionEnabled);
#endif // AIMBOT_PREDICTION
#endif // AIMBOT
#ifdef TRIGGERBOT
		READ(triggerbotEnabled);
#endif // TRIGGERBOT


#ifdef NORECOIL
		READ(noRecoilEnabled);
		READ(noSpreadEnabled);
#endif // NO_RECOIL

#ifdef THIRDPERSON
		READ(thirdPersonEnabled);
#endif // THIRDPERSON
#ifdef GLOW
		READ(glowEnabled);
#endif // GLOW

#ifdef ESP
		READ(boxEnabled);
		READ(boxFillEnabled);
		READ4(boxColor);
		READ4(boxBehindWallColor);
		READ4(targetColor);
		READ4(boxFillColor);
		READ(tracersEnabled);
		READ(tracersType);
		READ4(tracersNearColor);
		READ4(tracersFarColor);

#ifdef HP_NAME
		READ(hpnameEnabled);
		READ4(hpnameColor);
#endif

#ifdef HP_BAR
		READ(hpBarEnabled);
		READ4(hpBarHighColor);
		READ4(hpBarLowColor);
		READ4(hpBarBgColor);
#endif

#ifdef BONES
		READ(bonesEnabled);
		READ4(boneColor);
#endif
#ifdef NAME_ESP
		READ(nameEnabled);
		READ4(nameColor);
#endif
#endif
#ifdef AIMBOT
		holdKeyIndex = -1;
		for(size_t i = 0; i < holdSize; i++)
		{
			if(holdKeysCodes[i] == holdKey) {
				holdKeyIndex = i;
				break;
			}
		}
#endif // AIMBOT

		std::cout << "Loaded Config.\n" << std::endl;
	}
	else {
		std::cout << "Failed to read config.\n" << std::endl;
	}

	return true;
}