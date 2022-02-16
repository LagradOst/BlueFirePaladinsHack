// Created by BlueFire1337
// Updated 2022-01-26
// Generated 2022-01-26

#pragma once

enum class RadialMenuVGSDir : uint8_t {
	RMVGSD_WNW = 0,
	RMVGSD_NNW = 1,
	RMVGSD_NNE = 2,
	RMVGSD_ENE = 3,
	RMVGSD_ESE = 4,
	RMVGSD_SSE = 5,
	RMVGSD_SSW = 6,
	RMVGSD_WSW = 7,
	RMVGSD_MAX = 8,
};

enum class UISETTINGS_CATEGORY : uint8_t {
	UISC_VIDEO = 0,
	UISC_AUDIO = 1,
	UISC_HUD = 2,
	UISC_CONTROLS = 3,
	UISC_GAMEPAD = 4,
	UISC_KEYBINDS = 5,
	UISC_SPECTATOR = 6,
	UISC_MAX = 7,
};

enum class SpecFlightMode : uint8_t {
	SFM_Normal = 0,
	SFM_Heli = 1,
	SFM_HeliNoVert = 2,
	SFM_MAX = 3,
};

enum class EDebugState : uint8_t {
	DEBUGSTATE_None = 0,
	DEBUGSTATE_IsolateDryAudio = 1,
	DEBUGSTATE_IsolateReverb = 2,
	DEBUGSTATE_TestLPF = 3,
	DEBUGSTATE_TestStereoBleed = 4,
	DEBUGSTATE_TestLFEBleed = 5,
	DEBUGSTATE_DisableLPF = 6,
	DEBUGSTATE_DisableRadio = 7,
	DEBUGSTATE_MAX = 8,
};

enum class MissionTimerState : uint8_t {
	MTS_STOPPED = 0,
	MTS_RUNNING = 1,
	MTS_PAUSED = 2,
	MTS_MAX = 3,
};

enum class EAchievementUnlockType : uint8_t {
	AUT_Unknown = 0,
	AUT_All = 1,
	AUT_Persistent = 2,
	AUT_Challenge = 3,
	AUT_MAX = 4,
};

enum class EMissionDifficultyLevel : uint8_t {
	DL_Easy = 0,
	DL_Medium = 1,
	DL_Hard = 2,
	DL_MAX = 3,
};

enum class LobbyMeterBusIntent : uint8_t {
	LMB_RuckusGem = 0,
	LMB_MAX = 1,
};

enum class CorvusDaggerState : uint8_t {
	ECDS_None = 0,
	ECDS_InFlightThrown = 1,
	ECDS_Deployed = 2,
	ECDS_MAX = 3,
};

enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2,
};

enum class LobbyAnimPose : uint8_t {
	LAP_Match = 0,
	LAP_Victory = 1,
	LAP_Defeat = 2,
	LAP_InGame = 3,
	LAP_MAX = 4,
};

enum class SkeletalMeshOptimizationNormalMode : uint8_t {
	SMONM_Recalculate = 0,
	SMONM_RecalculateSoft = 1,
	SMONM_RecalculateHard = 2,
	SMONM_MAX = 3,
};

enum class EDeployOnAbilityType : uint8_t {
	DEPLOYON_STARTFIRE = 0,
	DEPLOYON_FIRE = 1,
	DEPLOYON_STOPFIRE = 2,
	DEPLOYON_MAX = 3,
};

enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2,
};

enum class ELinkMode : uint8_t {
	MODE_Text = 0,
	MODE_Line = 1,
	MODE_Binary = 2,
	MODE_MAX = 3,
};

enum class ETextDrawMethod : uint8_t {
	DRAW_CenterText = 0,
	DRAW_WrapText = 1,
	DRAW_MAX = 2,
};

enum class EParticleSysParamType : uint8_t {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_ValueName = 8,
	PSPT_MAX = 9,
};

enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3,
};

enum class EMoveDir : uint8_t {
	MD_Stationary = 0,
	MD_Forward = 1,
	MD_Backward = 2,
	MD_Left = 3,
	MD_Right = 4,
	MD_Up = 5,
	MD_Down = 6,
	MD_MAX = 7,
};

enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5,
};

enum class DigitizedImaniFace : uint8_t {
	eDIF_Base = 0,
	eDIF_Stare = 1,
	eDIF_Eye = 2,
	eDIF_Smile = 3,
	eDIF_Kiss = 4,
	eDIF_Heart = 5,
	eDIF_Death = 6,
	eDIF_UwU = 7,
	eDIF_MAX = 8,
};

enum class EJungleTargetType : uint8_t {
	AIJungleTarget_Attack = 0,
	AIJungleTarget_Mana = 1,
	AIJungleTarget_Speed = 2,
	AIJungleTarget_BigXP = 3,
	AIJungleTarget_LittleXP = 4,
	AIJungleTarget_GoldFury = 5,
	AIJungleTarget_Nearest = 6,
	AIJungleTarget_MAX = 7,
};

enum class EPartyBeaconHostState : uint8_t {
	PBHS_AllowReservations = 0,
	PBHS_DenyReservations = 1,
	PBHS_MAX = 2,
};

enum class DeployableOverlayIcon : uint8_t {
	DOI_BLANK = 0,
	DOI_TURRET = 1,
	DOI_GRUMPY_BOMB = 2,
	DOI_ILLUSION = 3,
	DOI_ILLUSION_ULT = 4,
	DOI_TIME_BOMB = 5,
	DOI_POPPY_BOMB = 6,
	DOI_MEGA_TURRET = 7,
	DOI_OPPRESSOR_MINE = 8,
	DOI_STICKY_BOMB = 9,
	DOI_FRAG_GRENADE = 10,
	DOI_DYNAMIC = 11,
	DOI_DARK_CONVERGENCE = 12,
	DOI_SEEDLING = 13,
	DOI_DEMON_TELEPORT = 14,
	DOI_HEAL = 15,
	DOI_DEATH_MARKER = 16,
	DOI_FLAGBALL = 17,
	DOI_BROADSIDE = 18,
	DOI_KRAKEN = 19,
	DOI_SHORTCUT = 20,
	DOI_DRUID_FOX = 21,
	DOI_DRUID_FOX_LIT = 22,
	DOI_TERMINUS_ULT = 23,
	DOI_SAATI_DECOY = 24,
	DOI_MAX = 25,
};

enum class ETargetingModeStatus : uint8_t {
	TMS_None = 0,
	TMS_CannotFire = 1,
	TMS_CannotPlace = 2,
	TMS_OK = 3,
	TMS_OutOfRange = 4,
	TMS_MAX = 5,
};

enum class ToastSequence : uint8_t {
	TST_None = 0,
	TST_Idle = 1,
	TST_Attack = 2,
	TST_Sustain = 3,
	TST_Decay = 4,
	TST_Cancel = 5,
	TST_MAX = 6,
};

enum class QuestOrigin : uint8_t {
	QO_NONE = 0,
	QO_FWOTD = 1,
	QO_MASTERY = 2,
	QO_VIPTIER = 3,
	QO_DAILYREWARD = 4,
	QO_DAILYQUEST = 5,
	QO_RANKEDREWARD = 6,
	QO_BRREWARD = 7,
	QO_BATTLEPASSREWARD = 8,
	QO_HNHEVENT = 9,
	QO_CHALLENGEREWARD = 10,
	QO_SUMMEREVENT = 11,
	QO_HALLOWEENEVENT = 12,
	QO_MAX = 13,
};

enum class EOnlineGameSearchEntryType : uint8_t {
	OGSET_Property = 0,
	OGSET_LocalizedSetting = 1,
	OGSET_ObjectProperty = 2,
	OGSET_MAX = 3,
};

enum class ERouteDirection : uint8_t {
	ERD_Forward = 0,
	ERD_Reverse = 1,
	ERD_MAX = 2,
};

enum class EBlendReversal : uint8_t {
	BLENDREVERSAL_Inactive = 0,
	BLENDREVERSAL_Buildup = 1,
	BLENDREVERSAL_Fire = 2,
	BLENDREVERSAL_Miss = 3,
	BLENDREVERSAL_MAX = 4,
};

enum class UIHeaderState : uint8_t {
	UIHS_NONE = 0,
	UIHS_HOME = 1,
	UIHS_PLAY = 2,
	UIHS_SHOP = 3,
	UIHS_CARD = 4,
	UIHS_MAX = 5,
};

enum class EBlendPerspectiveTypes : uint8_t {
	BLEND1P3P_1P = 0,
	BLEND1P3P_3P = 1,
	BLEND1P3P_MAX = 2,
};

enum class ECloudStorageDelegate : uint8_t {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7,
};

enum class UIDataMatchLobbyState : uint8_t {
	UIDMLS_None = 0,
	UIDMLS_Waiting = 1,
	UIDMLS_Banning = 2,
	UIDMLS_Picking = 3,
	UIDMLS_WaitingForLock = 4,
	UIDMLS_LockedIn = 5,
	UIDMLS_LockedInChampList = 6,
	UIDMLS_Trading = 7,
	UIDMLS_MatchStarting = 8,
	UIDMLS_Spectating = 9,
	UIDMLS_MAX = 10,
};

enum class EWheelSide : uint8_t {
	SIDE_None = 0,
	SIDE_Left = 1,
	SIDE_Right = 2,
	SIDE_MAX = 3,
};

enum class ETheLawTargetState : uint8_t {
	ETLTS_WontExecute = 0,
	ETLTS_WillExecute = 1,
	ETLTS_Firing = 2,
	ETLTS_MAX = 3,
};

enum class AzaanUltAnimState : uint8_t {
	AzaanUltAnimState_FlyUp = 0,
	AzaanUltAnimState_Hover = 1,
	AzaanUltAnimState_Fire = 2,
	AzaanUltAnimState_Travel = 3,
	AzaanUltAnimState_Land = 4,
	AzaanUltAnimState_MAX = 5,
};

enum class GJKResult : uint8_t {
	GJK_Intersect = 0,
	GJK_NoIntersection = 1,
	GJK_Fail = 2,
	GJK_MAX = 3,
};

enum class EMobileEnvironmentBlendMode : uint8_t {
	MEBM_Add = 0,
	MEBM_Lerp = 1,
	MEBM_MAX = 2,
};

enum class EPlayerIconState : uint8_t {
	EPIS_Hidden = 0,
	EPIS_Icon = 1,
	EPIS_Respawn = 2,
	EPIS_MAX = 3,
};

enum class ECrowdBehaviorEvent : uint8_t {
	CBE_None = 0,
	CBE_Spawn = 1,
	CBE_Random = 2,
	CBE_SeePlayer = 3,
	CBE_EncounterAgent = 4,
	CBE_TakeDamage = 5,
	CBE_GroupWaiting = 6,
	CBE_Uneasy = 7,
	CBE_Alert = 8,
	CBE_Panic = 9,
	CBE_MAX = 10,
};

enum class EPalCharParams : uint8_t {
	PCP_FireInhand = 0,
	PCP_FireAlt = 1,
	PCP_FireAbility = 2,
	PCP_FireMovement = 3,
	PCP_FireUlt = 4,
	PCP_Reload = 5,
	PCP_Retrieve = 6,
	PCP_Emote = 7,
	PCP_FireSupportingDevice = 8,
	PCP_PutAway = 9,
	PCP_CharacterSpecific1 = 10,
	PCP_CharacterSpecific2 = 11,
	PCP_CharacterSpecific3 = 12,
	PCP_CharacterSpecific4 = 13,
	PCP_CharacterSpecific5 = 14,
	PCP_Intro = 15,
	PCP_Outro = 16,
	PCP_MAX = 17,
};

enum class DisplayGroupOnType : uint8_t {
	DISPLAYGROUP_ON_INACTIVE = 0,
	DISPLAYGROUP_ON_ACTIVE = 1,
	DISPLAYGROUP_ON_STRENGTHABOVE = 2,
	DISPLAYGROUP_ON_STRENGTHBELOW = 3,
	DISPLAYGROUP_ON_MAX = 4,
};

enum class LOOTTYPE : uint8_t {
	LOOT_ITEM = 0,
	LOOT_SKILL = 1,
	LOOT_TALENT = 2,
	LOOT_MAX = 3,
};

enum class SoundAttenuationType : uint8_t {
	TG_ATTENUATION_None = 0,
	TG_ATTENUATION_Sm_foley = 1,
	TG_ATTENUATION_Lg_foley = 2,
	TG_ATTENUATION_Melee_Hit = 3,
	TG_ATTENUATION_Sm_gun = 4,
	TG_ATTENUATION_Med_gun = 5,
	TG_ATTENUATION_Lg_gun = 6,
	TG_ATTENUATION_Sm_exp = 7,
	TG_ATTENUATION_Med_exp = 8,
	TG_ATTENUATION_Lg_exp = 9,
	TG_ATTENUATION_MAX = 10,
};

enum class VanguardGrabAnimUpdate : uint8_t {
	VGAU_Charge = 0,
	VGAU_Miss = 1,
	VGAU_Grab = 2,
	VGAU_Throw = 3,
	VGAU_Interrupt = 4,
	VGAU_MAX = 5,
};

enum class EInputPlatformType : uint8_t {
	IPT_PC = 0,
	IPT_361 = 1,
	IPT_PS3 = 2,
	IPT_MAX = 3,
};

enum class TextureGroup : uint8_t {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_ImageBasedReflection = 26,
	TEXTUREGROUP_Bokeh = 27,
	TEXTUREGROUP_NPC = 28,
	TEXTUREGROUP_NPCNormalMap = 29,
	TEXTUREGROUP_NPCSpecular = 30,
	TEXTUREGROUP_WorldDetail = 31,
	TEXTUREGROUP_TitleScreenPreview = 32,
	TEXTUREGROUP_UIStreamable = 33,
	TEXTUREGROUP_MAX = 34,
};

enum class EEquipScreenAnimTypes : uint8_t {
	ESAT_Default = 0,
	ESAT_Weapon = 1,
	ESAT_Helmet = 2,
	ESAT_Backpack = 3,
	ESAT_Suit = 4,
	ESAT_MAX = 5,
};

enum class EPathSearchType : uint8_t {
	PST_Default = 0,
	PST_Breadth = 1,
	PST_NewBestPathTo = 2,
	PST_Constraint = 3,
	PST_MAX = 4,
};

enum class SimulmediaRewardUpdateType : uint8_t {
	SRUT_Normal = 0,
	SRUT_Completed = 1,
	SRUT_Update = 2,
	SRUT_Presentation = 3,
	SRUT_MAX = 4,
};

enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2,
};

enum class EGiveGoldResult : uint8_t {
	GGR_PlayerNotFound = 0,
	GGR_PlayerNotFriendly = 1,
	GGR_NotEnoughGold = 2,
	GGR_Success = 3,
	GGR_MAX = 4,
};

enum class EGamePhase : uint8_t {
	EGP_None = 0,
	EGP_Standard = 1,
	EGP_ApplyGlobalEffect = 2,
	EGP_AutoBuyOnRespawn = 3,
	EGP_Bombardment = 4,
	EGP_Capture = 5,
	EGP_ChangeRespawnTime = 6,
	EGP_ConquestRoundTracking = 7,
	EGP_CooldownReduction = 8,
	EGP_CrazyKingInitialPoint = 9,
	EGP_CrazyKingRandomPoint = 10,
	EGP_CrazyKingPointAlert = 11,
	EGP_CreditsOnPointTick = 12,
	EGP_DisableAI = 13,
	EGP_DisableAimAssist = 14,
	EGP_DisableAutoHealing = 15,
	EGP_DisableCreditSpooling = 16,
	EGP_DisableEnergyChargeDevices = 17,
	EGP_DisablePassiveUltCharge = 18,
	EGP_DisableLoadoutChanging = 19,
	EGP_EnableAI = 20,
	EGP_EnableAimAssist = 21,
	EGP_EnableCreditSpooling = 22,
	EGP_EnableGlobalMounting = 23,
	EGP_EndGame = 24,
	EGP_EndTicketGame = 25,
	EGP_EndWhenScoreReached = 26,
	EGP_EquipDevice = 27,
	EGP_FlagballActive = 28,
	EGP_Force3P = 29,
	EGP_FreezePlayers = 30,
	EGP_Gather = 31,
	EGP_GlobalItemPurchasing = 32,
	EGP_GlobalLoadoutChanging = 33,
	EGP_KismetNotify = 34,
	EGP_Loop = 35,
	EGP_ManageCapturePoint = 36,
	EGP_NoRespawn = 37,
	EGP_Parallel = 38,
	EGP_PlayMovie = 39,
	EGP_PlayMusic = 40,
	EGP_PlaySound = 41,
	EGP_Push = 42,
	EGP_RandomChild = 43,
	EGP_RandomlySpawnCreditCaches = 44,
	EGP_ResetUltCharge = 45,
	EGP_RespawnAllOnBegin = 46,
	EGP_RespawnDeadOnBegin = 47,
	EGP_RoundEnd = 48,
	EGP_RoundReset = 49,
	EGP_ScoreOnKill = 50,
	EGP_SendMessageToClients = 51,
	EGP_SetHUD = 52,
	EGP_Setup = 53,
	EGP_SetupStasis = 54,
	EGP_SpawnFlagball = 55,
	EGP_TDMMain = 56,
	EGP_Ticket = 57,
	EGP_TicketsOnKill = 58,
	EGP_TicketsOnPointTick = 59,
	EGP_TieBranch = 60,
	EGP_TieBreaker = 61,
	EGP_ToggleAttackingTeam = 62,
	EGP_UltAcceleration = 63,
	EGP_MAX = 64,
};

enum class UIHEADERTABROTATING_DISPLAY_STATE : uint8_t {
	UIHTRDS_ICONONLY = 0,
	UIHTRDS_TEXTONLY = 1,
	UIHTRDS_ICONANDTEXT = 2,
	UIHTRDS_MAX = 3,
};

enum class DeviceEmoteAt : uint8_t {
	DEA_StartBuildup = 0,
	DEA_StartFire = 1,
	DEA_Custom = 2,
	DEA_MAX = 3,
};

enum class EFlagballLeadState : uint8_t {
	EFBLS_TIED = 0,
	EFBLS_TF1 = 1,
	EFBLS_TF2 = 2,
	EFBLS_MAX = 3,
};

enum class EMobileEmissiveColorSource : uint8_t {
	MECS_EmissiveTexture = 0,
	MECS_BaseTexture = 1,
	MECS_Constant = 2,
	MECS_MAX = 3,
};

enum class DjBladesFacePriority : uint8_t {
	eDBFP_Ability = 0,
	eDBFP_VGS = 1,
	eDBFP_Status = 2,
	eDBFP_MAX = 3,
};

enum class EAudioDeviceType : uint8_t {
	ADT_Capture = 0,
	ADT_Render = 1,
	ADT_MAX = 2,
};

enum class EInputEvent : uint8_t {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5,
};

enum class UILoginState : uint8_t {
	UILS_NONE = 0,
	UILS_LOGIN_INPUT_CREDENTIALS = 1,
	UILS_LOGIN_INPUT_ANONYMOUS = 2,
	UILS_WAITING = 3,
	UILS_LOADING = 4,
	UILS_EULA = 5,
	UILS_CREATE_PLAYER_NAME = 6,
	UILS_TUTORIAL_PROMPT = 7,
	UILS_CREATE_NEW_ACCOUNT = 8,
	UILS_LINK_ACCOUNT_PROMPT_GAME = 9,
	UILS_LINK_ACCOUNT_PROMPT_HIREZ = 10,
	UILS_LINK_ACCOUNT_PROMPT_DECLINE_VERIFY = 11,
	UILS_LINK_ACCOUNT_EXISTING = 12,
	UILS_LINK_ACCOUNT_NEW = 13,
	UILS_TWO_FACTOR = 14,
	UILS_TWO_FACTOR_LINK_ACCOUNT_EXISTING = 15,
	UILS_LOGGEDIN = 16,
	UILS_IN_LOGIN_QUEUE = 17,
	UILS_LOGIN_WITH_QR_CODE = 18,
	UILS_LOADING_VENDORS = 19,
	UILS_MAX = 20,
};

enum class ECombatInfoType : uint8_t {
	ECIT_All = 0,
	ECIT_Damage = 1,
	ECIT_Status = 2,
	ECIT_MAX = 3,
};

enum class EReplicatedPawnMods : uint8_t {
	ERPM_RewindTween = 0,
	ERPM_MAX = 1,
};

enum class LobbyEvent : uint8_t {
	LOBBY_EVENT_ENTER_QUEUE = 0,
	LOBBY_EVENT_CHAMPION_LOCKED_IN = 1,
	LOBBY_EVENT_EVERYONE_LOCKED_IN = 2,
	LOBBY_EVENT_REENTER_LOBBY = 3,
	LOBBY_EVENT_MAX = 4,
};

enum class FoliageCullOption : uint8_t {
	FOLIAGECULL_Cull = 0,
	FOLIAGECULL_ScaleZ = 1,
	FOLIAGECULL_ScaleXYZ = 2,
	FOLIAGECULL_TranslateZ = 3,
	FOLIAGECULL_MAX = 4,
};

enum class EPBCornerType : uint8_t {
	EPBC_Default = 0,
	EPBC_Chamfer = 1,
	EPBC_Round = 2,
	EPBC_MAX = 3,
};

enum class AdvancedCollisionMode : uint8_t {
	ACM_None = 0,
	ACM_Shield = 1,
	ACM_Geometry = 2,
	ACM_MAX = 3,
};

enum class GameSessionType : uint8_t {
	GT_SessionInvalid = 0,
	GT_SinglePlayer = 1,
	GT_Coop = 2,
	GT_Multiplayer = 3,
	GT_MAX = 4,
};

enum class UICCurr_DisplayType : uint8_t {
	UICCDT_Price = 0,
	UICCDT_OriginalPrice = 1,
	UICCDT_Quantity = 2,
	UICCDT_MAX = 3,
};

enum class EAssaultType : uint8_t {
	AssaultType_None = 0,
	AssaultType_Short = 1,
	AssaultType_MidShort = 2,
	AssaultType_Mid = 3,
	AssaultType_LongMid = 4,
	AssaultType_Long = 5,
	AssaultType_MAX = 6,
};

enum class GC_ALERT_PRIORITY : uint8_t {
	GC_APT_MINIMAL = 0,
	GC_APT_NORMAL = 1,
	GC_APT_HIGH = 2,
	GC_APT_CRITICAL = 3,
	GC_APT_MAX = 4,
};

enum class EAuthStatus : uint8_t {
	AUS_NotStarted = 0,
	AUS_Pending = 1,
	AUS_Authenticated = 2,
	AUS_Failed = 3,
	AUS_MAX = 4,
};

enum class EReceiveMode : uint8_t {
	RMODE_Manual = 0,
	RMODE_Event = 1,
	RMODE_MAX = 2,
};

enum class ESettingsValidationError : uint8_t {
	ESVE_None = 0,
	ESVE_NoGamepad = 1,
	ESVE_NoMouse = 2,
	ESVE_NoKeyboard = 3,
	ESVE_NotAllowed = 4,
	ESVE_NoChangeNow = 5,
	ESVE_CrossValidationFailed = 6,
	ESVE_MAX = 7,
};

enum class EPlatformInterfaceDataType : uint8_t {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6,
};

enum class ESplitScreenType : uint8_t {
	eSST_NONE = 0,
	eSST_2P_HORIZONTAL = 1,
	eSST_2P_VERTICAL = 2,
	eSST_3P_FAVOR_TOP = 3,
	eSST_3P_FAVOR_BOTTOM = 4,
	eSST_4P = 5,
	eSST_MAX = 6,
};

enum class HelpPromptType : uint8_t {
	HPT_None = 0,
	HPT_Cards = 1,
	HPT_Mount = 2,
	HPT_MAX = 3,
};

enum class EAutomatedRunResult : uint8_t {
	ARR_Unknown = 0,
	ARR_OOM = 1,
	ARR_Passed = 2,
	ARR_MAX = 3,
};

enum class EHealthTickType : uint8_t {
	EHTT_Health = 0,
	EHTT_Armor = 1,
	EHTT_Shield = 2,
	EHTT_Shadow = 3,
	EHTT_Damage = 4,
	EHTT_MAX = 5,
};

enum class EProfileDifficultyOptions : uint8_t {
	PDO_Normal = 0,
	PDO_Easy = 1,
	PDO_Hard = 2,
	PDO_MAX = 3,
};

enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2,
};

enum class TG_DEATH_REASON : uint8_t {
	DR_NORMAL = 0,
	DR_DESPAWN = 1,
	DR_MAX_DEPLOY_LIMIT = 2,
	DR_RECONNECT = 3,
	DR_FREEZE_GIB = 4,
	DR_LEX_EXECUTE = 5,
	DR_RIDER = 6,
	DR_YAGORATH = 7,
	DR_MAX = 8,
};

enum class EPlayerInputType : uint8_t {
	PIT_MoveForward = 0,
	PIT_MoveBackward = 1,
	PIT_MoveRight = 2,
	PIT_MoveLeft = 3,
	PIT_LookLeft = 4,
	PIT_LookRight = 5,
	PIT_LookUp = 6,
	PIT_LookDown = 7,
	PIT_Auto = 8,
	PIT_Alt = 9,
	PIT_BattleAbility = 10,
	PIT_MovementAbility = 11,
	PIT_Ultimate = 12,
	PIT_Reload = 13,
	PIT_Jump = 14,
	PIT_Mount = 15,
	PIT_LoadoutMenu = 16,
	PIT_BurnCardMenu = 17,
	PIT_Emote = 18,
	PIT_Spray = 19,
	PIT_MAX = 20,
};

enum class EDuringAbilityType : uint8_t {
	DURINGABILITY_PREFIRE = 0,
	DURINGABILITY_FIRE = 1,
	DURINGABILITY_POSTFIRE = 2,
	DURINGABILITY_MAX = 3,
};

enum class EAsyncLoadPriority : uint8_t {
	ALP_None = 0,
	ALP_Lowest = 1,
	ALP_Low = 2,
	ALP_Default = 3,
	ALP_High = 4,
	ALP_Highest = 5,
	ALP_Immediate = 6,
	ALP_InProgress = 7,
	ALP_MAX = 8,
};

enum class UIALIGNINGTYPE : uint8_t {
	UIALIGNING_NONE = 0,
	UIALIGNING_LEFT = 1,
	UIALIGNING_RIGHT = 2,
	UIALIGNING_CENTER = 3,
	UIALIGNING_MAX = 4,
};

enum class EHealthTickColor_Overlay : uint8_t {
	EHTCO_Invalid = 0,
	EHTCO_Blue = 1,
	EHTCO_Red = 2,
	EHTCO_Purple = 3,
	EHTCO_Orange = 4,
	EHTCO_Yellow = 5,
	EHTCO_White = 6,
	EHTCO_Green = 7,
	EHTCO_DarkYellow = 8,
	EHTCO_DarkGreen = 9,
	EHTCO_DarkBlue = 10,
	EHTCO_DarkRed = 11,
	EHTCO_DarkOrange = 12,
	EHTCO_CauterizedLight = 13,
	EHTCO_CauterizedDark = 14,
	EHTCO_MAX = 15,
};

enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3,
};

enum class ESleepFamily : uint8_t {
	SF_Normal = 0,
	SF_Sensitive = 1,
	SF_MAX = 2,
};

enum class EBehaviorComparison : uint8_t {
	BEHAVIORCOMPARE_Equal = 0,
	BEHAVIORCOMPARE_NotEqual = 1,
	BEHAVIORCOMPARE_LessThan = 2,
	BEHAVIORCOMPARE_LessThanOrEqual = 3,
	BEHAVIORCOMPARE_GreaterThan = 4,
	BEHAVIORCOMPARE_GreaterThanOrEqual = 5,
	BEHAVIORCOMPARE_MAX = 6,
};

enum class FXOverlay : uint8_t {
	FXO_NONE = 0,
	FXO_MENU = 1,
	FXO_CHESTOPENING = 2,
	FXO_CHESTREVEAL = 3,
	FXO_UNLOCKEDCHAMP = 4,
	FXO_MATCHLOBBY = 5,
	FXO_MATCHSETUP = 6,
	FXO_GAMEPLAY = 7,
	FXO_MATCHOVERTIME = 8,
	FXO_MATCHVICTORY = 9,
	FXO_MATCHDEFEAT = 10,
	FXO_POINTVICTORY = 11,
	FXO_POINTDEFEAT = 12,
	FXO_ULT = 13,
	FXO_MAX = 14,
};

enum class MenuImageDrawStyle : uint8_t {
	IDS_Normal = 0,
	IDS_Stretched = 1,
	IDS_Tile = 2,
	IDS_MAX = 3,
};

enum class EZoneType : uint8_t {
	ZoneType_Button = 0,
	ZoneType_Joystick = 1,
	ZoneType_Trackball = 2,
	ZoneType_Slider = 3,
	ZoneType_SubClassed = 4,
	ZoneType_MAX = 5,
};

enum class EBlendHyperShot : uint8_t {
	BLENDHYPERSHOT_Inactive = 0,
	BLENDHYPERSHOT_Buildup = 1,
	BLENDHYPERSHOT_Idle = 2,
	BLENDHYPERSHOT_Activate = 3,
	BLENDHYPERSHOT_FireBuildup = 4,
	BLENDHYPERSHOT_Fire = 5,
	BLENDHYPERSHOT_TransitionToIdle = 6,
	BLENDHYPERSHOT_Cancel = 7,
	BLENDHYPERSHOT_MAX = 8,
};

enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum class SoulChargesAnimEvent : uint8_t {
	SoulChargesAE_Show = 0,
	SoulChargesAE_Hide = 1,
	SoulChargesAE_Increase = 2,
	SoulChargesAE_Decrease = 3,
	SoulChargesAE_MaxStacks = 4,
	SoulChargesAE_MAX = 5,
};

enum class EMobileSpecularMask : uint8_t {
	MSM_Constant = 0,
	MSM_Luminance = 1,
	MSM_DiffuseRed = 2,
	MSM_DiffuseGreen = 3,
	MSM_DiffuseBlue = 4,
	MSM_DiffuseAlpha = 5,
	MSM_MaskTextureRGB = 6,
	MSM_MaskTextureRed = 7,
	MSM_MaskTextureGreen = 8,
	MSM_MaskTextureBlue = 9,
	MSM_MaskTextureAlpha = 10,
	MSM_MAX = 11,
};

enum class EFireLinkID : uint8_t {
	FLI_FireLink = 0,
	FLI_RejectedFireLink = 1,
	FLI_MAX = 2,
};

enum class EDOFQuality : uint8_t {
	DOFQuality_Low = 0,
	DOFQuality_Medium = 1,
	DOFQuality_High = 2,
	DOFQuality_MAX = 3,
};

enum class ENetMode : uint8_t {
	NM_Standalone = 0,
	NM_DedicatedServer = 1,
	NM_ListenServer = 2,
	NM_Client = 3,
	NM_MAX = 4,
};

enum class ETextureColorChannel : uint8_t {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4,
};

enum class GFXFUNCTIONS : uint8_t {
	GFXFUNC_NONE = 0,
	GFXFUNC_PURCHASE = 1,
	GFXFUNC_PREVIEW = 2,
	GFXFUNC_RESET = 3,
	GFXFUNC_DETAILS = 4,
	GFXFUNC_JOIN = 5,
	GFXFUNC_BACK = 6,
	GFXFUNC_EXIT = 7,
	GFXFUNC_MINIMIZE = 8,
	GFXFUNC_PLAY = 9,
	GFXFUNC_STORE = 10,
	GFXFUNC_LEFT = 11,
	GFXFUNC_RIGHT = 12,
	GFXFUNC_SELECT = 13,
	GFXFUNC_CARD = 14,
	GFXFUNC_ACCEPT = 15,
	GFXFUNC_SUBMIT = 16,
	GFXFUNC_CANCEL = 17,
	GFXFUNC_FRIENDS = 18,
	GFXFUNC_REMOVE = 19,
	GFXFUNC_SCROLL = 20,
	GFXFUNC_OPTION = 21,
	GFXFUNC_KEY = 22,
	GFXFUNC_NEXT = 23,
	GFXFUNC_ITEM = 24,
	GFXFUNC_SEARCH = 25,
	GFXFUNC_UPGRADE = 26,
	GFXFUNC_CHANGE = 27,
	GFXFUNC_CREATE = 28,
	GFXFUNC_CREATEGAME = 29,
	GFXFUNC_INPUT = 30,
	GFXFUNC_ROTATE = 31,
	GFXFUNC_MAP = 32,
	GFXFUNC_TEAM = 33,
	GFXFUNC_CHANGETEAM = 34,
	GFXFUNC_REGION = 35,
	GFXFUNC_SPECTATE = 36,
	GFXFUNC_DRAFT = 37,
	GFXFUNC_TOGGLEMUTE = 38,
	GFXFUNC_EQUIP = 39,
	GFXFUNC_INTERACTABLE = 40,
	GFXFUNC_INTERACTABLE_SCROLL = 41,
	GFXFUNC_TALENT = 42,
	GFXFUNC_PASSIVE = 43,
	GFXFUNC_SLIDER = 44,
	GFXFUNC_TAB = 45,
	GFXFUNC_EQUIPALL = 46,
	GFXFUNC_ALLOW3P = 47,
	GFXFUNC_CLOSE = 48,
	GFXFUNC_MAX = 49,
};

enum class EDeployableOverlayType : uint8_t {
	EDOT_Targetable = 0,
	EDOT_Player = 1,
	EDOT_Deployable = 2,
	EDOT_MAX = 3,
};

enum class TG_REP_DEVICE_STATE : uint8_t {
	RDS_INACTIVE = 0,
	RDS_FIRING = 1,
	RDS_GENERIC1 = 2,
	RDS_GENERIC2 = 3,
	RDS_MAX = 4,
};

