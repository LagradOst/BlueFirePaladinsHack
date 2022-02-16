#pragma once

#include <winuser.rh>
#include "ImGui/imgui.h"

ImVec4 hex(int hex, float alpha = 1.0);
ImVec4 operator "" _h(unsigned long long h);
#define AIMBOT
#define AIMBOT_PREDICTION
#define NORECOIL
//#define TRIGGERBOT
#define GLOW
#define THIRDPERSON
#define NAME_ESP
#define ESP
//#define BONES
#define HP_NAME
#define HP_BAR

#ifdef AIMBOT
extern ImVec4 aimbotFovColor;
extern bool aimbotEnabled;
extern float aimbotSpeed;
extern float aimbotFov;
extern bool aimbotFovEnabled;
extern bool aimbotSmoothingEnabled;
extern bool aimbotLockWhenClose;

extern bool isHold;
extern bool invertHold;
extern int holdKey;
extern int holdKeyIndex;

#ifdef AIMBOT_PREDICTION
extern bool aimbotPredictionEnabled;
#endif // AIMBOT_PREDICTION

#endif
#ifdef TRIGGERBOT
extern bool triggerbotEnabled;
#endif

#ifdef NORECOIL
extern bool noRecoilEnabled;
extern bool noSpreadEnabled;
#endif

#ifdef THIRDPERSON
extern bool thirdPersonEnabled;
#endif
#ifdef GLOW 
extern bool glowEnabled;
#endif


#ifdef ESP
extern ImVec4 boxColor;
extern ImVec4 boxBehindWallColor;
extern ImVec4 targetColor;
extern bool boxEnabled;
extern ImVec4 boxFillColor;
extern bool boxFillEnabled;

#ifdef NAME_ESP
extern ImVec4 nameColor;
extern bool nameEnabled;
#endif // NAME_ESP
#ifdef BONES
extern ImVec4 boneColor;
extern bool bonesEnabled;
#endif // BONES
#ifdef HP_NAME
extern ImVec4 hpnameColor;
extern bool hpnameEnabled;
#endif // HP_BAR
#ifdef HP_BAR
extern ImVec4 hpBarBgColor;
extern ImVec4 hpBarLowColor;
extern ImVec4 hpBarHighColor;
extern bool hpBarEnabled;
#endif // HP_BAR
extern ImVec4 tracersNearColor;
extern ImVec4 tracersFarColor;
extern bool tracersEnabled;
extern int tracersType;
#endif // ESP


const int holdSize = 15;
static const char* holdKeys[holdSize]{
   "Left mouse button",
   "Right mouse button",
   "Middle mouse button",
   "TAB key",
   "SHIFT key",
   "CTRL key",
   "ALT key",
   "DEL key",
   "INS key",
   "Numeric keypad 0 key",
   "NUM LOCK key",
   "Left SHIFT key",
   "Right SHIFT key",
   "Left CONTROL key",
   "Right CONTROL key",
};

static const int holdKeysCodes[holdSize]{
   VK_LBUTTON,
   VK_RBUTTON,
   VK_MBUTTON,
   VK_TAB,
   VK_SHIFT,
   VK_CONTROL,
   VK_MENU,
   VK_DELETE,
   VK_INSERT,
   VK_NUMPAD0,
   VK_NUMLOCK,
   VK_LSHIFT,
   VK_RSHIFT,
   VK_LCONTROL,
   VK_RCONTROL,
};

bool SaveConfig();
bool LoadConfig();