enum class EInterpMoveAxis : uint8_t {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6,
};

enum class EDecalTransform : uint8_t {
	DecalTransform_OwnerAbsolute = 0,
	DecalTransform_OwnerRelative = 1,
	DecalTransform_SpawnRelative = 2,
	DecalTransform_MAX = 3,
};

enum class EBeamTaperMethod : uint8_t {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3,
};

enum class EBotBehaviorState : uint8_t {
	BEHAVIORSTATE_IDLE = 0,
	BEHAVIORSTATE_ENGAGING = 1,
	BEHAVIORSTATE_FALLBACK = 2,
	BEHAVIORSTATE_MAX = 3,
};

enum class EBlendSimpleAbility : uint8_t {
	BLENDSA_Inactive = 0,
	BLENDSA_Firing = 1,
	BLENDSA_MAX = 2,
};

enum class AdTextureSize : uint8_t {
	ATS_DEFAULT = 0,
	ATS_SMALL = 1,
	ATS_MAX = 2,
};

enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_PawnMeshSocket = 5,
	PEB2STM_MAX = 6,
};

enum class EMountState : uint8_t {
	MS_None = 0,
	MS_Summon = 1,
	MS_Mounted = 2,
	MS_MAX = 3,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3,
};

enum class EMcpGroupAcceptState : uint8_t {
	MGAS_Error = 0,
	MGAS_Pending = 1,
	MGAS_Accepted = 2,
	MGAS_MAX = 3,
};

enum class PawnDamageMitigatorReason : uint8_t {
	PDMR_None = 0,
	PDMR_BunnyLink = 1,
	PDMR_MAX = 2,
};

enum class eTutorialHighlighterElement : uint8_t {
	THE_Ability1 = 0,
	THE_ActiveItem = 1,
	THE_ConsumableItem = 2,
	THE_Gold = 3,
	THE_ItemShop_Gold = 4,
	THE_ItemShop_Item = 5,
	THE_ItemShop_Item2 = 6,
	THE_ItemShop_Item3 = 7,
	THE_ItemShop_Purchase = 8,
	THE_ItemShop_AllItems = 9,
	THE_ItemShop_RemoveOverlay = 10,
	THE_ItemShop_AddBlocker = 11,
	THE_Stats_Display = 12,
	THE_MAX = 13,
};

enum class HUDMENU_OPTIONS : uint8_t {
	UIHM_RETURNTOGAME = 0,
	UIHM_PAUSE = 1,
	UIHM_SWAPLOADOUT = 2,
	UIHM_EDITLOADOUT = 3,
	UIHM_SETTINGS = 4,
	UIHM_SCOREBOARD = 5,
	UIHM_CHANGECHAMPION = 6,
	UIHM_SKILLS = 7,
	UIHM_DEATHRECAP = 8,
	UIHM_RETURNTOLOBBY = 9,
	UIHM_FACEBOOKLIVE = 10,
	UIHM_QUITGAME = 11,
	UIHM_MAX = 12,
};

enum class EAbilityInfoSlot : uint8_t {
	SLOT_Ability1 = 0,
	SLOT_Ability2 = 1,
	SLOT_Ability3 = 2,
	SLOT_Perk1 = 3,
	SLOT_Perk2 = 4,
	SLOT_Perk3 = 5,
	SLOT_Perk4 = 6,
	SLOT_Perk5 = 7,
	SLOT_Perk6 = 8,
	SLOT_Perk7 = 9,
	SLOT_Perk8 = 10,
	SLOT_Perk9 = 11,
	SLOT_Perk10 = 12,
	SLOT_Perk11 = 13,
	SLOT_Perk12 = 14,
	SLOT_Perk13 = 15,
	SLOT_Perk14 = 16,
	SLOT_MAX = 17,
};

enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4,
};

enum class ParticleAttractorActionType : uint8_t {
	PAAT_None = 0,
	PAAT_Destroy = 1,
	PAAT_Freeze = 2,
	PAAT_Event = 3,
	PAAT_MAX = 4,
};

enum class TG_GAME_TYPE : uint8_t {
	TGT_UNSET = 0,
	TGT_CITY = 1,
	TGT_ARENA = 2,
	TGT_ARENA_PRACTICE = 3,
	TGT_ARENA_CAPTURE = 4,
	TGT_ARENA_ESCORT = 5,
	TGT_ARENA_ESCORT_PRACTICE = 6,
	TGT_BATTLE = 7,
	TGT_BATTLE_EXPERT = 8,
	TGT_BATTLE_PRACTICE = 9,
	TGT_BATTLE_JOUST = 10,
	TGT_BATTLE_CASUAL = 11,
	TGT_BATTLE_TRAINING = 12,
	TGT_BATTLE_ARAM = 13,
	TGT_BATTLE_ARAM_PRACTICE = 14,
	TGT_POINTCAPTURE = 15,
	TGT_DOMINATION = 16,
	TGT_SINGLEPOINTCAPTUREANDHOLD = 17,
	TGT_IDOL = 18,
	TGT_SIEGE = 19,
	TGT_BATTLE_TC = 20,
	TGT_BATTLE_SHOOTINGRANGE = 21,
	TGT_CHAOS = 22,
	TGT_CHAOS_PRACTICE = 23,
	TGT_CHAOSRACE = 24,
	TGT_CHAOS_PUSH = 25,
	TGT_CHAOS_PAYLOAD = 26,
	TGT_CHAOS_PAYLOAD_PRACTICE = 27,
	TGT_CHAOS_CAPTUREANDPAYLOAD = 28,
	TGT_CHAOS_CAPTUREANDPAYLOAD_PRACTICE = 29,
	TGT_CHAOS_CAPTUREPOINT = 30,
	TGT_CHAOS_CAPTUREPOINT_PRACTICE = 31,
	TGT_CHAOS_SURVIVAL = 32,
	TGT_CHAOS_SURVIVAL_PRACTICE = 33,
	TGT_CHAOS_SHOOTINGRANGE = 34,
	TGT_CHAOS_TUTORIAL = 35,
	TGT_CHAOS_PVE = 36,
	TGT_CHAOS_PVE_SURVIVAL = 37,
	TGT_CHAOS_TEAM_DEATH_MATCH = 38,
	TGT_CHAOS_ONSLAUGHT = 39,
	TGT_CHAOS_ONSLAUGHT_PRACTICE = 40,
	TGT_CHAOS_ROYALE = 41,
	TGT_CHAOS_ASCENDED_ASSAULT = 42,
	TGT_CHAOS_FLAGBALL = 43,
	TGT_CHAOS_EVENT = 44,
	TGT_CHAOS_END_TIMES = 45,
	TGT_CHAOS_CRAZY_KING = 46,
	TGT_MAX = 47,
};

enum class eSelectionMethod : uint8_t {
	TGSM_RANDOM = 0,
	TGSM_SEQUENTIAL = 1,
	TGSM_MAX = 2,
};

enum class QuestType : uint8_t {
	EQT_Daily = 0,
	EQT_Collection = 1,
	EQT_Special = 2,
	EQT_Training = 3,
	EQT_ItemQuest = 4,
	EQT_Unique = 5,
	EQT_Twitch = 6,
	EQT_HnHEvent = 7,
	EQT_MAX = 8,
};

enum class STEALTH_TYPE : uint8_t {
	STEALTH_TYPE_NONE = 0,
	STEALTH_TYPE_PULSED = 1,
	STEALTH_TYPE_FADING = 2,
	STEALTH_TYPE_INSTANT = 3,
	STEALTH_TYPE_NO_REVEAL = 4,
	STEALTH_TYPE_MAX = 5,
};

enum class EBlendDirTypes : uint8_t {
	FBDir_Forward = 0,
	FBDir_Back = 1,
	FBDir_Left = 2,
	FBDir_Right = 3,
	FBDir_ForwardRight = 4,
	FBDir_ForwardLeft = 5,
	FBDir_BackRight = 6,
	FBDir_BackLeft = 7,
	FBDir_Standing = 8,
	FBDir_None = 9,
	FBDir_MAX = 10,
};

enum class UIBACKGROUNDTYPE : uint8_t {
	UIBT_NONE = 0,
	UIBT_MAIN = 1,
	UIBT_CHAMPION = 2,
	UIBT_DECKS = 3,
	UIBT_SOCIAL = 4,
	UIBT_PROFILE = 5,
	UIBT_LINE = 6,
	UIBT_PLAIN = 7,
	UIBT_MAX = 8,
};

enum class EMcpFileCompressionType : uint8_t {
	MFCT_NONE = 0,
	MFCT_ZLIB = 1,
	MFCT_MAX = 2,
};

enum class EHUDOverlay : uint8_t {
	HO_None = 0,
	HO_Sniper = 1,
	HO_Binoculars = 2,
	HO_AtlasUlt = 3,
	HO_OwlScope = 4,
	HO_RiderUltVictim = 5,
	HO_SevenUlt = 6,
	HO_MAX = 7,
};

enum class EFriendTabs : uint8_t {
	FRT_CURRENT_FRIENDS = 0,
	FRT_REQUESTS = 1,
	FRT_RECENT = 2,
	FRT_CLAN = 3,
	FRT_BLOCKED = 4,
	FRT_MAX = 5,
};

enum class ERouteFillAction : uint8_t {
	RFA_Overwrite = 0,
	RFA_Add = 1,
	RFA_Remove = 2,
	RFA_Clear = 3,
	RFA_MAX = 4,
};

enum class WebPageType : uint8_t {
	WPT_Gold = 0,
	WPT_CreateAccount = 1,
	WPT_RecoverPassword = 2,
	WPT_RecoverUsername = 3,
	WPT_GodPack = 4,
	WPT_FacebookPromo = 5,
	WPT_TwitterPromo = 6,
	WPT_RecruitPromo = 7,
	WPT_ReferLinkup = 8,
	WPT_MAX = 9,
};

enum class EOnlineFriendState : uint8_t {
	OFS_Offline = 0,
	OFS_Online = 1,
	OFS_Away = 2,
	OFS_Busy = 3,
	OFS_MAX = 4,
};

enum class EObstacleAvoidanceStatus : uint8_t {
	OAS_NoPath = 0,
	OAS_Pathing = 1,
	OAS_PathFinished = 2,
	OAS_MAX = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2,
};

enum class EDamageLocationType : uint8_t {
	DamageLocationType_None = 0,
	DamageLocationType_Torso = 1,
	DamageLocationType_LLeg = 2,
	DamageLocationType_RLeg = 3,
	DamageLocationType_LArm = 4,
	DamageLocationType_RArm = 5,
	DamageLocationType_Head = 6,
	DamageLocationType_MAX = 7,
};

enum class EBlendDragonSlam : uint8_t {
	BLENDDRAGON_ReadyFlightFromGound = 0,
	BLENDDRAGON_ReadyFlightFromAir = 1,
	BLENDDRAGON_Flying = 2,
	BLENDDRAGON_Punch = 3,
	BLENDDRAGON_EndFlight = 4,
	BLENDDRAGON_MAX = 5,
};

enum class EObjectiveStatus : uint8_t {
	Status_Inactive = 0,
	Status_Active = 1,
	Status_PendingActive = 2,
	Status_MAX = 3,
};

enum class EPhysics : uint8_t {
	PHYS_None = 0,
	PHYS_Walking = 1,
	PHYS_Falling = 2,
	PHYS_Swimming = 3,
	PHYS_Flying = 4,
	PHYS_Rotating = 5,
	PHYS_Projectile = 6,
	PHYS_Interpolating = 7,
	PHYS_Spider = 8,
	PHYS_Ladder = 9,
	PHYS_RigidBody = 10,
	PHYS_SoftBody = 11,
	PHYS_NavMeshWalking = 12,
	PHYS_Suspended = 13,
	PHYS_Custom = 14,
	PHYS_Tweening = 15,
	PHYS_Charging = 16,
	PHYS_Blinking = 17,
	PHYS_MAX = 18,
};

enum class CameraPerspectiveType : uint8_t {
	CamPT_FirstPerson = 0,
	CamPT_ThirdPerson = 1,
	CamPT_ThirdPersonAbility = 2,
	CamPT_ThirdPersonMounted = 3,
	CamPT_ThirdPersonFreeRotate = 4,
	CamPT_MAX = 5,
};

enum class ERespawnBeaconActiveState : uint8_t {
	RBAS_Inactive = 0,
	RBAS_Carried = 1,
	RBAS_Deploying = 2,
	RBAS_Active = 3,
	RBAS_MAX = 4,
};

enum class UICMLCState : uint8_t {
	UICMLC_Hidden = 0,
	UICMLC_Available = 1,
	UICMLC_Locked = 2,
	UICMLC_HighlightedAvailable = 3,
	UICMLC_HighlightedLocked = 4,
	UICMLC_Disabled = 5,
	UICMLC_MAX = 6,
};

enum class EStunType : uint8_t {
	STUN_TYPE_NONE = 0,
	STUN_TYPE_PREMATCH = 1,
	STUN_TYPE_NOPOSTURE = 2,
	STUN_TYPE_MOUNT = 3,
	STUN_TYPE_STASIS = 4,
	STUN_TYPE_DISORIENT = 5,
	STUN_TYPE_NORMAL = 6,
	STUN_TYPE_TAUNT = 7,
	STUN_TYPE_MESMERIZED = 8,
	STUN_TYPE_FEARED = 9,
	STUN_TYPE_PANICKED = 10,
	STUN_TYPE_MAX = 11,
};

enum class MinimapDisplayType : uint8_t {
	MDT_Friendly = 0,
	MDT_Enemy = 1,
	MDT_FriendlyCB = 2,
	MDT_EnemyCB = 3,
	MDT_Neutral = 4,
	MDT_Pending = 5,
	MDT_MAX = 6,
};

enum class EProfileRaceAcceleratorControlOptions : uint8_t {
	PRACO_Trigger = 0,
	PRACO_Button = 1,
	PRACO_MAX = 2,
};

enum class DiminishingReturnsProfile : uint8_t {
	DRP_Type1 = 0,
	DRP_Type2 = 1,
	DRP_MAX = 2,
};

enum class EParticleAxisLock : uint8_t {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10,
};

enum class SoftBodyBoneType : uint8_t {
	SOFTBODYBONE_Fixed = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment = 2,
	SOFTBODYBONE_MAX = 3,
};

enum class EUITargeters : uint8_t {
	TARGETER_KINESSA = 0,
	TARGETER_TYRA = 1,
	TARGETER_TORVALD_PROTECTION = 2,
	TARGETER_ORACLE = 3,
	TARGETER_ASTRO = 4,
	TARGETER_YING_TELEPORT = 5,
	TARGETER_TORVALD_NULLIFY = 6,
	TARGETER_RIDER = 7,
	TARGETER_VANGUARD_GRAB = 8,
	TARGETER_VANGUARD_ULT = 9,
	TARGETER_DRUID_LOCKON = 10,
	TARGETER_DRUID_FOXAGGRO = 11,
	TARGETER_CORVUS_MARK = 12,
	TARGETER_REI_LINK = 13,
	TARGETER_REI_LINKED = 14,
	TARGETER_YAGORATH_ULT = 15,
	TARGETER_SHADOW_TELEPORT = 16,
	TARGETER_SEVEN_ULT = 17,
	TARGETER_MAX = 18,
};

enum class EProfileAutoAimOptions : uint8_t {
	PAAO_Off = 0,
	PAAO_On = 1,
	PAAO_MAX = 2,
};

enum class UI_ITEM_HINT_TYPE : uint8_t {
	UIIHT_NONE = 0,
	UIIHT_NEW = 1,
	UIIHT_HOT = 2,
	UIIHT_SALE = 3,
	UIIHT_MAX = 4,
};

enum class ETravelType : uint8_t {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3,
};

enum class EConformType : uint8_t {
	CFM_NavMesh = 0,
	CFM_BSP = 1,
	CFM_World = 2,
	CFM_None = 3,
	CFM_MAX = 4,
};

enum class TUTORIAL_EVENT : uint8_t {
	TUTEVT_OPENED_ITEM_SHOP = 0,
	TUTEVT_BOUGHT_ITEM = 1,
	TUTEVT_CLOSED_ITEM_SHOP = 2,
	TUTEVT_OPENED_SKILLS = 3,
	TUTEVT_BOUGHT_SKILL = 4,
	TUTEVT_CLOSED_SKILLS = 5,
	TUTEVT_USED_ABILITY = 6,
	TUTEVT_USED_RECALL = 7,
	TUTEVT_TARGETED = 8,
	TUTEVT_OPENED_INTRO = 9,
	TUTEVT_CLOSED_INTRO = 10,
	TUTEVT_USED_ACTIVE_ITEM = 11,
	TUTEVT_SELECTED_SHOP_ITEM = 12,
	TUTEVT_SELECTED_SHOP_ITEM2 = 13,
	TUTEVT_SELECTED_SHOP_ITEM3 = 14,
	TUTEVT_USED_CONSUMABLE_ITEM = 15,
	TUTEVT_SELECTED_ALL_ITEMS = 16,
	TUTEVT_MAX = 17,
};

enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

enum class ECameraViewportTypes : uint8_t {
	CVT_16to9_Full = 0,
	CVT_16to9_VertSplit = 1,
	CVT_16to9_HorizSplit = 2,
	CVT_4to3_Full = 3,
	CVT_4to3_HorizSplit = 4,
	CVT_4to3_VertSplit = 5,
	CVT_MAX = 6,
};

enum class EProfileControllerSensitivityOptions : uint8_t {
	PCSO_Medium = 0,
	PCSO_Low = 1,
	PCSO_High = 2,
	PCSO_MAX = 3,
};

enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4,
};

enum class EZoneSlideType : uint8_t {
	ZoneSlide_UpDown = 0,
	ZoneSlide_LeftRight = 1,
	ZoneSlide_MAX = 2,
};

enum class ETouchType : uint8_t {
	Touch_Began = 0,
	Touch_Moved = 1,
	Touch_Stationary = 2,
	Touch_Ended = 3,
	Touch_Cancelled = 4,
	Touch_MAX = 5,
};

enum class EBeamEndPointMethod : uint8_t {
	PEBEPM_Calculated = 0,
	PEBEPM_Distribution = 1,
	PEBEPM_Distribution_Constant = 2,
	PEBEPM_MAX = 3,
};

enum class VanguardUltAnimUpdate : uint8_t {
	VUAU_Start = 0,
	VUAU_Miss = 1,
	VUAU_Pull = 2,
	VUAU_Hold = 3,
	VUAU_Throw = 4,
	VUAU_MAX = 5,
};

enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5,
};

enum class ETowerType : uint8_t {
	TowerType_Default = 0,
	TowerType_Inner = 1,
	TowerType_Outer = 2,
	TowerType_Upper = 3,
	TowerType_MAX = 4,
};

enum class EPathFindingError : uint8_t {
	PATHERROR_STARTPOLYNOTFOUND = 0,
	PATHERROR_GOALPOLYNOTFOUND = 1,
	PATHERROR_ANCHORPYLONNOTFOUND = 2,
	PATHERROR_NOPATHFOUND = 3,
	PATHERROR_COMPUTEVALIDFINALDEST_FAIL = 4,
	PATHERROR_GETNEXTMOVELOCATION_FAIL = 5,
	PATHERROR_MOVETIMEOUT = 6,
	PATHERROR_MAX = 7,
};

enum class EInputMatchAction : uint8_t {
	IMA_GreaterThan = 0,
	IMA_LessThan = 1,
	IMA_MAX = 2,
};

enum class EPlayerCardinalDirection : uint8_t {
	PCD_Forward = 0,
	PCD_Backward = 1,
	PCD_Left = 2,
	PCD_Right = 3,
	PCD_MAX = 4,
};

enum class eTG_SOUNDS : uint8_t {
	TGS_FOOTSTEP = 0,
	TGS_DODGE = 1,
	TGS_JUMP = 2,
	TGS_LAND = 3,
	TGS_DOUBLEJUMP = 4,
	TGS_DOUBLELAND = 5,
	TGS_DYING = 6,
	TGS_HIT = 7,
	TGS_MAX = 8,
};

enum class EProfileSettingID : uint8_t {
	PSI_Unknown = 0,
	PSI_ControllerVibration = 1,
	PSI_YInversion = 2,
	PSI_GamerCred = 3,
	PSI_GamerRep = 4,
	PSI_VoiceMuted = 5,
	PSI_VoiceThruSpeakers = 6,
	PSI_VoiceVolume = 7,
	PSI_GamerPictureKey = 8,
	PSI_GamerMotto = 9,
	PSI_GamerTitlesPlayed = 10,
	PSI_GamerAchievementsEarned = 11,
	PSI_GameDifficulty = 12,
	PSI_ControllerSensitivity = 13,
	PSI_PreferredColor1 = 14,
	PSI_PreferredColor2 = 15,
	PSI_AutoAim = 16,
	PSI_AutoCenter = 17,
	PSI_MovementControl = 18,
	PSI_RaceTransmission = 19,
	PSI_RaceCameraLocation = 20,
	PSI_RaceBrakeControl = 21,
	PSI_RaceAcceleratorControl = 22,
	PSI_GameCredEarned = 23,
	PSI_GameAchievementsEarned = 24,
	PSI_EndLiveIds = 25,
	PSI_ProfileVersionNum = 26,
	PSI_ProfileSaveCount = 27,
	PSI_MAX = 28,
};

enum class EProcBuildingAxis : uint8_t {
	EPBAxis_X = 0,
	EPBAxis_Z = 1,
	EPBAxis_MAX = 2,
};

enum class ELeaderboardRequestType : uint8_t {
	LRT_Global = 0,
	LRT_Player = 1,
	LRT_Friends = 2,
	LRT_MAX = 3,
};

enum class eTutorialForceableElements : uint8_t {
	ETBUI_Skills = 0,
	ETBUI_ItemShop = 1,
	ETBUI_ItemShopButton = 2,
	ETBUI_Intro = 3,
	ETBUI_ItemShopWalkthrough = 4,
	ETBUI_ActiveItems = 5,
	ETBUI_ConsumableItems = 6,
	ETBUI_Escape = 7,
	ETBUI_MAX = 8,
};

enum class EPartyBeaconClientRequest : uint8_t {
	PBClientRequest_NewReservation = 0,
	PBClientRequest_UpdateReservation = 1,
	PBClientRequest_MAX = 2,
};

enum class ESpeedType : uint8_t {
	EST_Velocity = 0,
	EST_AccelAndMaxSpeed = 1,
	EST_MAX = 2,
};

enum class ELandscapeLayerBlendType : uint8_t {
	LB_AlphaBlend = 0,
	LB_HeightBlend = 1,
	LB_MAX = 2,
};

enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3,
};

enum class ERigidBodyFixationChange : uint8_t {
	RBF_Fix = 0,
	RBF_Unfix = 1,
	RBF_Toggle = 2,
	RBF_MAX = 3,
};

enum class ECoverAction : uint8_t {
	CA_Default = 0,
	CA_BlindLeft = 1,
	CA_BlindRight = 2,
	CA_LeanLeft = 3,
	CA_LeanRight = 4,
	CA_PopUp = 5,
	CA_BlindUp = 6,
	CA_PeekLeft = 7,
	CA_PeekRight = 8,
	CA_PeekUp = 9,
	CA_MAX = 10,
};

enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
};

enum class ELocationType : uint8_t {
	ELocationType_CapturePoint = 0,
	ELocationType_Attack = 1,
	ELocationType_Defend = 2,
	ELocationType_MAX = 3,
};

enum class ETargetingHighlightStyle : uint8_t {
	THS_None = 0,
	THS_Highlight = 1,
	THS_HighlightAndMark = 2,
	THS_HighlightAndBracket = 3,
	THS_HighlightAndBracketWorld = 4,
	THS_MAX = 5,
};

enum class ESafeZoneType : uint8_t {
	eSZ_TOP = 0,
	eSZ_BOTTOM = 1,
	eSZ_LEFT = 2,
	eSZ_RIGHT = 3,
	eSZ_MAX = 4,
};

enum class SprayDisplayBehavior : uint8_t {
	SDB_RandomSprayAlpha = 0,
	SDB_MasteryNumbers = 1,
	SDB_SprayAlphaMasteryNumbers = 2,
	SDB_TickingNumbers = 3,
	SDB_Kills = 4,
	SDB_DamageDealt = 5,
	SDB_WinsDamage = 6,
	SDB_WinsFlank = 7,
	SDB_WinsSupport = 8,
	SDB_WinsFrontline = 9,
	SDB_MAX = 10,
};

enum class GamepadKeys : uint8_t {
	GAMEPAD_NONE = 0,
	GAMEPAD_BUTTON_A = 1,
	GAMEPAD_BUTTON_B = 2,
	GAMEPAD_BUTTON_X = 3,
	GAMEPAD_BUTTON_Y = 4,
	GAMEPAD_BUTTON_MENU = 5,
	GAMEPAD_BUTTON_LB = 6,
	GAMEPAD_BUTTON_RB = 7,
	GAMEPAD_BUTTON_LT = 8,
	GAMEPAD_BUTTON_RT = 9,
	GAMEPAD_BUTTON_BUMPERS = 10,
	GAMEPAD_BUTTON_L_STICK = 11,
	GAMEPAD_BUTTON_R_STICK = 12,
	GAMEPAD_BUTTON_DPAD_UNPRESSED = 13,
	GAMEPAD_BUTTON_DPAD_DOWN = 14,
	GAMEPAD_BUTTON_DPAD_LEFT = 15,
	GAMEPAD_BUTTON_DPAD_RIGHT = 16,
	GAMEPAD_BUTTON_DPAD_UP = 17,
	GAMEPAD_BUTTON_VIEW = 18,
	GAMEPAD_BUTTON_L_STICK_ALL_AXIS = 19,
	GAMEPAD_BUTTON_L_STICK_X_AXIS = 20,
	GAMEPAD_BUTTON_L_STICK_Y_AXIS = 21,
	GAMEPAD_BUTTON_R_STICK_ALL_AXIS = 22,
	GAMEPAD_BUTTON_R_STICK_X_AXIS = 23,
	GAMEPAD_BUTTON_R_STICK_Y_AXIS = 24,
	GAMEPAD_MAX = 25,
};

enum class GOD_PANTHEON : uint8_t {
	PANTHEON_None = 0,
	PANTHEON_Egyptian = 1,
	PANTHEON_Norse = 2,
	PANTHEON_Greek = 3,
	PANTHEON_Roman = 4,
	PANTHEON_Chinese = 5,
	PANTHEON_Mayan = 6,
	PANTHEON_Hindu = 7,
	PANTHEON_MAX = 8,
};

enum class EForcedSilhouetteVisibility : uint8_t {
	FSV_None = 0,
	FSV_Visible = 1,
	FSV_Hidden = 2,
	FSV_MAX = 3,
};

enum class ELobbyAnimState : uint8_t {
	LobbyAnimState_None = 0,
	LobbyAnimState_Intro = 1,
	LobbyAnimState_Emote = 2,
	LobbyAnimState_MVP = 3,
	LobbyAnimState_MAX = 4,
};

enum class UIChampionCustomizeState : uint8_t {
	UICCS_Body = 0,
	UICCS_Weapon = 1,
	UICCS_Emote = 2,
	UICCS_MVPPose = 3,
	UICCS_Mount = 4,
	UICCS_Spray = 5,
	UICCS_DeathStamp = 6,
	UICCS_MAX = 7,
};

enum class TextureCompressionSettings : uint8_t {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Displacementmap = 2,
	TC_NormalmapAlpha = 3,
	TC_Grayscale = 4,
	TC_HighDynamicRange = 5,
	TC_OneBitAlpha = 6,
	TC_NormalmapUncompressed = 7,
	TC_NormalmapBC5 = 8,
	TC_OneBitMonochrome = 9,
	TC_SimpleLightmapModification = 10,
	TC_VectorDisplacementmap = 11,
	TC_MAX = 12,
};

enum class EOnlineCreateGameSessionFlag : uint8_t {
	OCGSF_New = 0,
	OCGSF_ReSubmit = 1,
	OCGSF_MAX = 2,
};

enum class eSimProjEvent : uint8_t {
	Proj_Spawn = 0,
	Proj_Exploded = 1,
	Proj_ExplodedSpecial = 2,
	Proj_HitTimeWall = 3,
	Proj_Shutdown = 4,
	Proj_Hit = 5,
	Proj_Target = 6,
	Proj_HitWall = 7,
	Proj_HideProjectile = 8,
	Proj_Fizzle = 9,
	Proj_Halt = 10,
	Proj_Bounce = 11,
	Proj_MAX = 12,
};

enum class OPTION_DETAILLEVEL : uint8_t {
	SDL_LOWEST = 0,
	SDL_LOW = 1,
	SDL_MEDIUM = 2,
	SDL_HIGH = 3,
	SDL_MAX = 4,
};

enum class CMTargetType : uint8_t {
	CMTT_Pawn = 0,
	CMTT_Deployable = 1,
	CMTT_Destructible = 2,
	CMTT_Projectile = 3,
	CMTT_MAX = 4,
};

enum class ResurrectionState : uint8_t {
	RS_NONE = 0,
	RS_STANDBY = 1,
	RS_BUILDUP = 2,
	RS_ACTIVE = 3,
	RS_SUICIDE = 4,
	RS_END = 5,
	RS_MAX = 6,
};

enum class EMenuOptionType : uint8_t {
	MENUOT_ComboReadOnly = 0,
	MENUOT_ComboNumeric = 1,
	MENUOT_CheckBox = 2,
	MENUOT_Slider = 3,
	MENUOT_Spinner = 4,
	MENUOT_EditBox = 5,
	MENUOT_CollectionCheckBox = 6,
	MENUOT_CollapsingList = 7,
	MENUOT_MAX = 8,
};

enum class EActiveType : uint8_t {
	AIActive_Meditation = 0,
	AIActive_HandOfGods = 1,
	AIActive_Sprint = 2,
	AIActive_Ward = 3,
	AIActive_Aegis = 4,
	AIActive_Beads = 5,
	AIActive_MAX = 6,
};

enum class EReplicatedState : uint8_t {
	IORS_Ok = 0,
	IORS_Edited = 1,
	IORS_Deleted = 2,
	IORS_MAX = 3,
};

enum class EThreatLevel : uint8_t {
	ThreatLevel_Invalid = 0,
	ThreatLevel_None = 1,
	ThreatLevel_Low = 2,
	ThreatLevel_Medium = 3,
	ThreatLevel_High = 4,
	ThreatLevel_MAX = 5,
};

enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4,
};

enum class EAudioDeviceCategory : uint8_t {
	ADC_Communications = 0,
	ADC_Voice = 1,
	ADC_Multimedia = 2,
	ADC_MAX = 3,
};

enum class HitReactionMoveType : uint8_t {
	HIT_MOVE_TYPE_ALL = 0,
	HIT_MOVE_TYPE_IDLE = 1,
	HIT_MOVE_TYPE_MOVING = 2,
	HIT_MOVE_TYPE_MAX = 3,
};

enum class EApplyEffectResult : uint8_t {
	APPLYEFFECT_OK = 0,
	APPLYEFFECT_IMMUNE = 1,
	APPLYEFFECT_FAIL = 2,
	APPLYEFFECT_MAX = 3,
};

enum class EBlendGrapplingHook : uint8_t {
	BlendGrapplingHook_Flying = 0,
	BlendGrapplingHook_Latched = 1,
	BlendGrapplingHook_HitEnemy = 2,
	BlendGrapplingHook_Normal = 3,
	BlendGrapplingHook_MAX = 4,
};

enum class UIID : uint8_t {
	UIID_NONE = 0,
	UIID_XP = 1,
	UIID_LEVEL = 2,
	UIID_LEVEL_PCT = 3,
	UIID_BOT_ID = 4,
	UIID_DEVICE_ID = 5,
	UIID_NAME = 6,
	UIID_AMMO = 7,
	UIID_ICON = 8,
	UIID_STATUS = 9,
	UIID_POWER = 10,
	UIID_COOLDOWN = 11,
	UIID_ENEMY_SCORE = 12,
	UIID_ENEMY_CHARGE = 13,
	UIID_ENEMY_TASKFORCE = 14,
	UIID_FRIENDLY_SCORE = 15,
	UIID_FRIENDLY_CHARGE = 16,
	UIID_FRIENDLY_TASKFORCE = 17,
	UIID_ATTACKING_TASKFORCE = 18,
	UIID_TIMER_VALUE = 19,
	UIID_TIMER_STATE = 20,
	UIID_TIMER_TEXT = 21,
	UIID_MANA = 22,
	UIID_MANA_MAX = 23,
	UIID_MANA_PCT = 24,
	UIID_HEALTH = 25,
	UIID_HEALTH_MAX = 26,
	UIID_HEALTH_PCT = 27,
	UIID_SHIELD = 28,
	UIID_SHIELD_MAX = 29,
	UIID_SHIELD_PCT = 30,
	UIID_TIMER_ACTIVATION = 31,
	UIID_BONUS_CARDS = 32,
	UIID_COMBAT_FLAG = 33,
	UIID_COMBAT_TIME = 34,
	UIID_COMBAT_TIMER = 35,
	UIID_DISPLAY_CARDS = 36,
	UIID_PLAYER_ID = 37,
	UIID_PLAYER_NAME = 38,
	UIID_PLAYER_NOTE = 39,
	UIID_PLAYER_LEVEL = 40,
	UIID_CLAN_TAG = 41,
	UIID_CLAN_NAME = 42,
	UIID_MASTERY_LEVEL = 43,
	UIID_IS_RECENT = 44,
	UIID_IS_ONLINE = 45,
	UIID_IS_STREAMING = 46,
	UIID_IS_PARTY = 47,
	UIID_IS_MY_PARTY = 48,
	UIID_IS_FRIEND = 49,
	UIID_IS_PENDING = 50,
	UIID_IS_REQUESTED = 51,
	UIID_STATUS_ID = 52,
	UIID_STATUS_LABEL = 53,
	UIID_STATUS_MESSAGE = 54,
	UIID_QUEUE_ICON = 55,
	UIID_AVATAR_ID = 56,
	UIID_FRIENDS_TOTAL = 57,
	UIID_FRIENDS_ONLINE = 58,
	UIID_FRIENDS_PENDING = 59,
	UIID_CLAN_PENDING = 60,
	UIID_EQUIP_POINT = 61,
	UIID_MASTERY = 62,
	UIID_INVITE_MAP = 63,
	UIID_INVITE_QUEUE = 64,
	UIID_INVITE_PENDING = 65,
	UIID_PARTY_LEADER = 66,
	UIID_MAX = 67,
};

enum class ELightingBuildQuality : uint8_t {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_NoGlobalIllumination = 4,
	Quality_MAX = 5,
};

enum class TextureMipGenSettings : uint8_t {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_MAX = 20,
};

enum class ELeaderboardUpdateType : uint8_t {
	LUT_KeepBest = 0,
	LUT_Force = 1,
	LUT_MAX = 2,
};

enum class SETTING_ANTIALIASING : uint8_t {
	SAA_OFF = 0,
	SAA_TWO = 1,
	SAA_FOUR = 2,
	SAA_EIGHT = 3,
	SAA_MAX = 4,
};

enum class TgSupportedAspectRatios : uint8_t {
	TgAR_4x3 = 0,
	TgAR_5x4 = 1,
	TgAR_16x9 = 2,
	TgAR_16x10 = 3,
	TgAR_Other = 4,
	TgAR_MAX = 5,
};

enum class ELightFxState : uint8_t {
	LFX_UNMANAGED = 0,
	LFX_ACTIVE = 1,
	LFX_KILLEDBYMGR = 2,
	LFX_DYING = 3,
	LFX_INACTIVE = 4,
	LFX_MAX = 5,
};

enum class BurnCardSelectionState : uint8_t {
	BCSS_NONE = 0,
	BCSS_QUEUED = 1,
	BCSS_PURCHASED = 2,
	BCSS_CURRENT = 3,
	BCSS_SELECTED = 4,
	BCSS_MAX = 5,
};

enum class EUITargetingType : uint8_t {
	UITARGETING_None = 0,
	UITARGETING_PendingRocketLockOn = 1,
	UITARGETING_RocketLockOn = 2,
	UITARGETING_MAX = 3,
};

enum class ECoverDirection : uint8_t {
	CD_Default = 0,
	CD_Left = 1,
	CD_Right = 2,
	CD_Up = 3,
	CD_MAX = 4,
};

enum class MatchInvitePlayerState : uint8_t {
	MIPS_Waiting = 0,
	MIPS_JustAccepted = 1,
	MIPS_Accepted = 2,
	MIPS_Failed = 3,
	MIPS_MAX = 4,
};

enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3,
};

enum class UIHudTeamAnimGroup : uint8_t {
	TeamAnimGroup_Team = 0,
	TeamAnimGroup_Stats = 1,
	TeamAnimGroup_MAX = 2,
};

enum class EHeadTrackingAction : uint8_t {
	EHTA_DisableHeadTracking = 0,
	EHTA_EnableHeadTracking = 1,
	EHTA_MAX = 2,
};

enum class ESimulationMethod : uint8_t {
	ESM_SPH = 0,
	ESM_NO_PARTICLE_INTERACTION = 1,
	ESM_MIXED_MODE = 2,
	ESM_MAX = 3,
};

enum class TextureFlipBookMethod : uint8_t {
	TFBM_UL_ROW = 0,
	TFBM_UL_COL = 1,
	TFBM_UR_ROW = 2,
	TFBM_UR_COL = 3,
	TFBM_LL_ROW = 4,
	TFBM_LL_COL = 5,
	TFBM_LR_ROW = 6,
	TFBM_LR_COL = 7,
	TFBM_RANDOM = 8,
	TFBM_MAX = 9,
};

enum class EChargeState : uint8_t {
	CHARGE_None = 0,
	CHARGE_NoTurn = 1,
	CHARGE_NoTurn_RotPawn = 2,
	CHARGE_NoTurnBackwards = 3,
	CHARGE_Turn = 4,
	CHARGE_Fairy = 5,
	CHARGE_MAX = 6,
};

enum class EPushState : uint8_t {
	PushState_Paused = 0,
	PushState_Forward = 1,
	PushState_PendingReverse = 2,
	PushState_Reverse = 3,
	PushState_MAX = 4,
};

enum class SpecialFxLightState : uint8_t {
	FxLight_Normal = 0,
	FxLight_Dying = 1,
	FxLight_Kill = 2,
	FxLight_MAX = 3,
};

enum class TgTeleportVolumeType : uint8_t {
	Inactive = 0,
	Respawn = 1,
	TgTeleportVolumeType_MAX = 2,
};

enum class PROFILESTATE : uint8_t {
	EPS_LOADOUT = 0,
	EPS_OVERVIEW = 1,
	EPS_AWARDS = 2,
	EPS_HISTORY = 3,
	EPS_MAX = 4,
};

enum class UIChampionItemSort : uint8_t {
	UICIS_Default = 0,
	UICIS_OWNED = 1,
	UICIS_Crystals = 2,
	UICIS_Gold = 3,
	UICIS_Mixer = 4,
	UICIS_Chest = 5,
	UICIS_BattlePass = 6,
	UICIS_DLC = 7,
	UICIS_Event = 8,
	UICIS_Limited = 9,
	UICIS_Exclusive = 10,
	UICIS_Mastery = 11,
	UICIS_Vault = 12,
	UICIS_Promo = 13,
	UICIS_Rent = 14,
	UICIS_Unknown = 15,
	UICIS_MAX = 16,
};

enum class EAvatarCamera : uint8_t {
	EAC_Behind = 0,
	EAC_Underwing = 1,
	EAC_Neck = 2,
	EAC_MAX = 3,
};

enum class ETonemapperType : uint8_t {
	Tonemapper_Off = 0,
	Tonemapper_Filmic = 1,
	Tonemapper_Customizable = 2,
	Tonemapper_MAX = 3,
};

enum class GFxTimingMode : uint8_t {
	TM_Game = 0,
	TM_Real = 1,
	TM_MAX = 2,
};

enum class OverlayType : uint8_t {
	OT_UNKNOWN = 0,
	OT_LOCALPLAYER = 1,
	OT_PLAYER = 2,
	OT_DEPLOYABLE = 3,
	OT_MAX = 4,
};

enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3,
};

enum class EFunctionInputType : uint8_t {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_StaticBool = 6,
	FunctionInput_MAX = 7,
};

enum class ELeaderboardSortType : uint8_t {
	LST_Ascending = 0,
	LST_Descending = 1,
	LST_MAX = 2,
};

enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4,
};

enum class TG_PlaySpecialEffect : uint8_t {
	PLAYFX_Heal = 0,
	PLAYFX_RUberLaser = 1,
	PLAYFX_LUberLaser = 2,
	PLAYFX_SiegeWallImpact = 3,
	PLAYFX_GAMMARAY_BUILDUP = 4,
	PLAYFX_GAMMARAY_FIRE = 5,
	PLAYFX_Jump = 6,
	PLAYFX_SpecialJump = 7,
	PLAYFX_Land = 8,
	PLAYFX_Teleport = 9,
	PLAYFX_PreTeleport = 10,
	PLAYFX_Flourish = 11,
	PLAYFX_RiderShieldHit = 12,
	PLAYFX_RiderLegMarksExplode = 13,
	PLAYFX_MAX = 14,
};

enum class ITEM_STACKABLE_FORCED_OWNERSHIP_TYPE : uint8_t {
	ISFOT_USE_STACKABLE_OWNERSHIP = 0,
	ISFOT_ALWAYS_OWN_STACKABLE = 1,
	ISFOT_NEVER_OWN_STACKABLE = 2,
	ISFOT_MAX = 3,
};

enum class FACEBOOK_OPTIONS : uint8_t {
	FCO_WEBCAM = 0,
	FCO_MICROPHONE = 1,
	FCO_AUDIO = 2,
	FCO_MAX = 3,
};

enum class GAME_MODE_INSTRUCTION : uint8_t {
	GMI_NONE = 0,
	GMI_CAPTURE_POINT = 1,
	GMI_PUSH_PAYLOAD = 2,
	GMI_DEFEND_AGAINST_PAYLOAD = 3,
	GMI_MAX = 4,
};

enum class ELeaderboardFormat : uint8_t {
	LF_Number = 0,
	LF_Seconds = 1,
	LF_Milliseconds = 2,
	LF_MAX = 3,
};

enum class EAchievementMediaAssetType : uint8_t {
	AMAT_Unknown = 0,
	AMAT_Icon = 1,
	AMAT_Art = 2,
	AMAT_MAX = 3,
};

enum class EDisplayPlane : uint8_t {
	DISPLAYPLANE_RENDER = 0,
	DISPLAYPLANE_HUD = 1,
	DISPLAYPLANE_INTERMEDIATE_HUD = 2,
	DISPLAYPLANE_MAX = 3,
};

enum class UIHudTeamDisplayMode : uint8_t {
	TeamDisplayMode_Top = 0,
	TeamDisplayMode_SidesWithItems = 1,
	TeamDisplayMode_SidesWithCards = 2,
	TeamDisplayMode_KDA = 3,
	TeamDisplayMode_MAX = 4,
};

enum class EPropertyValueMappingType : uint8_t {
	PVMT_RawValue = 0,
	PVMT_PredefinedValues = 1,
	PVMT_Ranged = 2,
	PVMT_IdMapped = 3,
	PVMT_MAX = 4,
};

enum class SAL_LIST : uint8_t {
	SAL_CROSS_PLATFORM_FRIENDS = 0,
	SAL_PORTAL_FRIENDS = 1,
	SAL_ALL_FRIENDS = 2,
	SAL_PARTY = 3,
	SAL_SEARCH_WAITING = 4,
	SAL_SEARCH = 5,
	SAL_REFERRED = 6,
	SAL_REFERRERS = 7,
	SAL_MAX = 8,
};

enum class EDamageParameterOverrideMode : uint8_t {
	DPOM_Absolute = 0,
	DPOM_Multiplier = 1,
	DPOM_MAX = 2,
};

enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2,
};

enum class DeployableOverlayState : uint8_t {
	DOS_IDLE = 0,
	DOS_ACTIVE = 1,
	DOS_FINISHED = 2,
	DOS_MAX = 3,
};

enum class ETargetingReticleStyle : uint8_t {
	TRS_None = 0,
	TRS_MAX = 1,
};

enum class HealDisplayType : uint8_t {
	HDT_RawHealing = 0,
	HDT_NoOverheal = 1,
	HDT_SymbolOnly = 2,
	HDT_MAX = 3,
};

enum class EFriendStateNotifications : uint8_t {
	FSN_Never = 0,
	FSN_Lobby_Only = 1,
	FSN_InGame_Only = 2,
	FSN_Always = 3,
	FSN_MAX = 4,
};

enum class TUTORIAL_TARGET_TYPE : uint8_t {
	TUT_TARGET_TOWER = 0,
	TUT_TARGET_PHOENIX = 1,
	TUT_TARGET_GUARDIAN = 2,
	TUT_TARGET_MAX = 3,
};

enum class DisplayOverride : uint8_t {
	eDO_None = 0,
	eDO_Owned = 1,
	eDO_Unowned = 2,
	eDO_MAX = 3,
};

enum class EOnlineGameState : uint8_t {
	OGS_NoSession = 0,
	OGS_Pending = 1,
	OGS_Starting = 2,
	OGS_InProgress = 3,
	OGS_Ending = 4,
	OGS_Ended = 5,
	OGS_MAX = 6,
};

enum class BeamModifierType : uint8_t {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2,
};

enum class TgMapOrientation : uint8_t {
	TMO_NORMAL = 0,
	TMO_ROTATE_181 = 1,
	TMO_MAX = 2,
};

enum class EActorMetricsType : uint8_t {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3,
};

enum class TriangleSortOption : uint8_t {
	TRISORT_None = 0,
	TRISORT_CenterRadialDistance = 1,
	TRISORT_Random = 2,
	TRISORT_MergeContiguous = 3,
	TRISORT_Custom = 4,
	TRISORT_CustomLeftRight = 5,
	TRISORT_MAX = 6,
};

enum class EPedestalType : uint8_t {
	PEDESTAL_FrontLine = 0,
	PEDESTAL_Flank = 1,
	PEDESTAL_Support = 2,
	PEDESTAL_Damager = 3,
	PEDESTAL_Team1 = 4,
	PEDESTAL_Team2 = 5,
	PEDESTAL_Team3 = 6,
	PEDESTAL_Team4 = 7,
	PEDESTAL_Team5 = 8,
	PEDESTAL_MAX = 9,
};

enum class RadialMenuDir : uint8_t {
	RMD_E = 0,
	RMD_S = 1,
	RMD_W = 2,
	RMD_N = 3,
	RMD_Center = 4,
	RMD_MAX = 5,
};

enum class EAttractorSkelVertSurfaceDestination : uint8_t {
	VERTSURFACEDEST_Vert = 0,
	VERTSURFACEDEST_Surface = 1,
	VERTSURFACEDEST_MAX = 2,
};

enum class EUICMatchDisplayTabType : uint8_t {
	EUICMDT_Stats = 0,
	EUICMDT_Build = 1,
	EUICMDT_MAX = 2,
};

enum class FFB_ForceFieldCoordinates : uint8_t {
	FFB_CARTESIAN = 0,
	FFB_SPHERICAL = 1,
	FFB_CYLINDRICAL = 2,
	FFB_TOROIDAL = 3,
	FFB_MAX = 4,
};

enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3,
};

enum class EReticuleType : uint8_t {
	RETICULE_None = 0,
	RETICULE_Circle = 1,
	RETICULE_Precise = 2,
	RETICULE_Wide = 3,
	RETICULE_Dot = 4,
	RETICULE_ShaLin = 5,
	RETICULE_Atlas = 6,
	RETICULE_Maeve = 7,
	RETICULE_Drop = 8,
	RETICULE_MAX = 9,
};

enum class EAnimRotationOnly : uint8_t {
	EARO_AnimSet = 0,
	EARO_ForceEnabled = 1,
	EARO_ForceDisabled = 2,
	EARO_MAX = 3,
};

enum class EPlayOfTheGameEventType : uint8_t {
	POTG_ScoreKillSingle = 0,
	POTG_ScoreKillDouble = 1,
	POTG_ScoreKillTriple = 2,
	POTG_ScoreKillQuad = 3,
	POTG_ScoreKillPenta = 4,
	POTG_ScoreKillHexa = 5,
	POTG_ScoreAssist = 6,
	POTG_Emote = 7,
	POTG_Spray = 8,
	POTG_MovementAbility = 9,
	POTG_OvertimeStarted = 10,
	POTG_Died = 11,
	POTG_RoundEnded = 12,
	POTG_Healing = 13,
	POTG_HealingSelf = 14,
	POTG_DamagePercent = 15,
	POTG_EnvironmentKill = 16,
	POTG_Shielding = 17,
	POTG_DamagePrevented = 18,
	POTG_DamagePreventedSelf = 19,
	POTG_HeadShot = 20,
	POTG_ContestTime = 21,
	POTG_ObjectiveTime = 22,
	POTG_CrowdControlSoft = 23,
	POTG_CrowdControlHard = 24,
	POTG_ForcedPOTG = 25,
	POTG_MAX = 26,
};

enum class EMcpMessageCompressionType : uint8_t {
	MMCT_NONE = 0,
	MMCT_LZO = 1,
	MMCT_ZLIB = 2,
	MMCT_MAX = 3,
};

enum class EDeviceChangeEvent : uint8_t {
	DCE_Created = 0,
	DCE_ToggleState = 1,
	DCE_CanFire = 2,
	DCE_Selected = 3,
	DCE_Cooldown = 4,
	DCE_PtsAlloc = 5,
	DCE_Refire = 6,
	DCE_InstanceCount = 7,
	DCE_DeviceBuildup = 8,
	DCE_MAX = 9,
};

enum class EUtilityType : uint8_t {
	UTIL_Function = 0,
	UTIL_Filter = 1,
	UTIL_MAX = 2,
};

enum class ReloadAnimType : uint8_t {
	RAT_FirstShell = 0,
	RAT_LoopingShells = 1,
	RAT_PostReload = 2,
	RAT_MAX = 3,
};

enum class ENetworkNotificationPosition : uint8_t {
	NNP_TopLeft = 0,
	NNP_TopCenter = 1,
	NNP_TopRight = 2,
	NNP_CenterLeft = 3,
	NNP_Center = 4,
	NNP_CenterRight = 5,
	NNP_BottomLeft = 6,
	NNP_BottomCenter = 7,
	NNP_BottomRight = 8,
	NNP_MAX = 9,
};

enum class DeviceTargeterType : uint8_t {
	TGDTT_None = 0,
	TGDTT_Self = 1,
	TGDTT_Friend = 2,
	TGDTT_Enemy = 3,
	TGDTT_OwnPet = 4,
	TGDTT_Enemy_And_Self = 5,
	TGDTT_Friend_Only = 6,
	TGDTT_Pet_Owner = 7,
	TGDTT_Not_Self = 8,
	TGDTT_All = 9,
	TGDTT_MAX = 10,
};

enum class EDragState : uint8_t {
	DRAG_Inactive = 0,
	DRAG_Throw = 1,
	DRAG_Hit = 2,
	DRAG_Pull = 3,
	DRAG_EndPull = 4,
	DRAG_MissThrow = 5,
	DRAG_MissInvalid = 6,
	DRAG_MissThrowEnd = 7,
	DRAG_MissInvalidEnd = 8,
	DRAG_CloseRangeEnd = 9,
	DRAG_MAX = 10,
};

enum class GemEmissiveAnim : uint8_t {
	eGEA_None = 0,
	eGEA_Idle = 1,
	eGEA_Pounce = 2,
	eGEA_Prowl = 3,
	eGEA_AirJump = 4,
	eGEA_NineLives = 5,
	eGEA_Midnight = 6,
	eGEA_MAX = 7,
};

enum class EOnRelevanceBehavior : uint8_t {
	ORB_NORMAL = 0,
	ORB_FORCE_FIRSTKEYFRAME = 1,
	ORB_FORCE_LASTKEYFRAME = 2,
	ORB_FORCE_OTHER = 3,
	ORB_MAINTAIN = 4,
	ORB_MAX = 5,
};

enum class ETutorialState : uint8_t {
	ETutState_Invalid = 0,
	ETutState_TutorialIntro = 1,
	ETutState_MoveForwardBackward = 2,
	ETutState_MoveRightLeft = 3,
	ETutState_PlayerApproachBot = 4,
	ETutState_PlayerMoveToShootingRange = 5,
	ETutState_HealthBar = 6,
	ETutState_AutoAbility = 7,
	ETutState_AutoAbilityMultipleEnemies = 8,
	ETutState_BattleAbility = 9,
	ETutState_CooldownExplain = 10,
	ETutState_MovementAbility = 11,
	ETutState_PlayerMoveToUltimateShootingRange = 12,
	ETutState_AltAbility = 13,
	ETutState_UltimateAbilityCharge = 14,
	ETutState_UltimateAbility = 15,
	ETutState_Mount = 16,
	ETutState_PlayerMovingToJumpArea = 17,
	ETutState_Jump = 18,
	ETutState_PlayerMovingToObjective = 19,
	ETutState_CapturingObjective = 20,
	ETutState_ContestingObjective = 21,
	ETutState_PayloadSpawn = 22,
	ETutState_PayloadContest = 23,
	ETutState_PayloadPush = 24,
	ETutState_TutorialComplete = 25,
	ETutState_MAX = 26,
};

enum class UICALENDER_STATE : uint8_t {
	UICALENDAR_EVENTS = 0,
	UICALENDAR_OVERVIEW = 1,
	UICALENDAR_MAX = 2,
};

enum class EMovieControlType : uint8_t {
	MCT_Play = 0,
	MCT_Stop = 1,
	MCT_Pause = 2,
	MCT_MAX = 3,
};

enum class SETTING_DEADZONESIZE : uint8_t {
	SDZS_MINIMUM = 0,
	SDZS_SMALL = 1,
	SDZS_MEDIUM = 2,
	SDZS_LARGE = 3,
	SDZS_MAX = 4,
};

enum class ETrail2SpawnMethod : uint8_t {
	PET2SM_Emitter = 0,
	PET2SM_Velocity = 1,
	PET2SM_Distance = 2,
	PET2SM_MAX = 3,
};

enum class DeviceTargetMode : uint8_t {
	TGDTM_Self = 0,
	TGDTM_Reticle = 1,
	TGDTM_Projectile = 2,
	TGDTM_AOE = 3,
	TGDTM_Ground = 4,
	TGDTM_Cone = 5,
	TGDTM_Linear = 6,
	TGDTM_LockOn = 7,
	TGDTM_SpawnPoint = 8,
	TGDTM_WorldMap = 9,
	TGDTM_ReticleFindSpot = 10,
	TGDTM_MAX = 11,
};

enum class UI_SKILL_EQUIP_SLOT : uint8_t {
	UI_SLOT_ONE = 0,
	UI_SLOT_TWO = 1,
	UI_SLOT_THREE = 2,
	UI_SLOT_MAX = 3,
};

enum class GAME_MODE_TYPE : uint8_t {
	GAME_TYPE_BATTLE = 0,
	GAME_TYPE_ARENA = 1,
	GAME_TYPE_DOM = 2,
	GAME_TYPE_SIEGE = 3,
	GAME_TYPE_MAX = 4,
};

enum class EEmoteCategory : uint8_t {
	EMOTECAT_None = 0,
	EMOTECAT_PlayerVGS = 1,
	EMOTECAT_SpawnChatter = 2,
	EMOTECAT_AbilityOnCooldown = 3,
	EMOTECAT_TakingDamage = 4,
	EMOTECAT_Celebration = 5,
	EMOTECAT_Kills = 6,
	EMOTECAT_Action = 7,
	EMOTECAT_ContextCue = 8,
	EMOTECAT_HealContext = 9,
	EMOTECAT_PainContext = 10,
	EMOTECAT_Ultimate = 11,
	EMOTECAT_Override = 12,
	EMOTECAT_Movement = 13,
	EMOTECAT_MAX = 14,
};

enum class ASType : uint8_t {
	AS_Undefined = 0,
	AS_Null = 1,
	AS_Number = 2,
	AS_Int = 3,
	AS_String = 4,
	AS_Boolean = 5,
	AS_MAX = 6,
};

enum class EScopeEdge : uint8_t {
	EPSA_Top = 0,
	EPSA_Bottom = 1,
	EPSA_Left = 2,
	EPSA_Right = 3,
	EPSA_None = 4,
	EPSA_MAX = 5,
};

enum class EPurchaseFailure : uint8_t {
	TGPF_None = 0,
	TGPF_UnknownItem = 1,
	TGPF_UnavailableItem = 2,
	TGPF_UnknownOwner = 3,
	TGPF_NotEnoughCurrency = 4,
	TGPF_AtStackLimit = 5,
	TGPF_AlreadyPurchased = 6,
	TGPF_NoAvailableSlots = 7,
	TGPF_InvalidUpgrade = 8,
	TGPF_CannotSell = 9,
	TGPF_CannotSellInUse = 10,
	TGPF_Unknown = 11,
	TGPF_MAX = 12,
};

enum class EBlendVine : uint8_t {
	BLENDVINE_Inactive = 0,
	BLENDVINE_Throw = 1,
	BLENDVINE_ThrowLoop = 2,
	BLENDVINE_Pull = 3,
	BLENDVINE_HitPostFire = 4,
	BLENDVINE_MissPostFire = 5,
	BLENDVINE_MAX = 6,
};

enum class UIAmmoType : uint8_t {
	UIAMMO_BULLET = 0,
	UIAMMO_ICE = 1,
	UIAMMO_CELL = 2,
	UIAMMO_DART = 3,
	UIAMMO_ARROW = 4,
	UIAMMO_LARGE = 5,
	UIAMMO_SMALL = 6,
	UIAMMO_FLAME = 7,
	UIAMMO_POTION = 8,
	UIAMMO_SHELL = 9,
	UIAMMO_ROCKET = 10,
	UIAMMO_MAX = 11,
};

enum class MinionFactoryType : uint8_t {
	MFT_Conquest = 0,
	MFT_Joust = 1,
	MFT_Assault = 2,
	MFT_Mayan = 3,
	MFT_Other = 4,
	MFT_MAX = 5,
};

enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

enum class EMobileAmbientOcclusionSource : uint8_t {
	MAOS_Disabled = 0,
	MAOS_VertexColorRed = 1,
	MAOS_VertexColorGreen = 2,
	MAOS_VertexColorBlue = 3,
	MAOS_VertexColorAlpha = 4,
	MAOS_MAX = 5,
};

enum class EStatsFetchType : uint8_t {
	SFT_Player = 0,
	SFT_CenteredOnPlayer = 1,
	SFT_Friends = 2,
	SFT_TopRankings = 3,
	SFT_MAX = 4,
};

enum class SpectatorCameraCycle : uint8_t {
	SpecCycle_None = 0,
	SpecCycle_PlayerFriendly = 1,
	SpecCycle_PlayerEnemy = 2,
	SpecCycle_Player = 3,
	SpecCycle_TowerFriendly = 4,
	SpecCycle_TowerEnemy = 5,
	SpecCycle_Tower = 6,
	SpecCycle_Cinematic = 7,
	SpecCycle_Action = 8,
	SpecCycle_MAX = 9,
};

enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_UnrealEdBackground = 0,
	SDPG_EmissiveSkybox = 1,
	SDPG_World = 2,
	SDPG_Middleground = 3,
	SDPG_Foreground = 4,
	SDPG_UnrealEdForeground = 5,
	SDPG_PostProcess = 6,
	SDPG_MAX = 7,
};

enum class GFxAlign : uint8_t {
	Align_Center = 0,
	Align_TopCenter = 1,
	Align_BottomCenter = 2,
	Align_CenterLeft = 3,
	Align_CenterRight = 4,
	Align_TopLeft = 5,
	Align_TopRight = 6,
	Align_BottomLeft = 7,
	Align_BottomRight = 8,
	Align_MAX = 9,
};

enum class EFirstPersonWeaponAttachState : uint8_t {
	FPAS_NeedsUpdate = 0,
	FPAS_Attached = 1,
	FPAS_Detached = 2,
	FPAS_MAX = 3,
};

enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3,
};

enum class ECsgOper : uint8_t {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_MAX = 5,
};

enum class EDetailMode : uint8_t {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3,
};

enum class UIDeviceStatus : uint8_t {
	UIDS_NONE = 0,
	UIDS_LOCKED = 1,
	UIDS_READY = 2,
	UIDS_COOLDOWN = 3,
	UIDS_FIRING = 4,
	UIDS_DEPLOYED = 5,
	UIDS_MAX = 6,
};

enum class EPetPosition : uint8_t {
	PETPOS_Default = 0,
	PETPOS_Front = 1,
	PETPOS_FrontRight = 2,
	PETPOS_Right = 3,
	PETPOS_BackRight = 4,
	PETPOS_Back = 5,
	PETPOS_BackLeft = 6,
	PETPOS_Left = 7,
	PETPOS_FrontLeft = 8,
	PETPOS_MAX = 9,
};

enum class UIAsiaticEventTab : uint8_t {
	UIAET_HOME = 0,
	UIAET_QUESTS = 1,
	UIAET_INFO = 2,
	UIAET_MAX = 3,
};

enum class EFlightThrottle : uint8_t {
	EFT_Hover = 0,
	EFT_Cruise = 1,
	EFT_Boost = 2,
	EFT_MAX = 3,
};

enum class STREAMTYPE : uint8_t {
	VST_NONE = 0,
	VST_HIREZ = 1,
	VST_TWITCH = 2,
	VST_TRAINING = 3,
	VST_COMMUNITY = 4,
	VST_NEWS = 5,
	VST_MAX = 6,
};

enum class EInfluenceType : uint8_t {
	Fluid_Flow = 0,
	Fluid_Raindrops = 1,
	Fluid_Wave = 2,
	Fluid_Sphere = 3,
	Fluid_MAX = 4,
};

enum class EProfileRaceTransmissionOptions : uint8_t {
	PRTO_Auto = 0,
	PRTO_Manual = 1,
	PRTO_MAX = 2,
};

enum class GFxScaleMode : uint8_t {
	SM_NoScale = 0,
	SM_ShowAll = 1,
	SM_ExactFit = 2,
	SM_NoBorder = 3,
	SM_MAX = 4,
};

enum class EInputTypes : uint8_t {
	IT_XAxis = 0,
	IT_YAxis = 1,
	IT_MAX = 2,
};

enum class EColorBlindOption : uint8_t {
	CB_None = 0,
	CB_Protanope = 1,
	CB_Deuteranope = 2,
	CB_Tritanope = 3,
	CB_MAX = 4,
};

enum class ETrackToggleAction : uint8_t {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4,
};

enum class ERootMotionMode : uint8_t {
	RMM_Translate = 0,
	RMM_Velocity = 1,
	RMM_Ignore = 2,
	RMM_Accel = 3,
	RMM_Relative = 4,
	RMM_MAX = 5,
};

enum class ERequestType : uint8_t {
	Request_GET = 0,
	Request_POST = 1,
	Request_MAX = 2,
};

enum class ESplineControlRotMode : uint8_t {
	SCR_NoChange = 0,
	SCR_AlongSpline = 1,
	SCR_Interpolate = 2,
	SCR_MAX = 3,
};

enum class TargetSelectionType : uint8_t {
	TGTST_Default = 0,
	TGTST_Random = 1,
	TGTST_Closest = 2,
	TGTST_ClosestAimCenter = 3,
	TGTST_LowestHealthPercent = 4,
	TGTST_MAX = 5,
};

enum class YagorathUltAnimState : uint8_t {
	YUAS_Start = 0,
	YUAS_Pull = 1,
	YUAS_EAT = 2,
	YUAS_PullCanceled = 3,
	YUAS_MAX = 4,
};

enum class MiniMapEntityType : uint8_t {
	MMap_LocalSpectator = 0,
	MMap_LocalPlayer = 1,
	MMap_Player = 2,
	MMap_Bot = 3,
	MMap_Factory = 4,
	MMap_Deployable = 5,
	MMap_CapturePoint = 6,
	MMap_ChaosCapturePoint = 7,
	MMap_MAX = 8,
};

enum class EWatchOtherPlayersMode : uint8_t {
	WOPM_NONE = 0,
	WOPM_PLAYER = 1,
	WOPM_MAX = 2,
};

enum class EOnlineEnumerationReadState : uint8_t {
	OERS_NotStarted = 0,
	OERS_InProgress = 1,
	OERS_Done = 2,
	OERS_Failed = 3,
	OERS_MAX = 4,
};

enum class EAxis : uint8_t {
	AXIS_NONE = 0,
	AXIS_X = 1,
	AXIS_Y = 2,
	AXIS_BLANK = 3,
	AXIS_Z = 4,
	AXIS_MAX = 5,
};

enum class ENetRole : uint8_t {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4,
};

enum class EPixelFormat : uint8_t {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_A8R8G8B8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_FilteredShadowDepth = 13,
	PF_R32F = 14,
	PF_G16R16 = 15,
	PF_G16R16F = 16,
	PF_G16R16F_FILTER = 17,
	PF_G32R32F = 18,
	PF_A2B10G10R10 = 19,
	PF_A16B16G16R16 = 20,
	PF_D24 = 21,
	PF_R16F = 22,
	PF_R16F_FILTER = 23,
	PF_BC5 = 24,
	PF_V8U8 = 25,
	PF_A1 = 26,
	PF_FloatR11G11B10 = 27,
	PF_A4R4G4B4 = 28,
	PF_G8R8 = 29,
	PF_B8G8R8A8 = 30,
	EPixelFormat_MAX = 31,
};

enum class EParticleLevelInfluenceType : uint8_t {
	LIT_Never = 0,
	LIT_OutsidePhysicsVolumes = 1,
	LIT_Always = 2,
	LIT_MAX = 3,
};

enum class EGameStatGroups : uint8_t {
	GSG_EngineStats = 0,
	GSG_Game = 1,
	GSG_Team = 2,
	GSG_Player = 3,
	GSG_Weapon = 4,
	GSG_Damage = 5,
	GSG_Projectile = 6,
	GSG_Pawn = 7,
	GSG_GameSpecific = 8,
	GSG_Aggregate = 9,
	GSG_MAX = 10,
};

enum class EKnockDownChildren : uint8_t {
	KNOCKDOWNANIM_Input = 0,
	KNOCKDOWNANIM_DownState = 1,
	KNOCKDOWNANIM_GetUp = 2,
	KNOCKDOWNANIM_MAX = 3,
};

enum class eSetRouteResult : uint8_t {
	SetRoute_Failed = 0,
	SetRoute_OK = 1,
	SetRoute_AtDestination = 2,
	SetRoute_MAX = 3,
};

enum class EMaterialDepthModifier : uint8_t {
	MDM_None = 0,
	MDM_DrawWithDepthModifiers = 1,
	MDM_DepthGreaterEqual = 2,
	MDM_DepthLessEqual = 3,
	MDM_NonConservativeDepth = 4,
	MDM_MAX = 5,
};

enum class EBunnySpiritLinkAnimType : uint8_t {
	EBSA_Summon = 0,
	EBSA_Recast = 1,
	EBSA_Break = 2,
	EBSA_MAX = 3,
};

enum class EInventoryItemState : uint8_t {
	IIS_Unknown = 0,
	IIS_All = 1,
	IIS_Enabled = 2,
	IIS_Suspended = 3,
	IIS_Expired = 4,
	IIS_Canceled = 5,
	IIS_MAX = 6,
};

enum class EMobileTextureBlendFactorSource : uint8_t {
	MTBFS_VertexColor = 0,
	MTBFS_MaskTexture = 1,
	MTBFS_MAX = 2,
};

enum class EMobileValueSource : uint8_t {
	MVS_Constant = 0,
	MVS_VertexColorRed = 1,
	MVS_VertexColorGreen = 2,
	MVS_VertexColorBlue = 3,
	MVS_VertexColorAlpha = 4,
	MVS_BaseTextureRed = 5,
	MVS_BaseTextureGreen = 6,
	MVS_BaseTextureBlue = 7,
	MVS_BaseTextureAlpha = 8,
	MVS_MaskTextureRed = 9,
	MVS_MaskTextureGreen = 10,
	MVS_MaskTextureBlue = 11,
	MVS_MaskTextureAlpha = 12,
	MVS_NormalTextureAlpha = 13,
	MVS_EmissiveTextureRed = 14,
	MVS_EmissiveTextureGreen = 15,
	MVS_EmissiveTextureBlue = 16,
	MVS_EmissiveTextureAlpha = 17,
	MVS_MAX = 18,
};

enum class UISNAPPINGTYPE : uint8_t {
	UISNAPPING_NONE = 0,
	UISNAPPING_TOP = 1,
	UISNAPPING_BOT = 2,
	UISNAPPING_MAX = 3,
};

enum class EMobileAlphaValueSource : uint8_t {
	MAVS_DiffuseTextureAlpha = 0,
	MAVS_MaskTextureRed = 1,
	MAVS_MaskTextureGreen = 2,
	MAVS_MaskTextureBlue = 3,
	MAVS_MAX = 4,
};

enum class EPlayOfTheGameState : uint8_t {
	EPOTGS_None = 0,
	EPOTGS_Setup = 1,
	EPOTGS_Intro = 2,
	EPOTGS_PlaybackRequested = 3,
	EPOTGS_PlaybackStarted = 4,
	EPOTGS_Outro = 5,
	EPOTGS_MAX = 6,
};

enum class EOnlinePlayerStorageAsyncState : uint8_t {
	OPAS_NotStarted = 0,
	OPAS_Read = 1,
	OPAS_Write = 2,
	OPAS_Finished = 3,
	OPAS_MAX = 4,
};

enum class EMuteType : uint8_t {
	MUTE_None = 0,
	MUTE_AllButFriends = 1,
	MUTE_All = 2,
	MUTE_MAX = 3,
};

enum class EGameRespawnRule : uint8_t {
	GameRespawnRule_Normal = 0,
	GameRespawnRule_Phoenix = 1,
	GameRespawnRule_GrimReaper = 2,
	GameRespawnRule_MAX = 3,
};

enum class InterruptMorphTargetBehavior : uint8_t {
	ResetToInitial = 0,
	ResetToValue = 1,
	RestToTarget = 2,
	InterruptMorphTargetBehavior_MAX = 3,
};

enum class MaterialParamHarvestType : uint8_t {
	MPHT_None = 0,
	MPHT_NormalOnly = 1,
	MPHT_Basic = 2,
	MPHT_SpecialFX = 3,
	MPHT_DeathFX = 4,
	MPHT_All = 5,
	MPHT_MAX = 6,
};

enum class ESessionMemberStatus : uint8_t {
	DSMS_Reserved = 0,
	DSMS_Inactive = 1,
	DSMS_Ready = 2,
	DSMS_Active = 3,
	DSMS_MAX = 4,
};

enum class HeadShotResult : uint8_t {
	HEADSHOT_SuccessfulMeshTrace = 0,
	HEADSHOT_FailedMeshTrace = 1,
	HEADSHOT_CannotMeshTrace = 2,
	HEADSHOT_Failure = 3,
	HEADSHOT_MAX = 4,
};

enum class AbyssalEchoActiveSTatus : uint8_t {
	AEAS_Inactive = 0,
	AEAS_Active = 1,
	AEAS_TimingOut = 2,
	AEAS_MAX = 3,
};

enum class QuestPanel : uint8_t {
	QUEST_Daily = 0,
	QUEST_Special = 1,
	QUEST_Lore = 2,
	QUEST_Prime = 3,
	QUEST_MAX = 4,
};

enum class EOnlineDataAdvertisementType : uint8_t {
	ODAT_DontAdvertise = 0,
	ODAT_OnlineService = 1,
	ODAT_QoS = 2,
	ODAT_OnlineServiceAndQoS = 3,
	ODAT_MAX = 4,
};

enum class EVertSurfaceAttractorFalloffType : uint8_t {
	VSFOFF_Constant = 0,
	VSFOFF_Linear = 1,
	VSFOFF_Exponent = 2,
	VSFOFF_MAX = 3,
};

enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5,
};

enum class EDownloadSpeed : uint8_t {
	EDLS_Pause = 0,
	EDLS_Slow = 1,
	EDLS_Fast = 2,
	EDLS_MAX = 3,
};

enum class EFlyDirTypes : uint8_t {
	FDir_Forward = 0,
	FDir_Back = 1,
	FDir_Left = 2,
	FDir_Right = 3,
	FDir_Up = 4,
	FDir_Down = 5,
	FDir_UpMidair = 6,
	FDir_None = 7,
	FDir_MAX = 8,
};

enum class EMaxDistanceScaleMode : uint8_t {
	MDSM_Multiply = 0,
	MDSM_Substract = 1,
	MDSM_MAX = 2,
};

enum class ENotifyDelegateEvents : uint8_t {
	NDE_OnFired = 0,
	NDE_OnReload = 1,
	NDE_OnStartFire = 2,
	NDE_OnStopFire = 3,
	NDE_OnCooldownEnd = 4,
	NDE_Generic1 = 5,
	NDE_Generic2 = 6,
	NDE_Generic3 = 7,
	NDE_MAX = 8,
};

enum class EProfileRaceBrakeControlOptions : uint8_t {
	PRBCO_Trigger = 0,
	PRBCO_Button = 1,
	PRBCO_MAX = 2,
};

enum class EEmitterRenderMode : uint8_t {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_None = 3,
	ERM_MAX = 4,
};

enum class TG_CHAT_PRIORITY : uint8_t {
	CHAT_PRIORITY_THROWAWAY = 0,
	CHAT_PRIORITY_NORMAL = 1,
	CHAT_PRIORITY_HIGH = 2,
	CHAT_PRIORITY_INTERRUPT = 3,
	CHAT_PRIORITY_MAX = 4,
};

enum class UIDISPLAYTYPE : uint8_t {
	UIDISPLAY_ALWAYS = 0,
	UIDISPLAY_MOUSE = 1,
	UIDISPLAY_PCONLY = 2,
	UIDISPLAY_CONSOLE = 3,
	UIDISPLAY_GAMEPAD = 4,
	UIDISPLAY_MAX = 5,
};

enum class ECatalogSortOrder : uint8_t {
	CSO_FreeAndPaidCountDaily = 0,
	CSO_PaidCountAllTime = 1,
	CSO_PaidCountDail = 2,
	CSO_DigitalReleaseDate = 3,
	CSO_ReleaseDate = 4,
	CSO_UserRatings = 5,
	CSO_MAX = 6,
};

enum class EBlendDrag : uint8_t {
	BLENDCHAIN_Inactive = 0,
	BLENDCHAIN_Throw = 1,
	BLENDCHAIN_Hit = 2,
	BLENDCHAIN_MissThrow = 3,
	BLENDCHAIN_MissInvalid = 4,
	BLENDCHAIN_MAX = 5,
};

enum class SimplifiedCardType : uint8_t {
	SCT_Card = 0,
	SCT_BurnCard = 1,
	SCT_Talent = 2,
	SCT_MAX = 3,
};

enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3,
};

enum class GFxRenderTextureMode : uint8_t {
	RTM_Opaque = 0,
	RTM_Alpha = 1,
	RTM_AlphaComposite = 2,
	RTM_MAX = 3,
};

enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_PostProjection = 1,
	TRANSFORMPOSSOURCE_MAX = 2,
};

enum class LevelGridCellShape : uint8_t {
	LGCS_Box = 0,
	LGCS_Hex = 1,
	LGCS_MAX = 2,
};

enum class QuestRewardDisplayType : uint8_t {
	EQRDT_None = 0,
	EQRDT_Crystals = 1,
	EQRDT_Essence = 2,
	EQRDT_Gold = 3,
	EQRDT_Chest = 4,
	EQRDT_Card = 5,
	EQRDT_Item = 6,
	EQRDT_Texture = 7,
	EQRDT_MAX = 8,
};

enum class EModelHighlightType : uint8_t {
	HIGHLIGHT_None = 0,
	HIGHLIGHT_Body = 1,
	HIGHLIGHT_Head = 2,
	HIGHLIGHT_Weapon = 3,
	HIGHLIGHT_MAX = 4,
};

enum class UIEOML_REWARD_TYPE : uint8_t {
	UIEOMLRT_COMP_RANK = 0,
	UIEOMLRT_CHAMP_XP = 1,
	UIEOMLRT_ACCOUNT_XP = 2,
	UIEOMLRT_BATTLE_PASS = 3,
	UIEOMLRT_MAX = 4,
};

enum class PIEPawnMeshTypes : uint8_t {
	PIEMESH_UseMeshID = 0,
	PIEMESH_MAX = 1,
};

enum class EDoubleClickDir : uint8_t {
	DCLICK_None = 0,
	DCLICK_Left = 1,
	DCLICK_Right = 2,
	DCLICK_Forward = 3,
	DCLICK_Back = 4,
	DCLICK_Active = 5,
	DCLICK_Done = 6,
	DCLICK_MAX = 7,
};

enum class EMetaGameState : uint8_t {
	GAMESTATE_NONE = 0,
	GAMESTATE_NEUTRAL = 1,
	GAMESTATE_ACTIVE_POINT = 2,
	GAMESTATE_ATTACKING = 3,
	GAMESTATE_DEFENDING = 4,
	GAMESTATE_TITAN_BATTLE = 5,
	GAMESTATE_MAX = 6,
};

enum class UINOTIFICATIONCENTER_STATE : uint8_t {
	UINCS_NOTIFICATIONS = 0,
	UINCS_MAX = 1,
};

enum class ECurveSetTypes : uint8_t {
	CST_None = 0,
	CST_Recoil = 1,
	CST_RecoilSimple = 2,
	CST_AccuracyBloom = 3,
	CST_DamageFalloff = 4,
	CST_DamageFalloffAOE = 5,
	CST_DamagePerShotHit = 6,
	CST_SpreadTendency = 7,
	CST_RuckusSpinUpControl = 8,
	CST_GravityFromZVelocity = 9,
	CST_AirControlFromZVelocity = 10,
	CST_WallRunVerticalMovement = 11,
	CST_AimAssist = 12,
	CST_AimAssistKeyframes = 13,
	CST_AimAcceleration = 14,
	CST_TargetTracking = 15,
	CST_HitMarkerScaleByDamage = 16,
	CST_GravityFromCustom = 17,
	CST_ProjectileSpeedOverTime = 18,
	CST_FlakInhandSlow = 19,
	CST_FlakInhandKnockback = 20,
	CST_ThreatLevelByRange = 21,
	CST_AimAssistBoundsScale = 22,
	CST_ProjFrictionOverTime = 23,
	CST_ProjGravityOverTime = 24,
	CST_ScopeWeaponFOV = 25,
	CST_ScopeWorldFOV = 26,
	CST_AimAssistBoundsByFOV = 27,
	CST_SpeedOverDistance = 28,
	CST_PositionFromPitch = 29,
	CST_RecoilVisual = 30,
	CST_StackDamageMultiplier = 31,
	CST_MoveSpeedOverTime = 32,
	CST_AccelerationOverTime = 33,
	CST_ResistanceFromDeviation = 34,
	CST_BulletMagnetOverDist = 35,
	CST_HitReactions = 36,
	CST_GyroSensitivity = 37,
	CST_DamageFromDistance = 38,
	CST_DamageFromCharge = 39,
	CST_DamageOverTime = 40,
	CST_SpinUpScaling = 41,
	CST_YagorathMovementAcceleration = 42,
	CST_YagorathmovementDeceleration = 43,
	CST_YagorathmovementPassiveDeceleration = 44,
	CST_MAX = 45,
};

enum class MiniMapIconLayer : uint8_t {
	MMap_Layer_Enemy_Deployable = 0,
	MMap_Layer_Friendly_Deployable = 1,
	MMap_Layer_Enemy_Bot = 2,
	MMap_Layer_Friendly_Bot = 3,
	MMap_Layer_Enemy_Player = 4,
	MMap_Layer_Friendly_Player = 5,
	MMap_Layer_Neutral_Factory = 6,
	MMap_Layer_Friendly_Factory = 7,
	MMap_Layer_Enemy_Factory = 8,
	MMap_Layer_Neutral_CapturePoint = 9,
	MMap_Layer_Enemy_CapturePoint = 10,
	MMap_Layer_Friendly_CapturePoint = 11,
	MMap_Layer_Targeting = 12,
	MMap_Layer_Local_Player_Pet = 13,
	MMap_Layer_Local_Player = 14,
	MMap_Layer_MAX = 15,
};

enum class ECrossplayCombinedSetting : uint8_t {
	ECCS_AllowAll = 0,
	ECCS_GamepadOnly = 1,
	ECCS_KeyboardOnly = 2,
	ECCS_PlatformOnly = 3,
	ECCS_MAX = 4,
};

enum class EDestroyedAnimStages : uint8_t {
	EngineDestruction_FullHealth_Idle = 0,
	EngineDestruction_FirstDestruction = 1,
	EngineDestruction_SecondDestruction = 2,
	EngineDestruction_MAX = 3,
};

enum class UICHAMPIONSELECT_SORT_TYPES : uint8_t {
	UICSST_OWNERSHIPLEVEL = 0,
	UICSST_OWNERSHIPNAME = 1,
	UICSST_LEVEL = 2,
	UICSST_NAME = 3,
	UICSST_MAX = 4,
};

enum class EPaladinsTutorialEvent : uint8_t {
	PTE_Started = 0,
	PTE_HelperSpawned = 1,
	PTE_MovingToAutoShootingRange = 2,
	PTE_PlayerReachedAutoShootingRange = 3,
	PTE_WaitingForMovementAbility = 4,
	PTE_ReceivedMovementAbility = 5,
	PTE_PlayerReachedUltimateShootingRange = 6,
	PTE_PlayerUltimateComplete = 7,
	PTE_PlayerReachedLowerJumpArea = 8,
	PTE_PlayerReachedUpperJumpArea = 9,
	PTE_PlayerReachedObjective = 10,
	PTE_MoveBotToCapturePoint = 11,
	PTE_MoveBotToPayload = 12,
	PTE_Complete = 13,
	PTE_MAX = 14,
};

enum class EModuleType : uint8_t {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_MAX = 7,
};

enum class ESetMode : uint8_t {
	SetMode_Toggle = 0,
	SetMode_Enable = 1,
	SetMode_Disable = 2,
	SetMode_MAX = 3,
};

enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3,
};

enum class EDOFType : uint8_t {
	DOFType_SimpleDOF = 0,
	DOFType_ReferenceDOF = 1,
	DOFType_BokehDOF = 2,
	DOFType_MAX = 3,
};

enum class UICustomGameState : uint8_t {
	UICGS_GAME_LIST = 0,
	UICGS_CREATING_MAP = 1,
	UICGS_CREATING_SETTINGS = 2,
	UICGS_JOINING = 3,
	UICGS_LOBBY = 4,
	UICGS_GAME_STARTING = 5,
	UICGS_MAX = 6,
};

enum class EBaseBlendType : uint8_t {
	BBT_ByActorTag = 0,
	BBT_ByActorClass = 1,
	BBT_MAX = 2,
};

enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

enum class LoadoutState : uint8_t {
	ELS_AVATARS = 0,
	ELS_TITLES = 1,
	ELS_LOADING_FRAMES = 2,
	ELS_MOUNTS = 3,
	ELS_ANNOUNCERS = 4,
	ELS_SPRAYS = 5,
	ELS_DEATH_STAMPS = 6,
	ELS_MUSIC_PACKS = 7,
	ELS_DEATH_CARDS = 8,
	ELS_MAX = 9,
};

enum class MiniMapPortalLayer : uint8_t {
	MMap_Portal_Layer_Enemy = 0,
	MMap_Portal_Layer_Friendly = 1,
	MMap_Portal_Layer_MAX = 2,
};

enum class ELinkState : uint8_t {
	STATE_Initialized = 0,
	STATE_Ready = 1,
	STATE_Listening = 2,
	STATE_Connecting = 3,
	STATE_Connected = 4,
	STATE_ListenClosePending = 5,
	STATE_ConnectClosePending = 6,
	STATE_ListenClosing = 7,
	STATE_ConnectClosing = 8,
	STATE_MAX = 9,
};

enum class UIBattlePassOwnershipState : uint8_t {
	UIBPOS_Free = 0,
	UIBPOS_Paid = 1,
	UIBPOS_MAX = 2,
};

enum class ForceFaceActorReason : uint8_t {
	FFAR_Unknown = 0,
	FFAR_Ability = 1,
	FFAR_Tween = 2,
	FFAR_Death = 3,
	FFAR_Any = 4,
	FFAR_MAX = 5,
};

enum class ELoginStatus : uint8_t {
	LS_NotLoggedIn = 0,
	LS_UsingLocalProfile = 1,
	LS_LoggedIn = 2,
	LS_MAX = 3,
};

enum class UIStoreItemTab : uint8_t {
	UISIT_SKIN = 0,
	UISIT_WEAPON = 1,
	UISIT_EMOTE = 2,
	UISIT_MVPPOSE = 3,
	UISIT_AVATAR = 4,
	UISIT_SPRAY = 5,
	UISIT_MOUNT = 6,
	UISIT_ANNOUNCER = 7,
	UISIT_BUNDLE = 8,
	UISIT_MAX = 9,
};

enum class AzaanRetrieveState : uint8_t {
	AZAAN_STATE_NEUTRAL = 0,
	AZAAN_STATE_POSTSLAM = 1,
	AZAAN_STATE_POSTULT = 2,
	AZAAN_STATE_MAX = 3,
};

enum class ESaatiBuffType : uint8_t {
	SBT_None = 0,
	SBT_Damage = 1,
	SBT_Movement = 2,
	SBT_MAX = 3,
};

enum class LocalViewerRangeState : uint8_t {
	LVRS_EffectiveRange = 0,
	LVRS_MaxRange = 1,
	LVRS_BeyondRange = 2,
	LVRS_MAX = 3,
};

enum class SkeletalMeshOptimizationImportance : uint8_t {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6,
};

enum class SETTING_VGSTYPE : uint8_t {
	SVGST_DEFAULT = 0,
	SVGST_RADIAL = 1,
	SVGST_TEXT = 2,
	SVGST_LEGACY = 3,
	SVGST_MAX = 4,
};

enum class EImpactDamageOverride : uint8_t {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3,
};

enum class DeviceTimerBarType : uint8_t {
	DTBT_None = 0,
	DTBT_PreHit = 1,
	DTBT_PostHit = 2,
	DTBT_PersistTime = 3,
	DTBT_RefireTime = 4,
	DTBT_FireHold = 5,
	DTBT_Custom = 6,
	DTBT_MAX = 7,
};

enum class AbilityModifiedByDevice : uint8_t {
	AMBD_Armor = 0,
	AMBD_Weapon = 1,
	AMBD_AltFire = 2,
	AMBD_Ability = 3,
	AMBD_Movement = 4,
	AMBD_Ultimate = 5,
	AMBD_MAX = 6,
};

enum class ERBCollisionChannel : uint8_t {
	RBCC_Default = 0,
	RBCC_Nothing = 1,
	RBCC_Pawn = 2,
	RBCC_Vehicle = 3,
	RBCC_Water = 4,
	RBCC_GameplayPhysics = 5,
	RBCC_EffectPhysics = 6,
	RBCC_Untitled1 = 7,
	RBCC_Untitled2 = 8,
	RBCC_Untitled3 = 9,
	RBCC_Untitled4 = 10,
	RBCC_Cloth = 11,
	RBCC_FluidDrain = 12,
	RBCC_SoftBody = 13,
	RBCC_FracturedMeshPart = 14,
	RBCC_BlockingVolume = 15,
	RBCC_DeadPawn = 16,
	RBCC_Clothing = 17,
	RBCC_ClothingCollision = 18,
	RBCC_MAX = 19,
};

enum class eBotSelection : uint8_t {
	BS_RANDOM = 0,
	BS_SEQUENTIAL = 1,
	BS_MAX = 2,
};

enum class ECanvasBlendMode : uint8_t {
	BLEND_CANVAS_Opaque = 0,
	BLEND_CANVAS_Masked = 1,
	BLEND_CANVAS_Translucent = 2,
	BLEND_CANVAS_Additive = 3,
	BLEND_CANVAS_Modulate = 4,
	BLEND_CANVAS_ModulateAndAdd = 5,
	BLEND_CANVAS_SoftMasked = 6,
	BLEND_CANVAS_AlphaComposite = 7,
	BLEND_CANVAS_DitheredTranslucent = 8,
	BLEND_CANVAS_AlphaOnly = 9,
	BLEND_CANVAS_MAX = 10,
};

enum class TDMProgressState : uint8_t {
	TDMPS_None = 0,
	TDMPS_Low = 1,
	TDMPS_Medium = 2,
	TDMPS_High = 3,
	TDMPS_MAX = 4,
};

enum class ELightShadowMode : uint8_t {
	LightShadow_Normal = 0,
	LightShadow_Modulate = 1,
	LightShadow_ModulateBetter = 2,
	LightShadow_MAX = 3,
};

enum class EEmote : uint8_t {
	EMOTE_None = 0,
	EMOTE_Wait = 1,
	EMOTE_Shutup = 2,
	EMOTE_Chatter = 3,
	EMOTE_Achievement = 4,
	EMOTE_Taunt = 5,
	EMOTE_Joke = 6,
	EMOTE_Laugh = 7,
	EMOTE_Health_Low = 8,
	EMOTE_Kill_Streak = 9,
	EMOTE_Intro = 10,
	EMOTE_Death = 11,
	EMOTE_DeathDirected = 12,
	EMOTE_DeathGrunt = 13,
	EMOTE_DeathFall = 14,
	EMOTE_FirstBlood = 15,
	EMOTE_Ability1 = 16,
	EMOTE_Ability2 = 17,
	EMOTE_Ability3 = 18,
	EMOTE_AbilityUltimate = 19,
	EMOTE_Mount = 20,
	EMOTE_SetOnFire = 21,
	EMOTE_StunnedOrFrozen = 22,
	EMOTE_Kill = 23,
	EMOTE_KillSiegeEngine = 24,
	EMOTE_KillGate = 25,
	EMOTE_LevelUp = 26,
	EMOTE_Victory = 27,
	EMOTE_Defeat = 28,
	EMOTE_PickWeaponCard = 29,
	EMOTE_PickArmorCard = 30,
	EMOTE_PickAbilityCard = 31,
	EMOTE_KillAssist = 32,
	EMOTE_UniqueCombat = 33,
	EMOTE_KillAbility1 = 34,
	EMOTE_KillAbility2 = 35,
	EMOTE_CapturePoint = 36,
	EMOTE_TakingDamage = 37,
	EMOTE_EnemyCapturingPoint = 38,
	EMOTE_OnPointAndFiring = 39,
	EMOTE_HealedByTeammate = 40,
	EMOTE_HealMe = 41,
	EMOTE_Weapon = 42,
	EMOTE_Idle = 43,
	EMOTE_Credits = 44,
	EMOTE_HelpTheTank = 45,
	EMOTE_WaitForTeam = 46,
	EMOTE_AbilityOnCooldown = 47,
	EMOTE_Mastery1 = 48,
	EMOTE_Mastery9 = 49,
	EMOTE_Mastery12 = 50,
	EMOTE_Mastery15 = 51,
	EMOTE_Train = 52,
	EMOTE_GruntHit = 53,
	EMOTE_GruntJump = 54,
	EMOTE_BehindUs = 55,
	EMOTE_AboveUs = 56,
	EMOTE_Sniper = 57,
	EMOTE_Respawn = 58,
	EMOTE_MAX = 59,
};

enum class RecoilHitDir : uint8_t {
	RECOIL_DIR_FromFront = 0,
	RECOIL_DIR_FromBack = 1,
	RECOIL_DIR_FromLeft = 2,
	RECOIL_DIR_FromRight = 3,
	RECOIL_DIR_MAX = 4,
};

enum class GC_STEAM_TXN_TYPES : uint8_t {
	GC_STT_INVALID = 0,
	GC_STT_GETUSERINFO = 1,
	GC_STT_INIT = 2,
	GC_STT_FINALIZE = 3,
	GC_STT_DECLINE = 4,
	GC_STT_MAX = 5,
};

enum class EProfilePreferredColorOptions : uint8_t {
	PPCO_None = 0,
	PPCO_Black = 1,
	PPCO_White = 2,
	PPCO_Yellow = 3,
	PPCO_Orange = 4,
	PPCO_Pink = 5,
	PPCO_Red = 6,
	PPCO_Purple = 7,
	PPCO_Blue = 8,
	PPCO_Green = 9,
	PPCO_Brown = 10,
	PPCO_Silver = 11,
	PPCO_MAX = 12,
};

enum class EShadowProjectionTechnique : uint8_t {
	ShadowProjTech_Default = 0,
	ShadowProjTech_PCF = 1,
	ShadowProjTech_VSM = 2,
	ShadowProjTech_BPCF_Low = 3,
	ShadowProjTech_BPCF_Medium = 4,
	ShadowProjTech_BPCF_High = 5,
	ShadowProjTech_MAX = 6,
};

enum class ChargeStopOnHitType : uint8_t {
	CSHT_None = 0,
	CSHT_AnyValidTarget = 1,
	CSHT_GodOnly = 2,
	CSHT_GodOrGodPossessed = 3,
	CSHT_NotGod = 4,
	CSHT_MAX = 5,
};

enum class CameraTransType : uint8_t {
	CTT_None = 0,
	CTT_PanRight = 1,
	CTT_PanLeft = 2,
	CTT_PanUp = 3,
	CTT_PanDown = 4,
	CTT_MAX = 5,
};

enum class EEdgeHandlingStatus : uint8_t {
	EHS_AddedBothDirs = 0,
	EHS_Added0to1 = 1,
	EHS_Added1to0 = 2,
	EHS_AddedNone = 3,
	EHS_MAX = 4,
};

enum class ECameraAnimPlaySpace : uint8_t {
	CAPS_CameraLocal = 0,
	CAPS_World = 1,
	CAPS_UserDefined = 2,
	CAPS_MAX = 3,
};

enum class EFilterMode : uint8_t {
	FM_None = 0,
	FM_Ignore = 1,
	FM_Affect = 2,
	FM_MAX = 3,
};

enum class NotificationType : uint8_t {
	NT_NONE = 0,
	NT_ACQUISITION = 1,
	NT_ACHIEVEMENT = 2,
	NT_SOCIAL = 3,
	NT_QUEST = 4,
	NT_MAX = 5,
};

enum class EProfileXInversionOptions : uint8_t {
	PXIO_Off = 0,
	PXIO_On = 1,
	PXIO_MAX = 2,
};

enum class GAME_WIN_STATE : uint8_t {
	GWS_NONE = 0,
	GWS_TASKFORCE_TWO_WON = 1,
	GWS_TASKFORCE_ONE_WON = 2,
	GWS_TIE = 3,
	GWS_MAX = 4,
};

enum class ENavMeshEdgeType : uint8_t {
	NAVEDGE_Normal = 0,
	NAVEDGE_Mantle = 1,
	NAVEDGE_Coverslip = 2,
	NAVEDGE_SwatTurn = 3,
	NAVEDGE_DropDown = 4,
	NAVEDGE_PathObject = 5,
	NAVEDGE_BackRefDummy = 6,
	NAVEDGE_Jump = 7,
	NAVEDGE_MAX = 8,
};

enum class ERecoilStart : uint8_t {
	ERS_Zero = 0,
	ERS_Random = 1,
	ERS_MAX = 2,
};

enum class EMaterialPositionTransform : uint8_t {
	TRANSFORMPOS_World = 0,
	TRANSFORMPOS_MAX = 1,
};

enum class ENPCVoices : uint8_t {
	NPCVOICE_VendorMale01 = 0,
	NPCVOICE_VendorMale02 = 1,
	NPCVOICE_VendorMale03 = 2,
	NPCVOICE_VendorMale04 = 3,
	NPCVOICE_VendorMale05 = 4,
	NPCVOICE_VendorMale06 = 5,
	NPCVOICE_VendorMale07 = 6,
	NPCVOICE_VendorMale08 = 7,
	NPCVOICE_VendorMale09 = 8,
	NPCVOICE_VendorMale10 = 9,
	NPCVOICE_VendorFemale01 = 10,
	NPCVOICE_VendorFemale02 = 11,
	NPCVOICE_VendorFemale03 = 12,
	NPCVOICE_VendorFemale04 = 13,
	NPCVOICE_VendorFemale05 = 14,
	NPCVOICE_VendorFemale06 = 15,
	NPCVOICE_VendorFemale07 = 16,
	NPCVOICE_VendorFemale08 = 17,
	NPCVOICE_VendorFemale09 = 18,
	NPCVOICE_VendorFemale10 = 19,
	NPCVOICE_MAX = 20,
};

enum class EOnlineContentType : uint8_t {
	OCT_Downloaded = 0,
	OCT_SaveGame = 1,
	OCT_MAX = 2,
};

enum class ERepulsorWeightMethod : uint8_t {
	RWM_Cubic = 0,
	RWM_Lerp = 1,
	RWM_Slerp = 2,
	RWM_MAX = 3,
};

enum class EPartyBeaconClientState : uint8_t {
	PBCS_None = 0,
	PBCS_Connecting = 1,
	PBCS_Connected = 2,
	PBCS_ConnectionFailed = 3,
	PBCS_AwaitingResponse = 4,
	PBCS_Closed = 5,
	PBCS_MAX = 6,
};

enum class DistributionParamMode : uint8_t {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3,
};

enum class EOnlineProfilePropertyOwner : uint8_t {
	OPPO_None = 0,
	OPPO_OnlineService = 1,
	OPPO_Game = 2,
	OPPO_MAX = 3,
};

enum class EDebugDisplayType : uint8_t {
	DDT_FIELD = 0,
	DDT_STATE = 1,
	DDT_PROPERTY = 2,
	DDT_GAME_PHASE = 3,
	DDT_MAX = 4,
};

enum class EUISettingUpdate : uint8_t {
	UISU_All = 0,
	UISU_AudioVideo = 1,
	UISU_Interface = 2,
	UISU_Control = 3,
	UISU_Targeting = 4,
	UISU_Gamepad = 5,
	UISU_MAX = 6,
};

enum class NPCAnimationStates : uint8_t {
	NPCAS_NoCustomerPresent = 0,
	NPCAS_CustomerPresent = 1,
	NPCAS_Greeting = 2,
	NPCAS_NoSale = 3,
	NPCAS_CallOut = 4,
	NPCAS_Sale = 5,
	NPCAS_TransCustomerPresentToNotPresent = 6,
	NPCAS_None = 7,
	NPCAS_MAX = 8,
};

enum class BoneBreakOption : uint8_t {
	BONEBREAK_SoftPreferred = 0,
	BONEBREAK_AutoDetect = 1,
	BONEBREAK_RigidPreferred = 2,
	BONEBREAK_MAX = 3,
};

enum class EActionLog : uint8_t {
	EAL_NONE = 0,
	EAL_STORE = 1,
	EAL_BUYITEM = 2,
	EAL_CENTERPLAY = 3,
	EAL_QUICK1 = 4,
	EAL_QUICK2 = 5,
	EAL_QUICK3 = 6,
	EAL_QUICK4 = 7,
	EAL_JOINSOLO = 8,
	EAL_JOINPARTY = 9,
	EAL_INVITEPARTY = 10,
	EAL_CANCELPARTY = 11,
	EAL_LEAVEQUEUE = 12,
	EAL_PLAYAGAIN = 13,
	EAL_RENTITEM = 14,
	EAL_JSONPANEL = 15,
	EAL_GIFTING = 16,
	EAL_MAX = 17,
};

enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet = 0,
	EDPV_VelocityX = 1,
	EDPV_VelocityY = 2,
	EDPV_VelocityZ = 3,
	EDPV_VelocityMag = 4,
	EDPV_MAX = 5,
};

enum class EMeshBeaconClientState : uint8_t {
	MBCS_None = 0,
	MBCS_Connecting = 1,
	MBCS_Connected = 2,
	MBCS_ConnectionFailed = 3,
	MBCS_AwaitingResponse = 4,
	MBCS_Closed = 5,
	MBCS_MAX = 6,
};

enum class ECastMode : uint8_t {
	CM_Default = 0,
	CM_Quick = 1,
	CM_Instant = 2,
	CM_Use_Global = 3,
	CM_MAX = 4,
};

enum class UISTREETSTYLE_STATE : uint8_t {
	UISSS_HOME = 0,
	UISSS_REWARDS = 1,
	UISSS_QUESTS = 2,
	UISSS_OVERVIEW = 3,
	UISSS_MAX = 4,
};

enum class ECoverGroupFillAction : uint8_t {
	CGFA_Overwrite = 0,
	CGFA_Add = 1,
	CGFA_Remove = 2,
	CGFA_Clear = 3,
	CGFA_Cylinder = 4,
	CGFA_MAX = 5,
};

enum class EPATAState : uint8_t {
	PATA_FixedAll = 0,
	PATA_FixedLower = 1,
	PATA_MotorRagdoll = 2,
	PATA_Floppy = 3,
	PATA_Recover = 4,
	PATA_MAX = 5,
};

enum class EZPrepassOverride : uint8_t {
	ZPPO_UseRHIDefault = 0,
	ZPPO_Disabled = 1,
	ZPPO_AllSolidObjects = 2,
	ZPPO_SpecificObjects = 3,
	ZPPO_MAX = 4,
};

enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5,
};

enum class UIMapFrame : uint8_t {
	UIMF_NONE = 0,
	UIMF_ENCHANTED_FOREST = 1,
	UIMF_TEMPLE_RUINS = 2,
	UIMF_OUTPOST = 3,
	UIMF_GLACIER_KEEP = 4,
	UIMF_SERPENT_TEMPLE = 5,
	UIMF_SINISTRAL = 6,
	UIMF_ARENA = 7,
	UIMF_DEATHGATE = 8,
	UIMF_DISTRICT = 9,
	UIMF_GLACIER_KEEP_V2 = 10,
	UIMF_MAX = 11,
};

enum class TG_PAWN_PROPERTIES : uint8_t {
	TGPIDX_CHARACTER_VISION_RANGE = 0,
	TGPIDX_ENERGY_MAX = 1,
	TGPIDX_ENERGY = 2,
	TGPIDX_EP5 = 3,
	TGPIDX_WALL_JUMP_HEIGHT_INCREASE = 4,
	TGPIDX_RESPAWN_TIME_REDUCTION_PERC = 5,
	TGPIDX_STEALTH_SOFT_REVEAL_DISTANCE = 6,
	TGPIDX_AIR_CONTROL = 7,
	TGPIDX_GROUND_SPEED = 8,
	TGPIDX_AIR_SPEED = 9,
	TGPIDX_JUMP_SPEED_MODIFIER = 10,
	TGPIDX_JUMP_HEIGHT_MODIFIER = 11,
	TGPIDX_MOUNT_GROUND_SPEED = 12,
	TGPIDX_MOUNT_TIME = 13,
	TGPIDX_DROGOZ_ENERGY = 14,
	TGPIDX_DROGOZ_ENERGY_MAX = 15,
	TGPIDX_ORACLE_ORB_STACK = 16,
	TGPIDX_HEALTH_MAX = 17,
	TGPIDX_HEALTH_MAX_PERCENT = 18,
	TGPIDX_HEALTH = 19,
	TGPIDX_HP5 = 20,
	TGPIDX_MANA_MAX = 21,
	TGPIDX_MANA = 22,
	TGPIDX_MP5 = 23,
	TGPIDX_STEALTH_GUARD = 24,
	TGPIDX_VISIBLE_THROUGH_WALLS = 25,
	TGPIDX_VISIBLE_THROUGH_WALLS_TASKFORCE = 26,
	TGPIDX_VISIBLE_THROUGH_WALLS_INSTIGATOR_ONLY = 27,
	TGPIDX_SEE_THROUGH_WALLS = 28,
	TGPIDX_VISIBLE_THROUGH_STEALTH = 29,
	TGPIDX_VISIBLE_THROUGH_STEALTH_TASKFORCE = 30,
	TGPIDX_VISIBLE_THROUGH_STEALTH_INSTIGATOR_ONLY = 31,
	TGPIDX_SEE_THROUGH_STEALTH = 32,
	TGPIDX_NUGGET_STEALER_FULL_HP = 33,
	TGPIDX_HOVER = 34,
	TGPIDX_CUSTOM_FLIGHT = 35,
	TGPIDX_NO_FRICTION = 36,
	TGPIDX_GRAVITY_SCALE = 37,
	TGPIDX_JUMP_HANG = 38,
	TGPIDX_SHIELD = 39,
	TGPIDX_SHIELD_MAX = 40,
	TGPIDX_LIFESTEAL = 41,
	TGPIDX_LIFESTEAL_INSTIGATOR_ONLY = 42,
	TGPIDX_LIFESTEAL_TARGET = 43,
	TGPIDX_POWER_MAGICAL_BOT = 44,
	TGPIDX_POWER_PHYSICAL_BOT = 45,
	TGPIDX_PROTECTION_FEAR = 46,
	TGPIDX_PROTECTION_KNOCKBACK = 47,
	TGPIDX_PROTECTION_KNOCKUP = 48,
	TGPIDX_PROTECTION_SILENCE = 49,
	TGPIDX_PROTECTION_SLOW = 50,
	TGPIDX_PROTECTION_STUN = 51,
	TGPIDX_PROTECTION_PULL = 52,
	TGPIDX_PROTECTION_CC = 53,
	TGPIDX_PROTECTION_ON_FIRE = 54,
	TGPIDX_PROTECTION_BLEEDING = 55,
	TGPIDX_PROTECTION_POISON = 56,
	TGIPDX_PROTECTION_POLYMORPH = 57,
	TGIPDX_PROTECTION_LIFT = 58,
	TGPIDX_PROTECTION_DOT_DURATION = 59,
	TGPIDX_PROTECTION_DOT_DURATION_PERC = 60,
	TGPIDX_PROTECTION_DOT_DAMAGE_PERC = 61,
	TGPIDX_DEBUFF_IMMUNITY = 62,
	TGPIDX_REDUCE_DEBUFF_DURATION = 63,
	TGPIDX_CC_IMMUNITY = 64,
	TGPIDX_CC_IMMUNITY_SUPERIOR = 65,
	TGPIDX_SLOW_IMMUNITY = 66,
	TGPIDX_JUMP_PENALTY_IMMUNITY = 67,
	TGPIDX_TAUNT = 68,
	TGPIDX_POWER_PHYSICAL_PERC = 69,
	TGPIDX_POWER_MAGICAL_PERC = 70,
	TGPIDX_HEALING_DEALT_PERC = 71,
	TGPIDX_HEALING_TAKEN_PERC = 72,
	TGPIDX_HEALING_TAKEN_OTHERS_PERC = 73,
	TGPIDX_HEALING_DISABLED = 74,
	TGPIDX_DAMAGE_TAKEN_PERC = 75,
	TGPIDX_HEADSHOT_DAMAGE_REDUCTION = 76,
	TGPIDX_DAMAGE_DEALT_PERC = 77,
	TGPIDX_DAMAGE_DEALT_PERC_BASIC = 78,
	TGPIDX_DAMAGE_DEALT_PERC_PHYSICAL = 79,
	TGPIDX_DAMAGE_DEALT_PERC_MAGICAL = 80,
	TGPIDX_DAMAGE_DEALT_PERC_DEPLOYABLES = 81,
	TGPIDX_DAMAGE_DEALT_PERC_SHIELDS = 82,
	TGPIDX_DAMAGE_DEALT_FLAT = 83,
	TGPIDX_DAMAGE_DEALT_TO_FRONTLINE_PERC = 84,
	TGPIDX_POWER_PHYSICAL_ITEM = 85,
	TGPIDX_POWER_MAGICAL_ITEM = 86,
	TGPIDX_POWER_UTILITY_BOT = 87,
	TGPIDX_POWER_UTILITY_ITEM = 88,
	TGPIDX_MARKED = 89,
	TGPIDX_MARKED_INHAND = 90,
	TGPIDX_MINIMAP_LOS_IGNORED = 91,
	TGPIDX_MINIMAP_DETECTOR = 92,
	TGPIDX_BLOCK_DAMAGE_PERC = 93,
	TGPIDX_FRONTAL_IMMUNITY = 94,
	TGPIDX_NO_BACKPEDAL_PENALTY = 95,
	TGPIDX_HP5_PERC = 96,
	TGPIDX_HP5_PERC_OF_MAX_HEALTH = 97,
	TGPIDX_PHYSICAL_IMMUNITY = 98,
	TGPIDX_MAGICAL_IMMUNITY = 99,
	TGPIDX_DAMAGE_TAKEN_PERC_PHYS = 100,
	TGPIDX_DAMAGE_TAKEN_PERC_INHAND = 101,
	TGPIDX_DAMAGE_TAKEN_PERC_AOE = 102,
	TGPIDX_DAMAGE_TAKEN_PERC_DIRECT = 103,
	TGPIDX_DAMAGE_REDUCTION_PERC_PENETRATION = 104,
	TGPIDX_HEAL_BLOCK = 105,
	TGPIDX_INHAND_RELOAD_SPEED = 106,
	TGPIDX_INHAND_AMMO_CAPACITY = 107,
	TGPIDX_COMBAT_DURATION_REDUCTION_PERC = 108,
	TGPIDX_IGNORE_ACTOR_BLOCKING = 109,
	TGPIDX_FORCE_3P_VIEW = 110,
	TGPIDX_LOCK_INPUT = 111,
	TGPIDX_SCALE_MESH = 112,
	TGPIDX_SCALE_COLLISION_HEIGHT = 113,
	TGPIDX_SCALE_COLLISION_RADIUS = 114,
	TGPIDX_CONFUSED = 115,
	TGPIDX_NEAR_DAMAGE_PERCENT = 116,
	TGPIDX_FAR_DAMAGE_PERCENT = 117,
	TGPIDX_BLEEDING = 118,
	TGPIDX_ON_FIRE = 119,
	TGPIDX_POISONED = 120,
	TGPIDX_FROZEN = 121,
	TGPIDX_INHAND_EFFECTIVE_AOE = 122,
	TGPIDX_INHAND_ABSOLUTE_AOE = 123,
	TGPIDX_PROC_CHANCE_MODIFIER = 124,
	TGPIDX_DOT_DURATION_PERC = 125,
	TGPIDX_ETHEREAL = 126,
	TGPIDX_INHAND_FIRE_OVERRIDE = 127,
	TGPIDX_HEALTH_FLOOR = 128,
	TGPIDX_LEAPING = 129,
	TGPIDX_DECOY_AGGRO = 130,
	TGPIDX_HAS_HEALING_EFFECT_UI_SELF = 131,
	TGPIDX_HAS_HEALING_EFFECT_UI_FRIEND = 132,
	TGPIDX_MARK_SHOT_MARK = 133,
	TGPIDX_MARK_SHOT_FIRING_AT_MARK = 134,
	TGPIDX_PURSUIT_FIRING_AT_TARGET = 135,
	TGPIDX_MESMERIZE = 136,
	TGPIDX_MARKED_FOR_PRESENCE = 137,
	TGPIDX_PRESENCE_BUFF = 138,
	TGPIDX_DISABLE_RAGDOLL = 139,
	TGPIDX_PET_HEALTH_PCT = 140,
	TGPIDX_ROOT = 141,
	TGPIDX_SOUL_ARMOR = 142,
	TGPIDX_SOUL_ARMOR_MAX = 143,
	TGPIDX_SHIELD_BUFF_PERCENT_ON_CREATE = 144,
	TGPIDX_MAX = 145,
	TG_PAWN_PROPERTIES_MAX = 146,
};

enum class EPetPhase : uint8_t {
	PETPHASE_Default = 0,
	PETPHASE_CodeOverride = 1,
	PETPHASE_Heel = 2,
	PETPHASE_Follow = 3,
	PETPHASE_Guard = 4,
	PETPHASE_MAX = 5,
};

enum class UIMatchLobbyHeaderText : uint8_t {
	UIMLHT_None = 0,
	UIMLHT_Selection = 1,
	UIMLHT_Customization = 2,
	UIMLHT_BanFriendly = 3,
	UIMLHT_BanEnemy = 4,
	UIMLHT_Trading = 5,
	UIMLHT_MatchStarting = 6,
	UIMLHT_MAX = 7,
};

enum class ETutorialUI : uint8_t {
	ETUI_Health = 0,
	ETUI_Auto = 1,
	ETUI_BattleAbility = 2,
	ETUI_MovementAbility = 3,
	ETUI_Alt = 4,
	ETUI_Ultimate = 5,
	ETUI_CapturePoint = 6,
	ETUI_Payload = 7,
	ETUI_ScoreSection = 8,
	ETUI_PushTime = 9,
	ETUI_Cards = 10,
	ETUI_Prompt = 11,
	ETUI_Killfeed = 12,
	ETUI_MAX = 13,
};

enum class EProfileYInversionOptions : uint8_t {
	PYIO_Off = 0,
	PYIO_On = 1,
	PYIO_MAX = 2,
};

enum class ClothMovementScaleGen : uint8_t {
	ECMDM_DistToFixedVert = 0,
	ECMDM_VertexBoneWeight = 1,
	ECMDM_Empty = 2,
	ECMDM_MAX = 3,
};

enum class ESceneCaptureViewMode : uint8_t {
	SceneCapView_Lit = 0,
	SceneCapView_Unlit = 1,
	SceneCapView_LitNoShadows = 2,
	SceneCapView_Wire = 3,
	SceneCapView_MAX = 4,
};

enum class DAMAGE_INFO_TYPE : uint8_t {
	DIT_None = 0,
	DIT_Death = 1,
	DIT_Damage = 2,
	DIT_Status = 3,
	DIT_Healing = 4,
	DIT_ManaBurn = 5,
	DIT_ManaRestore = 6,
	DIT_Objective = 7,
	DIT_Experience = 8,
	DIT_Currency = 9,
	DIT_Level = 10,
	DIT_CritDamage = 11,
	DIT_HeadShot = 12,
	DIT_Backstab = 13,
	DIT_KillingBlow = 14,
	DIT_Assist = 15,
	DIT_KillingBlowWrath = 16,
	DIT_ShieldDamage = 17,
	DIT_CappedDamage = 18,
	DIT_MAX = 19,
};

enum class DjBladesFace : uint8_t {
	eDBF_Base = 0,
	eDBF_VGS_Positive = 1,
	eDBF_VGS_Negative = 2,
	eDBF_VGS_Silly = 3,
	eDBF_Ability_2 = 4,
	eDBF_Ability_3 = 5,
	eDBF_CrowdControl = 6,
	eDBF_Death = 7,
	eDBF_MAX = 8,
};

enum class ERespawnBeaconChargingState : uint8_t {
	RBCS_Inactive = 0,
	RBCS_Waiting = 1,
	RBCS_BuildUp = 2,
	RBCS_Active = 3,
	RBCS_MAX = 4,
};

enum class FlashTextureRescale : uint8_t {
	FlashTextureScale_High = 0,
	FlashTextureScale_Low = 1,
	FlashTextureScale_NextLow = 2,
	FlashTextureScale_Mult4 = 3,
	FlashTextureScale_None = 4,
	FlashTextureScale_MAX = 5,
};

enum class EStandbyType : uint8_t {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3,
};

enum class EAudioDeviceSharing : uint8_t {
	ADS_Exclusive = 0,
	ADS_Private = 1,
	ADS_Shared = 2,
	ADS_MAX = 3,
};

enum class ETargetSelector : uint8_t {
	TargetSelect_Closest = 0,
	TargetSelect_Weakest = 1,
	TargetSelect_Strongest = 2,
	TargetSelect_LowestPercentHealth = 3,
	TargetSelect_Random = 4,
	TargetSelect_MAX = 5,
};

enum class SIEGE_TIER : uint8_t {
	SGT_NONE = 0,
	SGT_TOWERA = 1,
	SGT_TOWERB = 2,
	SGT_CASTLE = 3,
	SGT_MAX = 4,
};

enum class ETrailTaperMethod : uint8_t {
	PETTM_None = 0,
	PETTM_Full = 1,
	PETTM_Partial = 2,
	PETTM_MAX = 3,
};

enum class LoadoutValidationResult : uint8_t {
	LVR_Valid = 0,
	LVR_Invalid = 1,
	LVR_InvalidName = 2,
	LVR_InvalidItem = 3,
	LVR_ItemCountExceeded = 4,
	LVR_ItemCountInsufficient = 5,
	LVR_ItemQuantityExceeded = 6,
	LVR_ItemQuantityInsufficient = 7,
	LVR_ItemsTotalExceeded = 8,
	LVR_ItemsTotalInsufficient = 9,
	LVR_ContainsDuplicates = 10,
	LVR_MAX = 11,
};

enum class EDebugBreakType : uint8_t {
	DEBUGGER_NativeOnly = 0,
	DEBUGGER_ScriptOnly = 1,
	DEBUGGER_Both = 2,
	DEBUGGER_MAX = 3,
};

enum class EShakeParam : uint8_t {
	ESP_OffsetRandom = 0,
	ESP_OffsetZero = 1,
	ESP_MAX = 2,
};

enum class UIDamageSeverity : uint8_t {
	UIDAMAGE_Light = 0,
	UIDAMAGE_Medium = 1,
	UIDAMAGE_Heavy = 2,
	UIDAMAGE_AOEMedium = 3,
	UIDAMAGE_AOEHeavy = 4,
	UIDAMAGE_MAX = 5,
};

enum class EDynamicLightEnvironmentBoundsMethod : uint8_t {
	DLEB_OwnerComponents = 0,
	DLEB_ManualOverride = 1,
	DLEB_ActiveComponents = 2,
	DLEB_MAX = 3,
};

enum class EInAppMessageInterfaceDelegate : uint8_t {
	IAMD_InAppSMSUIComplete = 0,
	IAMD_InAppEmailComplete = 1,
	IAMD_MAX = 2,
};

enum class TG_EQUIP_POINT : uint8_t {
	EQP_NONE = 0,
	EQP_AUTO = 1,
	EQP_OFFHAND_2 = 2,
	EQP_OFFHAND_3 = 3,
	EQP_OFFHAND_4 = 4,
	EQP_CARD_2 = 5,
	EQP_RECALL = 6,
	EQP_EMOTE = 7,
	EQP_BURN_CARD_2 = 8,
	EQP_BURN_CARD_3 = 9,
	EQP_BURN_CARD_4 = 10,
	EQP_BURN_CARD_5 = 11,
	EQP_SUPPORT_3 = 12,
	EQP_REGEN = 13,
	EQP_SUPPORT_4 = 14,
	EQP_ULT_CHARGE = 15,
	EQP_ALT_FIRE = 16,
	EQP_SPRAY = 17,
	EQP_SUPPORT = 18,
	EQP_CARD_3 = 19,
	EQP_CARD_4 = 20,
	EQP_CARD_5 = 21,
	EQP_CARD_6 = 22,
	EQP_MOUNT = 23,
	EQP_COMBO = 24,
	EQP_MVPPOSE = 25,
	EQP_TALENT = 26,
	EQP_PROPERTY_DEBUG = 27,
	EQP_BURN_CARD_6 = 28,
	EQP_BURN_CARD_7 = 29,
	EQP_UNUSED_2 = 30,
	EQP_GAME_MODE_RESERVED = 31,
	EQP_UNUSED_3 = 32,
	EQP_UNUSED_4 = 33,
	EQP_UNUSED_5 = 34,
	EQP_UNUSED_6 = 35,
	EQP_UNUSED_7 = 36,
	EQP_UNUSED_8 = 37,
	EQP_UNUSED_9 = 38,
	EQP_UNUSED_10 = 39,
	EQP_UNUSED_11 = 40,
	EQP_UNUSED_12 = 41,
	EQP_UNUSED_13 = 42,
	EQP_UNUSED_14 = 43,
	EQP_UNUSED_15 = 44,
	EQP_UNUSED_16 = 45,
	EQP_UNUSED_17 = 46,
	EQP_UNUSED_18 = 47,
	EQP_UNUSED_19 = 48,
	EQP_MAX = 49,
};

enum class EHealthTickColor_Player : uint8_t {
	EHTCP_Invalid = 0,
	EHTCP_Blue = 1,
	EHTCP_Red = 2,
	EHTCP_Purple = 3,
	EHTCP_Orange = 4,
	EHTCP_Yellow = 5,
	EHTCP_Shadow = 6,
	EHTCP_Cauterized = 7,
	EHTCP_Rainbow = 8,
	EHTCP_Armor = 9,
	EHTCP_DeepRed = 10,
	EHTCP_MAX = 11,
};

enum class EMeshCameraFacingOptions : uint8_t {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13,
};

enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2,
};

enum class TGT_EVENT : uint8_t {
	TGTE_DONE = 0,
	TGTE_START = 1,
	TGTE_UPDATE = 2,
	TGTE_PAUSED = 3,
	TGTE_MAX = 4,
};

enum class TelepunchAnimState : uint8_t {
	TelepunchAnimState_Buildup = 0,
	TelepunchAnimState_Travel = 1,
	TelepunchAnimState_HitOutro = 2,
	TelepunchAnimState_PreTravelMissOutro = 3,
	TelepunchAnimState_PostTravelMissOutro = 4,
	TelepunchAnimState_MAX = 5,
};

enum class EHnHAcquisitionState : uint8_t {
	EHNHS_None = 0,
	EHNHS_Blessing = 1,
	EHNHS_Acquisition = 2,
	EHNHS_Seal = 3,
	EHNHS_MAX = 4,
};

enum class SCORE_TYPE : uint8_t {
	STYPE_REPPTS = 0,
	STYPE_KILLS = 1,
	STYPE_ASSISTS = 2,
	STYPE_DAMAGETAKEN = 3,
	STYPE_DAMAGE = 4,
	STYPE_BUFFVALUE = 5,
	STYPE_HEALING = 6,
	STYPE_DEFENSE = 7,
	STYPE_DEATHS = 8,
	STYPE_OBJS = 9,
	STYPE_KILLS_BOT = 10,
	STYPE_EARNED_XP = 11,
	STYPE_EARNED_GOLD = 12,
	STYPE_CURRENT_GOLD = 13,
	STYPE_GOLD_PER_MIN = 14,
	STYPE_XP_PER_MIN = 15,
	STYPE_PLAYER_DMG = 16,
	STYPE_BOT_DMG = 17,
	STYPE_STRUCT_DMG = 18,
	STYPE_OBJ_ASSISTS = 19,
	STYPE_KILLS_SOLO = 20,
	STYPE_DMG_MITIGATED = 21,
	STYPE_KILLS_TOTAL = 22,
	STYPE_MAX = 23,
};

enum class ERaumShardCache : uint8_t {
	RSC_None = 0,
	RSC_Health = 1,
	RSC_Stacks = 2,
	RSC_HealthAndStacks = 3,
	RSC_MAX = 4,
};

enum class EDoorType : uint8_t {
	DOOR_Shoot = 0,
	DOOR_Touch = 1,
	DOOR_MAX = 2,
};

enum class EPacketSizeMultiplier : uint8_t {
	EPSM_5 = 0,
	EPSM_9 = 1,
	EPSM_17 = 2,
	EPSM_33 = 3,
	EPSM_65 = 4,
	EPSM_129 = 5,
	EPSM_MAX = 6,
};

enum class EFacebookIntegrationDelegate : uint8_t {
	FID_AuthorizationComplete = 0,
	FID_FacebookRequestComplete = 1,
	FID_DialogComplete = 2,
	FID_FriendsListComplete = 3,
	FID_MAX = 4,
};

enum class EBlendMode : uint8_t {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_ModulateAndAdd = 5,
	BLEND_SoftMasked = 6,
	BLEND_AlphaComposite = 7,
	BLEND_DitheredTranslucent = 8,
	BLEND_MAX = 9,
};

enum class EProfileAutoCenterOptions : uint8_t {
	PACO_Off = 0,
	PACO_On = 1,
	PACO_MAX = 2,
};

enum class ELineMode : uint8_t {
	LMODE_auto = 0,
	LMODE_DOS = 1,
	LMODE_UNIX = 2,
	LMODE_MAC = 3,
	LMODE_MAX = 4,
};

enum class ERootMotionRotationMode : uint8_t {
	RMRM_Ignore = 0,
	RMRM_RotateActor = 1,
	RMRM_MAX = 2,
};

enum class ERewardValueType : uint8_t {
	RVT_None = 0,
	RVT_Initial = 1,
	RVT_Spool = 2,
	RVT_Kill = 3,
	RVT_Assist = 4,
	RVT_Taken = 5,
	RVT_Healing = 6,
	RVT_Mitigated = 7,
	RVT_Damage = 8,
	RVT_Objective = 9,
	RVT_Captured = 10,
	RVT_Capturing = 11,
	RVT_Contesting = 12,
	RVT_Destroyed = 13,
	RVT_PushingPayload = 14,
	RVT_ContestingPayload = 15,
	RVT_RoundWon = 16,
	RVT_SuccessfulDefense = 17,
	RVT_SuccessfulPush = 18,
	RVT_Cheat = 19,
	RVT_Bounty = 20,
	RVT_Gather = 21,
	RVT_Gained = 22,
	RVT_OctaviaPassive = 23,
	RVT_CreditItem = 24,
	RVT_MAX = 25,
};

enum class TextureAddress : uint8_t {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3,
};

enum class EOnlineServerConnectionStatus : uint8_t {
	OSCS_NotConnected = 0,
	OSCS_Connected = 1,
	OSCS_ConnectionDropped = 2,
	OSCS_NoNetworkConnection = 3,
	OSCS_ServiceUnavailable = 4,
	OSCS_UpdateRequired = 5,
	OSCS_ServersTooBusy = 6,
	OSCS_DuplicateLoginDetected = 7,
	OSCS_InvalidUser = 8,
	OSCS_Banned = 9,
	OSCS_TooYoung = 10,
	OSCS_PSNUnavailable = 11,
	OSCS_MAX = 12,
};

enum class EGrabState : uint8_t {
	GRAB_None = 0,
	GRAB_ShellSpin = 1,
	GRAB_LazarusRush = 2,
	GRAB_VanguardUlt = 3,
	GRAB_PullGrab = 4,
	GRAB_AzaanDash = 5,
	GRAB_MAX = 6,
};

enum class EFlagballPossessionState : uint8_t {
	EFBPS_Neutral = 0,
	EFBPS_TF1 = 1,
	EFBPS_TF2 = 2,
	EFBPS_MAX = 3,
};

enum class UIACCESSORIES_STATE : uint8_t {
	UIAS_AVATARS = 0,
	UIAS_TITLES = 1,
	UIAS_LOADINGFRAMES = 2,
	UIAS_MOUNTS = 3,
	UIAS_ANNOUNCERS = 4,
	UIAS_SPRAYS = 5,
	UIAS_DEATHSTAMPS = 6,
	UIAS_MUSICPACKS = 7,
	UIAS_DEATHCARDS = 8,
	UIAS_MAX = 9,
};

enum class EGraphType : uint8_t {
	Graph_LINEAER = 0,
	Graph_MAX = 1,
};

enum class EBotDifficultyLevel : uint8_t {
	AIDifficulty_Practice = 0,
	AIDifficulty_Easy1 = 1,
	AIDifficulty_Easy2 = 2,
	AIDifficulty_Medium1 = 3,
	AIDifficulty_Medium2 = 4,
	AIDifficulty_Hard1 = 5,
	AIDifficulty_Hard2 = 6,
	AIDifficulty_Pro1 = 7,
	AIDifficulty_Pro2 = 8,
	AIDifficulty_Max = 9,
};

enum class ESpectatorMode : uint8_t {
	SPECMODE_Manual = 0,
	SPECMODE_Director = 1,
	SPECMODE_Assisted = 2,
	SPECMODE_Broadcast1 = 3,
	SPECMODE_Broadcast2 = 4,
	SPECMODE_Broadcast3 = 5,
	SPECMODE_Broadcast4 = 6,
	SPECMODE_MAX = 7,
};

enum class FxAudioMeshSource : uint8_t {
	FXAMS_Core = 0,
	FXAMS_Body = 1,
	FXAMS_Head = 2,
	FXAMS_Hands = 3,
	FXAMS_Weapon1P = 4,
	FXAMS_Weapon3P = 5,
	FXAMS_MAX = 6,
};

enum class SpiteAnimState : uint8_t {
	SAS_Intro = 0,
	SAS_HitChain = 1,
	SAS_MissOutro = 2,
	SAS_BounceOffOutro = 3,
	SAS_InterruptOutro = 4,
	SAS_MAX = 5,
};

enum class INITIALIZEABLE_BOOL : uint8_t {
	IBOOL_UNINITIALIZED = 0,
	IBOOL_FALSE = 1,
	IBOOL_TRUE = 2,
	IBOOL_MAX = 3,
};

enum class UIANIMTYPE : uint8_t {
	UIANIM_X = 0,
	UIANIM_Y = 1,
	UIANIM_ALPHA = 2,
	UIANIM_WIDTH = 3,
	UIANIM_HEIGHT = 4,
	UIANIM_XSCALE = 5,
	UIANIM_YSCALE = 6,
	UIANIM_VISIBLE = 7,
	UIANIM_ROTATION = 8,
	UIANIM_SOUND = 9,
	UIANIM_MAX = 10,
};

enum class EShadowFilterQuality : uint8_t {
	SFQ_Low = 0,
	SFQ_Medium = 1,
	SFQ_High = 2,
	SFQ_MAX = 3,
};

enum class EBeam2Method : uint8_t {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3,
};

enum class TG_MESH_SOURCE : uint8_t {
	TG_MESH_SOURCE_PAWN = 0,
	TG_MESH_SOURCE_IN_HAND_DEVICE = 1,
	TG_MESH_SOURCE_MAX = 2,
};

enum class EInterpCurveMode : uint8_t {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6,
};

enum class GameHudState : uint8_t {
	GHS_None = 0,
	GHS_Deploy = 1,
	GHS_Match = 2,
	GHS_Summary = 3,
	GHS_MAX = 4,
};

enum class ECoverLocationDescription : uint8_t {
	CoverDesc_None = 0,
	CoverDesc_InWindow = 1,
	CoverDesc_InDoorway = 2,
	CoverDesc_BehindCar = 3,
	CoverDesc_BehindTruck = 4,
	CoverDesc_OnTruck = 5,
	CoverDesc_BehindBarrier = 6,
	CoverDesc_BehindColumn = 7,
	CoverDesc_BehindCrate = 8,
	CoverDesc_BehindWall = 9,
	CoverDesc_BehindStatue = 10,
	CoverDesc_BehindSandbags = 11,
	CoverDesc_MAX = 12,
};

enum class LightBarState : uint8_t {
	ELBS_Standby = 0,
	ELBS_Lerping = 1,
	ELBS_Pulsing = 2,
	ELBS_MAX = 3,
};

enum class SpectatorStreamingMethod : uint8_t {
	SSM_OnlyLoadIfSpectating = 0,
	SSM_OnlyLoadIfNotSpectating = 1,
	SSM_AlwaysLoad = 2,
	SSM_MAX = 3,
};

enum class eForcedClientTutorialAction : uint8_t {
	FCTA_BlockAvl = 0,
	FCTA_UnblockAvl = 1,
	FCTA_Open = 2,
	FCTA_Close = 3,
	FCTA_MAX = 4,
};

enum class EHUDType : uint8_t {
	EHT_None = 0,
	EHT_Siege = 1,
	EHT_TDM = 2,
	EHT_HH_Climb = 3,
	EHT_HH_TDM = 4,
	EHT_Flagball = 5,
	EHT_Onslaught = 6,
	EHT_MAX = 7,
};

enum class EAchievementParticipationType : uint8_t {
	EAPT_Unknown = 0,
	EAPT_Individual = 1,
	EAPT_Group = 2,
	EAPT_MAX = 3,
};

enum class EPointSelection : uint8_t {
	PS_Normal = 0,
	PS_Random = 1,
	PS_Reverse = 2,
	PS_MAX = 3,
};

enum class UISTORE_STATE : uint8_t {
	UISS_HIDDENDLC = 0,
	UISS_DLC = 1,
	UISS_CHESTS = 2,
	UISS_BOUNTY = 3,
	UISS_ACCOUNT = 4,
	UISS_MAX = 5,
};

enum class EWeaponFireType : uint8_t {
	EWFT_InstantHit = 0,
	EWFT_Projectile = 1,
	EWFT_Custom = 2,
	EWFT_None = 3,
	EWFT_MAX = 4,
};

enum class UIHBATTLEPASSHOME_STATE : uint8_t {
	UIBPHS_FREETRACK = 0,
	UIBPHS_ENCOREWARNING = 1,
	UIBPHS_MAX = 2,
};

enum class ItemStoreCardTrack : uint8_t {
	ISCT_UNKNOWN = 0,
	ISCT_DAMAGE = 1,
	ISCT_UNIVERSAL = 2,
	ISCT_SUPPORT = 3,
	ISCT_TANK = 4,
	ISCT_MAX = 5,
};

enum class ELobbyCameraTag : uint8_t {
	LobbyCam_Login = 0,
	LobbyCam_TitleHome = 1,
	LobbyCam_TitlePlay = 2,
	LobbyCam_SearchingForMatch = 3,
	LobbyCam_MatchLobby = 4,
	LobbyCam_TitleChampions = 5,
	LobbyCam_ViewAllChampions = 6,
	LobbyCam_ViewChampion = 7,
	LobbyCam_TitleChests = 8,
	LobbyCam_LootChest = 9,
	LobbyCam_Store = 10,
	LobbyCam_StoreDetail = 11,
	LobbyCam_EndOfMatchLobby = 12,
	LobbyCam_WisdomDetail = 13,
	LobbyCam_ViewChampionWeapon = 14,
	LobbyCam_TeamMatchLobby = 15,
	LobbyCam_VIPStoreCamera = 16,
	LobbyCam_VIPStoreWeapon = 17,
	LobbyCam_EventHome = 18,
	LobbyCam_EventQuest = 19,
	LobbyCam_BattlePassRewards = 20,
	LobbyCam_StoreWeapon = 21,
	LobbyCam_StoreChests = 22,
	LobbyCam_ChestOpening = 23,
	LobbyCam_Gifts = 24,
	LobbyCam_GiftOpening = 25,
	LobbyCam_BattlePassCloseup = 26,
	LobbyCam_ProfilePreview = 27,
	LobbyCam_MAX = 28,
};

enum class TigerBladeState : uint8_t {
	ETBS_None = 0,
	ETBS_InFlightThrown = 1,
	ETBS_Deployed = 2,
	ETBS_InFlightRecalled = 3,
	ETBS_MAX = 4,
};

enum class UIHudTeamStatsMode : uint8_t {
	TeamStatsMode_Credits = 0,
	TeamStatsMode_Damage = 1,
	TeamStatsMode_Shielding = 2,
	TeamStatsMode_Healing = 3,
	TeamStatsMode_ObjectiveTime = 4,
	TeamStatsMode_MAX = 5,
};

enum class ETweenState : uint8_t {
	TWEEN_None = 0,
	TWEEN_Default = 1,
	TWEEN_DefaultImmune = 2,
	TWEEN_TimedKnockup = 3,
	TWEEN_Damagable = 4,
	TWEEN_DamagableSuspend = 5,
	TWEEN_PullGrab = 6,
	TWEEN_PullGrabWithCollision = 7,
	TWEEN_Lift = 8,
	TWEEN_LiftImmune = 9,
	TWEEN_MAX = 10,
};

enum class SpawnDeployableOrientation : uint8_t {
	SDO_AlignUpToNormal = 0,
	SDO_FaceRotation = 1,
	SDO_MAX = 2,
};

enum class EBlendAndroxusDrift : uint8_t {
	BLENDDRIFT_NotDrifting = 0,
	BLENDDRIFT_Drifting = 1,
	BLENDDRIFT_TransitionToNotDrifting = 2,
	BLENDDRIFT_TransitionToDrifting = 3,
	BLENDDRIFT_MAX = 4,
};

enum class ETickingGroup : uint8_t {
	TG_PreAsyncWork = 0,
	TG_DuringAsyncWorkThreaded = 1,
	TG_DuringAsyncWork = 2,
	TG_PostAsyncWork = 3,
	TG_PostUpdateWork = 4,
	TG_EffectsUpdateWork = 5,
	TG_MAX = 6,
};

enum class EOnlineImageDownloadState : uint8_t {
	PIDS_NotStarted = 0,
	PIDS_Downloading = 1,
	PIDS_Succeeded = 2,
	PIDS_Failed = 3,
	PIDS_MAX = 4,
};

enum class TgMeshVisibilityState : uint8_t {
	TMVS_Visible = 0,
	TMVS_Invisible = 1,
	TMVS_Hidden = 2,
	TMVS_MAX = 3,
};

enum class EPComPerformanceCaptureState : uint8_t {
	PPCS_WaitingToStart = 0,
	PPCS_MoveToNode = 1,
	PPCS_StartBasicStats = 2,
	PPCS_StopBasicStats = 3,
	PPCS_StartCycleStats = 4,
	PPCS_StopCycleStats = 5,
	PPCS_SaveAndExit = 6,
	PPCS_LoadCharacters = 7,
	PPCS_LoadCharactersOnly = 8,
	PPCS_DestroyPawns = 9,
	PPCS_MAX = 10,
};

enum class IconStackType : uint8_t {
	IST_DefaultIcon = 0,
	IST_Texture = 1,
	IST_ChestStack = 2,
	IST_GFxStack = 3,
	IST_Avatar = 4,
	IST_LoadingFrame = 5,
	IST_DeathCard = 6,
	IST_MAX = 7,
};

enum class ELightmapModificationFunction : uint8_t {
	MLMF_Modulate = 0,
	MLMF_ModulateAlpha = 1,
	MLMF_MAX = 2,
};

enum class ELocationBoneSocketDestination : uint8_t {
	BONESOCKETDEST_Bones = 0,
	BONESOCKETDEST_Sockets = 1,
	BONESOCKETDEST_MAX = 2,
};

enum class EKillFeedEntryType : uint8_t {
	KFET_Kill = 0,
	KFET_HHPickup = 1,
	KFET_MAX = 2,
};

enum class ELocationStaticVertSurfaceSource : uint8_t {
	VERTSTATICSURFACESOURCE_Vert = 0,
	VERTSTATICSURFACESOURCE_Surface = 1,
	VERTSTATICSURFACESOURCE_MAX = 2,
};

enum class EArchetypes : uint8_t {
	ARCHETYPE_TANK = 0,
	ARCHETYPE_DAMAGE = 1,
	ARCHETYPE_SUPPORT = 2,
	ARCHETYPE_FLANK = 3,
	ARCHETYPE_MAX = 4,
};

enum class EBlendMakoaSmash : uint8_t {
	BLENDSMASH_ChargeUp = 0,
	BLENDSMASH_Attack = 1,
	BLENDSMASH_MAX = 2,
};

enum class EFeaturePrivilege : uint8_t {
	FP_OnlinePlay = 0,
	FP_CommunicationText = 1,
	FP_CommunicationVideo = 2,
	FP_CommunicationVoice = 3,
	FP_ShareUserCreatedContent = 4,
	FP_PurchaseContent = 5,
	FP_ViewPlayerProfile = 6,
	FP_ShowPresenceInformation = 7,
	FP_RecordDVRClips = 8,
	FP_CloudStorage = 9,
	FP_PremiumContent = 10,
	FP_PremiumVideoContent = 11,
	FP_BrowseInternet = 12,
	FP_SocialNetworkSharing = 13,
	FP_KinectSharing = 14,
	FP_FitnessUpload = 15,
	FP_CrossPlay = 16,
	FP_MAX = 17,
};

enum class EUIDQCallToAction : uint8_t {
	EUIDQCTA_None = 0,
	EUIDQCTA_NewMode = 1,
	EUIDQCTA_NewMap = 2,
	EUIDQCTA_MAX = 3,
};

enum class ETTSSpeaker : uint8_t {
	TTSSPEAKER_Paul = 0,
	TTSSPEAKER_Harry = 1,
	TTSSPEAKER_Frank = 2,
	TTSSPEAKER_Dennis = 3,
	TTSSPEAKER_Kit = 4,
	TTSSPEAKER_Betty = 5,
	TTSSPEAKER_Ursula = 6,
	TTSSPEAKER_Rita = 7,
	TTSSPEAKER_Wendy = 8,
	TTSSPEAKER_MAX = 9,
};

enum class EProfileRaceCameraLocationOptions : uint8_t {
	PRCLO_Behind = 0,
	PRCLO_Front = 1,
	PRCLO_Inside = 2,
	PRCLO_MAX = 3,
};

enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3,
};

enum class EPolymorphType : uint8_t {
	Polymorph_None = 0,
	Polymorph_Chicken = 1,
	Polymorph_Rider = 2,
	Polymorph_MAX = 3,
};

enum class ParticleReplayState : uint8_t {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3,
};

enum class UIWINTER_STATE : uint8_t {
	UIWINTER_HOME = 0,
	UIWINTER_STORE = 1,
	UIWINTER_EVENTS = 2,
	UIWINTER_OVERVIEW = 3,
	UIWINTER_MAX = 4,
};

enum class SETTING_SCREENTYPE : uint8_t {
	SST_WINDOWED = 0,
	SST_BORDERLESS = 1,
	SST_FULLSCREEN = 2,
	SST_MAX = 3,
};

enum class EDeployableOverlayOwnershipType : uint8_t {
	EDOOT_Mine = 0,
	EDOOT_Friendly = 1,
	EDOOT_Enemy = 2,
	EDOOT_Neutral = 3,
	EDOOT_MAX = 4,
};

enum class EProfileMovementControlOptions : uint8_t {
	PMCO_L_Thumbstick = 0,
	PMCO_R_Thumbstick = 1,
	PMCO_MAX = 2,
};

enum class EProgressMessageType : uint8_t {
	PMT_Clear = 0,
	PMT_Information = 1,
	PMT_AdminMessage = 2,
	PMT_DownloadProgress = 3,
	PMT_ConnectionFailure = 4,
	PMT_PeerConnectionFailure = 5,
	PMT_PeerHostMigrationFailure = 6,
	PMT_SocketFailure = 7,
	PMT_MAX = 8,
};

enum class EParticleScreenAlignment : uint8_t {
	PSA_Square = 0,
	PSA_Rectangle = 1,
	PSA_Velocity = 2,
	PSA_TypeSpecific = 3,
	PSA_MAX = 4,
};

enum class EMeshBeaconBandwidthTestType : uint8_t {
	MB_BandwidthTestType_Upstream = 0,
	MB_BandwidthTestType_Downstream = 1,
	MB_BandwidthTestType_RoundtripLatency = 2,
	MB_BandwidthTestType_MAX = 3,
};

enum class ReplicatedFactoryState : uint8_t {
	RFS_None = 0,
	RFS_Vacant = 1,
	RFS_Spawned = 2,
	RFS_OwnedByTF1 = 3,
	RFS_OwnedByTF2 = 4,
	RFS_MAX = 5,
};

enum class ConditionType : uint8_t {
	TGCT_POISON = 0,
	TGCT_DISEASE = 1,
	TGCT_REGENERATION = 2,
	TGCT_STUN = 3,
	TGCT_STEALTH = 4,
	TGCT_EMP_STUN = 5,
	TGCT_IGNITE = 6,
	TGCT_INVULNERABLE = 7,
	TGCT_SLOW = 8,
	TGCT_MAX = 9,
};

enum class ENATType : uint8_t {
	NAT_Unknown = 0,
	NAT_Open = 1,
	NAT_Moderate = 2,
	NAT_Strict = 3,
	NAT_MAX = 4,
};

enum class UIEditLoadoutsState : uint8_t {
	UIELS_Edit = 0,
	UIELS_CardSelect = 1,
	UIELS_Rename = 2,
	UIELS_MAX = 3,
};

enum class ERootBoneAxis : uint8_t {
	RBA_Default = 0,
	RBA_Discard = 1,
	RBA_Translate = 2,
	RBA_MAX = 3,
};

enum class ELanePusherActionPoint : uint8_t {
	LPAP_None = 0,
	LPAP_OuterWall = 1,
	LPAP_InnerWall = 2,
	LPAP_BaseObjective = 3,
	LPAP_Checkpoint1 = 4,
	LPAP_Checkpoint2 = 5,
	LPAP_Goal = 6,
	LPAP_PayloadBegin = 7,
	LPAP_MAX = 8,
};

enum class ETutorialAnnouncerLine : uint8_t {
	Announcer_Line_Tutorial_A_PortalRoom_010 = 0,
	Announcer_Line_Tutorial_A_PortalRoom_020 = 1,
	Announcer_Line_Tutorial_A_PortalRoom_030 = 2,
	Announcer_Line_Tutorial_A_PortalRoom_040 = 3,
	Announcer_Line_Tutorial_A_PortalRoom_050 = 4,
	Announcer_Line_Tutorial_A_PortalRoom_060 = 5,
	Announcer_Line_Tutorial_A_PortalRoom_070 = 6,
	Announcer_Line_Tutorial_A_PortalRoom_080 = 7,
	Announcer_Line_Tutorial_A_PortalRoom_090 = 8,
	Announcer_Line_Tutorial_A_PortalRoom_101 = 9,
	Announcer_Line_Tutorial_A_PortalRoom_111 = 10,
	Announcer_Line_Tutorial_B_BasicTraining_020 = 11,
	Announcer_Line_Tutorial_B_BasicTraining_030 = 12,
	Announcer_Line_Tutorial_B_BasicTraining_050 = 13,
	Announcer_Line_Tutorial_B_BasicTraining_060 = 14,
	Announcer_Line_Tutorial_B_BasicTraining_070 = 15,
	Announcer_Line_Tutorial_B_BasicTraining_080 = 16,
	Announcer_Line_Tutorial_B_BasicTraining_090 = 17,
	Announcer_Line_Tutorial_B_BasicTraining_111 = 18,
	Announcer_Line_Tutorial_B_BasicTraining_121 = 19,
	Announcer_Line_Tutorial_B_BasicTraining_131 = 20,
	Announcer_Line_Tutorial_B_BasicTraining_141 = 21,
	Announcer_Line_Tutorial_B_BasicTraining_151 = 22,
	Announcer_Line_Tutorial_B_BasicTraining_161 = 23,
	Announcer_Line_Tutorial_B_BasicTraining_171 = 24,
	Announcer_Line_Tutorial_B_BasicTraining_181 = 25,
	Announcer_Line_Tutorial_B_BasicTraining_191 = 26,
	Announcer_Line_Tutorial_B_BasicTraining_201 = 27,
	Announcer_Line_Tutorial_B_BasicTraining_211 = 28,
	Announcer_Line_Tutorial_B_BasicTraining_221 = 29,
	Announcer_Line_Tutorial_B_BasicTraining_231 = 30,
	Announcer_Line_Tutorial_B_BasicTraining_241 = 31,
	Announcer_Line_Tutorial_B_BasicTraining_251 = 32,
	Announcer_Line_Tutorial_B_BasicTraining_261 = 33,
	Announcer_Line_Tutorial_B_BasicTraining_271 = 34,
	Announcer_Line_Tutorial_B_BasicTraining_281 = 35,
	Announcer_Line_Tutorial_B_BasicTraining_291 = 36,
	Announcer_Line_Tutorial_B_BasicTraining_301 = 37,
	Announcer_Line_Tutorial_B_BasicTraining_311 = 38,
	Announcer_Line_Tutorial_B_BasicTraining_321 = 39,
	Announcer_Line_Tutorial_B_BasicTraining_331 = 40,
	Announcer_Line_Tutorial_B_BasicTraining_341 = 41,
	Announcer_Line_Tutorial_B_BasicTraining_351 = 42,
	Announcer_Line_Tutorial_B_BasicTraining_361 = 43,
	Announcer_Line_Tutorial_B_BasicTraining_371 = 44,
	Announcer_Line_Tutorial_B_BasicTraining_381 = 45,
	Announcer_Line_Tutorial_B_BasicTraining_391 = 46,
	Announcer_Line_Tutorial_B_BasicTraining_401 = 47,
	Announcer_Line_Tutorial_B_BasicTraining_411 = 48,
	Announcer_Line_Tutorial_B_BasicTraining_421 = 49,
	Announcer_Line_Tutorial_B_BasicTraining_431 = 50,
	Announcer_Line_Tutorial_B_BasicTraining_441 = 51,
	Announcer_Line_Tutorial_B_BasicTraining_451 = 52,
	Announcer_Line_Tutorial_B_BasicTraining_461 = 53,
	Announcer_Line_Tutorial_B_BasicTraining_471 = 54,
	Announcer_Line_Tutorial_C_PortalRoom2_010 = 55,
	Announcer_Line_Tutorial_C_PortalRoom2_020 = 56,
	Announcer_Line_Tutorial_C_PortalRoom2_030 = 57,
	Announcer_Line_Tutorial_C_PortalRoom2_040 = 58,
	Announcer_Line_Tutorial_C_PortalRoom2_050 = 59,
	Announcer_Line_Tutorial_C_PortalRoom2_060 = 60,
	Announcer_Line_Tutorial_C_PortalRoom2_070 = 61,
	Announcer_Line_Tutorial_C_PortalRoom2_080 = 62,
	Announcer_Line_Tutorial_C_PortalRoom2_085 = 63,
	Announcer_Line_Tutorial_C_PortalRoom2_090 = 64,
	Announcer_Line_Tutorial_C_PortalRoom2_101 = 65,
	Announcer_Line_Tutorial_C_PortalRoom2_111 = 66,
	Announcer_Line_Tutorial_D_Objective_012 = 67,
	Announcer_Line_Tutorial_D_Objective_015 = 68,
	Announcer_Line_Tutorial_D_Objective_018 = 69,
	Announcer_Line_Tutorial_D_Objective_020 = 70,
	Announcer_Line_Tutorial_D_Objective_022 = 71,
	Announcer_Line_Tutorial_D_Objective_025 = 72,
	Announcer_Line_Tutorial_D_Objective_028 = 73,
	Announcer_Line_Tutorial_D_Objective_030 = 74,
	Announcer_Line_Tutorial_D_Objective_040 = 75,
	Announcer_Line_Tutorial_D_Objective_050 = 76,
	Announcer_Line_Tutorial_D_Objective_060 = 77,
	Announcer_Line_Tutorial_D_Objective_065 = 78,
	Announcer_Line_Tutorial_D_Objective_070 = 79,
	Announcer_Line_Tutorial_D_Objective_080 = 80,
	Announcer_Line_Tutorial_D_Objective_090 = 81,
	Announcer_Line_Tutorial_D_Objective_101 = 82,
	Announcer_Line_Tutorial_D_Objective_111 = 83,
	Announcer_Line_Tutorial_D_Objective_121 = 84,
	Announcer_Line_Tutorial_D_Objective_131 = 85,
	Announcer_Line_Tutorial_D_Objective_141 = 86,
	Announcer_Line_Tutorial_D_Objective_151 = 87,
	Announcer_Line_Tutorial_D_Objective_161 = 88,
	Announcer_Line_Tutorial_D_Objective_171 = 89,
	Announcer_Line_Tutorial_MAX = 90,
};

enum class EOnlineGameSearchSortType : uint8_t {
	OGSSO_Ascending = 0,
	OGSSO_Descending = 1,
	OGSSO_MAX = 2,
};

enum class EFlagState : uint8_t {
	FLAG_Home = 0,
	FLAG_HeldFriendly = 1,
	FLAG_HeldEnemy = 2,
	FLAG_Down = 3,
	FLAG_MAX = 4,
};

enum class UIStoreItemSort : uint8_t {
	UISIS_Default = 0,
	UISIS_Newest = 1,
	UISIS_Champion = 2,
	UISIS_RarityDescending = 3,
	UISIS_RarityAscending = 4,
	UISIS_Name = 5,
	UISIS_MAX = 6,
};

enum class EMeshBeaconBandwidthTestState : uint8_t {
	MB_BandwidthTestState_NotStarted = 0,
	MB_BandwidthTestState_RequestPending = 1,
	MB_BandwidthTestState_StartPending = 2,
	MB_BandwidthTestState_InProgress = 3,
	MB_BandwidthTestState_Completed = 4,
	MB_BandwidthTestState_Incomplete = 5,
	MB_BandwidthTestState_Timeout = 6,
	MB_BandwidthTestState_Error = 7,
	MB_BandwidthTestState_MAX = 8,
};

enum class ITEM_EVENT_TYPE : uint8_t {
	IET_None = 0,
	IET_CastStart = 1,
	IET_CastComplete = 2,
	IET_CastInterrupt = 3,
	IET_ItemPurchase = 4,
	IET_ItemSell = 5,
	IET_AbilityPurchase = 6,
	IET_MAX = 7,
};

enum class ESettingsDataType : uint8_t {
	SDT_Empty = 0,
	SDT_Int32 = 1,
	SDT_Int64 = 2,
	SDT_Double = 3,
	SDT_String = 4,
	SDT_Float = 5,
	SDT_Blob = 6,
	SDT_DateTime = 7,
	SDT_UInt32 = 8,
	SDT_UInt64 = 9,
	SDT_MAX = 10,
};

enum class EPhysXMeshRotationMethod : uint8_t {
	PMRM_Disabled = 0,
	PMRM_Spherical = 1,
	PMRM_Box = 2,
	PMRM_LongBox = 3,
	PMRM_FlatBox = 4,
	PMRM_Velocity = 5,
	PMRM_MAX = 6,
};

enum class EDeployableOverlayInternalState : uint8_t {
	EDOIS_None = 0,
	EDOIS_Created = 1,
	EDOIS_Idle = 2,
	EDOIS_Active = 3,
	EDOIS_TimedOut = 4,
	EDOIS_Destroyed = 5,
	EDOIS_Inactive = 6,
	EDOIS_MAX = 7,
};

enum class EWeightCheck : uint8_t {
	EWC_AnimNodeSlotNotPlaying = 0,
	EWC_MAX = 1,
};

enum class EBuildingStatsBrowserColumns : uint8_t {
	BSBC_Name = 0,
	BSBC_Ruleset = 1,
	BSBC_NumStaticMeshComps = 2,
	BSBC_NumInstancedStaticMeshComps = 3,
	BSBC_NumInstancedTris = 4,
	BSBC_LightmapMemBytes = 5,
	BSBC_ShadowmapMemBytes = 6,
	BSBC_LODDiffuseMemBytes = 7,
	BSBC_LODLightingMemBytes = 8,
	BSBC_MAX = 9,
};

enum class EMeshBeaconConnectionResult : uint8_t {
	MB_ConnectionResult_Succeeded = 0,
	MB_ConnectionResult_Duplicate = 1,
	MB_ConnectionResult_Timeout = 2,
	MB_ConnectionResult_Error = 3,
	MB_ConnectionResult_MAX = 4,
};

enum class ECardOwner : uint8_t {
	CARDOWNER_NONE = 0,
	CARDOWNER_FREE = 1,
	CARDOWNER_SELF = 2,
	CARDOWNER_TEAM = 3,
	CARDOWNER_MAX = 4,
};

enum class EPartyReservationResult : uint8_t {
	PRR_GeneralError = 0,
	PRR_PartyLimitReached = 1,
	PRR_IncorrectPlayerCount = 2,
	PRR_RequestTimedOut = 3,
	PRR_ReservationDuplicate = 4,
	PRR_ReservationNotFound = 5,
	PRR_ReservationAccepted = 6,
	PRR_ReservationDenied = 7,
	PRR_MAX = 8,
};

enum class UIHudSkillsSpectatorMode : uint8_t {
	SkillsSpecatorMode_Skills = 0,
	SkillsSpecatorMode_Items = 1,
	SkillsSpecatorMode_Cards = 2,
	SkillsSpecatorMode_MAX = 3,
};

enum class ELanBeaconState : uint8_t {
	LANB_NotUsingLanBeacon = 0,
	LANB_Hosting = 1,
	LANB_Searching = 2,
	LANB_MAX = 3,
};

enum class EFeaturePrivilegeLevel : uint8_t {
	FPL_Disabled = 0,
	FPL_EnabledFriendsOnly = 1,
	FPL_Enabled = 2,
	FPL_MAX = 3,
};

enum class TextureFilter : uint8_t {
	TF_Nearest = 0,
	TF_Linear = 1,
	TF_ForceBilinear = 2,
	TF_ForceTrilinear = 3,
	TF_ForceAnisotropicPoint = 4,
	TF_ForceAnisotropicLinear = 5,
	TF_MAX = 6,
};

enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3,
};

enum class EHavokTraversalType : uint8_t {
	TRAVERSALTYPE_DROP_DOWN = 0,
	TRAVERSALTYPE_CLIMB = 1,
	TRAVERSALTYPE_JUMP = 2,
	TRAVERSALTYPE_VAULT = 3,
	TRAVERSALTYPE_DUCK_UNDER = 4,
	TRAVERSALTYPE_PORTAL = 5,
	TRAVERSALTYPE_MAX = 6,
};

enum class ERadialForceType : uint8_t {
	RFT_Force = 0,
	RFT_Impulse = 1,
	RFT_MAX = 2,
};

enum class ERouteType : uint8_t {
	ERT_Linear = 0,
	ERT_Loop = 1,
	ERT_Circle = 2,
	ERT_MAX = 3,
};

enum class EEventUploadType : uint8_t {
	EUT_GenericStats = 0,
	EUT_ProfileData = 1,
	EUT_MatchmakingData = 2,
	EUT_PlaylistPopulation = 3,
	EUT_MAX = 4,
};

enum class EAIAnnotationType : uint8_t {
	AIA_AssaultPoint = 0,
	AIA_CoverPoint = 1,
	AIA_MAX = 2,
};

enum class OverlayState : uint8_t {
	OMS_Normal = 0,
	OMS_ForceVisible = 1,
	OMS_ForceHidden = 2,
	OMS_MAX = 3,
};

enum class ESelectionArbitrator : uint8_t {
	ARBITRATE_FAIL = 0,
	ARBITRATE_CLOSEST = 1,
	ARBITRATE_RANDOM = 2,
	ARBITRATE_FIRST = 3,
	ARBITRATE_MAX = 4,
};

enum class EProfileOmniDirEvadeOptions : uint8_t {
	PODI_Off = 0,
	PODI_On = 1,
	PODI_MAX = 2,
};

enum class EOnlineFileType : uint8_t {
	OFT_Unknown = 0,
	OFT_Binary = 1,
	OFT_Json = 2,
	OFT_MAX = 3,
};

enum class SaveDataVersionSupport : uint8_t {
	SaveDataVersionSupportLessThenEqual = 0,
	SaveDataVersionSupportEqual = 1,
	SaveDataVersionSupportAny = 2,
	SaveDataVersionSupport_MAX = 3,
};

enum class GameTimerState : uint8_t {
	TGMTS_UNSET = 0,
	TGMTS_WAITING_FOR_PLAYERS = 1,
	TGMTS_SETUP = 2,
	TGMTS_MISSION_RUNNING = 3,
	TGMTS_MISSION_OVERTIME = 4,
	TGMTS_MISSION_COMPLETE = 5,
	TGMTS_MISSION_PAUSED = 6,
	TGMTS_CUSTOM = 7,
	TGMTS_ROUND_COMPLETE = 8,
	TGMTS_MAX = 9,
};

enum class TG_MARKED_TYPES : uint8_t {
	TG_MARKED_MOJI = 0,
	TG_MARKED_SEVEN = 1,
	TG_MARKED_NONE = 2,
	TG_MARKED_MAX = 3,
};

enum class EFallSource : uint8_t {
	FALLSOURCE_FullJump = 0,
	FALLSOURCE_ShortJump = 1,
	FALLSOURCE_AnyJump = 2,
	FALLSOURCE_Falling = 3,
	FALLSOURCE_All = 4,
	FALLSOURCE_MAX = 5,
};

enum class UIHNH_STATE : uint8_t {
	UIHNH_HOME = 0,
	UIHNH_STORE = 1,
	UIHNH_QUESTS = 2,
	UIHNH_OVERVIEW = 3,
	UIHNH_MAX = 4,
};

enum class AlphaBlendType : uint8_t {
	ABT_Linear = 0,
	ABT_Cubic = 1,
	ABT_Sinusoidal = 2,
	ABT_EaseInOutExponent2 = 3,
	ABT_EaseInOutExponent3 = 4,
	ABT_EaseInOutExponent4 = 5,
	ABT_EaseInOutExponent5 = 6,
	ABT_MAX = 7,
};

enum class ENamePlateName : uint8_t {
	NPN_PlayerName = 0,
	NPN_GodName = 1,
	NPN_None = 2,
	NPN_MAX = 3,
};

enum class EAnnouncerSeries : uint8_t {
	ANS_TimeRemaining = 0,
	ANS_TimeRemaining5Count = 1,
	ANS_TotalTimeRemaining = 2,
	ANS_Countdown = 3,
	ANS_Overtime = 4,
	ANS_PlayersRemaining = 5,
	ANS_MAX = 6,
};

enum class MAP_LANE : uint8_t {
	MAP_LANE_NONE = 0,
	MAP_LANE_LEFT = 1,
	MAP_LANE_MIDDLE = 2,
	MAP_LANE_RIGHT = 3,
	MAP_LANE_MAX = 4,
};

enum class EAvatarIntroState : uint8_t {
	EIS_None = 0,
	EIS_Preparing = 1,
	EIS_Played = 2,
	EIS_MAX = 3,
};

enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3,
};

enum class EPComOpenBroadcasterState : uint8_t {
	POBS_Idle = 0,
	POBS_WaitingForFacebookWebBrowserLoaded = 1,
	POBS_WaitingForFacebookNewPublishFlow = 2,
	POBS_FacebookNewPublishError = 3,
	POBS_WaitingForFacebookLogin = 4,
	POBS_WaitingForFacebookPublish = 5,
	POBS_FacebookPublishFinished = 6,
	POBS_Streaming = 7,
	POBS_Quitting = 8,
	POBS_MAX = 9,
};

enum class EControlIconStyle : uint8_t {
	ECIS_Auto = 0,
	ECIS_XboxOne = 1,
	ECIS_PS4 = 2,
	ECIS_Switch = 3,
	ECIS_MAX = 4,
};

enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2,
};

enum class UIDLTC_PromotionType : uint8_t {
	UIDLTC_Promoted = 0,
	UIDLTC_Demoted = 1,
	UIDLTC_MAX = 2,
};

enum class EOnlineNewsType : uint8_t {
	ONT_Unknown = 0,
	ONT_GameNews = 1,
	ONT_ContentAnnouncements = 2,
	ONT_Misc = 3,
	ONT_MAX = 4,
};

enum class SaveSlotOperationEnum : uint8_t {
	SSO_SET = 0,
	SSO_GET = 1,
	SSO_DELETE = 2,
	SSO_MAX = 3,
};

enum class EHavokEdgeType : uint8_t {
	EDGETYPE_REGULAR = 0,
	EDGETYPE_TRAVERSAL_DROPDOWN = 1,
	EDGETYPE_TRAVERSAL_JUMP = 2,
	EDGETYPE_MAX = 3,
};

enum class McpChallengeFileStatus : uint8_t {
	MCFS_NotStarted = 0,
	MCFS_Pending = 1,
	MCFS_Success = 2,
	MCFS_Failed = 3,
	MCFS_MAX = 4,
};

enum class EOM_BONUS_SOURCE_TYPE : uint8_t {
	EOMBST_NONE = 0,
	EOMBST_PARTY = 1,
	EOMBST_MATCHBOOST = 2,
	EOMBST_ACCOLADES = 3,
	EOMBST_EVENTBOOST = 4,
	EOMBST_EOMMULT = 5,
	EOMBST_MAX = 6,
};

enum class ERaumFiringState : uint8_t {
	ERFS_None = 0,
	ERFS_Idle = 1,
	ERFS_Spinning = 2,
	ERFS_FireLow = 3,
	ERFS_FireHigh = 4,
	ERFS_MAX = 5,
};

enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2,
};

enum class ETwitterRequestMethod : uint8_t {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3,
};

enum class UIChampionSkinsButtonAction : uint8_t {
	UICSBA_None = 0,
	UICSBA_Purchase = 1,
	UICSBA_Equip = 2,
	UICSBA_Chest = 3,
	UICSBA_Battlepass = 4,
	UICSBA_Collection = 5,
	UICSBA_Event = 6,
	UICSBA_ChampUnlock = 7,
	UICSBA_MAX = 8,
};

enum class EDeviceFailType : uint8_t {
	DFT_None = 0,
	DFT_Unspecified = 1,
	DFT_Custom = 2,
	DFT_NotEnoughPower = 3,
	DFT_OnCooldown = 4,
	DFT_CannotPlace = 5,
	DFT_Stunned = 6,
	DFT_Silenced = 7,
	DFT_Disarmed = 8,
	DFT_Crippled = 9,
	DFT_FireLockout = 10,
	DFT_InCombat = 11,
	DFT_FullHealth = 12,
	DFT_NotOnGround = 13,
	DFT_NoAmmo = 14,
	DFT_TransitioningTo1p = 15,
	DFT_Polymorphed = 16,
	DFT_MAX = 17,
};

enum class ESpawnGateType : uint8_t {
	SPGT_Standard = 0,
	SPGT_Attackers = 1,
	SPGT_Defenders = 2,
	SPGT_MAX = 3,
};

enum class EAspectRatio : uint8_t {
	SETTINGAR_16x9 = 0,
	SETTINGAR_16x10 = 1,
	SETTINGAR_MAX = 2,
};

enum class FlagContentDataType : uint8_t {
	FCDT_None = 0,
	FCDT_Egyptian_Lobby = 1,
	FCDT_Egyptian_Wall = 2,
	FCDT_Norse_Lobby = 3,
	FCDT_Norse_Wall = 4,
	FCDT_Greek_Lobby = 5,
	FCDT_Greek_Wall = 6,
	FCDT_Roman_Lobby = 7,
	FCDT_Roman_Wall = 8,
	FCDT_Chinese_Lobby = 9,
	FCDT_Chinese_Wall = 10,
	FCDT_Mayan_Lobby = 11,
	FCDT_Mayan_Wall = 12,
	FCDT_Hindu_Lobby = 13,
	FCDT_Hindu_Wall = 14,
	FCDT_MAX = 15,
};

enum class EParticleSortMode : uint8_t {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5,
};

enum class ECollisionType : uint8_t {
	COLLIDE_CustomDefault = 0,
	COLLIDE_NoCollision = 1,
	COLLIDE_BlockAll = 2,
	COLLIDE_BlockWeapons = 3,
	COLLIDE_TouchAll = 4,
	COLLIDE_TouchWeapons = 5,
	COLLIDE_BlockAllButWeapons = 6,
	COLLIDE_TouchAllButWeapons = 7,
	COLLIDE_BlockWeaponsKickable = 8,
	COLLIDE_MAX = 9,
};

enum class EWorldAttractorFalloffType : uint8_t {
	FOFF_Constant = 0,
	FOFF_Linear = 1,
	FOFF_Exponent = 2,
	FOFF_MAX = 3,
};

enum class EReservationPacketType : uint8_t {
	RPT_UnknownPacketType = 0,
	RPT_ClientReservationRequest = 1,
	RPT_ClientReservationUpdateRequest = 2,
	RPT_ClientCancellationRequest = 3,
	RPT_HostReservationResponse = 4,
	RPT_HostReservationCountUpdate = 5,
	RPT_HostTravelRequest = 6,
	RPT_HostIsReady = 7,
	RPT_HostHasCancelled = 8,
	RPT_Heartbeat = 9,
	RPT_MAX = 10,
};

enum class UICHESTS_STATE : uint8_t {
	UICHS_CHESTLIST = 0,
	UICHS_CHESTDETAILS = 1,
	UICHS_GIFTDETAILS = 2,
	UICHS_OPENEDITEMLOADING = 3,
	UICHS_OPENEDITEMDISPLAY = 4,
	UICHS_MAX = 5,
};

enum class YagoTravelState : uint8_t {
	EYTS_None = 0,
	EYTS_Acceleration = 1,
	EYTS_ForcedDeceleration = 2,
	EYTS_PassiveDeceleration = 3,
	EYTS_MAX = 4,
};

enum class ETargetingPreviewStyle : uint8_t {
	TPS_None = 0,
	TPS_MAX = 1,
};

enum class TG_TELEPORT_STATE : uint8_t {
	TELEPORT_NONE = 0,
	TELEPORT_ENTER = 1,
	TELEPORT_EXIT = 2,
	TELEPORT_ENTER_BLINK = 3,
	TELEPORT_EXIT_BLINK = 4,
	TELEPORT_KINESSA_TRANSPORTER_ENTER = 5,
	TELEPORT_KINESSA_TRANSPORTER_EXIT = 6,
	TELEPORT_MAX = 7,
};

enum class EMapPlacement : uint8_t {
	MPLC_Bottom = 0,
	MPLC_Top = 1,
	MPLC_MAX = 2,
};

enum class EParticleEventType : uint8_t {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_WorldAttractorCollision = 4,
	EPET_Kismet = 5,
	EPET_MAX = 6,
};

enum class EBlendDrogozFlying : uint8_t {
	BLENDDROGOZ_NotFlying = 0,
	BLENDDROGOZ_Flying = 1,
	BLENDDROGOZ_TransitionToNotFlying = 2,
	BLENDDROGOZ_TransitionToFlying = 3,
	BLENDDROGOZ_MAX = 4,
};

enum class SETTING_AUDIOPANNING : uint8_t {
	SAP_SPEAKERS = 0,
	SAP_HEADPHONES = 1,
	SAP_MAX = 2,
};

enum class EMediaItemType : uint8_t {
	MIT_Unknown = 0,
	MIT_Game = 1,
	MIT_Application = 2,
	MIT_GameContent = 3,
	MIT_GameConsumable = 4,
	MIT_Subscription = 5,
	MIT_MAX = 6,
};

enum class EHitAudioCue : uint8_t {
	CUEHIT_None = 0,
	CUEHIT_Pain = 1,
	CUEHIT_FromAbove = 2,
	CUEHIT_FromBehind = 3,
	CUEHIT_Sniper = 4,
	CUEHIT_MAX = 5,
};

enum class EFeaturedSectionType : uint8_t {
	FST_None = 0,
	FST_ChampionUpdate = 1,
	FST_GoToChest = 2,
	FST_Event = 3,
	FST_GoToBattlePass = 4,
	FST_GoToItem = 5,
	FST_Calendar = 6,
	FST_MAX = 7,
};

enum class CorrupterUltAnimState : uint8_t {
	CorrupterUltAnimState_Buildup = 0,
	CorrupterUltAnimState_UnderGround = 1,
	CorrupterUltAnimState_Execute = 2,
	CorrupterUltAnimState_NoExecute = 3,
	CorrupterUltAnimState_NoTarget = 4,
	CorrupterUltAnimState_MAX = 5,
};

enum class GFXEVENT : uint8_t {
	GFXEVENT_CLICK = 0,
	GFXEVENT_ROLLOVER = 1,
	GFXEVENT_ROLLOUT = 2,
	GFXEVENT_MAX = 3,
};

enum class ReverbPreset : uint8_t {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23,
};

enum class EBlendByDirectionSpeedType : uint8_t {
	EBBDST_Velocity = 0,
	EBBDST_Accel = 1,
	EBBDST_MAX = 2,
};

enum class EDecoyAIState : uint8_t {
	DAIS_Normal = 0,
	DAIS_Shatter = 1,
	DAIS_Rift = 2,
	DAIS_MAX = 3,
};

enum class EVictoryType : uint8_t {
	EVT_Default = 0,
	EVT_Capture = 1,
	EVT_Defend = 2,
	EVT_Payload = 3,
	EVT_Siege = 4,
	EVT_Survival = 5,
	EVT_Kill = 6,
	EVT_Ticket = 7,
	EVT_TimeLimit = 8,
	EVT_Goal = 9,
	EVT_MAX = 10,
};

enum class DoorStatus : uint8_t {
	TGD_NONE = 0,
	TGD_LOCKED = 1,
	TGD_OPEN = 2,
	TGD_CLOSE = 3,
	TGD_MAX = 4,
};

enum class UIEditLoadoutsImportState : uint8_t {
	UIELIS_None = 0,
	UIELIS_SearchType = 1,
	UIELIS_SearchPlayerSelect = 2,
	UIELIS_SearchInput = 3,
	UIELIS_ImportSelect = 4,
	UIELIS_MAX = 5,
};

enum class UISCALINGTYPE : uint8_t {
	UISCALING_FITWIDE = 0,
	UISCALING_FITTALL = 1,
	UISCALING_OVERSIZE = 2,
	UISCALING_NONE = 3,
	UISCALING_MAX = 4,
};

enum class EMobileColorMultiplySource : uint8_t {
	MCMS_None = 0,
	MCMS_BaseTextureRed = 1,
	MCMS_BaseTextureGreen = 2,
	MCMS_BaseTextureBlue = 3,
	MCMS_BaseTextureAlpha = 4,
	MCMS_MaskTextureRed = 5,
	MCMS_MaskTextureGreen = 6,
	MCMS_MaskTextureBlue = 7,
	MCMS_MaskTextureAlpha = 8,
	MCMS_MAX = 9,
};

enum class EParticleCollisionComplete : uint8_t {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6,
};

enum class EMeshBeaconPacketType : uint8_t {
	MB_Packet_UnknownType = 0,
	MB_Packet_ClientNewConnectionRequest = 1,
	MB_Packet_ClientBeginBandwidthTest = 2,
	MB_Packet_ClientCreateNewSessionResponse = 3,
	MB_Packet_HostNewConnectionResponse = 4,
	MB_Packet_HostBandwidthTestRequest = 5,
	MB_Packet_HostCompletedBandwidthTest = 6,
	MB_Packet_HostTravelRequest = 7,
	MB_Packet_HostCreateNewSessionRequest = 8,
	MB_Packet_DummyData = 9,
	MB_Packet_Heartbeat = 10,
	MB_Packet_MAX = 11,
};

enum class EAchievementProgressState : uint8_t {
	APS_Unknown = 0,
	APS_Achieved = 1,
	APS_NotStarted = 2,
	APS_InProgress = 3,
	APS_MAX = 4,
};

enum class EMeshBeaconBandwidthTestResult : uint8_t {
	MB_BandwidthTestResult_Succeeded = 0,
	MB_BandwidthTestResult_Timeout = 1,
	MB_BandwidthTestResult_Error = 2,
	MB_BandwidthTestResult_MAX = 3,
};

enum class SETTING_SCOREBOARDTYPE : uint8_t {
	SSCT_DEFAULT = 0,
	SSCT_ADVANCED = 1,
	SSCT_MAX = 2,
};

enum class UIHALLOWEEN_STATE : uint8_t {
	UIHALLOWEEN_HOME = 0,
	UIHALLOWEEN_STORE = 1,
	UIHALLOWEEN_VAULT = 2,
	UIHALLOWEEN_OVERVIEW = 3,
	UIHALLOWEEN_MAX = 4,
};

enum class eActionPointType : uint8_t {
	ACTION_NONE = 0,
	ACTION_RELAX_OPEN = 1,
	ACTION_MINE_DEFAULT = 2,
	ACTION_RELAX_WALL = 3,
	ACTION_CONSOLE_STANDARD = 4,
	ACTION_CONSOLE_LAB_DEFAULT = 5,
	ACTION_GUARD_WATCH_NORMAL = 6,
	ACTION_GUARD_WATCH_ELEVATED = 7,
	ACTION_FACTORY_LINE_DEFAULT = 8,
	ACTION_SNIPE = 9,
	ACTION_PLACE_TURRET = 10,
	ACTION_PLACE_SHIELD = 11,
	ACTION_PLACE_CRATE = 12,
	ACTION_PLACE_MINE = 13,
	ACTION_PLACE_SENSOR = 14,
	ACTION_MAX = 15,
};

enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3,
};

enum class AlertPriority : uint8_t {
	APT_Minimal = 0,
	APT_Normal = 1,
	APT_High = 2,
	APT_Critical = 3,
	APT_MAX = 4,
};

enum class VGS_GamepadItem : uint8_t {
	VGSGP_L = 0,
	VGSGP_R = 1,
	VGSGP_Y = 2,
	VGSGP_X = 3,
	VGSGP_B = 4,
	VGSGP_A = 5,
	VGSGP_MAX = 6,
};

enum class OverlayMICType : uint8_t {
	OMT_None = 0,
	OMT_Execute = 1,
	OMT_Shield = 2,
	OMT_CCImmune = 3,
	OMT_CharacterCustom1 = 4,
	OMT_Freeze = 5,
	OMT_MAX = 6,
};

enum class UICHAMPION_STATE : uint8_t {
	UICS_SKILLS = 0,
	UICS_SKINS = 1,
	UICS_WEAPONS = 2,
	UICS_EMOTES = 3,
	UICS_MVPPOSES = 4,
	UICS_LOADOUTS = 5,
	UICS_OVERVIEW = 6,
	UICS_MAX = 7,
};

enum class ECrossInputMethod : uint8_t {
	ECIM_Gamepad = 0,
	ECIM_Keyboard = 1,
	ECIM_MAX = 2,
};

enum class EOnlineGameSearchComparisonType : uint8_t {
	OGSCT_Equals = 0,
	OGSCT_NotEquals = 1,
	OGSCT_GreaterThan = 2,
	OGSCT_GreaterThanEquals = 3,
	OGSCT_LessThan = 4,
	OGSCT_LessThanEquals = 5,
	OGSCT_MAX = 6,
};

enum class EDiminshingReturnsStackType : uint8_t {
	DRST_None = 0,
	DRST_CrowdControl = 1,
	DRST_SuperiorCrowdControl = 2,
	DRST_Stun = 3,
	DRST_MAX = 4,
};

enum class ZombieModex : uint8_t {
	Z_IDLE = 0,
	Z_MOVING = 1,
	Z_COMBAT = 2,
	Z_MAX = 3,
};

enum class ItemStatCategory : uint8_t {
	ISC_Unknown = 0,
	ISC_Animation = 1,
	ISC_VFX = 2,
	ISC_Audio = 3,
	ISC_UniqueDeployable = 4,
	ISC_DeathVFX = 5,
	ISC_StatDisplay = 6,
	ISC_MAX = 7,
};

enum class UISUMMER_STATE : uint8_t {
	UISUMMER_HOME = 0,
	UISUMMER_VAULT = 1,
	UISUMMER_REWARDS = 2,
	UISUMMER_OVERVIEW = 3,
	UISUMMER_MAX = 4,
};

enum class EFaceFXBlendMode : uint8_t {
	FXBM_Overwrite = 0,
	FXBM_Additive = 1,
	FXBM_MAX = 2,
};

enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3,
};

enum class EMountType : uint8_t {
	MOUNT_Horse = 0,
	MOUNT_Cat = 1,
	MOUNT_Vehicle = 2,
	MOUNT_MAX = 3,
};

enum class EConsumableType : uint8_t {
	AIConsumable_HealthPotion = 0,
	AIConsumable_ManaPotion = 1,
	AIConsumable_MultiPotion = 2,
	AIConsumable_Ward = 3,
	AIConsumable_DamagePotion = 4,
	AIConsumable_DefensePotion = 5,
	AIConsumable_MAX = 6,
};

enum class ETerrainMappingType : uint8_t {
	TMT_Auto = 0,
	TMT_XY = 1,
	TMT_XZ = 2,
	TMT_YZ = 3,
	TMT_MAX = 4,
};

enum class TG_POSTURE : uint8_t {
	TG_POSTURE_DEFAULT = 0,
	TG_POSTURE_REST = 1,
	TG_POSTURE_FUSSY = 2,
	TG_POSTURE_INTRO = 3,
	TG_POSTURE_ENRAGED = 4,
	TG_POSTURE_PATROL = 5,
	TG_POSTURE_GENERICFIRE1 = 6,
	TG_POSTURE_GENERICFIRE2 = 7,
	TG_POSTURE_GENERICFIRE3 = 8,
	TG_POSTURE_DEAD = 9,
	TG_POSTURE_SEARCHING = 10,
	TG_POSTURE_FALLING = 11,
	TG_POSTURE_MOUNT = 12,
	TG_POSTURE_STASIS = 13,
	TG_POSTURE_KNOCKBACK = 14,
	TG_POSTURE_MESMERIZE = 15,
	TG_POSTURE_DISARMED = 16,
	TG_POSTURE_SCARED = 17,
	TG_POSTURE_STUNNED = 18,
	TG_POSTURE_PULLED = 19,
	TG_POSTURE_FEARLIFT = 20,
	TG_POSTURE_SHOOTWHILEPULL = 21,
	TG_POSTURE_NONE = 22,
	TG_POSTURE_MAX = 23,
};

enum class ETrackActiveCondition : uint8_t {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3,
};

enum class EBeamMethod : uint8_t {
	PEBM_Distance = 0,
	PEBM_EndPoints = 1,
	PEBM_EndPoints_Interpolated = 2,
	PEBM_UserSet_EndPoints = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX = 5,
};

enum class CorruptionChargesAnimEvent : uint8_t {
	CorruptionChargesAE_Show = 0,
	CorruptionChargesAE_Hide = 1,
	CorruptionChargesAE_Increase = 2,
	CorruptionChargesAE_Decrease = 3,
	CorruptionChargesAE_MaxStacks = 4,
	CorruptionChargesAE_MAX = 5,
};

enum class EDamageEffectScreenLocation : uint8_t {
	DESL_Right = 0,
	DESL_TopRight = 1,
	DESL_Top = 2,
	DESL_TopLeft = 3,
	DESL_Left = 4,
	DESL_BottomLeft = 5,
	DESL_Bottom = 6,
	DESL_BottomRight = 7,
	DESL_MAX = 8,
};

enum class CameraEffectVisiblity : uint8_t {
	CEV_1pAnd3p = 0,
	CEV_1pOnly = 1,
	CEV_3pOnly = 2,
	CEV_MAX = 3,
};

enum class TG_PLAY_FIRE_EFFECT_ON : uint8_t {
	START_FIRE = 0,
	Fire = 1,
	NEVER = 2,
	TG_PLAY_FIRE_EFFECT_ON_MAX = 3,
};

enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5,
};

enum class EInterpTrackMoveFrame : uint8_t {
	IMF_World = 0,
	IMF_RelativeToInitial = 1,
	IMF_MAX = 2,
};

enum class EOnlineAccountTier : uint8_t {
	OAT_Unknown = 0,
	OAT_NewUser = 1,
	OAT_Silver = 2,
	OAT_Gold = 3,
	OAT_FamilyGold = 4,
	OAT_MAX = 5,
};

enum class EMobileTexCoordsSource : uint8_t {
	MTCS_TexCoords0 = 0,
	MTCS_TexCoords1 = 1,
	MTCS_TexCoords2 = 2,
	MTCS_TexCoords3 = 3,
	MTCS_MAX = 4,
};

enum class EGameEnvironmentRule : uint8_t {
	GameEnvRule_Normal = 0,
	GameEnvRule_Chill = 1,
	GameEnvRule_Foggy = 2,
	GameEnvRule_HeatWave = 3,
	GameEnvRule_MAX = 4,
};

enum class PING_TYPE : uint8_t {
	PT_NORMAL = 0,
	PT_NORMAL_ENEMY = 1,
	PT_RETREAT = 2,
	PT_RETREAT_ENEMY = 3,
	PT_ALERT = 4,
	PT_ALERT_ENEMY = 5,
	PT_SENTINEL = 6,
	PT_SENTINEL_ENEMY = 7,
	PT_ALERT_SILENT = 8,
	PT_MAX = 9,
};

enum class ESceneTextureType : uint8_t {
	SceneTex_Lighting = 0,
	SceneTex_MAX = 1,
};

enum class ESoundClassName : uint8_t {
	ESoundClassName_MAX = 0,
};

enum class EOM_CURRENCY_TYPE : uint8_t {
	EOMCT_NONE = 0,
	EOMCT_PLAYERTOKENS = 1,
	EOMCT_CHARACTERXP = 2,
	EOMCT_PLAYERXP = 3,
	EOMCT_BATTLEPASSXP = 4,
	EOMCT_MAX = 5,
};

enum class EOM_BONUS_TYPE : uint8_t {
	EOMBT_NONE = 0,
	EOMBT_ADDITIVE = 1,
	EOMBT_MULTIPLICATIVE = 2,
	EOMBT_FLAT = 3,
	EOMBT_MAX = 4,
};

enum class GameplayDesignType : uint8_t {
	GDT_None = 0,
	GDT_Player = 1,
	GDT_Pet = 2,
	GDT_Deployable = 3,
	GDT_Shield = 4,
	GDT_MAX = 5,
};

enum class EAutoMovePayload : uint8_t {
	AUTOMOVE_None = 0,
	AUTOMOVE_Forward = 1,
	AUTOMOVE_Backward = 2,
	AUTOMOVE_MAX = 3,
};

enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5,
};

enum class eMICEventType : uint8_t {
	MET_NONE = 0,
	MET_DEFENSE_ALARM = 1,
	MET_MAX = 2,
};

enum class ESummonState : uint8_t {
	ESS_None = 0,
	ESS_Transition = 1,
	ESS_Active = 2,
	ESS_Dispelled = 3,
	ESS_ImaniDied = 4,
	ESS_AvatarDied = 5,
	ESS_MAX = 6,
};

enum class EPComImageDownloadState : uint8_t {
	TIDS_NotStarted = 0,
	TIDS_Downloading = 1,
	TIDS_Succeeded = 2,
	TIDS_Failed = 3,
	TIDS_MAX = 4,
};

enum class EProfileControllerVibrationToggleOptions : uint8_t {
	PCVTO_Off = 0,
	PCVTO_IgnoreThis = 1,
	PCVTO_IgnoreThis2 = 2,
	PCVTO_On = 3,
	PCVTO_MAX = 4,
};

enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_MAX = 2,
};

enum class EPComVideoPlayerError : uint8_t {
	PVPE_NoError = 0,
	PVPE_CannotOpenVideo = 1,
	PVPE_StreamingProblem = 2,
	PVPE_Unknown = 3,
	PVPE_MAX = 4,
};

enum class UICHESTITEM_BACKGROUND_FRAME : uint8_t {
	UICIBF_NONE = 0,
	UICIBF_CHESTITEM = 1,
	UICIBF_GIFTITEM = 2,
	UICIBF_DISABLEDITEM = 3,
	UICIBF_MAX = 4,
};

enum class EMaterialUsage : uint8_t {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_FracturedMeshes = 1,
	MATUSAGE_ParticleSprites = 2,
	MATUSAGE_BeamTrails = 3,
	MATUSAGE_ParticleSubUV = 4,
	MATUSAGE_SpeedTree = 5,
	MATUSAGE_StaticLighting = 6,
	MATUSAGE_GammaCorrection = 7,
	MATUSAGE_LensFlare = 8,
	MATUSAGE_InstancedMeshParticles = 9,
	MATUSAGE_FluidSurface = 10,
	MATUSAGE_Decals = 11,
	MATUSAGE_MaterialEffect = 12,
	MATUSAGE_MorphTargets = 13,
	MATUSAGE_FogVolumes = 14,
	MATUSAGE_RadialBlur = 15,
	MATUSAGE_InstancedMeshes = 16,
	MATUSAGE_SplineMesh = 17,
	MATUSAGE_ScreenDoorFade = 18,
	MATUSAGE_APEXMesh = 19,
	MATUSAGE_Terrain = 20,
	MATUSAGE_Landscape = 21,
	MATUSAGE_MobileLandscape = 22,
	MATUSAGE_MAX = 23,
};

enum class ETransitionType : uint8_t {
	TT_None = 0,
	TT_Paused = 1,
	TT_Loading = 2,
	TT_Saving = 3,
	TT_Connecting = 4,
	TT_Precaching = 5,
	TT_MAX = 6,
};

enum class UIENDTIMES_STATE : uint8_t {
	UIETS_HOME = 0,
	UIETS_REWARDS = 1,
	UIETS_QUESTS = 2,
	UIETS_OVERVIEW = 3,
	UIETS_MAX = 4,
};

enum class EBankCooldownReduction : uint8_t {
	BCR_None = 0,
	BCR_Once = 1,
	BCR_Always = 2,
	BCR_Custom = 3,
	BCR_MAX = 4,
};

enum class UIEOML_STATE : uint8_t {
	UIEOML_BESTCLASS = 0,
	UIEOML_REWARDS = 1,
	UIEOML_TRIALS = 2,
	UIEOML_QUESTS = 3,
	UIEOML_SCOREBOARD = 4,
	UIEOML_MAX = 5,
};

enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_World = 0,
	TRANSFORM_View = 1,
	TRANSFORM_Local = 2,
	TRANSFORM_Tangent = 3,
	TRANSFORM_MAX = 4,
};

enum class TG_CAMERAPOSTURE : uint8_t {
	TG_CAMERAPOSTURE_None = 0,
	TG_CAMERAPOSTURE_Ability3P = 1,
	TG_CAMERAPOSTURE_Force3P = 2,
	TG_CAMERAPOSTURE_Force1P = 3,
	TG_CAMERAPOSTURE_MAX = 4,
};

enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3,
};

enum class SimplifiedItemObtainabilityValue : uint8_t {
	SIOV_Normal = 0,
	SIOV_Limited = 1,
	SIOV_Exclusive = 2,
	SIOV_Mastery = 3,
	SIOV_Quest = 4,
	SIOV_VIPReward = 5,
	SIOV_Unlimited = 6,
	SIOV_MAX = 7,
};

enum class EMeshType : uint8_t {
	MeshType_StaticMesh = 0,
	MeshType_SkeletalMesh = 1,
	MeshType_MAX = 2,
};

enum class MaldambaSpecificChallengeEntryType : uint8_t {
	MALCHAL_FEAR_TARGET = 0,
	MALCHAL_HEAL_ALLY = 1,
	MALCHAL_BECOME_SNAKE = 2,
	MALCHAL_MAX = 3,
};

enum class PLAYER_COMBAT_EVENT_TYPE : uint8_t {
	PCET_None = 0,
	PCET_Spawn = 1,
	PCET_MAX = 2,
};

enum class EFocusType : uint8_t {
	FOCUS_Distance = 0,
	FOCUS_Position = 1,
	FOCUS_MAX = 2,
};

enum class EGameMode : uint8_t {
	GameMode_Siege = 0,
	GameMode_Survival = 1,
	GameMode_CapturePoint = 2,
	GameMode_MAX = 3,
};

enum class FWFileType : uint8_t {
	FWFT_Log = 0,
	FWFT_Stats = 1,
	FWFT_HTML = 2,
	FWFT_User = 3,
	FWFT_Debug = 4,
	FWFT_MAX = 5,
};

enum class EWaveformFunction : uint8_t {
	WF_Constant = 0,
	WF_LinearIncreasing = 1,
	WF_LinearDecreasing = 2,
	WF_Sin0to90 = 3,
	WF_Sin90to180 = 4,
	WF_Sin0to180 = 5,
	WF_Noise = 6,
	WF_MAX = 7,
};

enum class UIEOML_REWARD_ENTRY_ICON : uint8_t {
	UIEOMLREI_NONE = 0,
	UIEOMLREI_PARTYOFF = 1,
	UIEOMLREI_PARTYON = 2,
	UIEOMLREI_ACCOUNTOFF = 3,
	UIEOMLREI_ACCOUNTON = 4,
	UIEOMLREI_NETCAFE1 = 5,
	UIEOMLREI_NETCAFE2 = 6,
	UIEOMLREI_NETCAFE3 = 7,
	UIEOMLREI_MATCHBOOST = 8,
	UIEOMLREI_VIPOFF = 9,
	UIEOMLREI_VIPON = 10,
	UIEOMLREI_SKINBOOST = 11,
	UIEOMLREI_VIPTIERBOOST = 12,
	UIEOMLREI_ACCOLADE = 13,
	UIEOMLREI_EVENT = 14,
	UIEOMLREI_EOMBOOST = 15,
	UIEOMLREI_MAX = 16,
};

enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_RandomExhaustive = 2,
	BONESOCKETSEL_MAX = 3,
};

enum class EFidgetType : uint8_t {
	FT_Timed = 0,
	FT_ChanceOnIdleCompletes = 1,
	FT_MAX = 2,
};

enum class VatuUltAnimState : uint8_t {
	VatuUltAnimState_Buildup = 0,
	VatuUltAnimState_ChargeUp = 1,
	VatuUltAnimState_Fire = 2,
	VatuUltAnimState_MAX = 3,
};

enum class MenuContentDataType : uint8_t {
	MCDT_None = 0,
	MCDT_MainMenu = 1,
	MCDT_MAX = 2,
};

enum class TgClientVisibilityMode : uint8_t {
	CVM_NORMAL = 0,
	CVM_ENEMY = 1,
	CVM_PLAYERS = 2,
	CVM_ALL = 3,
	CVM_MAX = 4,
};

enum class eCollectionRewardType : uint8_t {
	ECRT_None = 0,
	ECRT_Gold = 1,
	ECRT_Bounty = 2,
	ECRT_Event = 3,
	ECRT_Skin = 4,
	ECRT_XP = 5,
	ECRT_MAX = 6,
};

enum class RadialMenuVGSChildDir : uint8_t {
	RMVGSCD_N = 0,
	RMVGSCD_E = 1,
	RMVGSCD_S = 2,
	RMVGSCD_W = 3,
	RMVGSCD_MAX = 4,
};

enum class AlertType : uint8_t {
	ATT_Regular = 0,
	ATT_Beneficial = 1,
	ATT_Detrimental = 2,
	ATT_Spectator = 3,
	ATT_Important = 4,
	ATT_MAX = 5,
};

enum class ChargeFiringType : uint8_t {
	CFT_Fire = 0,
	CFT_PreFire = 1,
	CFT_PostFire = 2,
	CFT_MAX = 3,
};

enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3,
};

enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3,
};

enum class EHavokNavigationMeshType : uint8_t {
	HavokNavMesh_Pristine = 0,
	HavokNavMesh_Obstacle = 1,
	HavokNavMesh_Taskforce1 = 2,
	HavokNavMesh_Taskforce2 = 3,
	HavokNavMesh_MAX = 4,
};

enum class GAMEMENU_OPTIONS : uint8_t {
	UIGM_RESUME = 0,
	UIGM_NOTIFICATION = 1,
	UIGM_SETTINGS = 2,
	UIGM_FACEBOOK = 3,
	UIGM_CREDITS = 4,
	UIGM_QUITGAME = 5,
	UIGM_MAX = 6,
};

enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace = 0,
	BCS_ActorSpace = 1,
	BCS_ComponentSpace = 2,
	BCS_ParentBoneSpace = 3,
	BCS_BoneSpace = 4,
	BCS_OtherBoneSpace = 5,
	BCS_BaseMeshSpace = 6,
	BCS_MAX = 7,
};

enum class UIStoreChampFilter : uint8_t {
	UISCF_All = 0,
	UISCF_Owned = 1,
	UISCF_Individual = 2,
	UISCF_MAX = 3,
};

enum class KINESSA_HUD_TYPE : uint8_t {
	KINESSA_NORMAL = 0,
	KINESSA_VALENTINA = 1,
	KINESSA_MAX = 2,
};

enum class EInstanceWeightUsage : uint8_t {
	IWU_PartialSwap = 0,
	IWU_FullSwap = 1,
	IWU_MAX = 2,
};

enum class EAmbientOcclusionQuality : uint8_t {
	AO_High = 0,
	AO_Medium = 1,
	AO_Low = 2,
	AO_MAX = 3,
};

enum class EFootstepTypes : uint8_t {
	FOOTSTEP_Run = 0,
	FOOTSTEP_Walk = 1,
	FOOTSTEP_Scuff = 2,
	FOOTSTEP_MAX = 3,
};

enum class HomeScreenPanel : uint8_t {
	HSP_Play = 0,
	HSP_Champ = 1,
	HSP_BattlePass = 2,
	HSP_ChallengeSystem = 3,
	HSP_Store = 4,
	HSP_Quests = 5,
	HSP_Profile = 6,
	HSP_SimulMedia = 7,
	HSP_Event = 8,
	HSP_MAX = 9,
};

enum class ECombatTargetType : uint8_t {
	AICombatTarget_Any = 0,
	AICombatTarget_God = 1,
	AICombatTarget_Guardian = 2,
	AICombatTarget_Minion = 3,
	AICombatTarget_Tower = 4,
	AICombatTarget_JungleCamp = 5,
	AICombatTarget_Pet = 6,
	AICombatTarget_Decoy = 7,
	AICombatTarget_Deployable = 8,
	AICombatTarget_GodBot = 9,
	AICombatTarget_GodHuman = 10,
	AICombatTarget_SiegeWall = 11,
	AICombatTarget_Turret = 12,
	AICombatTarget_MAX = 13,
};

enum class EBlendFallTypes : uint8_t {
	FBT_Up = 0,
	FBT_UpLoop = 1,
	FBT_PreDown = 2,
	FBT_Down = 3,
	FBT_PreLand = 4,
	FBT_Land = 5,
	FBT_AirJump = 6,
	FBT_None = 7,
	FBT_MAX = 8,
};

enum class ForcedTransitionAngle : uint8_t {
	FTA_NONE = 0,
	FTA_91 = 1,
	FTA_181 = 2,
	FTA_MAX = 3,
};

enum class UICOMPONENTTYPE : uint8_t {
	UICOMP_COMPONENT = 0,
	UICOMP_SCENE = 1,
	UICOMP_MAX = 2,
};

enum class EOverlayPoolType : uint8_t {
	EOPT_Critical = 0,
	EOPT_Damage = 1,
	EOPT_Healing = 2,
	EOPT_MAX = 3,
};

enum class CorvusUltAnimState : uint8_t {
	CorvusUltAnimState_Buildup = 0,
	CorvusUltAnimState_Flying = 1,
	CorvusUltAnimState_Fire = 2,
	CorvusUltAnimState_NoFire = 3,
	CorvusUltAnimState_MAX = 4,
};

enum class ELightAffectsClassification : uint8_t {
	LAC_USER_SELECTED = 0,
	LAC_DYNAMIC_AFFECTING = 1,
	LAC_STATIC_AFFECTING = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX = 4,
};

enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_MAX = 3,
};

enum class EVoicePackSound : uint8_t {
	VPS_None = 0,
	VPS_Unlock = 1,
	VPS_Select = 2,
	VPS_MatchStart = 3,
	VPS_Ultimate = 4,
	VPS_Random = 5,
	VPS_MAX = 6,
};

enum class EHavokVersion : uint8_t {
	HAVOK_2012_2_1 = 0,
	HAVOK_2013_3_1 = 1,
	HAVOK_2014_2_1 = 2,
	HAVOK_2016_1_1 = 3,
	HAVOK_MAX = 4,
};

enum class GAME_ITEMS_TYPE : uint8_t {
	ITEMS_NONE = 0,
	ITEMS_STANDARD = 1,
	ITEMS_CONQUEST = 2,
	ITEMS_ROYALE = 3,
	ITEMS_MAX = 4,
};

enum class EReputationFeedbackType : uint8_t {
	RFBT_CommunicationsAbusiveVoice = 0,
	RFBT_CommunicationsInappropriateVideo = 1,
	RFBT_FairPlayCheater = 2,
	RFBT_FairPlayKicked = 3,
	RFBT_FairPlayKillsTeammates = 4,
	RFBT_FairPlayQuitter = 5,
	RFBT_FairPlayTampering = 6,
	RFBT_InappropriateUserGeneratedContent = 7,
	RFBT_PositiveHelpfulPlayer = 8,
	RFBT_PositiveHighQualityUserGeneratedContent = 9,
	RFBT_PositiveSkilledPlayer = 10,
	RFBT_MAX = 11,
};

enum class UISOCIAL_TAB : uint8_t {
	UISOCIAL_PARTY = 0,
	UISOCIAL_FRIENDS = 1,
	UISOCIAL_REFERRALS = 2,
	UISOCIAL_MAX = 3,
};

enum class EPhysBodyOp : uint8_t {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_Disable = 2,
	PBO_MAX = 3,
};

enum class EFaceFXRegOp : uint8_t {
	FXRO_Add = 0,
	FXRO_Multiply = 1,
	FXRO_Replace = 2,
	FXRO_MAX = 3,
};

enum class EInterpMethodType : uint8_t {
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval = 1,
	IMT_UseBrokenTangentEval = 2,
	IMT_MAX = 3,
};

enum class LobbyHudState : uint8_t {
	LHS_None = 0,
	LHS_Offline = 1,
	LHS_Lobby = 2,
	LHS_Match = 3,
	LHS_Summary = 4,
	LHS_MAX = 5,
};

enum class EMovieStreamSource : uint8_t {
	MovieStream_File = 0,
	MovieStream_Memory = 1,
	MovieStream_MAX = 2,
};

enum class ESpeedTreeMeshType : uint8_t {
	STMT_MinMinusOne = 0,
	STMT_Branches1 = 1,
	STMT_Branches2 = 2,
	STMT_Fronds = 3,
	STMT_LeafCards = 4,
	STMT_LeafMeshes = 5,
	STMT_Billboards = 6,
	STMT_Max = 7,
};

enum class EWeaponMeshSwapRetrieveStrategy : uint8_t {
	WMSRS_None = 0,
	WMSRS_Normal = 1,
	WMSRS_PostFire = 2,
	WMSRS_MAX = 3,
};

enum class EUIOrientation : uint8_t {
	UI_Unknown = 0,
	UI_Portait = 1,
	UI_PortaitUpsideDown = 2,
	UI_LandscapeRight = 3,
	UI_LandscapeLeft = 4,
	UI_MAX = 5,
};

enum class EAimID : uint8_t {
	EAID_LeftUp = 0,
	EAID_LeftDown = 1,
	EAID_RightUp = 2,
	EAID_RightDown = 3,
	EAID_ZeroUp = 4,
	EAID_ZeroDown = 5,
	EAID_ZeroLeft = 6,
	EAID_ZeroRight = 7,
	EAID_CellLU = 8,
	EAID_CellCU = 9,
	EAID_CellRU = 10,
	EAID_CellLC = 11,
	EAID_CellCC = 12,
	EAID_CellRC = 13,
	EAID_CellLD = 14,
	EAID_CellCD = 15,
	EAID_CellRD = 16,
	EAID_MAX = 17,
};

enum class EInstancedMeshStreamState : uint8_t {
	IMSS_StreamedOut = 0,
	IMSS_StreamedIn = 1,
	IMSS_StreamingInFile = 2,
	IMSS_StreamingInRenderData = 3,
	IMSS_StreamingOut = 4,
	IMSS_MAX = 5,
};

enum class EPaladinsRecoilType : uint8_t {
	PRT_Normal = 0,
	PRT_AimDownSights = 1,
	PRT_StimActive = 2,
	PRT_MAX = 3,
};

enum class SpectatorCameraMode : uint8_t {
	SpecCam_None = 0,
	SpecCam_Fly = 1,
	SpecCam_FollowThirdPerson = 2,
	SpecCam_FollowFirstPerson = 3,
	SpecCam_FollowTopDown = 4,
	SpecCam_Camera = 5,
	SpecCam_Overview = 6,
	SpecCam_LockedView = 7,
	SpecCam_MAX = 8,
};

enum class GFXOPTION : uint8_t {
	GFXOPTION_NONE = 0,
	GFXOPTION_BACK = 1,
	GFXOPTION_APPLY = 2,
	GFXOPTION_LEAVEQUEUE = 3,
	GFXOPTION_SELECT = 4,
	GFXOPTION_ADDCARD = 5,
	GFXOPTION_REMOVECARD = 6,
	GFXOPTION_FILTER = 7,
	GFXOPTION_FILTERCHAMP = 8,
	GFXOPTION_FILTERCHAMP_Y = 9,
	GFXOPTION_ADDREMOVE = 10,
	GFXOPTION_CHAT = 11,
	GFXOPTION_CHANGEUSER = 12,
	GFXOPTION_CHANGETAB = 13,
	GFXOPTION_JOIN = 14,
	GFXOPTION_PREVIOUS = 15,
	GFXOPTION_NEXT = 16,
	GFXOPTION_ACCEPT = 17,
	GFXOPTION_CANCEL = 18,
	GFXOPTION_PURCHASE = 19,
	GFXOPTION_HOME = 20,
	GFXOPTION_PLAYAGAIN = 21,
	GFXOPTION_UNLOCK = 22,
	GFXOPTION_LEADERBOARD = 23,
	GFXOPTION_TRADE = 24,
	GFXOPTION_PURCHASEGEMS = 25,
	GFXOPTION_MUTEPLAYER = 26,
	GFXOPTION_UNMUTEPLAYER = 27,
	GFXOPTION_REROLL_QUEST = 28,
	GFXOPTION_CLAIM_QUEST = 29,
	GFXOPTION_CHANGEEMAIL = 30,
	GFXOPTION_DECLINE = 31,
	GFXOPTION_VIEWPROFILE = 32,
	GFXOPTION_SBVIEWPROFILE = 33,
	GFXOPTION_INVITE = 34,
	GFXOPTION_CRAFT = 35,
	GFXOPTION_DISENCHANT = 36,
	GFXOPTION_MASTERYDETAILS = 37,
	GFXOPTION_HOLDSELECT = 38,
	GFXOPTION_VIEWCHAMPIONS = 39,
	GFXOPTION_PURCHASE_INGAME = 40,
	GFXOPTION_HOLDPURCHASE = 41,
	GFXOPTION_CLEAR = 42,
	GFXOPTION_DELETELOADOUT = 43,
	GFXOPTION_TOGGLETAB = 44,
	GFXOPTION_PLAY = 45,
	GFXOPTION_INFO = 46,
	GFXOPTION_RESET_TO_DEFAULTS = 47,
	GFXOPTION_SAVE_AND_EXIT = 48,
	GFXOPTION_ACTIVATE_BOOSTER = 49,
	GFXOPTION_CLEAR_ALL = 50,
	GFXOPTION_WATCH_NOW = 51,
	GFXOPTION_EQUIP_ALL = 52,
	GFXOPTION_NOT_NOW = 53,
	GFXOPTION_CLAIM_REWARD = 54,
	GFXOPTION_UNDO = 55,
	GFXOPTION_MAX = 56,
};

enum class EOnlineAccountCreateStatus : uint8_t {
	OACS_CreateSuccessful = 0,
	OACS_UnknownError = 1,
	OACS_InvalidUserName = 2,
	OACS_InvalidPassword = 3,
	OACS_InvalidUniqueUserName = 4,
	OACS_UniqueUserNameInUse = 5,
	OACS_ServiceUnavailable = 6,
	OACS_MAX = 7,
};

enum class EProfileVoiceThruSpeakersOptions : uint8_t {
	PVTSO_Off = 0,
	PVTSO_On = 1,
	PVTSO_Both = 2,
	PVTSO_MAX = 3,
};

enum class MinimapFactoryType : uint8_t {
	MMF_None = 0,
	MMF_Speed = 1,
	MMF_Damage = 2,
	MMF_Protection = 3,
	MMF_Mana = 4,
	MMF_Cooldown = 5,
	MMF_HealthRegen = 6,
	MMF_BonusMinions = 7,
	MMF_Tower = 8,
	MMF_Phoenix = 9,
	MMF_CapturePoint = 10,
	MMF_MinorSpawn = 11,
	MMF_GoldFury = 12,
	MMF_SiegeSpawner = 13,
	MMF_MAX = 14,
};

enum class EWeaponMeshState : uint8_t {
	WMS_Inhand = 0,
	WMS_Grumpy = 1,
	WMS_Poppy = 2,
	WMS_MAX = 3,
};

enum class MOONSHARD_WITHIN_RANGE : uint8_t {
	MSWR_None = 0,
	MSWR_Outer = 1,
	MSWR_Knockup = 2,
	MSWR_Inner = 3,
	MSWR_MAX = 4,
};

enum class EConsoleType : uint8_t {
	CONSOLE_Any = 0,
	CONSOLE_Xbox360 = 1,
	CONSOLE_PS3 = 2,
	CONSOLE_Mobile = 3,
	CONSOLE_IPhone = 4,
	CONSOLE_Android = 5,
	CONSOLE_WiiU = 6,
	CONSOLE_Flash = 7,
	CONSOLE_Orbis = 8,
	CONSOLE_Durango = 9,
	CONSOLE_Switch = 10,
	CONSOLE_MAX = 11,
};

enum class FFG_ForceFieldCoordinates : uint8_t {
	FFG_CARTESIAN = 0,
	FFG_SPHERICAL = 1,
	FFG_CYLINDRICAL = 2,
	FFG_TOROIDAL = 3,
	FFG_MAX = 4,
};

enum class ScoreboardTabs : uint8_t {
	UIST_Items = 0,
	UIST_Loadouts = 1,
	UIST_Overview = 2,
	UIST_MAX = 3,
};

enum class EZoomState : uint8_t {
	ZOOM_None = 0,
	ZOOM_In = 1,
	ZOOM_Out = 2,
	ZOOM_MAX = 3,
};

enum class EAchievementRewardType : uint8_t {
	ART_Unknown = 0,
	ART_Gamerscore = 1,
	ART_InApp = 2,
	ART_Art = 3,
	ART_MAX = 4,
};

enum class UIPLAYSTATE : uint8_t {
	UIPS_QUICKPLAY = 0,
	UIPS_RANKED = 1,
	UIPS_TRAINING = 2,
	UIPS_CUSTOM = 3,
	UIPS_DEVQUEUES = 4,
	UIPS_MAX = 5,
};

enum class EPitchControlType : uint8_t {
	PITCHCONTROL_Disable = 0,
	PITCHCONTROL_Legacy = 1,
	PITCHCONTROL_Pure = 2,
	PITCHCONTROL_UserDefined = 3,
	PITCHCONTROL_MAX = 4,
};

enum class EEffectGroupCategory : uint8_t {
	AIEffectCategory_None = 0,
	AIEffectCategory_Slow = 1,
	AIEffectCategory_Stun = 2,
	AIEffectCategory_Frozen = 3,
	AIEffectCategory_Knockback = 4,
	AIEffectCategory_Root = 5,
	AIEffectCategory_Silence = 6,
	AIEffectCategory_Disarm = 7,
	AIEffectCategory_Cripple = 8,
	AIEffectCategory_Daze = 9,
	AIEffectCategory_Fear = 10,
	AIEffectCategory_Taunt = 11,
	AIEffectCategory_Mesmerize = 12,
	AIEffectCategory_MAX = 13,
};

enum class UIChampionMatchState : uint8_t {
	UICMS_None = 0,
	UICMS_Disallowed = 1,
	UICMS_Available = 2,
	UICMS_Disabled = 3,
	UICMS_PotentialBan = 4,
	UICMS_Banned = 5,
	UICMS_BannedBlue = 6,
	UICMS_BannedRed = 7,
	UICMS_Selected = 8,
	UICMS_SelectedByOther = 9,
	UICMS_SelectedButAvailable = 10,
	UICMS_Locked = 11,
	UICMS_MAX = 12,
};

enum class AttackType : uint8_t {
	TGAT_None = 0,
	TGAT_Range = 1,
	TGAT_AOE = 2,
	TGAT_Falling = 3,
	TGAT_MAX = 4,
};

enum class SETTING_TYPE : uint8_t {
	SET_RESOLUTION = 0,
	SET_ASPECTRATIO = 1,
	SET_SCREENTYPE = 2,
	SET_ANTIALIASING = 3,
	SET_VERTICALSYNC = 4,
	SET_DETAILWORLD = 5,
	SET_DETAILSHADOW = 6,
	SET_DETAILTEXTURE = 7,
	SET_DETAILPARTICLE = 8,
	SET_SHADERQUALITY = 9,
	SET_GAMMALEVEL = 10,
	SET_FOV = 11,
	SET_SAFEFRAME = 12,
	SET_HUDMINIMAP = 13,
	SET_HUDTEAMS = 14,
	SET_HUDDAMAGE = 15,
	SET_HUDSKILLS = 16,
	SET_HUDCOMBATLOG = 17,
	SET_HUDAUTOLEVEL = 18,
	SET_HUDHEALTHBAR = 19,
	SET_HUDBLOOM = 20,
	SET_HUDCOLOR = 21,
	SET_HUDRETICLE = 22,
	SET_VOLUMEMASTER = 23,
	SET_VOLUMEEFFECTS = 24,
	SET_VOLUMEMUSIC = 25,
	SET_VOLUMEVOICE = 26,
	SET_VOLUMENOTIFY = 27,
	SET_MOUSEINVERT = 28,
	SET_MOUSESMOOTH = 29,
	SET_ALLOWGAMEPAD = 30,
	SET_MOUSESENSITIVITY = 31,
	SET_XAXISSENSITIVITY = 32,
	SET_YAXISSENSITIVITY = 33,
	SET_AIMACCELMODE = 34,
	SET_AIMACCELBOOST = 35,
	SET_GAMEPADINVERT = 36,
	SET_AIMASSISTFRICTION = 37,
	SET_AIMASSISTMAGNET = 38,
	SET_DEADZONEINNER = 39,
	SET_DEADZONEOUTER = 40,
	SET_SHOWGAMETIPS = 41,
	SET_SPECTATE = 42,
	SET_SPECTATORPLAYERICONS = 43,
	SET_SPECTATORSHOWITEMS = 44,
	SET_SPECTATORBLUETEAMSERIESSCORE = 45,
	SET_SPECTATORREDTEAMSERIESSCORE = 46,
	SET_CONTROLICONSTYLE = 47,
	SET_HAPTICFEEDBACK = 48,
	SET_HUDTEAMUI = 49,
	SET_VOLUMEVOICECHAT = 50,
	SET_VOLUMEVOICECHATMIC = 51,
	SET_ENABLEVOICECHAT = 52,
	SET_USEVOICECHATPUSHTOTALK = 53,
	SET_TOGGLEZOOM = 54,
	SET_AUDIOPANNING = 55,
	SET_SCOPESENSITIVITY = 56,
	SET_RETICLECHANGE = 57,
	SET_USEPROFANITYFILTER = 58,
	SET_HEALFEED = 59,
	SET_D3D11 = 60,
	SET_RESOLUTIONSCALE = 61,
	SET_VOLUMECHARACTER = 62,
	SET_SHOWLIVEVIDEO_UNUSED = 63,
	SET_SHOWCAUTERIZEHEALTHBAR = 64,
	SET_SHOWCCARDCOOLDOWNS = 65,
	SET_HUDTEAMDEATHMARKERS = 66,
	SET_HAPTICSTRENGTH = 67,
	SET_CROSSPLAY = 68,
	SET_GYRO = 69,
	SET_GYROSENSITIVITYX = 70,
	SET_GYROSENSITIVITYY = 71,
	SET_COLORBLINDMODE = 72,
	SET_CROSSPLAYCOMBINED = 73,
	SET_CROSSINPUTMETHOD = 74,
	SET_DONOTDISTURB = 75,
	SET_PUBLICPROFILE = 76,
	SET_COLORBLIND_INTENSITY = 77,
	SET_GYROAIMASSIST = 78,
	SET_VGSTYPE = 79,
	SET_SCOREBOARDTYPE = 80,
	SET_MAX = 81,
};

enum class ETargetingLineStyle : uint8_t {
	TLS_None = 0,
	TLS_MAX = 1,
};

enum class ClothBoneType : uint8_t {
	CLOTHBONE_Fixed = 0,
	CLOTHBONE_BreakableAttachment = 1,
	CLOTHBONE_TearLine = 2,
	CLOTHBONE_MAX = 3,
};

enum class ETitleFileFileOp : uint8_t {
	TitleFile_None = 0,
	TitleFile_Save = 1,
	TitleFile_Load = 2,
	TitleFile_MAX = 3,
};

enum class AUTOCOMPLETE_STATE : uint8_t {
	NOTACTIVE = 0,
	STANDBY = 1,
	PARAM_ONE = 2,
	PARAM_TWO = 3,
	AUTOCOMPLETE_STATE_MAX = 4,
};

enum class UIDLT_Tag : uint8_t {
	UIDLT_Decays = 0,
	UIDLT_PlatinumQueue = 1,
	UIDLT_NoDivisions = 2,
	UIDLT_MAX = 3,
};

enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3,
};

enum class EParticleEventOutputType : uint8_t {
	ePARTICLEOUT_Spawn = 0,
	ePARTICLEOUT_Death = 1,
	ePARTICLEOUT_Collision = 2,
	ePARTICLEOUT_AttractorCollision = 3,
	ePARTICLEOUT_Kismet = 4,
	ePARTICLEOUT_MAX = 5,
};

enum class EBoneSocketAttractorFalloffType : uint8_t {
	BSFOFF_Constant = 0,
	BSFOFF_Linear = 1,
	BSFOFF_Exponent = 2,
	BSFOFF_MAX = 3,
};

enum class SHORTCUT_COMMANDS : uint8_t {
	CHAT_COMMAND_R = 0,
	CHAT_COMMAND_REPLY = 1,
	CHAT_COMMAND_W = 2,
	CHAT_COMMAND_WHISPER = 3,
	CHAT_COMMAND_MAX = 4,
};

enum class SoundDistanceModel : uint8_t {
	ATTENUATION_Linear = 0,
	ATTENUATION_Logarithmic = 1,
	ATTENUATION_Inverse = 2,
	ATTENUATION_LogReverse = 3,
	ATTENUATION_NaturalSound = 4,
	ATTENUATION_MAX = 5,
};

enum class EPreferredLightmapType : uint8_t {
	EPLT_Default = 0,
	EPLT_Directional = 1,
	EPLT_Simple = 2,
	EPLT_MAX = 3,
};

enum class TgMapTeam : uint8_t {
	MAPTEAM_2 = 0,
	MAPTEAM_3 = 1,
	MAPTEAM_NEUTRAL = 2,
	MAPTEAM_MAX = 3,
};

enum class EBehaviorStatus : uint8_t {
	BEHAVIOR_None = 0,
	BEHAVIOR_Complete = 1,
	BEHAVIOR_Running = 2,
	BEHAVIOR_Paused = 3,
	BEHAVIOR_Failed = 4,
	BEHAVIOR_Aborted = 5,
	BEHAVIOR_MAX = 6,
};

enum class UIChampionEquipTab : uint8_t {
	UICET_SKIN = 0,
	UICET_WEAPON = 1,
	UICET_EMOTE = 2,
	UICET_MVPPOSE = 3,
	UICET_MAX = 4,
};

enum class ENotifySound : uint8_t {
	NSND_None = 0,
	NSND_Waypoint = 1,
	NSND_BGDeploying = 2,
	NSND_BGDeployed = 3,
	NSND_MapShow = 4,
	NSND_MapHide = 5,
	NSND_BGFogAlertShown = 6,
	NSND_BGFogAlertAnimating = 7,
	NSND_FogWarning = 8,
	NSND_TeammateDied = 9,
	NSND_TeamWon = 10,
	NSND_TeamWiped = 11,
	NSND_MovementUnlocked = 12,
	NSND_BGZeppelinInTransit = 13,
	NSND_BGZeppelinDeploying = 14,
	NSND_BGZeppelinDone = 15,
	NSND_BGFirstBlood = 16,
	NSND_BG75Remain = 17,
	NSND_BG50Remain = 18,
	NSND_BG25Remain = 19,
	NSND_BG5Remain = 20,
	NSND_BGChickenState_Into = 21,
	NSND_BGChickenState_OutOf = 22,
	NSND_OpenLoot = 23,
	NSND_POTG = 24,
	NSND_ClientRevived = 25,
	NSND_LobbyToLobby = 26,
	NSND_LobbyToMatch = 27,
	NSND_LobbyToSummary = 28,
	NSND_GoToAsiaticEvent = 29,
	NSND_GoToBattlePass = 30,
	NSND_GoToBattlePassEncore = 31,
	NSND_Unlocked = 32,
	NSND_BattlePassAcquisition = 33,
	NSND_GoToEvent = 34,
	NSND_EOMLShards = 35,
	NSND_HNHBlessing = 36,
	NSND_HNHMinorUnlock = 37,
	NSND_HNHMajorUnlock = 38,
	NSND_GameIntro = 39,
	NSND_MatchLobbyChampions = 40,
	NSND_MatchLobbyCustomize = 41,
	NSND_MatchReady = 42,
	NSND_MUS_Level_Default_Play = 43,
	NSND_TDM_MUS_Intro = 44,
	NSND_TDM_MUS_MatchStart = 45,
	NSND_TDM_MUS_Low = 46,
	NSND_TDM_MUS_Medium = 47,
	NSND_TDM_MUS_High = 48,
	NSND_TDM_MUS_End = 49,
	NSND_Flagball_BallCatch = 50,
	NSND_Flagball_BallDropped = 51,
	NSND_Flagball_BallPickedUp = 52,
	NSND_Flagball_BallReset = 53,
	NSND_Flagball_BallSpawned = 54,
	NSND_Flagball_BallThrow = 55,
	NSND_Flagball_Countdown = 56,
	NSND_Flagball_Game_EnemyScored = 57,
	NSND_Flagball_Game_MatchPoint = 58,
	NSND_Flagball_Game_ScoreAchieved = 59,
	NSND_Flagball_Game_TeamScored = 60,
	NSND_Flagball_ANN_BallSpawn = 61,
	NSND_Flagball_ANN_BallReset = 62,
	NSND_Flagball_ANN_BallDropped = 63,
	NSND_Flagball_ANN_BallEnemy = 64,
	NSND_Flagball_ANN_BallTeam = 65,
	NSND_Flagball_ANN_Game_TeamScore = 66,
	NSND_Flagball_ANN_Game_EnemyScore = 67,
	NSND_Flagball_ANN_Game_MatchPoint = 68,
	NSND_Flagball_ANN_Game_Victory = 69,
	NSND_Flagball_ANN_Game_Defeat = 70,
	NSND_Flagball_ANN_Game_Start = 71,
	NSND_Flagball_ANN_Game_LeadGain = 72,
	NSND_Flagball_ANN_Game_LeadLost = 73,
	NSND_Flagball_ANN_Game_Tied = 74,
	NSND_Flagball_MUS_FlagBall_Loading = 75,
	NSND_Flagball_MUS_FlagBall_Intro = 76,
	NSND_Flagball_MUS_FlagBall_MatchStart = 77,
	NSND_Flagball_MUS_FlagBall_Score = 78,
	NSND_Flagball_MUS_FlagBall_MatchPoint = 79,
	NSND_Flagball_MUS_FlagBall_End = 80,
	NSND_AbyssalEcho_EchoSpawned = 81,
	NSND_AbyssalEcho_EchoDespawned = 82,
	NSND_AbyssalEcho_EchoDied = 83,
	NSND_AbyssalEcho_ANN_FernandoSpawned = 84,
	NSND_AbyssalEcho_ANN_ViktorSpawned = 85,
	NSND_AbyssalEcho_ANN_VivianSpawned = 86,
	NSND_AbyssalEcho_ANN_YingSpawned = 87,
	NSND_AbyssalEcho_ANN_FernandoDespawned = 88,
	NSND_AbyssalEcho_ANN_ViktorDespawned = 89,
	NSND_AbyssalEcho_ANN_VivianDespawned = 90,
	NSND_AbyssalEcho_ANN_YingDespawned = 91,
	NSND_AbyssalEcho_ANN_FernandoDied = 92,
	NSND_AbyssalEcho_ANN_ViktorDied = 93,
	NSND_AbyssalEcho_ANN_VivianDied = 94,
	NSND_AbyssalEcho_ANN_YingDied = 95,
	NSND_AbyssalEcho_ANN_FernandoTaunt = 96,
	NSND_AbyssalEcho_ANN_ViktorTaunt = 97,
	NSND_AbyssalEcho_ANN_VivianTaunt = 98,
	NSND_AbyssalEcho_ANN_YingTaunt = 99,
	NSND_AbyssalEcho_MUS_EchoSpawn = 100,
	NSND_AbyssalEcho_MUS_Outro = 101,
	NSND_EndTimes_Intro = 102,
	NSND_EndTimes_PointSwitch = 103,
	NSND_EndTimes_Buff_Speed = 104,
	NSND_EndTimes_Buff_Damage = 105,
	NSND_EndTimes_Buff_Health = 106,
	NSND_EndTimes_Buff_Jump = 107,
	NSND_EndTimes_Buff_Cooldown = 108,
	NSND_EndTimes_Buff_Ultimate = 109,
	NSND_EndTimes_75Percent = 110,
	NSND_CrazyKing_PointSwitch = 111,
	NSND_VaultOpenPurchase = 112,
	NSND_VaultCompletePurchase = 113,
	NSND_EOMLEventXPTicker = 114,
	NSND_BattlePassBooster = 115,
	NSND_BattlePassLevelUp = 116,
	NSND_BattlePassPurchase = 117,
	NSND_ChestPurchaseStart = 118,
	NSND_ChestPurchaseLoop = 119,
	NSND_ChestPurchaseLoopEnd = 120,
	NSND_ChestPurchaseEnd = 121,
	NSND_GiftPurchase = 122,
	NSND_GiftReceive = 123,
	NSND_WinterEventCompletePurchase = 124,
	NSND_CommendationReceive = 125,
	NSND_MAX = 126,
};

enum class ESliderType : uint8_t {
	ST_1D = 0,
	ST_2D = 1,
	ST_MAX = 2,
};

enum class EBlendType : uint8_t {
	EBT_ParentBoneSpace = 0,
	EBT_MeshSpace = 1,
	EBT_MAX = 2,
};

enum class EPaladinsBulletMagnetType : uint8_t {
	PBMT_AimAssistOnly = 0,
	PBMT_NoAimAssistOnly = 1,
	PBMT_AlwaysApplied = 2,
	PBMT_MAX = 3,
};

enum class ERootRotationOption : uint8_t {
	RRO_Default = 0,
	RRO_Discard = 1,
	RRO_Extract = 2,
	RRO_MAX = 3,
};

enum class EPayloadControlState : uint8_t {
	PAYLOADCONTROL_None = 0,
	PAYLOADCONTROL_Ally = 1,
	PAYLOADCONTROL_Enemy = 2,
	PAYLOADCONTROL_Contested = 3,
	PAYLOADCONTROL_MAX = 4,
};

enum class ECoverType : uint8_t {
	CT_None = 0,
	CT_Standing = 1,
	CT_MidLevel = 2,
	CT_MAX = 3,
};

enum class TriangleSortAxis : uint8_t {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3,
};

enum class DEVICE_STATS : uint8_t {
	DS_ID = 0,
	DS_DAMAGE = 1,
	DS_HEALING = 2,
	DS_PLAYER_KILLS = 3,
	DS_BOT_KILLS = 4,
	DS_DPM = 5,
	DS_HPM = 6,
	DS_MODE_COUNT = 7,
	DS_BUFF_VALUE = 8,
	DS_MAX = 9,
};

enum class EProcBuildingEdge : uint8_t {
	EPBE_Top = 0,
	EPBE_Bottom = 1,
	EPBE_Left = 2,
	EPBE_Right = 3,
	EPBE_MAX = 4,
};

enum class PrimaryObtainabilitySource : uint8_t {
	POS_None = 0,
	POS_IsOwned = 1,
	POS_Rent = 2,
	POS_Purchase = 3,
	POS_Chest = 4,
	POS_BattlePass = 5,
	POS_Event = 6,
	POS_Vault = 7,
	POS_Mastery = 8,
	POS_Promo = 9,
	POS_Mixer = 10,
	POS_DLC = 11,
	POS_Bounty = 12,
	POS_MAX = 13,
};

enum class EBeamState : uint8_t {
	EBS_Hidden = 0,
	EBS_Targeting = 1,
	EBS_Hitting = 2,
	EBS_MAX = 3,
};

enum class EAvatarState : uint8_t {
	EAS_Waiting = 0,
	EAS_Ready = 1,
	EAS_Dead = 2,
	EAS_MAX = 3,
};

enum class EDecompressionType : uint8_t {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Dingo = 7,
	DTYPE_MAX = 8,
};

enum class EZoneState : uint8_t {
	ZoneState_Inactive = 0,
	ZoneState_Activating = 1,
	ZoneState_Active = 2,
	ZoneState_Deactivating = 3,
	ZoneState_MAX = 4,
};

enum class GC_CHAT_CHANNEL : uint8_t {
	GC_CC_GLOBAL = 0,
	GC_CC_CLAN = 1,
	GC_CC_INSTANCE = 2,
	GC_CC_LOCAL_TEAM = 3,
	GC_CC_PARTY = 4,
	GC_CC_CITY = 5,
	GC_CC_PERSONAL = 6,
	GC_CC_PRIVATE_2 = 7,
	GC_CC_EOM_LOBBY = 8,
	GC_CC_SYSTEM = 9,
	GC_CC_TRADE = 10,
	GC_CC_LFG = 11,
	GC_CC_LFG_3 = 12,
	GC_CC_HELP = 13,
	GC_CC_VOIP_NEWS = 14,
	GC_CC_GM = 15,
	GC_CC_VIP = 16,
	GC_CC_LFG_4 = 17,
	GC_CC_COUNT = 18,
	GC_CC_VOIP_ECHO = 19,
	GC_CC_VOIP_CONF = 20,
	GC_CC_COMBAT = 21,
	GC_CC_EMOTE = 22,
	GC_CC_INVALID = 23,
	GC_CC_LAST = 24,
	GC_CC_MAX = 25,
};

enum class EPostProcessAAType : uint8_t {
	PostProcessAA_Off = 0,
	PostProcessAA_FXAA0 = 1,
	PostProcessAA_FXAA1 = 2,
	PostProcessAA_FXAA2 = 3,
	PostProcessAA_FXAA3 = 4,
	PostProcessAA_FXAA4 = 5,
	PostProcessAA_FXAA5 = 6,
	PostProcessAA_MLAA = 7,
	PostProcessAA_MAX = 8,
};

enum class EMcpGroupAccessLevel : uint8_t {
	MGAL_Owner = 0,
	MGAL_Member = 1,
	MGAL_Public = 2,
	MGAL_MAX = 3,
};

enum class EPhysEffectType : uint8_t {
	EPMET_Impact = 0,
	EPMET_Slide = 1,
	EPMET_MAX = 2,
};

enum class EUseDeviceAimType : uint8_t {
	AIDeviceAim_CombatTarget = 0,
	AIDeviceAim_Self = 1,
	AIDeviceAim_MAX = 2,
};

enum class EAnimAimDir : uint8_t {
	ANIMAIM_LEFTUP = 0,
	ANIMAIM_CENTERUP = 1,
	ANIMAIM_RIGHTUP = 2,
	ANIMAIM_LEFTCENTER = 3,
	ANIMAIM_CENTERCENTER = 4,
	ANIMAIM_RIGHTCENTER = 5,
	ANIMAIM_LEFTDOWN = 6,
	ANIMAIM_CENTERDOWN = 7,
	ANIMAIM_RIGHTDOWN = 8,
	ANIMAIM_MAX = 9,
};

enum class EOnRelevanceChange : uint8_t {
	ORC_NORMAL = 0,
	ORC_FORCE_KEYFRAME = 1,
	ORC_FORCE_ACTIVE = 2,
	ORC_FORCE_INACTIVE = 3,
	ORC_FORCE_OTHER = 4,
	ORC_MAX = 5,
};

enum class ETeamStatus : uint8_t {
	TEAM_WINNING = 0,
	TEAM_LOSING = 1,
	TEAM_TIED = 2,
	TEAM_MAX = 3,
};

enum class TSE_NAME : uint8_t {
	TSE_NONE = 0,
	TSE_MENU_CLOSE = 1,
	TSE_MOVIE_DONE = 2,
	TSE_MAX = 3,
};

enum class ERangeType : uint8_t {
	RangeType_Short = 0,
	RangeType_Mid = 1,
	RangeType_Long = 2,
	RangeType_None = 3,
	RangeType_MAX = 4,
};

enum class EUpdateModelType : uint8_t {
	UMT_All = 0,
	UMT_WeaponOnly = 1,
	UMT_Spray = 2,
	UMT_MAX = 3,
};

enum class EMaterialLightingModel : uint8_t {
	MLM_Phong = 0,
	MLM_NonDirectional = 1,
	MLM_Unlit = 2,
	MLM_SHPRT = 3,
	MLM_Custom = 4,
	MLM_Anisotropic = 5,
	MLM_MAX = 6,
};

enum class EManagedDecalState : uint8_t {
	DecalState_Inactive = 0,
	DecalState_Active = 1,
	DecalState_FadingOut = 2,
	DecalState_MAX = 3,
};

enum class SAACT_ACTION : uint8_t {
	SAACT_VIEW_PROFILE = 0,
	SAACT_ADD_FRIEND = 1,
	SAACT_PARTY_INVITE = 2,
	SAACT_PARTY_KICK = 3,
	SAACT_SEND_REFERRAL = 4,
	SAACT_REQUEST_INFO_STATS = 5,
	SAACT_SELECT_REFERRER = 6,
	SAACT_SEND_MESSAGE = 7,
	SAACT_BLOCK = 8,
	SAACT_UNBLOCK = 9,
	SAACT_SPECTATE = 10,
	SAACT_LIVE_SPECTATE = 11,
	SAACT_MAX = 12,
};

enum class ELocationBoneSocketDestSelectionMethod : uint8_t {
	BONESOCKETDESTSEL_Sequential = 0,
	BONESOCKETDESTSEL_Random = 1,
	BONESOCKETDESTSEL_RandomExhaustive = 2,
	BONESOCKETDESTSEL_BlendAll = 3,
	BONESOCKETDESTSEL_MAX = 4,
};

enum class SETTING_BINARY : uint8_t {
	SEB_DISABLED = 0,
	SEB_ENABLED = 1,
	SEB_MAX = 2,
};

enum class SETTING_AIMACCELMODE : uint8_t {
	SAIM_DYNAMIC = 0,
	SAIM_CLASSIC = 1,
	SAIM_PRECISION = 2,
	SAIM_MAX = 3,
};

enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2,
};

enum class EHostMigrationProgress : uint8_t {
	HostMigration_None = 0,
	HostMigration_FindingNewHost = 1,
	HostMigration_MigratingAsHost = 2,
	HostMigration_MigratingAsClient = 3,
	HostMigration_ClientTravel = 4,
	HostMigration_HostReadyToTravel = 5,
	HostMigration_Failed = 6,
	HostMigration_MAX = 7,
};

enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2,
};

enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_World = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_Tangent = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_MAX = 4,
};

enum class EHistoryResult : uint8_t {
	EHR_WIN = 0,
	EHR_LOSS = 1,
	EHR_LEFT = 2,
	EHR_MAX = 3,
};

enum class AnimationCompressionFormat : uint8_t {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7,
};

