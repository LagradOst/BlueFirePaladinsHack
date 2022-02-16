// Created by BlueFire1337
// Updated 2022-01-26
// Generated 2022-01-26

#pragma once

struct FDebugTextInfo {
	ObjectProperty SrcActor; // 0x0
	FVector SrcActorOffset; // 0x8
	FVector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	FColor TextColor; // 0x38
	uint32_t bAbsoluteLocation : 1; // 0x3c
	uint32_t bKeepAttachedToActor : 1; // 0x3c
	FVector OrigActorLocation; // 0x40
	ObjectProperty Font; // 0x4c
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FVertexColorPhysicalMaterialMapping {
	ObjectProperty PhysMat; // 0x0
	FColor MappingColor; // 0x8
};

struct FAlternateMaterialOverride {
	ObjectProperty MaterialToFind; // 0x0
	ObjectProperty MaterialToReplace; // 0x8
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FGoalRewardItem {
	int32_t nItemId; // 0x0
	int32_t nQuantity; // 0x4
	int32_t nLootId; // 0x8
	uint32_t bRental : 1; // 0xc
};

struct FFontParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty FontValue; // 0x30
	int32_t FontPage; // 0x38
};

struct FUniqueNetId {
	FQWord Uid; // 0x0
};

struct FMobileColorGradingParams {
	float TransitionTime; // 0x0
	float Blend; // 0x4
	float Desaturation; // 0x8
	FLinearColor HighLights; // 0xc
	FLinearColor MidTones; // 0x1c
	FLinearColor Shadows; // 0x2c
};

struct FParticleEventData {
	int32_t Type; // 0x0
	FName EventName; // 0x4
	float EmitterTime; // 0xc
	FVector Location; // 0x10
	FVector Direction; // 0x1c
	FVector Velocity; // 0x28
};

struct FBuildingMatOverrides {
	TArray<ObjectProperty> MaterialOptions; // 0x0
};

struct FUIKILLFEED_DATA {
	EKillFeedEntryType eType; // 0x0
	ObjectProperty pKillEntry; // 0x4
	ObjectProperty pPlayer0; // 0xc
	ObjectProperty pPlayer0Name; // 0x14
	ObjectProperty pChampion0; // 0x1c
	ObjectProperty pChampion0Icon; // 0x24
	ObjectProperty pPlayer1; // 0x2c
	ObjectProperty pPlayer1Name; // 0x34
	ObjectProperty pChampion1; // 0x3c
	ObjectProperty pChampion1Icon; // 0x44
	ObjectProperty pKill; // 0x4c
	ObjectProperty pHHPickupEntry; // 0x54
	ObjectProperty pHHPickupPlayer; // 0x5c
	ObjectProperty pHHPickupPlayerName; // 0x64
	ObjectProperty pHHPickupChampion; // 0x6c
	ObjectProperty pHHPickupChampionIcon; // 0x74
	float fTimer; // 0x7c
};

struct FOnlineStatusMapping {
	int32_t StatusId; // 0x0
	FString StatusString; // 0x4
};

struct FSpectatorCommand {
	int32_t nFrame; // 0x0
	uint32_t bUseIndex : 1; // 0x4
	float fSpeed; // 0x8
};

struct FGameEvent {
	TArray<float> EventCountByTimePeriod; // 0x0
};

struct FFColorVertexBuffer_Mirror {
	FPointer VfTable; // 0x0
	FPointer VertexData; // 0x8
	int32_t Data; // 0x10
	int32_t Stride; // 0x14
	int32_t NumVertices; // 0x18
};

struct FTimeDilationWindow {
	int32_t nWindowId; // 0x0
	float fRampUpTime; // 0x4
	float fRampDownTime; // 0x8
	float fWindowLength; // 0xc
	float fIntendedTimeDilation; // 0x10
	float fCurrentTimeDilation; // 0x14
	float fTimeLeft; // 0x18
};

struct FPatchVersionNumber {
	int32_t nVersionMajor; // 0x0
	int32_t nVersionMinor; // 0x4
	int32_t nVersionPatch; // 0x8
	int32_t nVersionBuild; // 0xc
};

struct FCombatMessageInfo {
	int32_t nMsgId; // 0x0
	int32_t nSourceId; // 0x4
	CMTargetType eSourceType; // 0x8
	int32_t nSourceOwnerId; // 0xc
	int32_t nTargetId; // 0x10
	int32_t nTargetOwnerId; // 0x14
	CMTargetType eTargetType; // 0x18
	int32_t nAmount1; // 0x1c
	int32_t nAmount2; // 0x20
	int32_t nSourceItemId; // 0x24
	int32_t nDamageTypeId; // 0x28
	char nFireModeIndex; // 0x2c
	int32_t nLocationId; // 0x30
	int32_t nEventIndex; // 0x34
	int32_t nLocationX; // 0x38
	int32_t nLocationY; // 0x3c
};

struct FSetSaveDataCallbackStruct {
	int32_t SlotIndex; // 0x0
	DelegateProperty Callback; // 0x4
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	uint32_t bIsCollapsed : 1; // 0x20
	uint32_t bIsSelected : 1; // 0x20
};

struct FVisiblePortalInfo {
	ObjectProperty Source; // 0x0
	ObjectProperty Destination; // 0x8
};

struct FMcpChallengeRequest {
	FString UniqueChallengeId; // 0x0
	ObjectProperty HTTPRequest; // 0x10
};

struct FChannelChatData {
	TArray<ObjectProperty> ChatData; // 0x0
};

struct FNxDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float MassScaleExponent; // 0xc
	float MassScale; // 0x10
	float FractureImpulseScale; // 0x14
};

struct FPreviewSocketStruct {
	FName DisplayName; // 0x0
	FName SocketName; // 0x8
	ObjectProperty PreviewSkelMesh; // 0x10
	ObjectProperty PreviewStaticMesh; // 0x18
};

struct FPBMemUsageInfo {
	ObjectProperty Building; // 0x0
	ObjectProperty Ruleset; // 0x8
	int32_t NumStaticMeshComponent; // 0x10
	int32_t NumInstancedStaticMeshComponents; // 0x14
	int32_t NumInstancedTris; // 0x18
	int32_t LightmapMemBytes; // 0x1c
	int32_t ShadowmapMemBytes; // 0x20
	int32_t LODDiffuseMemBytes; // 0x24
	int32_t LODLightingMemBytes; // 0x28
};

struct FsSimProjectileFireInfo {
	int32_t nOwnerFireModeId; // 0x0
	FVector vLocation; // 0x4
	FVector vVelocity; // 0x10
	FVector vDirectionMunged; // 0x1c
	int32_t nActorID; // 0x28
	int32_t nClientFireRequestId; // 0x2c
	CMTargetType ActorType; // 0x30
	float fGeneric1; // 0x34
	float fGeneric2; // 0x38
	float fTimeDilation; // 0x3c
};

struct FCurveEdEntry {
	ObjectProperty CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0xc
	int32_t bHideCurve; // 0x1c
	int32_t bColorCurve; // 0x20
	int32_t bFloatingPointColorCurve; // 0x24
	int32_t bClamp; // 0x28
	float ClampLow; // 0x2c
	float ClampHigh; // 0x30
};

struct FBreakingSpiritLink {
	ObjectProperty LinkedPawn; // 0x0
	float fAddedTimestamp; // 0x8
	ObjectProperty LinkBreakBeam1P; // 0xc
	float fLinkBreakBeamTTL; // 0x14
};

struct FBehaviorStateData {
	float LastTickTime; // 0x0
	int32_t NodeToken; // 0x4
	EBehaviorStatus Status; // 0x8
};

struct FTimestampedGameObjectId {
	float fTimestamp; // 0x0
	FQWord qwGameObjectId; // 0x4
};

struct FEffectListEntry {
	int32_t nEffectGroupID; // 0x0
	char byNumStacks; // 0x4
	float fInitTimeRemaining; // 0x8
	int32_t nExtraInfo; // 0xc
};

struct FTgQueuedSimulatedProjectileSpawn {
	float TimeStampToSpawn; // 0x0
	int32_t FireRequestId; // 0x4
	ObjectProperty FireMode; // 0x8
	FVector ProjectileSpawnLocation; // 0x10
	FVector ProjectileSpawnDir; // 0x1c
	int32_t ProjectileIndex; // 0x28
	int32_t ProjectileIdOverride; // 0x2c
	float Range; // 0x30
	ObjectProperty trackingTarget; // 0x34
	FVector EndTrace; // 0x3c
	float ClientMovementTimeStamp; // 0x48
	float AccuracyRandomValue1; // 0x4c
	float AccuracyRandomValue2; // 0x50
	float AccuracyValue; // 0x54
	char ExtraInfo; // 0x58
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x4
	TArray<FPointer> ChildNodes; // 0x14
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x14
	FString StringValue2; // 0x24
	ObjectProperty ObjectValue; // 0x34
};

struct Fm_PostureProfile {
	TG_POSTURE m_Posture; // 0x0
	TArray<Fm_TransitionAnimSet> m_TransitionAnimSets; // 0x4
	ObjectProperty m_CameraAnim; // 0x14
	float m_fCameraAnimBlendInTime; // 0x1c
	float m_fCameraAnimBlendOutTime; // 0x20
	uint32_t m_bCameraAnimBlendInOnTransitionIn : 1; // 0x24
	uint32_t m_bCameraAnimBlendOutAfterTransitionOut : 1; // 0x24
	ObjectProperty m_CameraAnimInst; // 0x28
	uint32_t m_bPlayingCameraAnim : 1; // 0x30
	uint32_t m_bResetBlendByFireToIdleOnTransition : 1; // 0x30
};

struct FTimestampedActor {
	float fTimestamp; // 0x0
	ObjectProperty pActor; // 0x4
};

struct FThreatEntry {
	ObjectProperty attacker; // 0x0
	float ThreatLevel; // 0x8
};

struct FFx_Decal {
	int32_t c_nId; // 0x0
	ObjectProperty c_MITV; // 0x4
	float c_fWidth; // 0xc
	float c_fHeight; // 0x10
	float c_fThickness; // 0x14
	uint32_t c_bNoClip : 1; // 0x18
	uint32_t c_bAttach : 1; // 0x18
	ComponentProperty c_Decal; // 0x1c
	float c_fLifetime; // 0x24
	float c_fFadeOutTime; // 0x28
	EManagedDecalState c_eState; // 0x2c
	float c_fHideAtTimeSeconds; // 0x30
};

struct FDouble {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FChildBlendInfo {
	EPhysics m_PhysicsState; // 0x0
	float m_fBlendTime; // 0x4
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FSoundClassEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FHeadTrackingKey {
	float Time; // 0x0
	EHeadTrackingAction Action; // 0x4
};

struct FNotifyData {
	int32_t nIcon; // 0x0
	int32_t nMsgId; // 0x4
	int32_t nSound; // 0x8
	int32_t nTaskForce; // 0xc
	uint32_t bLocal : 1; // 0x10
	uint32_t bFriend : 1; // 0x10
	FString sSource; // 0x14
	FString sTarget; // 0x24
	FString sMessage; // 0x34
};

struct FScoreKillData {
	ObjectProperty Killer; // 0x0
	ObjectProperty KillerPRI; // 0x8
	ObjectProperty KillerPawn; // 0x10
	FPointer KillerBotAssembly; // 0x18
	uint32_t bKillerIsGod : 1; // 0x20
	uint32_t bKillerIsMinion : 1; // 0x20
	uint32_t bKillerIsTower : 1; // 0x20
	ObjectProperty Victim; // 0x24
	ObjectProperty VictimPawn; // 0x2c
	ObjectProperty VictimPRI; // 0x34
	ObjectProperty VictimTaskForce; // 0x3c
	FPointer VictimBotAssembly; // 0x44
	uint32_t VictimCanScore : 1; // 0x4c
	uint32_t bVictimIsGod : 1; // 0x4c
	uint32_t bVictimIsMinion : 1; // 0x4c
	uint32_t bVictimIsTower : 1; // 0x4c
	ObjectProperty Scorer; // 0x50
	ObjectProperty ScorerPawn; // 0x58
	ObjectProperty ScorerPRI; // 0x60
	ObjectProperty ScorerTaskForce; // 0x68
	uint32_t ScorerCanScore : 1; // 0x70
	uint32_t bSuicide : 1; // 0x70
	uint32_t bFakeDeath : 1; // 0x70
	TArray<ObjectProperty> AssistingPlayers; // 0x74
};

struct FCharacterSpecificData_Maeve {
	float fMaterialAnimationValue; // 0x0
	float fMaterialAnimationTarget; // 0x4
	float fMaterialAnimationTimer; // 0x8
	float fDjSwapDelayTimer; // 0xc
	float fDjSwapHoldTimer; // 0x10
	float fDjSwapChompTimer; // 0x14
	DjBladesFace eDjCurrentFace; // 0x18
};

struct FEmitterBaseInfo {
	ComponentProperty PSC; // 0x0
	ObjectProperty Base; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	uint32_t bInheritBaseScale : 1; // 0x28
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FOnlineGameSearchSortClause {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchSortType SortType; // 0xd
};

struct FMcpMessage {
	FString MessageId; // 0x0
	FString TitleId; // 0x10
	FString ToUniqueUserId; // 0x20
	FString FromUniqueUserId; // 0x30
	FString FromFriendlyName; // 0x40
	FString MessageType; // 0x50
	FString ValidUntil; // 0x60
	EMcpMessageCompressionType MessageCompressionType; // 0x70
};

struct FBehaviorEntry {
	ObjectProperty BehaviorArchetype; // 0x0
	ObjectProperty LookAtActor; // 0x8
	float BehaviorFrequency; // 0x10
	uint32_t bNeverRepeat : 1; // 0x14
	uint32_t bHasBeenUsed : 1; // 0x14
	uint32_t bCanBeUsed : 1; // 0x14
};

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FBonePair {
	FName Bones[0x2]; // 0x0
};

struct FMcpInventoryItemContainer {
	FString GlobalItemId; // 0x0
	int32_t Quantity; // 0x10
};

struct FAttenuationGroup {
	FName GroupName; // 0x0
	float AttenuationDistance; // 0x8
};

struct FEmoteChildAnimInfo {
	int32_t nDeviceId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FViewParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror EmitterInstanceMBInfoMap; // 0x0
};

struct FCoverSlot {
	ObjectProperty SlotOwner; // 0x0
	float SlotValidAfterTime; // 0x8
	ECoverType ForceCoverType; // 0xc
	ECoverType CoverType; // 0xd
	ECoverLocationDescription LocationDescription; // 0xe
	FVector LocationOffset; // 0x10
	FRotator RotationOffset; // 0x1c
	TArray<ECoverAction> Actions; // 0x28
	TArray<FFireLink> FireLinks; // 0x38
	TArray<FFireLink> RejectedFireLinks; // 0x48
	TArray<int32_t> ExposedCoverPackedProperties; // 0x58
	int32_t TurnTargetPackedProperties; // 0x68
	TArray<FSlotMoveRef> SlipRefs; // 0x6c
	TArray<FCoverInfo> OverlapClaimsList; // 0x7c
	uint32_t bLeanLeft : 1; // 0x8c
	uint32_t bLeanRight : 1; // 0x8c
	uint32_t bForceCanPopUp : 1; // 0x8c
	uint32_t bCanPopUp : 1; // 0x8c
	uint32_t bCanMantle : 1; // 0x8c
	uint32_t bCanClimbUp : 1; // 0x8c
	uint32_t bForceCanCoverSlip_Left : 1; // 0x8c
	uint32_t bForceCanCoverSlip_Right : 1; // 0x8c
	uint32_t bCanCoverSlip_Left : 1; // 0x8c
	uint32_t bCanCoverSlip_Right : 1; // 0x8c
	uint32_t bCanSwatTurn_Left : 1; // 0x8c
	uint32_t bCanSwatTurn_Right : 1; // 0x8c
	uint32_t bEnabled : 1; // 0x8c
	uint32_t bAllowPopup : 1; // 0x8c
	uint32_t bAllowMantle : 1; // 0x8c
	uint32_t bAllowCoverSlip : 1; // 0x8c
	uint32_t bAllowClimbUp : 1; // 0x8c
	uint32_t bAllowSwatTurn : 1; // 0x8c
	uint32_t bForceNoGroundAdjust : 1; // 0x8c
	uint32_t bPlayerOnly : 1; // 0x8c
	uint32_t bPreferLeanOverPopup : 1; // 0x8c
	uint32_t bDestructible : 1; // 0x8c
	uint32_t bSelected : 1; // 0x8c
	uint32_t bFailedToFindSurface : 1; // 0x8c
};

struct FAnimNotifyParticleCacheEntry {
	uint32_t bCached : 1; // 0x0
	ObjectProperty Notify; // 0x4
	ComponentProperty PSC; // 0xc
};

struct FHealSource {
	int32_t nPawnId; // 0x0
	ObjectProperty mcIconParent; // 0x4
	ObjectProperty mcIcon; // 0xc
	ObjectProperty mcGlow; // 0x14
	float fHideTimer; // 0x1c
	float fGlowTimer; // 0x20
	TArray<ObjectProperty> ActiveEntries; // 0x24
};

struct FSettingsProperty {
	int32_t PropertyId; // 0x0
	FSettingsData Data; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x14
};

struct FFastHealDifferentPlayersEntry {
	ObjectProperty pTarget; // 0x0
	float fTime; // 0x8
};

struct FSilhouetteInfo {
	SafeObjectProperty Silhouette; // 0x0
	ComponentProperty ParentMesh; // 0xc
	OverlayState CurrentState; // 0x14
};

struct FBoneToRemove {
	FName BoneName; // 0x0
	char BoneId; // 0x8
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	uint32_t bUseEmitterTime : 1; // 0x8
	uint32_t bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	uint32_t bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x14
};

struct FSoundEventMapping {
	FName SoundEventName; // 0x0
	ObjectProperty SoundToPlay; // 0x8
};

struct FHealingInfo {
	ObjectProperty HealerPawn; // 0x0
	float HealAmount; // 0x8
	float TimeStamp; // 0xc
};

struct FUtilityPair {
	TMap<None, None> FilteredAnnotationPoints; // 0x0
};

struct FBoosterFlightInfo {
	float fStartTime; // 0x0
	float fEndTime; // 0x4
};

struct FPlayOfTheGameEventConfig {
	EPlayOfTheGameEventType EventType; // 0x0
	float BaseRating; // 0x4
	float MultMod; // 0x8
	float MaxTimeDiff; // 0xc
	uint32_t ScaleByTimeDiff : 1; // 0x10
	int32_t MaxMultInstances; // 0x14
	float Threshold; // 0x18
	float ThresholdTimeOut; // 0x1c
};

struct FSkelControlGateChild {
	ObjectProperty SkelControl; // 0x0
	float DrawY; // 0x8
};

struct FTimedMarkedTarget {
	ObjectProperty Target; // 0x0
	float EndTimestamp; // 0x8
};

struct FMcpUserCloudFileInfo : FEmsFile {
	FString CreationDate; // 0x34
	FString LastUpdateDate; // 0x44
	FString CompressionType; // 0x54
};

struct FSeqOpOutputLink {
	TArray<FSeqOpOutputInputLink> Links; // 0x0
	FString LinkDesc; // 0x10
	uint32_t bHasImpulse : 1; // 0x20
	uint32_t bDisabled : 1; // 0x20
	uint32_t bDisabledPIE : 1; // 0x20
	ObjectProperty LinkedOp; // 0x24
	float ActivateDelay; // 0x2c
	int32_t DrawY; // 0x30
	uint32_t bHidden : 1; // 0x34
	uint32_t bMoving : 1; // 0x34
	uint32_t bClampedMax : 1; // 0x34
	uint32_t bClampedMin : 1; // 0x34
	uint32_t bIsActivated : 1; // 0x34
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	FPointer RenderInfo; // 0x40
	uint32_t bSkipCloseAndParallelChecks : 1; // 0x48
};

struct FRBEdgeAngleInfo {
	float Angle; // 0x0
};

struct FPBVariationInfo {
	FName VariationName; // 0x0
	uint32_t bMeshOnTopOfFacePoly : 1; // 0x8
};

struct FUIAwardData {
	int32_t nType; // 0x0
	int32_t nActivity; // 0x4
	int32_t nGoalCount; // 0x8
	int32_t nGoalGroup; // 0xc
	FUIGoalData Goals[0xa]; // 0x10
};

struct FAnnouncerEvent {
	ObjectProperty akSound; // 0x0
};

struct FCurrencyEntry {
	Fdword m_dwCurrencyId; // 0x0
	Fdword m_dwCharacterId; // 0x4
	float m_fBaseValue; // 0x8
	float m_fTotal; // 0xc
	TArray<FCurrencyBonus> m_vCurrencyBonuses; // 0x10
	char m_CurrencyType; // 0x20
	FCurrencyBonus m_NullBonus; // 0x24
};

struct FLeaderboardTemplate {
	FString LeaderboardName; // 0x0
	ELeaderboardUpdateType UpdateType; // 0x10
	int32_t LeaderboardSize; // 0x14
	ELeaderboardSortType SortType; // 0x18
	ELeaderboardFormat DisplayFormat; // 0x19
	FLeaderboardHandle LeaderboardRef; // 0x1c
	uint32_t bLeaderboardInitializing : 1; // 0x24
	uint32_t bLeaderboardInitiated : 1; // 0x24
};

struct FSoundClassAdjuster {
	ESoundClassName SoundClassName; // 0x0
	FName SoundClass; // 0x4
	float VolumeAdjuster; // 0xc
	float PitchAdjuster; // 0x10
	uint32_t bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FAcademyVideoButton {
	FString sImagePath; // 0x0
	FString sVideoURL; // 0x10
	ObjectProperty pClip; // 0x20
	ObjectProperty pImage; // 0x28
	ObjectProperty pTitle; // 0x30
	ObjectProperty pSubtitle; // 0x38
};

struct FMICStateParams {
	FName nmStateName; // 0x0
	TArray<FStateScalarParameterValue> ScalarParameterValues; // 0x8
	TArray<FStateVectorParameterValue> VectorParameterValues; // 0x18
};

struct FFlagMeshData {
	FlagContentDataType ContentDataType; // 0x0
	ObjectProperty MainMeshInfo; // 0x4
};

struct FLeaderboardHandle {
	FQWord Dud; // 0x0
};

struct FPBEdgeInfo {
	FVector EdgeEnd; // 0x0
	FVector EdgeStart; // 0xc
	int32_t ScopeAIndex; // 0x18
	EScopeEdge ScopeAEdge; // 0x1c
	int32_t ScopeBIndex; // 0x20
	EScopeEdge ScopeBEdge; // 0x24
	float EdgeAngle; // 0x28
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FSwitchClassInfo {
	FName ClassName; // 0x0
	char bFallThru; // 0x8
};

struct FPComPerformanceCaptureProfile {
	FName ProfileName; // 0x0
	int32_t ScalabilityBucket; // 0x8
	int32_t ResolutionX; // 0xc
	int32_t ResolutionY; // 0x10
	int32_t VsyncInterval; // 0x14
	uint32_t bFullScreen : 1; // 0x18
};

struct FPolyReference {
	FActorReference OwningPylon; // 0x0
	int32_t PolyId; // 0x18
	FPointer CachedPoly; // 0x1c
};

struct FDeferredAnimNotifyEndInformation {
	ObjectProperty Notify; // 0x0
	float CurrentTime; // 0x8
};

struct FResetSynchGroup {
	FName AnimNodeSynchName; // 0x0
	ObjectProperty SynchNode; // 0x8
	FName GroupName; // 0x10
	TArray<int32_t> ResetChannels; // 0x18
};

struct FPComPositionHistoryData {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Velocity; // 0x18
	EPhysics Physics; // 0x24
	uint32_t bWasFalling : 1; // 0x28
	uint32_t bCollideActors : 1; // 0x28
	uint32_t bBlockActors : 1; // 0x28
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FRecentParty {
	FUniqueNetId PartyLeader; // 0x0
	TArray<FUniqueNetId> PartyMembers; // 0x8
};

struct FChildBoneBlendInfo {
	TArray<float> TargetPerBoneWeight; // 0x0
	FName InitTargetStartBone; // 0x10
	float InitPerBoneIncrease; // 0x18
	FName OldStartBone; // 0x1c
	float OldBoneIncrease; // 0x24
	TArray<char> TargetRequiredBones; // 0x28
};

struct FProgressInfo {
	int32_t nLevel; // 0x0
	int32_t nCurrentXP; // 0x4
	int32_t nRequiredXP; // 0x8
	int32_t nXPFloor; // 0xc
};

struct FTgQueuedProjectileExplosion {
	int32_t ClientFireRequestId; // 0x0
	ObjectProperty Target; // 0x4
	FVector HitLocation; // 0xc
	FVector HitNormal; // 0x18
	float ProjectileAliveTime; // 0x24
	float MovementTimeStamp; // 0x28
	float AoeRewindTimeStamp; // 0x2c
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	FColor EnvironmentColor; // 0x8
	float EnvironmentIntensity; // 0xc
	uint32_t bEnableAdvancedEnvironmentColor : 1; // 0x10
	FColor EnvironmentSunColor; // 0x14
	float EnvironmentSunIntensity; // 0x18
	float EnvironmentLightTerminatorAngle; // 0x1c
	FVector EnvironmentLightDirection; // 0x20
	float EmissiveBoost; // 0x2c
	float DiffuseBoost; // 0x30
	float SpecularBoost; // 0x34
	float IndirectNormalInfluenceBoost; // 0x38
	uint32_t bUseAmbientOcclusion : 1; // 0x3c
	uint32_t bEnableImageReflectionShadowing : 1; // 0x3c
	float DirectIlluminationOcclusionFraction; // 0x40
	float IndirectIlluminationOcclusionFraction; // 0x44
	float OcclusionExponent; // 0x48
	float FullyOccludedSamplesFraction; // 0x4c
	float MaxOcclusionDistance; // 0x50
	uint32_t bVisualizeMaterialDiffuse : 1; // 0x54
	uint32_t bVisualizeAmbientOcclusion : 1; // 0x54
	uint32_t bCompressShadowmap : 1; // 0x54
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FSilhouetteFadeSettings {
	uint32_t bUsesDistanceFade : 1; // 0x0
	float fAlphaFadeNearDist; // 0x4
	float fAlphaFadeNear; // 0x8
	float fAlphaFadeFarDist; // 0xc
	float fAlphaFadeFar; // 0x10
};

struct FDamagePair {
	FName DamageCauserName; // 0x0
	FDamageParameters Params; // 0x8
};

struct FTrackedBullies {
	ObjectProperty pTarget; // 0x0
	float fBonusDamageEndTime; // 0x8
};

struct FNavMeshBorderEdges {
	FVector P1; // 0x0
	FVector P2; // 0xc
};

struct FPrimitiveMaterialRef {
	ComponentProperty Primitive; // 0x0
	int32_t MaterialIndex; // 0x8
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FSpeedTreeStaticLight {
	FGuid Guid; // 0x0
	ObjectProperty BranchShadowMap; // 0x10
	ObjectProperty FrondShadowMap; // 0x18
	ObjectProperty LeafMeshShadowMap; // 0x20
	ObjectProperty LeafCardShadowMap; // 0x28
	ObjectProperty BillboardShadowMap; // 0x30
};

struct FEventStringParam {
	FString ParamName; // 0x0
	FString ParamValue; // 0x10
};

struct FDecalReceiver {
	ComponentProperty Component; // 0x0
	FPointer RenderData; // 0x8
};

struct FJsonHomeFeatureData {
	FString sStartDate; // 0x0
	FString sEndDate; // 0x10
	char eFeatureType; // 0x20
	int32_t nBotId; // 0x24
	int32_t nFeaturedItemId; // 0x28
	int32_t nSkinId; // 0x2c
	int32_t nWepSkinId; // 0x30
	char eLobbyCam; // 0x34
	float fChanceToShow; // 0x38
	float fRotationOffset; // 0x3c
	int32_t nLocationId; // 0x40
};

struct FSourceTexture2DRegion {
	int32_t OffsetX; // 0x0
	int32_t OffsetY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t DestOffsetX; // 0x10
	int32_t DestOffsetY; // 0x14
	ObjectProperty Texture2D; // 0x18
};

struct FNavReference {
	ObjectProperty Nav; // 0x0
	FGuid Guid; // 0x8
};

struct FInterpPointOnSpline {
	FVector Position; // 0x0
	float InVal; // 0xc
	float Length; // 0x10
};

struct FKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	uint32_t bShouldBeLoaded : 1; // 0x8
	uint32_t bShouldBeVisible : 1; // 0x8
};

struct FOnlineGameSearchParameter {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchComparisonType ComparisonType; // 0xd
};

struct FChildAnimParameters {
	FString SlotName; // 0x0
	TG_EQUIP_POINT EquipSlot; // 0x10
	int32_t ChildIndex; // 0x14
	uint32_t bBlendInOnTargeting : 1; // 0x18
	uint32_t bBlendInOnBuildup : 1; // 0x18
	uint32_t bBlendInOnStartFire : 1; // 0x18
	uint32_t bBlendInOnFire : 1; // 0x18
	uint32_t bBlendOutIfStopped : 1; // 0x18
	uint32_t bBlendOutOnAnimEnd : 1; // 0x18
	uint32_t bBlendOutOnChildNotification : 1; // 0x18
	uint32_t bEndCurrentAnimIfNoChild : 1; // 0x18
	uint32_t bAddToStackIfOtherAnimInterrupted : 1; // 0x18
	uint32_t bAddToStackOnCeaseRelevant : 1; // 0x18
	uint32_t bIgnoreSwapLogicIfNotRelevant : 1; // 0x18
	uint32_t bReplayIfActivatedFromStack : 1; // 0x18
	uint32_t bReplayIfActive : 1; // 0x18
	uint32_t bAutoScaleByDuration : 1; // 0x18
	float fAutoScaledPlayRateMultiplier; // 0x1c
	uint32_t bInterruptOtherAnims : 1; // 0x20
	TArray<int32_t> nInterruptExceptionsByChildIndex; // 0x24
	int32_t nCustomRetrieveIndex; // 0x34
};

struct FControllerConnectionState {
	int32_t bIsControllerConnected; // 0x0
	int32_t bLastIsControllerConnected; // 0x4
};

struct FBasedPosition {
	ObjectProperty Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FLUTBlender {
	TArray<ObjectProperty> LUTTextures; // 0x0
	TArray<float> LUTWeights; // 0x10
	uint32_t bHasChanged : 1; // 0x20
};

struct FMaterialViewRelevance {
	uint32_t bOpaque : 1; // 0x0
	uint32_t bTranslucent : 1; // 0x0
	uint32_t bDistortion : 1; // 0x0
	uint32_t bOneLayerDistortionRelevance : 1; // 0x0
	uint32_t bLit : 1; // 0x0
	uint32_t bUsesSceneColor : 1; // 0x0
};

struct FPresetGeneratedPoint {
	float KeyIn; // 0x0
	float KeyOut; // 0x4
	uint32_t TangentsValid : 1; // 0x8
	float TangentIn; // 0xc
	float TangentOut; // 0x10
	EInterpCurveMode IntepMode; // 0x14
};

struct FRecogUserData {
	int32_t ActiveVocabularies; // 0x0
	TArray<char> UserData; // 0x4
};

struct FLootData {
	int32_t nBot; // 0x0
	int32_t nTier; // 0x4
	int32_t nType; // 0x8
	int32_t nDevice; // 0xc
};

struct FTerrainFilteredMaterial {
	uint32_t UseNoise : 1; // 0x0
	float NoiseScale; // 0x4
	float NoisePercent; // 0x8
	FFilterLimit MinHeight; // 0xc
	FFilterLimit MaxHeight; // 0x1c
	FFilterLimit MinSlope; // 0x2c
	FFilterLimit MaxSlope; // 0x3c
	float Alpha; // 0x4c
	ObjectProperty Material; // 0x50
};

struct FAttachment {
	ComponentProperty Component; // 0x0
	FName BoneName; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	FVector RelativeScale; // 0x28
};

struct FFontImportOptionsData {
	FString FontName; // 0x0
	float Height; // 0x10
	uint32_t bEnableAntialiasing : 1; // 0x14
	uint32_t bEnableBold : 1; // 0x14
	uint32_t bEnableItalic : 1; // 0x14
	uint32_t bEnableUnderline : 1; // 0x14
	uint32_t bAlphaOnly : 1; // 0x14
	EFontImportCharacterSet CharacterSet; // 0x18
	FString Chars; // 0x1c
	FString UnicodeRange; // 0x2c
	FString CharsFilePath; // 0x3c
	FString CharsFileWildcard; // 0x4c
	uint32_t bCreatePrintableOnly : 1; // 0x5c
	uint32_t bIncludeASCIIRange : 1; // 0x5c
	FLinearColor ForegroundColor; // 0x60
	uint32_t bEnableDropShadow : 1; // 0x70
	int32_t TexturePageWidth; // 0x74
	int32_t TexturePageMaxHeight; // 0x78
	int32_t XPadding; // 0x7c
	int32_t YPadding; // 0x80
	int32_t ExtendBoxTop; // 0x84
	int32_t ExtendBoxBottom; // 0x88
	int32_t ExtendBoxRight; // 0x8c
	int32_t ExtendBoxLeft; // 0x90
	uint32_t bEnableLegacyMode : 1; // 0x94
	int32_t Kerning; // 0x98
	uint32_t bUseDistanceFieldAlpha : 1; // 0x9c
	int32_t DistanceFieldScaleFactor; // 0xa0
	float DistanceFieldScanRadiusScale; // 0xa4
};

struct FSplitscreenData {
	TArray<FPerPlayerSplitscreenData> PlayerData; // 0x0
};

struct FSettingsData {
	ESettingsDataType Type; // 0x0
	int32_t Value1; // 0x4
	FPointer Value2; // 0x8
};

struct FPostProcessSettings {
	uint32_t bOverride_EnableBloom : 1; // 0x0
	uint32_t bOverride_EnableDOF : 1; // 0x0
	uint32_t bOverride_EnableMotionBlur : 1; // 0x0
	uint32_t bOverride_EnableSceneEffect : 1; // 0x0
	uint32_t bOverride_AllowAmbientOcclusion : 1; // 0x0
	uint32_t bOverride_OverrideRimShaderColor : 1; // 0x0
	uint32_t bOverride_Bloom_Scale : 1; // 0x0
	uint32_t bOverride_Bloom_Threshold : 1; // 0x0
	uint32_t bOverride_Bloom_Tint : 1; // 0x0
	uint32_t bOverride_Bloom_ScreenBlendThreshold : 1; // 0x0
	uint32_t bOverride_Bloom_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_DOF_FalloffExponent : 1; // 0x0
	uint32_t bOverride_DOF_BlurKernelSize : 1; // 0x0
	uint32_t bOverride_DOF_BlurBloomKernelSize : 1; // 0x0
	uint32_t bOverride_DOF_MaxNearBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_MinBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_MaxFarBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_FocusType : 1; // 0x0
	uint32_t bOverride_DOF_FocusInnerRadius : 1; // 0x0
	uint32_t bOverride_DOF_FocusDistance : 1; // 0x0
	uint32_t bOverride_DOF_FocusPosition : 1; // 0x0
	uint32_t bOverride_DOF_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_DOF_BokehTexture : 1; // 0x0
	uint32_t bOverride_MotionBlur_MaxVelocity : 1; // 0x0
	uint32_t bOverride_MotionBlur_Amount : 1; // 0x0
	uint32_t bOverride_MotionBlur_FullMotionBlur : 1; // 0x0
	uint32_t bOverride_MotionBlur_CameraRotationThreshold : 1; // 0x0
	uint32_t bOverride_MotionBlur_CameraTranslationThreshold : 1; // 0x0
	uint32_t bOverride_MotionBlur_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_Scene_Desaturation : 1; // 0x0
	uint32_t bOverride_Scene_Colorize : 1; // 0x0
	uint32_t bOverride_Scene_TonemapperScale : 1; // 0x0
	uint32_t bOverride_Scene_ImageGrainScale : 1; // 0x4
	uint32_t bOverride_Scene_HighLights : 1; // 0x4
	uint32_t bOverride_Scene_MidTones : 1; // 0x4
	uint32_t bOverride_Scene_Shadows : 1; // 0x4
	uint32_t bOverride_Scene_InterpolationDuration : 1; // 0x4
	uint32_t bOverride_Scene_ColorGradingLUT : 1; // 0x4
	uint32_t bOverride_RimShader_Color : 1; // 0x4
	uint32_t bOverride_RimShader_InterpolationDuration : 1; // 0x4
	uint32_t bOverride_MobileColorGrading : 1; // 0x4
	uint32_t bEnableBloom : 1; // 0x4
	uint32_t bEnableDOF : 1; // 0x4
	uint32_t bEnableMotionBlur : 1; // 0x4
	uint32_t bEnableSceneEffect : 1; // 0x4
	uint32_t bAllowAmbientOcclusion : 1; // 0x4
	uint32_t bOverrideRimShaderColor : 1; // 0x4
	float Bloom_Scale; // 0x8
	float Bloom_Threshold; // 0xc
	FColor Bloom_Tint; // 0x10
	float Bloom_ScreenBlendThreshold; // 0x14
	float Bloom_InterpolationDuration; // 0x18
	float DOF_BlurBloomKernelSize; // 0x1c
	float DOF_FalloffExponent; // 0x20
	float DOF_BlurKernelSize; // 0x24
	float DOF_MaxNearBlurAmount; // 0x28
	float DOF_MinBlurAmount; // 0x2c
	float DOF_MaxFarBlurAmount; // 0x30
	EFocusType DOF_FocusType; // 0x34
	float DOF_FocusInnerRadius; // 0x38
	float DOF_FocusDistance; // 0x3c
	FVector DOF_FocusPosition; // 0x40
	float DOF_InterpolationDuration; // 0x4c
	ObjectProperty DOF_BokehTexture; // 0x50
	float MotionBlur_MaxVelocity; // 0x58
	float MotionBlur_Amount; // 0x5c
	uint32_t MotionBlur_FullMotionBlur : 1; // 0x60
	float MotionBlur_CameraRotationThreshold; // 0x64
	float MotionBlur_CameraTranslationThreshold; // 0x68
	float MotionBlur_InterpolationDuration; // 0x6c
	float Scene_Desaturation; // 0x70
	FVector Scene_Colorize; // 0x74
	float Scene_TonemapperScale; // 0x80
	float Scene_ImageGrainScale; // 0x84
	FVector Scene_HighLights; // 0x88
	FVector Scene_MidTones; // 0x94
	FVector Scene_Shadows; // 0xa0
	float Scene_InterpolationDuration; // 0xac
	FLinearColor RimShader_Color; // 0xb0
	float RimShader_InterpolationDuration; // 0xc0
	ObjectProperty ColorGrading_LookupTable; // 0xc4
	FLUTBlender ColorGradingLUT; // 0xcc
	FMobileColorGradingParams MobileColorGrading; // 0xf0
	FMobilePostProcessSettings MobilePostProcess; // 0x12c
	uint32_t Death_Enable : 1; // 0x164
	float Death_DesatAlpha; // 0x168
	uint32_t Hit_Enable : 1; // 0x16c
	float Hit_FadeAlpha; // 0x170
	uint32_t ColorBlind_Enable : 1; // 0x174
	int32_t ColorBlind_Mode; // 0x178
	float ColorBlind_Intensity; // 0x17c
};

struct FChampionEntry {
	int32_t m_nId; // 0x0
	float m_fLastDeltaTime; // 0x4
};

struct FGCReference {
	ObjectProperty m_object; // 0x0
	int32_t m_count; // 0x8
	int32_t m_statid; // 0xc
};

struct FPComPerformanceCaptureStatsPerSkin {
	FString CharacterName; // 0x0
	FString SkinName; // 0x10
	FString SkeletalMeshPathName; // 0x20
	FString SkeletalMeshPathNameHead; // 0x30
	FString SkeletalMeshPathNameBody; // 0x40
	FString SkeletalMeshPathNameWeapon; // 0x50
	TArray<FPComPerformanceCaptureStat> Stats; // 0x60
};

struct FPRIAudioDeviceInfo {
	uint32_t Valid : 1; // 0x0
	EAudioDeviceCategory DeviceCategory; // 0x4
	EAudioDeviceType DeviceType; // 0x5
	FString Id; // 0x8
	EAudioDeviceSharing Sharing; // 0x18
};

struct FMountSkinChildInfo {
	int32_t nMountSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FTargetToTeleport {
	float fTime; // 0x0
	ObjectProperty pTarget; // 0x4
};

struct FAnimTag {
	FString Tag; // 0x0
	TArray<FString> Contains; // 0x10
};

struct FSpecialMoveStruct {
	FName SpecialMoveName; // 0x0
	ObjectProperty InteractionPawn; // 0x8
	ObjectProperty InteractionActor; // 0x10
	int32_t Flags; // 0x18
};

struct FHitSoundData {
	float fAngle; // 0x0
	ObjectProperty pHitActor; // 0x4
};

struct FDeferredPartToSpawn {
	int32_t ChunkIndex; // 0x0
	FVector InitialVel; // 0x4
	FVector InitialAngVel; // 0x10
	float RelativeScale; // 0x1c
	uint32_t bExplosion : 1; // 0x20
};

struct FTrackedFiringAmmoConsumption {
	int32_t FiringRequestID; // 0x0
	int32_t AmmoConsumed; // 0x4
};

struct FScalarParameterValueOverTime : FParameterValueOverTime {
	float ParameterValue; // 0x30
	FInterpCurveFloat ParameterValueCurve; // 0x34
};

struct FPathSizeInfo {
	FName Desc; // 0x0
	float Radius; // 0x8
	float Height; // 0xc
	float CrouchHeight; // 0x10
	char PathColor; // 0x14
};

struct FWeaponClassEventData {
	FName WeaponClassName; // 0x0
};

struct FUIRewardInfo {
	uint32_t bIsCombo : 1; // 0x0
	float fAlpha; // 0x4
	float fTimer; // 0x8
	ObjectProperty pClip; // 0xc
	ObjectProperty pCredits; // 0x14
	ObjectProperty pAmount; // 0x1c
	ObjectProperty pTitle; // 0x24
	ObjectProperty pSubtitle; // 0x2c
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FTriangleSortSettings {
	TriangleSortOption TriangleSorting; // 0x0
	TriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x4
};

struct FDamageParameters {
	EDamageParameterOverrideMode OverrideMode; // 0x0
	float BaseDamage; // 0x4
	float Radius; // 0x8
	float Momentum; // 0xc
};

struct FLensFlareElementCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FSaatiAimInfo {
	FVector CachedAimVector; // 0x0
	FVector CachedStartLocation; // 0xc
};

struct FBitArray_Mirror {
	FPointer IndirectData; // 0x0
	int32_t InlineData[0x4]; // 0x8
	int32_t NumBits; // 0x18
	int32_t MaxBits; // 0x1c
};

struct FSpeechRecognizedWord {
	int32_t WordId; // 0x0
	FString WordText; // 0x4
	float Confidence; // 0x14
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
};

struct FServerSplineSync {
	float SplineDist; // 0x0
	uint32_t bMoving : 1; // 0x4
};

struct FAuthSession : FBaseAuthSession {
	EAuthStatus AuthStatus; // 0x20
	int32_t AuthTicketUID; // 0x24
};

struct FAddMappingRequest {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
	ObjectProperty Request; // 0x30
};

struct FPlayerStat {
	int32_t ViewId; // 0x0
	int32_t ColumnId; // 0x4
	FSettingsData Data; // 0x8
};

struct FPComPerformanceCaptureStat {
	FName StatName; // 0x0
	FDouble StatValue; // 0x8
};

struct FMultiMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FOnlineFriend {
	FUniqueNetId UniqueId; // 0x0
	FQWord SessionId; // 0x8
	FString NickName; // 0x10
	FString PresenceInfo; // 0x20
	FString AdditionalPresenceInfo; // 0x30
	EOnlineFriendState FriendState; // 0x40
	uint32_t bIsOnline : 1; // 0x44
	uint32_t bIsPlaying : 1; // 0x44
	uint32_t bIsPlayingThisGame : 1; // 0x44
	uint32_t bIsPlayingPartnerGame : 1; // 0x44
	uint32_t bIsJoinable : 1; // 0x44
	uint32_t bHasVoiceSupport : 1; // 0x44
	uint32_t bHaveInvited : 1; // 0x44
	uint32_t bHasInvitedYou : 1; // 0x44
};

struct FShowFlags_Mirror {
	FQWord flags0; // 0x0
	FQWord flags1; // 0x8
};

struct FGameTipInfo {
	int32_t nTipId; // 0x0
	int32_t nPriority; // 0x4
	uint32_t bSelfSuppress : 1; // 0x8
	float fDuration; // 0xc
	float fRemainingTime; // 0x10
	float fTimeOnTop; // 0x14
	float fMinSecondsBetweenVisible; // 0x18
	uint32_t bRemoveOnTimer : 1; // 0x1c
	uint32_t bDismissed : 1; // 0x1c
	uint32_t bWaitForDismiss : 1; // 0x1c
	uint32_t bDisplayAlways : 1; // 0x1c
	uint32_t bPopupDisplay : 1; // 0x1c
	ObjectProperty PopupSoundCue; // 0x20
	ObjectProperty HelpTipActor; // 0x28
	int32_t PropertyId; // 0x30
};

struct FTOHInfo {
	ObjectProperty pTarget; // 0x0
	int32_t fAccumulator; // 0x8
	float fResetTimer; // 0xc
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FPBScope2D {
	FMatrix ScopeFrame; // 0x0
	float DimX; // 0x40
	float DimZ; // 0x44
};

struct FRecoilSettings {
	uint32_t bUsesRecoil : 1; // 0x0
	float fRecoilReductionPerSec; // 0x4
	float fRecoilCenterDelay; // 0x8
	float fRecoilSmoothRate; // 0xc
};

struct FTerrainMaterialMask {
	FQWord BitMask; // 0x0
	int32_t NumBits; // 0x8
};

struct FAdjustHealParams {
	ObjectProperty Dev; // 0x0
	FImpactInfo Impact; // 0x8
	float fBaseHeal; // 0x84
	int32_t nPropertyId; // 0x88
};

struct FNotificationInfo {
	uint32_t bIsLocal : 1; // 0x0
	FString MessageBody; // 0x4
	int32_t BadgeNumber; // 0x14
	TArray<FNotificationMessageInfo> MessageInfo; // 0x18
};

struct FUIDurablePack {
	ObjectProperty Obj; // 0x0
	ObjectProperty Price; // 0x8
	ObjectProperty PurchaseButton; // 0x10
	ObjectProperty Highlight; // 0x18
	ObjectProperty Refund; // 0x20
	ObjectProperty SaleBanner; // 0x28
};

struct FLayerIndex {
	TArray<int32_t> Entries; // 0x0
};

struct FDragElementInfo {
	uint32_t bIsDragging : 1; // 0x0
	int32_t IndexFrom; // 0x4
	uint32_t bIsOver : 1; // 0x8
	int32_t IndexOver; // 0xc
	uint32_t bCanDropInOver : 1; // 0x10
	FVector2D OrigTouch; // 0x14
	FVector2D CurTouch; // 0x1c
	ETouchType EventType; // 0x24
};

struct FTAlphaBlend {
	float AlphaIn; // 0x0
	float AlphaOut; // 0x4
	float AlphaTarget; // 0x8
	float BlendTime; // 0xc
	float BlendTimeToGo; // 0x10
	AlphaBlendType BlendType; // 0x14
};

struct FRBSplitInfo {
	uint32_t bFixSize : 1; // 0x0
	float FixedSize; // 0x4
	float ExpandRatio; // 0x8
	FName SplitName; // 0xc
};

struct FMaterialInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0xc
	int32_t Mask; // 0x1c
	int32_t MaskR; // 0x20
	int32_t MaskG; // 0x24
	int32_t MaskB; // 0x28
	int32_t MaskA; // 0x2c
	int32_t GCC64_Padding; // 0x30
};

struct FActorReference {
	ObjectProperty Actor; // 0x0
	FGuid Guid; // 0x8
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FInventoryItemRequestState : FSaveSlotRequestState {
	FString ItemId; // 0x28
};

struct FMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FPBFracMeshCompInfo {
	ComponentProperty FracMeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FNuggetPullVals {
	ObjectProperty nugget; // 0x0
	float fPullTime; // 0x8
	float fCheckTime; // 0xc
};

struct FLocalTalkerPC {
	uint32_t bHasVoice : 1; // 0x0
	uint32_t bHasNetworkedVoice : 1; // 0x0
	uint32_t bIsRecognizingSpeech : 1; // 0x0
	uint32_t bWasTalking : 1; // 0x0
	uint32_t bIsTalking : 1; // 0x0
	uint32_t bIsRegistered : 1; // 0x0
	EMuteType MuteType; // 0x4
};

struct FEventUploadConfig {
	EEventUploadType UploadType; // 0x0
	FString UploadUrl; // 0x4
	float TimeOut; // 0x14
	uint32_t bUseCompression : 1; // 0x18
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	ObjectProperty InterfaceObject; // 0x8
};

struct FVectorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveVector ParameterValueCurve; // 0x40
};

struct FKCachedConvexData {
	TArray<FKCachedConvexDataElement> CachedConvexElements; // 0x0
};

struct FCanvasIcon {
	ObjectProperty Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FRenderCommandFence_Mirror {
	int32_t NumPendingFences; // 0x0
};

struct FClothingLodInfo {
	TArray<int32_t> LODMaterialMap; // 0x0
};

struct FTeleportParams {
	FVector vTargetLocation; // 0x0
	FRotator rTargetRotation; // 0xc
	uint32_t bPlayFx : 1; // 0x18
	uint32_t bDoBackTrace : 1; // 0x18
	FVector vBackTraceDir; // 0x1c
	float fBackTraceIncrement; // 0x28
	float fBackTraceMaxDist; // 0x2c
	uint32_t bLookForGround : 1; // 0x30
	float fGroundSearchHeight; // 0x34
	float fGroundSearchRayRadius; // 0x38
	uint32_t bCheckLineOfSight : 1; // 0x3c
	float fMovementCorrectionDisableTime; // 0x40
	int32_t nTeleportEnterState; // 0x44
	int32_t nTeleportExitState; // 0x48
	uint32_t bFakeTeleport : 1; // 0x4c
};

struct FCachedTgAnimNodeStanceInfo {
	int32_t Index; // 0x0
	ObjectProperty Node; // 0x4
};

struct FParticleSystemInfo {
	ObjectProperty ParticleSystem; // 0x0
	FName SocketName; // 0x8
};

struct FNxDestructibleDepthParameters {
	uint32_t TAKE_IMPACT_DAMAGE : 1; // 0x0
	uint32_t IGNORE_POSE_UPDATES : 1; // 0x0
	uint32_t IGNORE_RAYCAST_CALLBACKS : 1; // 0x0
	uint32_t IGNORE_CONTACT_CALLBACKS : 1; // 0x0
	uint32_t USER_FLAG_1 : 1; // 0x0
	uint32_t USER_FLAG_2 : 1; // 0x0
	uint32_t USER_FLAG_3 : 1; // 0x0
	uint32_t USER_FLAG_4 : 1; // 0x0
	EImpactDamageOverride ImpactDamageOverride; // 0x4
};

struct FLightmassPrimitiveSettings {
	uint32_t bUseTwoSidedLighting : 1; // 0x0
	uint32_t bShadowIndirectOnly : 1; // 0x0
	uint32_t bUseEmissiveForStaticLighting : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float SpecularBoost; // 0x14
	float FullyOccludedSamplesFraction; // 0x18
};

struct FDeathInfo {
	uint32_t bDead : 1; // 0x0
	FVector Momentum; // 0x4
	UDamageType* dmgType; // 0x10
	FVector HitLoc; // 0x18
};

struct FOverlayData {
	Fdword dwDeviceTarget; // 0x0
	uint32_t bInit : 1; // 0x4
	float fRoll; // 0x8
	float fScale; // 0xc
	float fTimer; // 0x10
	float fAnimX; // 0x14
	float fAnimY; // 0x18
	float fStartX; // 0x1c
	float fStartY; // 0x20
	FVector vWorldLoc; // 0x24
	FVector vWorldVel; // 0x30
	FVector vScreenLoc; // 0x3c
	FUIPooledOverlayData PooledOverlayData; // 0x48
};

struct FTextSizingParameters {
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	FVector2D Scaling; // 0x10
	ObjectProperty DrawFont; // 0x18
	FVector2D SpacingAdjust; // 0x20
	float ViewportHeight; // 0x28
};

struct FRiderMarkedTargetInfo {
	int32_t nTargetPawnId; // 0x0
	int32_t nMarkedCount; // 0x4
};

struct FTeamDifficultyData {
	EBotDifficultyLevel CurrentBotDifficultyLevel; // 0x0
	float TeamSkillLevel; // 0x4
};

struct FDepthFieldGlowInfo {
	uint32_t bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FListener {
	ObjectProperty PortalVolume; // 0x0
	FVector Location; // 0x8
	FVector Up; // 0x14
	FVector Right; // 0x20
	FVector Front; // 0x2c
	FVector Velocity; // 0x38
};

struct FVector2MaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	float ConstantX; // 0x38
	float ConstantY; // 0x3c
};

struct FNavMeshLayerInfo {
	FName Desc; // 0x0
	float Radius; // 0x8
	float Height; // 0xc
	float CrouchHeight; // 0x10
	char PathColor; // 0x14
};

struct FNavMeshPathGoalEvaluatorCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x4
};

struct FWallPlacementInfo {
	uint32_t bIsValidLocation : 1; // 0x0
	FVector vSpawnLocation; // 0x4
};

struct FCoverReplicationInfo {
	ObjectProperty Link; // 0x0
	TArray<char> SlotsEnabled; // 0x8
	TArray<char> SlotsDisabled; // 0x18
	TArray<char> SlotsAdjusted; // 0x28
	TArray<FManualCoverTypeInfo> SlotsCoverTypeChanged; // 0x38
};

struct FSpawnQueueEntry {
	float fSpawnTime; // 0x0
	int32_t nBotId; // 0x4
	int32_t nSkinId; // 0x8
	int32_t nWeaponSkinId; // 0xc
	int32_t nSpawnTableDetailId; // 0x10
	FName BehaviorTreeOverride; // 0x14
};

struct FFacebookFriend {
	FString Name; // 0x0
	FString Id; // 0x10
};

struct FPhysEffectInfo {
	float Threshold; // 0x0
	float ReFireDelay; // 0x4
	ObjectProperty Effect; // 0x8
	ObjectProperty Sound; // 0x10
};

struct FManagedValueSaveSlot {
	FString OwningMcpId; // 0x0
	FString SaveSlot; // 0x10
	TArray<FManagedValue> Values; // 0x20
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FNavigationOctreeObject {
	FBox BoundingBox; // 0x0
	FVector BoxCenter; // 0x1c
	FPointer OctreeNode; // 0x28
	ObjectProperty Owner; // 0x30
	char OwnerType; // 0x38
};

struct FBroadcastChannel {
	ESpectatorMode Channel; // 0x0
	int32_t PlayerID; // 0x4
};

struct FUIMarkInfo {
	ObjectProperty Target; // 0x0
	int32_t nUIMarkCount; // 0x8
};

struct FsPredefinedLevelDeployInfo {
	int32_t m_Id; // 0x0
	FVector m_Location; // 0x4
};

struct FRotTransitionInfo {
	float RotationOffset; // 0x0
	FName TransName; // 0x4
};

struct FMarketplaceProductAvailability {
	TArray<FString> AcceptablePaymentInstrumentTypes; // 0x0
	FString Description; // 0x10
	FString Title; // 0x20
	int32_t ConsumableQuantity; // 0x30
	FString ContentId; // 0x34
	FString CurrencyCode; // 0x44
	FString DisplayListPrice; // 0x54
	FString DisplayPrice; // 0x64
	FString DistributionType; // 0x74
	uint32_t bIsPurchasable : 1; // 0x84
	float ListPrice; // 0x88
	FString OfferId; // 0x8c
	float Price; // 0x9c
	FString PromotionalText; // 0xa0
	FString SignedOffer; // 0xb0
};

struct FPreviewAnimSetsStruct {
	FName DisplayName; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
};

struct FDruidHealBeam {
	float fDeliveryDelayRemaining; // 0x0
	ObjectProperty Beam; // 0x4
};

struct FSeqOpOutputInputLink {
	ObjectProperty LinkedOp; // 0x0
	int32_t InputLinkIdx; // 0x8
};

struct FAimOffsetProfile {
	FName ProfileName; // 0x0
	FVector2D HorizontalRange; // 0x8
	FVector2D VerticalRange; // 0x10
	TArray<FAimComponent> AimComponents; // 0x18
	FName AnimName_LU; // 0x28
	FName AnimName_LC; // 0x30
	FName AnimName_LD; // 0x38
	FName AnimName_CU; // 0x40
	FName AnimName_CC; // 0x48
	FName AnimName_CD; // 0x50
	FName AnimName_RU; // 0x58
	FName AnimName_RC; // 0x60
	FName AnimName_RD; // 0x68
};

struct FTCameraCache {
	float TimeStamp; // 0x0
	FTPOV POV; // 0x4
};

struct FEdgePointer {
	FPointer Dummy; // 0x0
};

struct FScreenShakeAnimStruct {
	ObjectProperty Anim; // 0x0
	uint32_t bUseDirectionalAnimVariants : 1; // 0x8
	ObjectProperty Anim_Left; // 0xc
	ObjectProperty Anim_Right; // 0x14
	ObjectProperty Anim_Rear; // 0x1c
	float AnimPlayRate; // 0x24
	float AnimScale; // 0x28
	float AnimBlendInTime; // 0x2c
	float AnimBlendOutTime; // 0x30
	uint32_t bRandomSegment : 1; // 0x34
	float RandomSegmentDuration; // 0x38
	uint32_t bSingleInstance : 1; // 0x3c
};

struct FRootMotionCurve {
	FName AnimName; // 0x0
	FInterpCurveVector Curve; // 0x8
	float MaxCurveTime; // 0x1c
};

struct FExpressionInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0xc
	int32_t Mask; // 0x1c
	int32_t MaskR; // 0x20
	int32_t MaskG; // 0x24
	int32_t MaskB; // 0x28
	int32_t MaskA; // 0x2c
	int32_t GCC64_Padding; // 0x30
};

struct FEnergyStunStackEntry {
	ObjectProperty Effect; // 0x0
};

struct FSteamUserCloud {
	FString UserId; // 0x0
	TArray<FTitleFile> UserCloudFileData; // 0x10
};

struct FNavMeshPathParams {
	FPointer Interface; // 0x0
	uint32_t bCanMantle : 1; // 0x8
	uint32_t bNeedsMantleValidityTest : 1; // 0x8
	uint32_t bAbleToSearch : 1; // 0x8
	FVector SearchExtent; // 0xc
	float SearchLaneMultiplier; // 0x18
	FVector SearchStart; // 0x1c
	float MaxDropHeight; // 0x28
	float MinWalkableZ; // 0x2c
	float MaxHoverDistance; // 0x30
	float MaxPathLength; // 0x34
};

struct FSteamPlayerClanData {
	FString ClanName; // 0x0
	FString ClanTag; // 0x10
};

struct FGetSaveDataCallbackStruct {
	int32_t SlotIndex; // 0x0
	DelegateProperty Callback; // 0x4
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	ObjectProperty WaveParam; // 0xc
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FEquipDeviceInfo {
	int32_t nDeviceId; // 0x0
	int32_t nDeviceInstanceId; // 0x4
	int32_t nMode; // 0x8
};

struct FHudLocalizedMessage {
	ULocalMessage* Message; // 0x0
	FString StringMessage; // 0x8
	int32_t Switch; // 0x18
	float EndOfLife; // 0x1c
	float Lifetime; // 0x20
	float PosY; // 0x24
	FColor DrawColor; // 0x28
	int32_t FontSize; // 0x2c
	ObjectProperty StringFont; // 0x30
	float DX; // 0x38
	float DY; // 0x3c
	uint32_t Drawn : 1; // 0x40
	int32_t Count; // 0x44
	ObjectProperty OptionalObject; // 0x48
};

struct FSpraySetup {
	int32_t nDeviceId; // 0x0
	ObjectProperty Texture; // 0x4
	int32_t nMaterialIndex; // 0xc
	uint32_t bInitializedSprayParams : 1; // 0x10
	SprayDisplayBehavior Behavior; // 0x14
};

struct FAoeActorInRangeData {
	ObjectProperty Actor; // 0x0
	FVector Location; // 0x8
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FPatchNotesData {
	FString sPatchIdentifier; // 0x0
	FPatchVersionNumber PatchVersion; // 0x10
	FPatchVersionNumber PatchRelevantVersion; // 0x20
	TArray<FJsonFeatureData> vPatchDetails; // 0x30
};

struct FInputEventParameters {
	int32_t PlayerIndex; // 0x0
	int32_t ControllerId; // 0x4
	FName InputKeyName; // 0x8
	EInputEvent EventType; // 0x10
	float InputDelta; // 0x14
	float DeltaTime; // 0x18
	uint32_t bAltPressed : 1; // 0x1c
	uint32_t bCtrlPressed : 1; // 0x1c
	uint32_t bShiftPressed : 1; // 0x1c
};

struct FRelevantNodeNameNodes {
	ObjectProperty CachedNode; // 0x0
	int32_t ChildIndex; // 0x8
};

struct FNxDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	float ImpactDamage; // 0x8
	float ImpactResistance; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
};

struct FSkeletalMeshOptimizationSettings {
	float MaxDeviationPercentage; // 0x0
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x4
	SkeletalMeshOptimizationImportance TextureImportance; // 0x5
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x6
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x7
	SkeletalMeshOptimizationNormalMode NormalMode; // 0x8
	float BoneReductionRatio; // 0xc
	int32_t MaxBonesPerVertex; // 0x10
	SkeletalMeshOptimizationType ReductionMethod; // 0x14
	float NumOfTrianglesPercentage; // 0x18
	float WeldingThreshold; // 0x1c
	uint32_t bRecalcNormals : 1; // 0x20
	float NormalsThreshold; // 0x24
};

struct FNamedObjectProperty {
	FName ObjectPropertyName; // 0x0
	FString ObjectPropertyValue; // 0x8
};

struct FEffectMeshInfo {
	ComponentProperty Mesh; // 0x0
	int32_t nMeshId; // 0x8
	FName DisplayGroup; // 0xc
	uint32_t AbsoluteTranslation : 1; // 0x14
	uint32_t AbsoluteRotation : 1; // 0x14
	uint32_t AbsoluteScale : 1; // 0x14
	uint32_t bWillSelfDestruct : 1; // 0x14
	FVector vAdditiveTranslation; // 0x18
	FRotator rAdditiveRotation; // 0x24
	float fScaleMultipler; // 0x30
};

struct FPendingPlayerStats {
	FUniqueNetId Player; // 0x0
	FString PlayerName; // 0x8
	FString StatGuid; // 0x18
	TArray<FPlayerStat> Stats; // 0x28
	FOnlinePlayerScore Score; // 0x38
	FString Place; // 0x48
};

struct FMolotovGeneralSettings {
	FVector vBiasDirection; // 0x0
	float fUpFactor; // 0xc
	float fSpotRadius; // 0x10
	float fSpotHeight; // 0x14
};

struct FPlaylist {
	TArray<FConfiguredGameSetting> ConfiguredGames; // 0x0
	int32_t PlaylistId; // 0x10
	int32_t LoadBalanceId; // 0x14
	FString LocalizationString; // 0x18
	TArray<int32_t> ContentIds; // 0x28
	int32_t TeamSize; // 0x38
	int32_t TeamCount; // 0x3c
	int32_t MaxPartySize; // 0x40
	FString Name; // 0x44
	FString URL; // 0x54
	int32_t MatchType; // 0x64
	uint32_t bDisableDedicatedServerSearches : 1; // 0x68
	TArray<FName> MapCycle; // 0x6c
	TArray<FInventorySwap> InventorySwaps; // 0x7c
};

struct FServerCorrectionSmoothingParams {
	float fServerCorrectSnapDist; // 0x0
	float fMinBaseSpeed; // 0x4
	float fMaxBaseSpeed; // 0x8
	float fBaseSpeedMultiplier; // 0xc
	float fNewInfoWeight; // 0x10
	float fMinCorrectionModifier; // 0x14
	float fMaxCorrectionModifier; // 0x18
	float fCorrectionModifierMultiplier; // 0x1c
};

struct FOnlineGameSearchORClause {
	TArray<FOnlineGameSearchParameter> OrParams; // 0x0
};

struct FBinocularSettings {
	int32_t nTargets; // 0x0
	FRotator rHeading; // 0x4
	float fRange; // 0x10
	float fTimer1; // 0x14
	float fTimer2; // 0x18
	float fTimer3; // 0x1c
	float fTimerDuration; // 0x20
	float fRefireTimerPercent; // 0x24
	float fDurationPercent; // 0x28
};

struct FFLOOD {
	int32_t m_nCount; // 0x0
	float m_fLastUpdate; // 0x4
};

struct FHitMarkerInfo {
	uint32_t bPlayed : 1; // 0x0
	float DamageAmount; // 0x4
	float fMaxDamageAmount; // 0x8
	TArray<FString> HitActors; // 0xc
	uint32_t bIsShieldHit : 1; // 0x1c
	FExtraDamageInfo ExtraInfo; // 0x20
	float fAccumulatedDamage; // 0x24
};

struct FMolotovStrandInfo {
	FVector vStartDirection; // 0x0
	float fAllowanceWeight; // 0xc
	int32_t nHeadIndex; // 0x10
	int32_t nAllowableSize; // 0x14
	TArray<int32_t> nStrandTrace; // 0x18
};

struct FBurningMarkInfo {
	ObjectProperty Target; // 0x0
	int32_t nMarkCount; // 0x8
};

struct FManagerImage {
	FString strImageName; // 0x0
	ObjectProperty pTexture; // 0x10
};

struct FTgQueuedInstantFireShot {
	int32_t FireRequestId; // 0x0
	FAimData Aim; // 0x4
	FImpactToValidate PrimaryImpact; // 0x38
	TArray<FImpactToValidate> Impacts; // 0xc0
	int32_t AmmoToConsume; // 0xd0
	float AccuracyRandomValue1; // 0xd4
	float AccuracyRandomValue2; // 0xd8
	float AccuracyValue; // 0xdc
};

struct FMICScalarParamMetaDataStorage {
	ObjectProperty m_Source; // 0x0
	TArray<FSwappedMeshResetInfo> MaterialsToReset; // 0x8
	TArray<ObjectProperty> CurrentModifiedMICs; // 0x18
	uint32_t bHasSetMICs : 1; // 0x28
};

struct FScoreInfo {
	int32_t nCard[0x5]; // 0x0
	int32_t nCardLevel[0x5]; // 0x14
	int32_t nItem[0x4]; // 0x28
	int32_t nItemLevel[0x4]; // 0x38
	int32_t nTalent; // 0x48
	int32_t nTalentLevel; // 0x4c
	int32_t nTalentXPos; // 0x50
	int32_t nTalentYPos; // 0x54
	int32_t nPassive; // 0x58
	int32_t nPassiveXPos; // 0x5c
	int32_t nPassiveYPos; // 0x60
	int32_t nPlayerId; // 0x64
	FUniqueNetId ConsoleUniqueId; // 0x68
	Fdword PortalId; // 0x70
	ObjectProperty pObj; // 0x74
	ObjectProperty Name; // 0x7c
	ObjectProperty pName; // 0x84
	ObjectProperty pCrossPlayIcon; // 0x8c
	ObjectProperty EquipableTitle; // 0x94
	ObjectProperty Icon; // 0x9c
	ObjectProperty Mute; // 0xa4
	ObjectProperty Bounds; // 0xac
	ObjectProperty Charge; // 0xb4
	ObjectProperty Killstreak; // 0xbc
	ObjectProperty Respawn; // 0xc4
	ObjectProperty Champion; // 0xcc
	ObjectProperty TalentButton; // 0xd4
	ObjectProperty TalentIcon; // 0xdc
	ObjectProperty PassiveButton; // 0xe4
	ObjectProperty PassiveIcon; // 0xec
	ObjectProperty ItemBacks; // 0xf4
	ObjectProperty Card[0x5]; // 0xfc
	ObjectProperty CardIcon[0x5]; // 0x124
	ObjectProperty Item[0x4]; // 0x14c
	ObjectProperty ItemBase[0x4]; // 0x16c
	ObjectProperty ItemIcon[0x4]; // 0x18c
	int32_t nItemXPos[0x4]; // 0x1ac
	int32_t nItemYPos[0x4]; // 0x1bc
	ObjectProperty KDA; // 0x1cc
	ObjectProperty MuteVoice; // 0x1d4
	ObjectProperty Disconnected; // 0x1dc
};

struct FVehicleState {
	FRigidBodyState RBState; // 0x0
	char ServerBrake; // 0x40
	char ServerGas; // 0x41
	char ServerSteering; // 0x42
	char ServerRise; // 0x43
	uint32_t bServerHandbrake : 1; // 0x44
	int32_t ServerView; // 0x48
};

struct FMcpUncompressMessageRequest {
	FString MessageId; // 0x0
	TArray<char> SourceBuffer; // 0x10
	TArray<char> DestBuffer; // 0x20
	int32_t OutUncompressedSize; // 0x30
	FPointer UncompressionWorker; // 0x34
};

struct FSeqVarLink {
	USequenceVariable* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedVariables; // 0x8
	FString LinkDesc; // 0x18
	FName LinkVar; // 0x28
	FName PropertyName; // 0x30
	uint32_t bWriteable : 1; // 0x38
	uint32_t bSequenceNeverReadsOnlyWritesToThisVar : 1; // 0x38
	uint32_t bModifiesLinkedObject : 1; // 0x38
	uint32_t bHidden : 1; // 0x38
	int32_t MinVars; // 0x3c
	int32_t MaxVars; // 0x40
	int32_t DrawX; // 0x44
	ObjectProperty CachedProperty; // 0x48
	uint32_t bAllowAnyType : 1; // 0x50
	uint32_t bMoving : 1; // 0x50
	uint32_t bClampedMax : 1; // 0x50
	uint32_t bClampedMin : 1; // 0x50
};

struct FRecoilParams {
	ERecoilStart X; // 0x0
	ERecoilStart Y; // 0x1
	ERecoilStart Z; // 0x2
	char Padding; // 0x3
};

struct FCovPosInfo {
	ObjectProperty Link; // 0x0
	int32_t LtSlotIdx; // 0x8
	int32_t RtSlotIdx; // 0xc
	float LtToRtPct; // 0x10
	FVector Location; // 0x14
	FVector Normal; // 0x20
	FVector Tangent; // 0x2c
};

struct FUITargetableOverlay {
	int32_t nLastColorFrame; // 0x0
	int32_t nTargetId; // 0x4
	uint32_t bInit : 1; // 0x8
	uint32_t bVisible : 1; // 0x8
	uint32_t bOnEdge : 1; // 0x8
	uint32_t bHighlight : 1; // 0x8
	uint32_t bTraceResult : 1; // 0x8
	float fAlpha; // 0xc
	float fScale; // 0x10
	float fTraceTimer; // 0x14
	float fHighlightTimer; // 0x18
	FVector vWorldLoc; // 0x1c
	FVector vScreenLoc; // 0x28
	FString CachedName; // 0x34
	ObjectProperty pClip; // 0x44
	ObjectProperty pName; // 0x4c
	ObjectProperty pCarat; // 0x54
	ObjectProperty pHealingIndicator; // 0x5c
	ObjectProperty pIcon; // 0x64
	ObjectProperty pHealthBarParent; // 0x6c
	ObjectProperty pHealthBar; // 0x74
	EDeployableOverlayType eType; // 0x7c
	EDeployableOverlayOwnershipType eOwnership; // 0x7d
	int32_t nDepth; // 0x80
};

struct FLevelStreamingNameCombo {
	ObjectProperty Level; // 0x0
	FName LevelName; // 0x8
};

struct FScreenMessageString {
	FQWord Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
};

struct FEmsFile {
	FString Hash; // 0x0
	FString DLName; // 0x10
	FString Filename; // 0x20
	int32_t FileSize; // 0x30
};

struct FRandomAnimInfo {
	float Chance; // 0x0
	char LoopCountMin; // 0x4
	char LoopCountMax; // 0x5
	float BlendInTime; // 0x8
	FVector2D PlayRateRange; // 0xc
	uint32_t bStillFrame : 1; // 0x14
	char LoopCount; // 0x18
	float LastPosition; // 0x1c
};

struct FMusicTrackStruct {
	ObjectProperty TheSoundCue; // 0x0
	uint32_t bAutoPlay : 1; // 0x8
	uint32_t bPersistentAcrossLevels : 1; // 0x8
	float FadeInTime; // 0xc
	float FadeInVolumeLevel; // 0x10
	float FadeOutTime; // 0x14
	float FadeOutVolumeLevel; // 0x18
	FString MP3Filename; // 0x1c
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	ObjectProperty Sound; // 0xc
};

struct FAimAssistTargetWeight {
	TScriptInterface<Class> Target; // 0x0
	float Weight; // 0x10
	float horizAssistVal; // 0x14
	float vertAssistVal; // 0x18
	float lastUpdateTimestamp; // 0x1c
};

struct FUntypedBulkData_Mirror {
	FPointer VfTable; // 0x0
	int32_t BulkDataFlags; // 0x8
	int32_t ElementCount; // 0xc
	int32_t BulkDataOffsetInFile; // 0x10
	int32_t BulkDataSizeOnDisk; // 0x14
	int32_t SavedBulkDataFlags; // 0x18
	int32_t SavedElementCount; // 0x1c
	int32_t SavedBulkDataOffsetInFile; // 0x20
	int32_t SavedBulkDataSizeOnDisk; // 0x24
	FPointer BulkData; // 0x28
	int32_t LockStatus; // 0x30
	FPointer AttachedAr; // 0x34
	int32_t bShouldFreeOnEmpty; // 0x3c
};

struct FPlayerResponseLine {
	int32_t PlayerNum; // 0x0
	int32_t PlayerID; // 0x4
	FString PlayerName; // 0x8
	int32_t Ping; // 0x18
	int32_t Score; // 0x1c
	int32_t StatsID; // 0x20
	TArray<FKeyValuePair> PlayerInfo; // 0x24
};

struct FDeferredLeaderboardRead {
	FString LeaderboardName; // 0x0
	char RequestType; // 0x10
	int32_t Start; // 0x14
	int32_t End; // 0x18
	TArray<FUniqueNetId> PlayerList; // 0x1c
};

struct FCompositePartInfo {
	int32_t MeshAsmId; // 0x0
	int32_t DestOffsetX; // 0x4
	int32_t DestOffsetY; // 0x8
	int32_t RegionSizeX; // 0xc
	int32_t RegionSizeY; // 0x10
};

struct FTexture2DMipMap {
	FUntypedBulkData_Mirror Data; // 0x0
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FPointer FileNameOverride; // 0x48
};

struct FAchievementDetails {
	int32_t Id; // 0x0
	FString StringId; // 0x4
	FString AchievementName; // 0x14
	FString Description; // 0x24
	FString HowTo; // 0x34
	ObjectProperty Image; // 0x44
	char MonthEarned; // 0x4c
	char DayEarned; // 0x4d
	char YearEarned; // 0x4e
	char DayOfWeekEarned; // 0x4f
	int32_t GamerPoints; // 0x50
	uint32_t bIsSecret : 1; // 0x54
	uint32_t bWasAchievedOnline : 1; // 0x54
	uint32_t bWasAchievedOffline : 1; // 0x54
	EAchievementUnlockType UnlockType; // 0x58
	FQWord ChallengeWindowBegin; // 0x5c
	FQWord ChallengeWindowEnd; // 0x64
	FString DeepLink; // 0x6c
	FQWord EstimatedUnlockTime; // 0x7c
	uint32_t bIsRevoked : 1; // 0x84
	EAchievementParticipationType ParticipationType; // 0x88
	TArray<FString> PlatformsAvailableOn; // 0x8c
	EAchievementProgressState ProgressState; // 0x9c
	TArray<FAchievementReward> Rewards; // 0xa0
	TArray<FAchievementMediaAsset> MediaAssets; // 0xb0
	FString ProductID; // 0xc0
	FString ServiceConfigurationID; // 0xd0
	TArray<FAchievementTitleAssociation> TitleAssociations; // 0xe0
};

struct FRequiredMobileInputConfig {
	FString GroupName; // 0x0
	TArray<FString> RequireZoneNames; // 0x10
	uint32_t bIsAttractModeGroup : 1; // 0x20
};

struct FMolotovEligibilityRecord {
	uint32_t bIsEligible : 1; // 0x0
	FVector vLocation; // 0x4
	FVector vHitNormal; // 0x10
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FFileNameToURLMapping {
	FName Filename; // 0x0
	FName UrlMapping; // 0x8
};

struct FBadgeStruct {
	int32_t BadgeId; // 0x0
	int32_t ActivityId; // 0x4
	int32_t Icon; // 0x8
	int32_t Tier; // 0xc
	int32_t Progress; // 0x10
	int32_t MaxValue; // 0x14
	int32_t Category; // 0x18
	FString Title; // 0x1c
	FString Description; // 0x2c
};

struct FTgKeyBind {
	int32_t nCommandIndex; // 0x0
	uint32_t bOverridesKeys : 1; // 0x4
	uint32_t bOverridesGamepad : 1; // 0x4
	TArray<FString> sKeys; // 0x8
	TArray<FString> sGamepadKeys; // 0x18
};

struct FUIDisplayData {
	char eType; // 0x0
	ObjectProperty pObj; // 0x4
};

struct FMaldambaSpecificChallengeEntry {
	MaldambaSpecificChallengeEntryType Type; // 0x0
	float fTime; // 0x4
};

struct FRawDistributionFloat : FRawDistribution {
	ComponentProperty Distribution; // 0x1c
};

struct FBoolTrackKey {
	float Time; // 0x0
	uint32_t Value : 1; // 0x4
};

struct FRankMetaData {
	FName RankName; // 0x0
	FString RankColumnName; // 0x8
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FLagCompedQueuedHitInfo {
	ObjectProperty HitActor; // 0x0
	FVector HitLocation; // 0x8
	FVector HitNormal; // 0x14
};

struct FVelocityObstacleStat {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
	float Radius; // 0x18
	int32_t Priority; // 0x1c
};

struct FPostureStack {
	TArray<int32_t> GUIDs; // 0x0
	TArray<TG_POSTURE> Postures; // 0x10
	int32_t NewPostureGUID; // 0x20
};

struct FSceneData {
	FName nmSceneName; // 0x0
	ObjectProperty pData; // 0x8
};

struct FDynamicLinkInfo {
	FVector LastTargetLocation; // 0x0
	FVector LastSrcLocation; // 0xc
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FPComPerformanceCaptureStatCollection {
	FName ProfileName; // 0x0
	TArray<FPComPerformanceCaptureStat> Stats; // 0x8
};

struct FSkelMeshComponentLODInfo {
	TArray<char> HiddenMaterials; // 0x0
	uint32_t bNeedsInstanceWeightUpdate : 1; // 0x10
	uint32_t bAlwaysUseInstanceWeights : 1; // 0x10
	EInstanceWeightUsage InstanceWeightUsage; // 0x14
	int32_t InstanceWeightIdx; // 0x18
};

struct FRegistryKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FAimTransform {
	FQuat Quaternion; // 0x0
	FVector Translation; // 0x10
};

struct FConnectionBandwidthStats {
	int32_t UpstreamRate; // 0x0
	int32_t DownstreamRate; // 0x4
	int32_t RoundtripLatency; // 0x8
};

struct FNxDestructibleParametersFlag {
	uint32_t ACCUMULATE_DAMAGE : 1; // 0x0
	uint32_t ASSET_DEFINED_SUPPORT : 1; // 0x0
	uint32_t WORLD_SUPPORT : 1; // 0x0
	uint32_t DEBRIS_TIMEOUT : 1; // 0x0
	uint32_t DEBRIS_MAX_SEPARATION : 1; // 0x0
	uint32_t CRUMBLE_SMALLEST_CHUNKS : 1; // 0x0
	uint32_t ACCURATE_RAYCASTS : 1; // 0x0
	uint32_t USE_VALID_BOUNDS : 1; // 0x0
	uint32_t FORM_EXTENDED_STRUCTURES : 1; // 0x0
};

struct FGameSearchCfg {
	UOnlineGameSearch* GameSearchClass; // 0x0
	UOnlineGameSettings* DefaultGameSettingsClass; // 0x8
	UUIDataProvider_Settings* SearchResultsProviderClass; // 0x10
	ObjectProperty DesiredSettingsProvider; // 0x18
	ObjectProperty Search; // 0x20
	FName SearchName; // 0x28
};

struct FRecoilInfo {
	FRecoilDef Min; // 0x0
	FRecoilDef Max; // 0x70
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FTitleFile {
	FString Filename; // 0x0
	EOnlineEnumerationReadState AsyncState; // 0x10
	TArray<char> Data; // 0x14
};

struct FRecentInteraction {
	FName InteractionTag; // 0x0
	float InteractionDelay; // 0x8
};

struct FIpAddr {
	int32_t AddrA; // 0x0
	int32_t AddrB; // 0x4
	int32_t AddrC; // 0x8
	int32_t AddrD; // 0xc
	int32_t Port; // 0x10
};

struct FAnimSetMeshLinkup {
	FPointer SkelMesh; // 0x0
	TArray<int32_t> BoneToTrackTable; // 0x8
};

struct FFragmentGroup {
	TArray<int32_t> FragmentIndices; // 0x0
	uint32_t bGroupIsRooted : 1; // 0x10
};

struct FLifeTimeCalcInfo {
	uint32_t bInitialized : 1; // 0x0
	float fReductionFromPawnProtections; // 0x4
	float fReductionFromCCProtectionsPerc; // 0x8
	float fReductionFromDoTProtections; // 0xc
	float fReductionFromDoTProtectionsPerc; // 0x10
	int32_t nCrowdControlCount; // 0x14
	uint32_t bCrowdControlImmune : 1; // 0x18
	float m_fCalculatedLifeTime; // 0x1c
};

struct FTakeHitInfo {
	FVector HitLocation; // 0x0
	FVector Momentum; // 0xc
	UDamageType* DamageType; // 0x18
	ObjectProperty InstigatedBy; // 0x20
	char HitBoneIndex; // 0x28
	ObjectProperty PhysicalMaterial; // 0x2c
	float Damage; // 0x34
	FVector RadialDamageOrigin; // 0x38
};

struct FTouchDataEvent {
	ETouchType EventType; // 0x0
	char TouchpadIndex; // 0x1
	FVector2D Location; // 0x4
	FDouble DeviceTime; // 0xc
};

struct FInstancedStaticMeshMappingInfo {
	FPointer Mapping; // 0x0
	FPointer LightMap; // 0x8
	ObjectProperty LightmapTexture; // 0x10
	ObjectProperty ShadowmapTexture; // 0x18
};

struct FsInventoryReq {
	uint32_t m_bLevelFail : 1; // 0x0
	uint32_t m_bSkillFail : 1; // 0x0
	int32_t m_nSkillLevelReq; // 0x4
	int32_t m_nSkillIdReq; // 0x8
	uint32_t m_bFlairFail : 1; // 0xc
	uint32_t m_bLocationFail : 1; // 0xc
};

struct FDateTimeWrapper {
	FQWord qTime; // 0x0
};

struct FPComPipViewDesc {
	FName ViewName; // 0x0
	FVector ViewLocation; // 0x8
	FRotator ViewRotation; // 0x14
	FBox Viewport; // 0x20
	ObjectProperty PostProcessChain; // 0x3c
	FPostProcessSettings PostProcessSettings; // 0x44
	float FOV; // 0x1c4
	FColor ClearColor; // 0x1c8
	uint32_t bDebugRenderTranslucent : 1; // 0x1cc
	uint32_t bAlwaysRender : 1; // 0x1cc
	FDouble RequestRenderTime; // 0x1d0
	FDouble LastRenderedTime; // 0x1d8
	int32_t NumFramesSinceRender; // 0x1e0
};

struct FDilationData {
	float fValue; // 0x0
	FString sName; // 0x4
};

struct FQueueMessage {
	int32_t Id; // 0x0
	TG_CHAT_PRIORITY Priority; // 0x4
	uint32_t bHasPlayedSound : 1; // 0x8
	int32_t VoicePackId; // 0xc
	int32_t VoiceBotId; // 0x10
	int32_t VoiceSkinId; // 0x14
	FString VoicePackCustomSuffix; // 0x18
	ObjectProperty SoundObject; // 0x28
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FMarkedTargetInfo {
	int32_t PawnId; // 0x0
	int32_t Count; // 0x4
};

struct FTextureGroupContainer {
	uint32_t TEXTUREGROUP_World : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Character : 1; // 0x0
	uint32_t TEXTUREGROUP_CharacterNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_CharacterSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Weapon : 1; // 0x0
	uint32_t TEXTUREGROUP_WeaponNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_WeaponSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Vehicle : 1; // 0x0
	uint32_t TEXTUREGROUP_VehicleNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_VehicleSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Cinematic : 1; // 0x0
	uint32_t TEXTUREGROUP_Effects : 1; // 0x0
	uint32_t TEXTUREGROUP_EffectsNotFiltered : 1; // 0x0
	uint32_t TEXTUREGROUP_Skybox : 1; // 0x0
	uint32_t TEXTUREGROUP_UI : 1; // 0x0
	uint32_t TEXTUREGROUP_Lightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_RenderTarget : 1; // 0x0
	uint32_t TEXTUREGROUP_MobileFlattened : 1; // 0x0
	uint32_t TEXTUREGROUP_ProcBuilding_Face : 1; // 0x0
	uint32_t TEXTUREGROUP_ProcBuilding_LightMap : 1; // 0x0
	uint32_t TEXTUREGROUP_Shadowmap : 1; // 0x0
	uint32_t TEXTUREGROUP_ColorLookupTable : 1; // 0x0
	uint32_t TEXTUREGROUP_Terrain_Heightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_Terrain_Weightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_ImageBasedReflection : 1; // 0x0
	uint32_t TEXTUREGROUP_Bokeh : 1; // 0x0
	uint32_t TEXTUREGROUP_NPC : 1; // 0x0
	uint32_t TEXTUREGROUP_NPCNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_NPCSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldDetail : 1; // 0x0
	uint32_t TEXTUREGROUP_TitleScreenPreview : 1; // 0x4
	uint32_t TEXTUREGROUP_UIStreamable : 1; // 0x4
};

struct FNamedSession {
	FName SessionName; // 0x0
	FPointer SessionInfo; // 0x8
	ObjectProperty GameSettings; // 0x10
	TArray<FOnlineRegistrant> Registrants; // 0x18
	TArray<FOnlineArbitrationRegistrant> ArbitrationRegistrants; // 0x28
};

struct FPerPlayerSplitscreenData {
	float SizeX; // 0x0
	float SizeY; // 0x4
	float OriginX; // 0x8
	float OriginY; // 0xc
};

struct FLeaderboardEntry {
	FUniqueNetId PlayerUID; // 0x0
	int32_t Rank; // 0x8
	int32_t Score; // 0xc
	TArray<int32_t> LeaderboardData; // 0x10
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	uint32_t DisableBlend : 1; // 0x20
};

struct FOnlineArbitrationRegistrant : FOnlineRegistrant {
	FQWord MachineId; // 0x8
	int32_t Trustworthiness; // 0x10
};

struct FUIITEMGROUP {
	ObjectProperty Obj; // 0x0
	ObjectProperty Title; // 0x8
	ObjectProperty Items; // 0x10
	ObjectProperty frame; // 0x18
	FUIITEMDATA Item[0x5]; // 0x20
};

struct FObjectiveMICInfo {
	int32_t MyTeam; // 0x0
	float AmountFilled; // 0x4
	int32_t ObjStatus; // 0x8
	int32_t IsContested; // 0xc
	int32_t Flip; // 0x10
};

struct FDragHistoryData {
	float TouchTime; // 0x0
	float TouchCoord; // 0x4
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	FVector ContactVelocity[0x2]; // 0x1c
	ObjectProperty PhysMaterial[0x2]; // 0x34
};

struct FForceFaceTargetActor {
	ObjectProperty TargetActor; // 0x0
	float HeightOffset; // 0x8
	FQuat InitialQuat; // 0x10
	float InterpTime; // 0x20
	float StartTime; // 0x24
	float Duration; // 0x28
	ObjectProperty ForceRotationInstigator; // 0x2c
	FName ViewSocketName; // 0x34
	FRotator rLastForcedViewRot; // 0x3c
	ForceFaceActorReason eReason; // 0x48
};

struct FAcquiredItem {
	Fdword dwLocalAcquisitionId; // 0x0
	Fdword eItemType; // 0x4
	int32_t nItemId; // 0x8
	int32_t nQuantity; // 0xc
	uint32_t bIsRental : 1; // 0x10
	int32_t eQuestOrigin; // 0x14
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FSaveSlotOperation {
	int32_t SlotIndex; // 0x0
	SaveSlotOperationEnum SlotOperation; // 0x4
};

struct FTEAMPLAYER_INFO_EXTENDED : FTEAMPLAYER_INFO {
	uint32_t bItemsVisible : 1; // 0xc0
	uint32_t bCardsVisible : 1; // 0xc0
	FUICardDisplayGroup CardDisplayGroup; // 0xc4
	FString sPlayerName; // 0x254
	ObjectProperty pPlayerName; // 0x264
	int32_t nCredits; // 0x26c
	ObjectProperty pCredits; // 0x270
	int32_t nKills; // 0x278
	int32_t nDeaths; // 0x27c
	int32_t nAssists; // 0x280
	ObjectProperty pKDA; // 0x284
};

struct FGameplayEventsHeader {
	int32_t EngineVersion; // 0x0
	int32_t StatsWriterVersion; // 0x4
	int32_t StreamOffset; // 0x8
	int32_t AggregateOffset; // 0xc
	int32_t FooterOffset; // 0x10
	int32_t TotalStreamSize; // 0x14
	int32_t FileSize; // 0x18
	FString FilterClass; // 0x1c
	int32_t Flags; // 0x2c
};

struct FColumnMetaData {
	FString ColumnName; // 0x0
	FString StatName; // 0x10
};

struct FPlayerState {
	int32_t PlayerIndex; // 0x0
	int32_t CurrentTeamIndex; // 0x4
	float TimeSpawned; // 0x8
	float TimeAliveSinceLastDeath; // 0xc
};

struct FPenetrationAvoidanceFeeler {
	FRotator AdjustmentRot; // 0x0
	float WorldWeight; // 0xc
	float PawnWeight; // 0x10
	FVector Extent; // 0x14
	int32_t TraceInterval; // 0x20
	int32_t FramesUntilNextTrace; // 0x24
};

struct FCommunityContentMetadata {
	EOnlineFileType ContentType; // 0x0
	FString RemotePath; // 0x4
	FString DisplayName; // 0x14
};

struct FAttackSpeedModifier {
	int32_t nSourceId; // 0x0
	float fPercChange; // 0x4
	float fExpirationTime; // 0x8
	uint32_t bReplicated : 1; // 0xc
	uint32_t bHasLeniencyApplied : 1; // 0xc
};

struct FRawDistribution {
	char Type; // 0x0
	char Op; // 0x1
	char LookupTableNumElements; // 0x2
	char LookupTableChunkSize; // 0x3
	TArray<float> LookupTable; // 0x4
	float LookupTableTimeScale; // 0x14
	float LookupTableStartTime; // 0x18
};

struct FInventorySwap {
	FName Original; // 0x0
	FString SwapTo; // 0x8
};

struct FUIBinocArrowPositions {
	FVector2D vInnerArrowStart; // 0x0
	FVector2D vInnerArrowEnd; // 0x8
	FVector2D vOuterArrowStart; // 0x10
	FVector2D vOuterArrowEnd; // 0x18
};

struct FStringIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
	uint32_t bIsWildcard : 1; // 0xc
};

struct FTgFxLight {
	FPointer m_FxEmitter; // 0x0
	ObjectProperty m_OwnerSpecialFx; // 0x8
	float m_Score; // 0x10
};

struct FAnimSetBakeAndPruneStatus {
	FString AnimSetName; // 0x0
	uint32_t bReferencedButUnused : 1; // 0x10
	uint32_t bSkipBakeAndPrune : 1; // 0x10
	uint32_t bSkipCooking : 1; // 0x10
};

struct FSplineMeshParams {
	FVector StartPos; // 0x0
	FVector StartTangent; // 0xc
	FVector2D StartScale; // 0x18
	float StartRoll; // 0x20
	FVector2D StartOffset; // 0x24
	FVector EndPos; // 0x2c
	FVector EndTangent; // 0x38
	FVector2D EndScale; // 0x44
	float EndRoll; // 0x4c
	FVector2D EndOffset; // 0x50
};

struct FJsonFeatureData {
	FString sId; // 0x0
	FString sHeader; // 0x10
	FString sSubheader; // 0x20
	FString sDesc; // 0x30
	FString sData; // 0x40
	FString sData2; // 0x50
	int32_t nMinLevel; // 0x60
	int32_t nMaxLevel; // 0x64
	int32_t nProbability; // 0x68
	int32_t nVersion; // 0x6c
	int32_t nNumForcedPresentations; // 0x70
	int32_t nType; // 0x74
	int32_t nXpos; // 0x78
	int32_t nYpos; // 0x7c
	int32_t nWidth; // 0x80
	int32_t nHeight; // 0x84
	uint32_t bIsUsed : 1; // 0x88
	uint32_t bIsLive : 1; // 0x88
	ObjectProperty Texture; // 0x8c
	int32_t nLocationId; // 0x94
};

struct FVectorMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<FVector> MICResetVectors; // 0x10
};

struct FBoneAngleMorph {
	float Angle; // 0x0
	float TargetWeight; // 0x4
};

struct FAnimNotifyEvent {
	float Time; // 0x0
	ObjectProperty Notify; // 0x4
	float Duration; // 0xc
};

struct FMorphNodeConn {
	TArray<ObjectProperty> ChildNodes; // 0x0
	FName ConnName; // 0x10
	int32_t DrawY; // 0x18
};

struct FRemoteTalker {
	FUniqueNetId TalkerId; // 0x0
	float LastNotificationTime; // 0x8
	uint32_t bWasTalking : 1; // 0xc
	uint32_t bIsTalking : 1; // 0xc
	uint32_t bIsRegistered : 1; // 0xc
	float TimeSinceLastPacket; // 0x10
	float TimeSinceJoining; // 0x14
};

struct FDjBladesFaceConfig {
	float fShiftX; // 0x0
	float fShiftY; // 0x4
};

struct FAchievementReward {
	FString RewardName; // 0x0
	FString Description; // 0x10
	FString Data; // 0x20
	EAchievementRewardType RewardType; // 0x30
};

struct FColorMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	FColor Constant; // 0x38
};

struct FTEAMPLAYER_INFO {
	int32_t nRespawn; // 0x0
	uint32_t bHealth : 1; // 0x4
	uint32_t bRespawn : 1; // 0x4
	uint32_t bVisible : 1; // 0x4
	float fHealth; // 0x8
	float fRespawn; // 0xc
	int32_t nUlt; // 0x10
	int32_t nUltReq; // 0x14
	uint32_t bSelected : 1; // 0x18
	FString sIcon; // 0x1c
	float fUltIconScale; // 0x2c
	uint32_t bCorvusMark : 1; // 0x30
	ObjectProperty pObj; // 0x34
	ObjectProperty pIcon; // 0x3c
	ObjectProperty pIconDead; // 0x44
	ObjectProperty pHealth; // 0x4c
	ObjectProperty pHealthTip; // 0x54
	ObjectProperty pHealthBG; // 0x5c
	float fHealthBarWidth; // 0x64
	ObjectProperty pRespawn; // 0x68
	ObjectProperty pDeadX; // 0x70
	ObjectProperty pUlt; // 0x78
	ObjectProperty pUltReady; // 0x80
	ObjectProperty pSelected; // 0x88
	ObjectProperty pCorvusMark; // 0x90
	int32_t nStreak; // 0x98
	float fStreakAnimOffset; // 0x9c
	ObjectProperty pStreak; // 0xa0
	ObjectProperty pStreakAdd1; // 0xa8
	ObjectProperty pStreakAdd2; // 0xb0
	ObjectProperty pStreakCount; // 0xb8
};

struct FRiderLastMaxMarkedTarget {
	int32_t nTargetPawnId; // 0x0
	float nMaxMarksTimestamp; // 0x4
};

struct FLocalTalkerSteam : FLocalTalker {
	EMuteType MuteType; // 0x8
};

struct FPointer {
	int32_t Dummy; // 0x0
};

struct FCardInfo {
	int32_t Id; // 0x0
	int32_t Count; // 0x4
	int32_t Owner; // 0x8
	FString sOwner; // 0xc
};

struct FNodeNameToChildIndex {
	FName NodeName; // 0x0
	int32_t ChildIndex; // 0x8
};

struct FObstacleQueryCache {
	FVector RealGoalPos; // 0x0
	FVector ModifiedGoalPos; // 0xc
	TArray<FVector> IntermediatePoints; // 0x18
	EObstacleAvoidanceStatus PathStatus; // 0x28
};

struct FSurrenderVote {
	int32_t nPlayerId; // 0x0
	uint32_t bSurrender : 1; // 0x4
};

struct FKeybindOption {
	ObjectProperty Obj; // 0x0
	ObjectProperty Base; // 0x8
	ObjectProperty Focus; // 0x10
	ObjectProperty Command; // 0x18
	ObjectProperty Key[0x2]; // 0x20
	ObjectProperty KeyButton[0x2]; // 0x30
};

struct FPreviewSkelMeshStruct {
	FName DisplayName; // 0x0
	ObjectProperty PreviewSkelMesh; // 0x8
	TArray<ObjectProperty> PreviewMorphSets; // 0x10
};

struct FCurrencyBonus {
	char m_BonusSourceType; // 0x0
	char m_BonusType; // 0x1
	float m_fBonusValue; // 0x4
	float m_fBonusTotal; // 0x8
};

struct FSHVectorRGB {
	FSHVector R; // 0x0
	FSHVector G; // 0x30
	FSHVector B; // 0x60
};

struct FAICmdHistoryItem {
	UGameAICommand* CmdClass; // 0x0
	float TimeStamp; // 0x8
	FString VerboseString; // 0xc
};

struct FGameTypePrefix {
	FString Prefix; // 0x0
	uint32_t bUsesCommonPackage : 1; // 0x10
	FString GameType; // 0x14
	TArray<FString> AdditionalGameTypes; // 0x24
	TArray<FString> ForcedObjects; // 0x34
};

struct FPBFaceUVInfo {
	FVector2D Offset; // 0x0
	FVector2D Size; // 0x8
};

struct FArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FDeferredAnimNotifyTickInformation {
	ObjectProperty Notify; // 0x0
	float CurrentTime; // 0x8
	float TimeStep; // 0xc
	float TotalDuration; // 0x10
};

struct FNewsCacheEntry {
	FString NewsUrl; // 0x0
	EOnlineEnumerationReadState ReadState; // 0x10
	EOnlineNewsType NewsType; // 0x11
	FString NewsItem; // 0x14
	float TimeOut; // 0x24
	uint32_t bIsUnicode : 1; // 0x28
	FPointer HttpDownloader; // 0x2c
};

struct FLaunchNotificationInfo {
	uint32_t bWasLaunchedViaNotification : 1; // 0x0
	FNotificationInfo Notification; // 0x4
};

struct FMiniMapPingInfo {
	float fServerStartTime; // 0x0
	float fClientStartTime; // 0x4
	ObjectProperty pingedPri; // 0x8
	FVector vPingedLoc; // 0x10
	uint32_t bIsPinging : 1; // 0x1c
	PING_TYPE eType; // 0x20
	int32_t nIconSize; // 0x24
	ObjectProperty pingMIC; // 0x28
	ObjectProperty sourcePRI; // 0x30
	int32_t SourceIndex; // 0x38
	FVector vSourceWorldLocation; // 0x3c
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	uint32_t bLockOutgoing : 1; // 0xc
};

struct FParticleEventDeathData : FParticleEventData {
	float ParticleTime; // 0x34
};

struct FPendingImportRequest {
	FString sPlayerName; // 0x0
	Fdword dwBotId; // 0x10
	float fTTL; // 0x14
};

struct FServerAuthRetry {
	FUniqueNetId ClientUID; // 0x0
	int32_t AuthRetryCount; // 0x8
};

struct FMenuListMovementInfo {
	uint32_t bIsMoving : 1; // 0x0
	FSelectedMenuItem OrigSelectedItem; // 0x4
	float FullMovement; // 0x10
	float TotalTime; // 0x14
	float CurrentTime; // 0x18
};

struct FBaseAuthSession {
	FIpAddr EndPointIP; // 0x0
	int32_t EndPointPort; // 0x14
	FUniqueNetId EndPointUID; // 0x18
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FMcpChallengeUserRequest {
	FString UniqueUserId; // 0x0
	TArray<FMcpChallengeRequest> ChallengeStatusRequests; // 0x10
	TArray<FMcpChallengeRequest> ChallengeAcceptRequests; // 0x20
	TArray<FMcpChallengeRequest> ChallengeUpdateProgressRequests; // 0x30
	TArray<FMcpChallengeRequest> ChallengeUpdateRewardRequests; // 0x40
};

struct FHistoricPosition {
	float fTimestamp; // 0x0
	FVector vPosition; // 0x4
};

struct FMatineeRawDistributionFloat : FRawDistributionFloat {
	float MatineeValue; // 0x24
	uint32_t bInMatinee : 1; // 0x28
};

struct FRecoilDef {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FVector RotSinOffset; // 0x20
	FRecoilParams RotParams; // 0x2c
	FRotator RotOffset; // 0x30
	FVector LocAmplitude; // 0x3c
	FVector LocFrequency; // 0x48
	FVector LocSinOffset; // 0x54
	FRecoilParams LocParams; // 0x60
	FVector LocOffset; // 0x64
};

struct FAggregateEventMapping {
	int32_t EventID; // 0x0
	int32_t AggregateID; // 0x4
	int32_t TargetAggregateID; // 0x8
};

struct FMcpUserCloudFilesEntry {
	FString UserId; // 0x0
	TArray<FTitleFileWeb> DownloadedFiles; // 0x10
	TArray<FMcpUserCloudFileInfo> EnumeratedFiles; // 0x20
	ObjectProperty HTTPRequestEnumerateFiles; // 0x30
};

struct FActiveMorph {
	ObjectProperty Target; // 0x0
	float Weight; // 0x8
};

struct FMMStats_Timer {
	uint32_t bInProgress : 1; // 0x0
	FDouble MSecs; // 0x4
};

struct FMeshData {
	MenuContentDataType ContentDataType; // 0x0
	ObjectProperty MainMeshInfo; // 0x4
	int32_t nBotId; // 0xc
	int32_t nSkinId; // 0x10
	int32_t nDeviceSkinId; // 0x14
};

struct FRBCollisionChannelContainer {
	uint32_t Default : 1; // 0x0
	uint32_t Nothing : 1; // 0x0
	uint32_t Pawn : 1; // 0x0
	uint32_t Vehicle : 1; // 0x0
	uint32_t Water : 1; // 0x0
	uint32_t GameplayPhysics : 1; // 0x0
	uint32_t EffectPhysics : 1; // 0x0
	uint32_t Untitled1 : 1; // 0x0
	uint32_t Untitled2 : 1; // 0x0
	uint32_t Untitled3 : 1; // 0x0
	uint32_t Untitled4 : 1; // 0x0
	uint32_t Cloth : 1; // 0x0
	uint32_t FluidDrain : 1; // 0x0
	uint32_t SoftBody : 1; // 0x0
	uint32_t FracturedMeshPart : 1; // 0x0
	uint32_t BlockingVolume : 1; // 0x0
	uint32_t DeadPawn : 1; // 0x0
	uint32_t Clothing : 1; // 0x0
	uint32_t ClothingCollision : 1; // 0x0
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FParameterValueOverTime {
	FGuid ExpressionGUID; // 0x0
	float StartTime; // 0x10
	FName ParameterName; // 0x14
	uint32_t bLoop : 1; // 0x1c
	uint32_t bAutoActivate : 1; // 0x1c
	float CycleTime; // 0x20
	uint32_t bNormalizeTime : 1; // 0x24
	float OffsetTime; // 0x28
	uint32_t bOffsetFromEnd : 1; // 0x2c
};

struct FExitInfo {
	ObjectProperty Exit; // 0x0
	float Rating; // 0x8
	uint32_t bEnemyHasLOS : 1; // 0xc
	uint32_t bIsOpenSpot : 1; // 0xc
};

struct FSHVector {
	float V[0x9]; // 0x0
	float Padding[0x3]; // 0x24
};

struct FPresenceDoTInstanceInfo {
	float fTimestamp; // 0x0
	float fDamageValue; // 0x4
};

struct FIniLocFileEntry {
	FString Filename; // 0x0
	FString DLName; // 0x10
	FString HashCode; // 0x20
	uint32_t bIsUnicode : 1; // 0x30
	EOnlineEnumerationReadState ReadState; // 0x34
};

struct FLocalAuthSession : FBaseAuthSession {
	int32_t SessionUID; // 0x20
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x4
	TArray<FName> PackagesToLoad; // 0x14
	TArray<ObjectProperty> LoadedObjects; // 0x24
};

struct FInstancedMeshStreamGroup {
	uint32_t bDataInSeperateFile : 1; // 0x0
	uint32_t bAddedToStreamingSystem : 1; // 0x0
	int32_t FilenameIndex; // 0x4
	int32_t FileOffset; // 0x8
	int32_t FileSize; // 0xc
	int32_t UncompressedSize; // 0x10
	FBoxSphereBounds Bounds; // 0x14
	TArray<ComponentProperty> Components; // 0x30
	TArray<FVector4> BufferData; // 0x40
	EInstancedMeshStreamState State; // 0x50
	int32_t ExpirationFrameCount; // 0x54
	float DistanceSq; // 0x58
	float StreamInDistanceSq; // 0x5c
	float StreamOutDistanceSq; // 0x60
	int32_t MeshOffset; // 0x64
	int32_t MeshSize; // 0x68
};

struct FBiasedGoalActor {
	ObjectProperty Goal; // 0x0
	int32_t ExtraCost; // 0x8
};

struct FGameplayEventMetaData {
	int32_t EventID; // 0x0
	FName EventName; // 0x4
	FGameStatGroup StatGroup; // 0xc
	int32_t EventDataType; // 0x14
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0xc
	FExpressionInput HeightInput; // 0x40
	float PreviewWeight; // 0x74
	FPointer InstanceOverride; // 0x78
};

struct FParticleSystemReplayFrame {
	TArray<FParticleEmitterReplayFrame> Emitters; // 0x0
};

struct FInstancedMeshStreamCookerHelper {
	int32_t Dummy; // 0x0
};

struct FTextureParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty ParameterValue; // 0x30
};

struct FWorldAttractorData {
	uint32_t bEnabled : 1; // 0x0
	FVector Location; // 0x4
	EWorldAttractorFalloffType FalloffType; // 0x10
	float FalloffExponent; // 0x14
	float Range; // 0x18
	float Strength; // 0x1c
};

struct FOnlinePartyMember {
	FUniqueNetId UniqueId; // 0x0
	FString NickName; // 0x8
	char LocalUserNum; // 0x18
	ENATType NatType; // 0x19
	int32_t TitleId; // 0x1c
	uint32_t bIsLocal : 1; // 0x20
	uint32_t bIsInPartyVoice : 1; // 0x20
	uint32_t bIsTalking : 1; // 0x20
	uint32_t bIsInGameSession : 1; // 0x20
	uint32_t bIsPlayingThisGame : 1; // 0x20
	FQWord SessionId; // 0x24
	int32_t Data1; // 0x2c
	int32_t Data2; // 0x30
	int32_t Data3; // 0x34
	int32_t Data4; // 0x38
};

struct FArcingFXInfo {
	ObjectProperty Source; // 0x0
	ObjectProperty Target; // 0x8
	ObjectProperty ArcingFX; // 0x10
	float fRemainingActiveTime; // 0x18
};

struct FPBMaterialParam {
	FName ParamName; // 0x0
	FLinearColor Color; // 0x8
};

struct FLightmassDebugOptions {
	uint32_t bDebugMode : 1; // 0x0
	uint32_t bStatsEnabled : 1; // 0x0
	uint32_t bGatherBSPSurfacesAcrossComponents : 1; // 0x0
	float CoplanarTolerance; // 0x4
	uint32_t bUseDeterministicLighting : 1; // 0x8
	uint32_t bUseImmediateImport : 1; // 0x8
	uint32_t bImmediateProcessMappings : 1; // 0x8
	uint32_t bSortMappings : 1; // 0x8
	uint32_t bDumpBinaryFiles : 1; // 0x8
	uint32_t bDebugMaterials : 1; // 0x8
	uint32_t bPadMappings : 1; // 0x8
	uint32_t bDebugPaddings : 1; // 0x8
	uint32_t bOnlyCalcDebugTexelMappings : 1; // 0x8
	uint32_t bUseRandomColors : 1; // 0x8
	uint32_t bColorBordersGreen : 1; // 0x8
	uint32_t bColorByExecutionTime : 1; // 0x8
	float ExecutionTimeDivisor; // 0xc
	uint32_t bInitialized : 1; // 0x10
};

struct FPropertyDecayState {
	float PropertyLevel; // 0x0
	float PropertyMax; // 0x4
	float LastDecayTimestamp; // 0x8
};

struct FInterpolatingCameraInfo {
	uint32_t m_bInterpLocation : 1; // 0x0
	uint32_t m_bInterpRotation : 1; // 0x0
	uint32_t m_bInterpFOVAngle : 1; // 0x0
	FVector m_BaseLocation; // 0x4
	FVector m_TargetLocation; // 0x10
	FRotator m_BaseRotation; // 0x1c
	FRotator m_TargetRotation; // 0x28
	float m_fBaseFOVAngle; // 0x34
	float m_fTargetFOVAngle; // 0x38
	float m_fInterpSpeed; // 0x3c
};

struct FSkelMeshActorControlTarget {
	FName ControlName; // 0x0
	ObjectProperty TargetActor; // 0x8
};

struct FOnlinePlayerScore {
	FUniqueNetId PlayerID; // 0x0
	int32_t TeamID; // 0x8
	int32_t Score; // 0xc
};

struct FViewOffsetData {
	FVector OffsetHigh; // 0x0
	FVector OffsetMid; // 0xc
	FVector OffsetLow; // 0x18
};

struct FUIPING_DATA {
	float fTimer; // 0x0
	FVector vLocation; // 0x4
	ObjectProperty pObj; // 0x10
};

struct FLightingChannelContainer {
	uint32_t bInitialized : 1; // 0x0
	uint32_t BSP : 1; // 0x0
	uint32_t Static : 1; // 0x0
	uint32_t Dynamic : 1; // 0x0
	uint32_t CompositeDynamic : 1; // 0x0
	uint32_t Skybox : 1; // 0x0
	uint32_t Unnamed_2 : 1; // 0x0
	uint32_t Unnamed_3 : 1; // 0x0
	uint32_t Unnamed_4 : 1; // 0x0
	uint32_t Unnamed_5 : 1; // 0x0
	uint32_t Unnamed_6 : 1; // 0x0
	uint32_t Unnamed_7 : 1; // 0x0
	uint32_t Cinematic_2 : 1; // 0x0
	uint32_t Cinematic_3 : 1; // 0x0
	uint32_t Cinematic_4 : 1; // 0x0
	uint32_t Cinematic_5 : 1; // 0x0
	uint32_t Cinematic_6 : 1; // 0x0
	uint32_t Cinematic_7 : 1; // 0x0
	uint32_t Cinematic_8 : 1; // 0x0
	uint32_t Cinematic_9 : 1; // 0x0
	uint32_t Cinematic_10 : 1; // 0x0
	uint32_t Cinematic_11 : 1; // 0x0
	uint32_t Gameplay_2 : 1; // 0x0
	uint32_t Gameplay_3 : 1; // 0x0
	uint32_t Gameplay_4 : 1; // 0x0
	uint32_t Gameplay_5 : 1; // 0x0
	uint32_t Crowd : 1; // 0x0
};

struct FAutomatedTestingDatum {
	int32_t NumberOfMatchesPlayed; // 0x0
	int32_t NumMapListCyclesDone; // 0x4
};

struct FCollisionSettingsProjectile {
	uint32_t bPassThroughFriends : 1; // 0x0
	uint32_t bPassThroughEnemies : 1; // 0x0
	uint32_t bPassThroughShieldsEnemies : 1; // 0x0
	uint32_t bPassThroughShieldsFriends : 1; // 0x0
	uint32_t bPassThroughBlocker : 1; // 0x0
	uint32_t bExplodeOnShields : 1; // 0x0
	uint32_t bExplodeOnBlockers : 1; // 0x0
	uint32_t bHitAndPassThrough : 1; // 0x0
	uint32_t bHitOnTick : 1; // 0x0
	uint32_t bOnlyHitOnceOnPassThrough : 1; // 0x0
};

struct FDeviceIdCache {
	int32_t DeviceID; // 0x0
	DelegateProperty DeviceSelectionMulticast; // 0x4
	TArray<DelegateProperty> DeviceSelectionDelegates; // 0x14
};

struct FBranchInfo {
	FName BoneName; // 0x0
	float PerBoneWeightIncrease; // 0x8
};

struct FPendingClientAuth {
	ObjectProperty ClientConnection; // 0x0
	FUniqueNetId ClientUID; // 0x8
	float AuthTimestamp; // 0x10
	int32_t AuthRetryCount; // 0x14
};

struct FRenderElementInfo {
	uint32_t bIsDragItem : 1; // 0x0
	int32_t Index; // 0x4
};

struct FUIITEMDATA {
	ObjectProperty Obj; // 0x0
	ObjectProperty Icon; // 0x8
	ObjectProperty frame; // 0x10
	ObjectProperty Title; // 0x18
	ObjectProperty Price; // 0x20
	ObjectProperty Button; // 0x28
	ObjectProperty Selected; // 0x30
	ObjectProperty SubTitle; // 0x38
};

struct FStaticMeshComponentLODInfo {
	TArray<ObjectProperty> ShadowMaps; // 0x0
	TArray<ObjectProperty> ShadowVertexBuffers; // 0x10
	FPointer LightMap; // 0x20
	FPointer OverrideVertexColors; // 0x28
	TArray<FPaintedVertex> PaintedVertices; // 0x30
};

struct FWeightmapLayerAllocationInfo {
	FName LayerName; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FSeqEventLink {
	USequenceEvent* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedEvents; // 0x8
	FString LinkDesc; // 0x18
	int32_t DrawX; // 0x28
	uint32_t bHidden : 1; // 0x2c
	uint32_t bMoving : 1; // 0x2c
	uint32_t bClampedMax : 1; // 0x2c
	uint32_t bClampedMin : 1; // 0x2c
};

struct FLightValues {
	float StartTime; // 0x0
	float Radius; // 0x4
	float Brightness; // 0x8
	FColor LightColor; // 0xc
	FColor EnemyLightColor; // 0x10
	FColor LocalLightColor; // 0x14
};

struct FMiniMapEntity {
	FVector vLocation; // 0x0
	MiniMapEntityType eType; // 0xc
	int32_t nSubType; // 0x10
	int32_t nProfileId; // 0x14
	TgMapTeam Team; // 0x18
	int32_t nVisionRange; // 0x1c
	uint32_t bIsDead : 1; // 0x20
	ObjectProperty RepInfo; // 0x24
	int32_t GenericState; // 0x2c
	int32_t nIdx; // 0x30
	uint32_t bMarked : 1; // 0x34
	uint32_t bVisibleOnMap : 1; // 0x34
	uint32_t bValidTarget : 1; // 0x34
	uint32_t bHovered : 1; // 0x34
	uint32_t bFlashHighlight : 1; // 0x34
	uint32_t bVisible : 1; // 0x34
	float fAlpha; // 0x38
	float fHealthPCT; // 0x3c
	ObjectProperty MIC; // 0x40
	uint32_t bHasNoIcon : 1; // 0x48
	int32_t nDrawSize; // 0x4c
	int32_t nHitSize; // 0x50
	FVector vRect; // 0x54
	FFogMaskData FogMaskData; // 0x60
};

struct FAudioClassInfo {
	int32_t NumResident; // 0x0
	int32_t SizeResident; // 0x4
	int32_t NumRealTime; // 0x8
	int32_t SizeRealTime; // 0xc
};

struct FSimulatedProjectileOverrides {
	int32_t FireModeID; // 0x0
	float RemoteProximityDist; // 0x4
	float Range; // 0x8
	float Speed; // 0xc
	float GravityScale; // 0x10
	float FireAngle; // 0x14
};

struct FDiminishingReturnsStackInfo {
	EDiminshingReturnsStackType StackType; // 0x0
	TArray<int32_t> DevicesApplyingThisTick; // 0x4
	TArray<float> Timestamps; // 0x14
	int32_t nStackCount; // 0x24
	float fRelevancyTime; // 0x28
};

struct FSoundThemeBinding {
	FName ThemeName; // 0x0
	ObjectProperty Theme; // 0x8
	FString ThemeClassName; // 0x10
};

struct FLightmassMaterialInterfaceSettings {
	uint32_t bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float SpecularBoost; // 0xc
	float ExportResolutionScale; // 0x10
	float DistanceFieldPenumbraScale; // 0x14
	uint32_t bOverrideCastShadowAsMasked : 1; // 0x18
	uint32_t bOverrideEmissiveBoost : 1; // 0x18
	uint32_t bOverrideDiffuseBoost : 1; // 0x18
	uint32_t bOverrideSpecularBoost : 1; // 0x18
	uint32_t bOverrideExportResolutionScale : 1; // 0x18
	uint32_t bOverrideDistanceFieldPenumbraScale : 1; // 0x18
};

struct FMusicEvent {
	FName EventName; // 0x0
	FMusicTrackStruct EventTrack; // 0x8
	float EventDuration; // 0x34
};

struct FDebugDisplayProperty {
	ObjectProperty Obj; // 0x0
	FName PropertyName; // 0x8
	FString PropertyString[0x5]; // 0x10
	int32_t nNumPropertyStrings; // 0x60
	EDebugDisplayType eDisplayType; // 0x64
};

struct FGameSpecialMoveInfo {
	FName SpecialMoveName; // 0x0
	UGameSpecialMove* SpecialMoveClass; // 0x8
	ObjectProperty SpecialMoveInstance; // 0x10
};

struct FSkinStrengthOverride {
	int32_t nSkinId; // 0x0
	float fDesiredStrength; // 0x4
};

struct FCharacterSpecificData {
	FCharacterSpecificData_Maeve MaeveData; // 0x0
};

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	uint32_t bMature : 1; // 0x20
	uint32_t bManualWordWrap : 1; // 0x20
	uint32_t bSingleLine : 1; // 0x20
};

struct FGraphData {
	int32_t XP; // 0x0
	int32_t Gold; // 0x4
	int32_t Time; // 0x8
};

struct FCachedPathItem {
	int32_t CachedKey; // 0x0
	FVector Location; // 0x4
	EHavokEdgeType EdgeType; // 0x10
	uint32_t bTerminatedPath : 1; // 0x14
};

struct FPhysXEmitterVerticalLodProperties {
	float WeightForFifo; // 0x0
	float WeightForSpawnLod; // 0x4
	float SpawnLodRateVsLifeBias; // 0x8
	float RelativeFadeoutTime; // 0xc
};

struct FFx_PSC {
	int32_t c_nId; // 0x0
	ComponentProperty c_PSC; // 0x4
	ObjectProperty c_PSCTemplate; // 0xc
	float c_fScale; // 0x14
	int32_t c_nScaleType; // 0x18
	uint32_t c_bRunning : 1; // 0x1c
	FName c_nmSocketDisplayGrp; // 0x20
	FName c_nmSocket; // 0x28
	ObjectProperty c_pCameraEffect; // 0x30
};

struct FTeamState {
	int32_t TeamIndex; // 0x0
	TArray<int32_t> PlayerIndices; // 0x4
};

struct FInputEntry {
	EInputTypes Type; // 0x0
	float Value; // 0x4
	float TimeDelta; // 0x8
	EInputMatchAction Action; // 0xc
};

struct FMessageToken {
	int32_t msgId; // 0x0
	int32_t MsgIdRed; // 0x4
	int32_t MsgIdBlue; // 0x8
	FString Token; // 0xc
};

struct FAnimGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty SynchMaster; // 0x10
	ObjectProperty NotifyMaster; // 0x18
	FName GroupName; // 0x20
	float RateScale; // 0x28
	float SynchPctPosition; // 0x2c
	uint32_t bOnlyFireNotifiesOnBestGroupMember : 1; // 0x30
};

struct FSoundNodeEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FClothSpecialBoneInfo {
	FName BoneName; // 0x0
	ClothBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0xc
};

struct FSilhouettePulseSettings {
	uint32_t bUsesPulse : 1; // 0x0
	uint32_t bUsePulseAlpha : 1; // 0x0
	uint32_t bPulseMaintainsDistanceDimming : 1; // 0x0
	FVector2D vPulseAlpha; // 0x4
	uint32_t bPulseUseCustomColor : 1; // 0xc
	FColor PulseCustomColor; // 0x10
	uint32_t bUsePulseThicknessMultiplier : 1; // 0x14
	FVector2D vPulseThicknessMultiplier; // 0x18
	float fPulseElapsedTime; // 0x20
	float fPulseDuration; // 0x24
	float fPulseWaveTime; // 0x28
};

struct FOctreeElementId {
	FPointer Node; // 0x0
	int32_t ElementIndex; // 0x8
};

struct FStickyHitInfo {
	ObjectProperty HitActor; // 0x0
	int32_t NumHits; // 0x8
};

struct FParticleChannelContainer {
	uint32_t bInitialized : 1; // 0x0
	uint32_t Default : 1; // 0x0
	uint32_t Friendly : 1; // 0x0
	uint32_t Enemy : 1; // 0x0
	uint32_t LocalOwner : 1; // 0x0
	uint32_t Channel5 : 1; // 0x0
	uint32_t Channel6 : 1; // 0x0
	uint32_t Channel7 : 1; // 0x0
	uint32_t Channel8 : 1; // 0x0
	uint32_t VerticalTargeter : 1; // 0x0
	uint32_t Filter2 : 1; // 0x0
	uint32_t NotLocalOwner : 1; // 0x0
	uint32_t CustomFilter1 : 1; // 0x0
	uint32_t CustomFilter2 : 1; // 0x0
	uint32_t CustomFilter3 : 1; // 0x0
	uint32_t CustomFilter4 : 1; // 0x0
	uint32_t CustomFilter5 : 1; // 0x0
	uint32_t CustomFilter6 : 1; // 0x0
	uint32_t CustomFilter7 : 1; // 0x0
};

struct FInventoryChangeFlags {
	uint32_t bDevice : 1; // 0x0
	uint32_t bComponent : 1; // 0x0
	uint32_t bEquipped : 1; // 0x0
	uint32_t bDeviceFailed : 1; // 0x0
};

struct FLandscapeLayerInfo {
	FName LayerName; // 0x0
	float Hardness; // 0x8
	uint32_t bNoWeightBlend : 1; // 0xc
	ObjectProperty PhysMaterial; // 0x10
	uint32_t bSelected : 1; // 0x18
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FUIGroupObject {
	int32_t nLocX; // 0x0
	int32_t nLocY; // 0x4
	int32_t nWidth; // 0x8
	int32_t nHeight; // 0xc
	ObjectProperty pGroup; // 0x10
	ObjectProperty pObj; // 0x18
	ObjectProperty pCursorHoverObj; // 0x20
};

struct FPerBoneMaskInfo {
	TArray<FBranchInfo> BranchList; // 0x0
	float DesiredWeight; // 0x10
	float BlendTimeToGo; // 0x14
	TArray<FWeightRule> WeightRuleList; // 0x18
	uint32_t bWeightBasedOnNodeRules : 1; // 0x28
	uint32_t bDisableForNonLocalHumanPlayers : 1; // 0x28
	uint32_t bPendingBlend : 1; // 0x28
	TArray<float> PerBoneWeights; // 0x2c
	TArray<char> TransformReqBone; // 0x3c
	int32_t TransformReqBoneIndex; // 0x4c
};

struct FServerResponseLine {
	int32_t ServerID; // 0x0
	FString IP; // 0x4
	int32_t Port; // 0x14
	int32_t QueryPort; // 0x18
	FString ServerName; // 0x1c
	FString MapName; // 0x2c
	FString GameType; // 0x3c
	int32_t CurrentPlayers; // 0x4c
	int32_t MaxPlayers; // 0x50
	int32_t Ping; // 0x54
	TArray<FKeyValuePair> ServerInfo; // 0x58
	TArray<FPlayerResponseLine> PlayerInfo; // 0x68
};

struct FUIMenuInputMap {
	FName FieldName; // 0x0
	FName Set; // 0x8
	FString MappedText; // 0x10
};

struct FDeviceHitComboEntry {
	ObjectProperty pTarget; // 0x0
	float fTime; // 0x8
};

struct FAchievementProgressData {
	uint32_t hasBeenProcessed : 1; // 0x0
	uint32_t isCompleted : 1; // 0x0
	int32_t ActivityId; // 0x4
	int32_t goalId; // 0x8
	int32_t goalGroupType; // 0xc
	int32_t numGoalsInGroup; // 0x10
	int32_t descMsgId; // 0x14
	int32_t activityMsgId; // 0x18
	int32_t goalMsgId; // 0x1c
	int32_t activationValueId; // 0x20
	int32_t countToComplete; // 0x24
	int32_t currentCount; // 0x28
	int32_t countDelta; // 0x2c
	int32_t titleMsgId; // 0x30
	int32_t IconId; // 0x34
	int32_t pointValue; // 0x38
};

struct FQueuedDamageNumber {
	int32_t nTargetId; // 0x0
	int32_t nValue; // 0x4
	int32_t nSourceItemId; // 0x8
	Fdword dwDeviceTarget; // 0xc
	char eTargetType; // 0x10
	DAMAGE_INFO_TYPE eDamageType; // 0x11
};

struct FKCachedConvexDataElement {
	TArray<char> ConvexElementData; // 0x0
};

struct FCameraPitchInfo {
	float ZHeight; // 0x0
	float Pitch; // 0x4
};

struct FConnectedPeerInfo {
	FUniqueNetId PlayerID; // 0x0
	ENATType NatType; // 0x8
	uint32_t bLostConnectionToHost : 1; // 0xc
};

struct FCameraSprayPreviewOffset {
	ELobbyCameraTag eCameraTag; // 0x0
	FVector vOffset; // 0x4
};

struct FPComImageDownload {
	FString URL; // 0x0
	FString FilePath; // 0x10
	FPointer HttpDownloader; // 0x20
	EOnlineImageDownloadState State; // 0x28
	TArray<char> Data; // 0x2c
	uint32_t bPendingRemoval : 1; // 0x3c
};

struct FQWord {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FTextureCoordinates {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FEmoteAnimInfo {
	int32_t nDeviceId; // 0x0
	int32_t nAnimArrayIndex; // 0x4
};

struct FTitleFileCacheEntry : FTitleFile {
	FString LogicalName; // 0x24
	FString Hash; // 0x34
	ETitleFileFileOp FileOp; // 0x44
	FPointer Ar; // 0x48
};

struct FFooterOption {
	int32_t nOption; // 0x0
	ObjectProperty pObj; // 0x4
	ObjectProperty pKey; // 0xc
	ObjectProperty pKeyTF; // 0x14
	ObjectProperty pGlow; // 0x1c
	ObjectProperty pGlowTF; // 0x24
	ObjectProperty pTitle; // 0x2c
	ObjectProperty pTitleTF; // 0x34
	ObjectProperty pFrame; // 0x3c
};

struct FHatPointer {
	int32_t Dummy; // 0x0
};

struct FTerrainDecoLayer {
	FString Name; // 0x0
	TArray<FTerrainDecoration> Decorations; // 0x10
	int32_t AlphaMapIndex; // 0x20
};

struct FChallengeRegionConfig {
	FString Name; // 0x0
	int32_t RegionIndex; // 0x10
	int32_t SortOrder; // 0x14
	int32_t ColorIndex; // 0x18
};

struct FChargeHitInfo {
	ObjectProperty HitActor; // 0x0
	float TimeStamp; // 0x8
};

struct FIMPACT_FX {
	FName nmMaterialType; // 0x0
	ObjectProperty Sound; // 0x8
	ObjectProperty DecalMaterial; // 0x10
	float fDecalWidth; // 0x18
	float fDecalHeight; // 0x1c
	uint32_t bRandomRotation : 1; // 0x20
	ObjectProperty Particles; // 0x24
	ObjectProperty SpecialFx; // 0x2c
};

struct FUICompAnimSetAnim {
	float fAnimTimeInSequence; // 0x0
	UIANIMTYPE eAnimType; // 0x4
	float fValue; // 0x8
	char eQuad; // 0xc
	float fDuration; // 0x10
};

struct FTGT_REG_LINK {
	FPointer NextLink; // 0x0
	ObjectProperty RegObject; // 0x8
	ObjectProperty RegFunction; // 0x10
};

struct FRewindingPawn {
	ObjectProperty pPawn; // 0x0
	int32_t nRMBFireMode; // 0x8
	float fStartTime; // 0xc
	float fFailsafeTTL; // 0x10
	int32_t nCallbackHandle; // 0x14
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalForceVector; // 0x10
	FVector TotalFrictionForceVector; // 0x1c
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0x8
	float Scalar; // 0xc
	float Scalar_Low; // 0x10
	FVector Vector; // 0x14
	FVector Vector_Low; // 0x20
	FColor Color; // 0x2c
	ObjectProperty Actor; // 0x30
	ObjectProperty Material; // 0x38
	FName ValueName; // 0x40
};

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	FName AnimSeqName; // 0x4
	float AnimStartOffset; // 0xc
	float AnimEndOffset; // 0x10
	float AnimPlayRate; // 0x14
	uint32_t bLooping : 1; // 0x18
	uint32_t bReverse : 1; // 0x18
};

struct FAimAssistTargetWeightVars {
	float CurrentTargetBonus; // 0x0
	float NotCurrentTargetPenalty; // 0x4
	float MinAccuracyBonus; // 0x8
	float MaxAccuracyBonus; // 0xc
	float MinInaccuracyPenalty; // 0x10
	float MaxInaccuracyPenalty; // 0x14
	float MaxWeight; // 0x18
};

struct FOverrideSkill {
	int32_t LeaderboardId; // 0x0
	TArray<FUniqueNetId> Players; // 0x4
	TArray<FDouble> Mus; // 0x14
	TArray<FDouble> Sigmas; // 0x24
};

struct FFearTarget {
	ObjectProperty HitActor; // 0x0
	float TimeFeared; // 0x8
	uint32_t MarkedForFear : 1; // 0xc
};

struct FOnlineRegistrant {
	FUniqueNetId PlayerNetId; // 0x0
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float LightSourceRadius; // 0xc
};

struct Fm_PhaseTransitionAnimSet {
	int32_t m_TransitionToPhase; // 0x0
	FName m_TransitionAnimName; // 0x4
};

struct FMcpInventoryItem {
	FString InstanceItemId; // 0x0
	FString GlobalItemId; // 0x10
	int32_t Quantity; // 0x20
	int32_t QuantityIAP; // 0x24
	float Scalar; // 0x28
	FString LastUpdateTime; // 0x2c
	TArray<FMcpInventoryItemAttribute> Attributes; // 0x3c
};

struct FDeviceParameters {
	FString SlotName; // 0x0
	uint32_t bShouldInterruptIfStopped : 1; // 0x10
	uint32_t bShouldInterruptIfInterrupted : 1; // 0x10
	uint32_t bShouldInterruptIfJumping : 1; // 0x10
};

struct FThreatStruct {
	ObjectProperty Threatener; // 0x0
	float fThreat; // 0x8
};

struct FEventsBase {
	FGameEvents TotalEvents; // 0x0
	TArray<FGameEvents> EventsByClass; // 0x48
};

struct FSocialPostImageFlags {
	uint32_t bIsUserGeneratedImage : 1; // 0x0
	uint32_t bIsGameGeneratedImage : 1; // 0x0
	uint32_t bIsAchievementImage : 1; // 0x0
	uint32_t bIsMediaImage : 1; // 0x0
};

struct FTrailSamplePoint {
	float RelativeTime; // 0x0
	FTrailSocketSamplePoint FirstEdgeSample; // 0x4
	FTrailSocketSamplePoint ControlPointSample; // 0x1c
	FTrailSocketSamplePoint SecondEdgeSample; // 0x34
};

struct FHudDebuffEffect {
	int32_t nGroup; // 0x0
	float fPercent; // 0x4
	int32_t nIcon; // 0x8
	FString sName; // 0xc
};

struct FOverlayInfo {
	ComponentProperty OverlayMesh; // 0x0
	ComponentProperty ParentMesh; // 0x8
	uint32_t bIs1POverlay : 1; // 0x10
	uint32_t bIsVisible : 1; // 0x10
	FOverlayMICList OverlayMICInstances[0x6]; // 0x14
};

struct FTextureUVs {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FPhysXSceneProperties {
	FPhysXSimulationProperties PrimaryScene; // 0x0
	FPhysXSimulationProperties CompartmentRigidBody; // 0xc
	FPhysXSimulationProperties CompartmentFluid; // 0x18
	FPhysXSimulationProperties CompartmentCloth; // 0x24
	FPhysXSimulationProperties CompartmentSoftBody; // 0x30
};

struct FPPE_Skin {
	int32_t nSkinId; // 0x0
	ObjectProperty PSTemplate; // 0x4
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FMapDetails {
	uint32_t bProcessed : 1; // 0x0
	int32_t nMapId; // 0x4
	FString sMapName; // 0x8
	FString sGameMode; // 0x18
	int32_t nMapIconFrame; // 0x28
	FString sLoadingTexture; // 0x2c
	FString sLoadingTip; // 0x3c
	FString sLoadingTipMessage; // 0x4c
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FInterpEdSelKey {
	ObjectProperty Group; // 0x0
	ObjectProperty Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FSpiritLink {
	ObjectProperty LinkedPawn; // 0x0
	float fAddedTimestamp; // 0x8
	ObjectProperty LinkBeam1P; // 0xc
	ObjectProperty LinkBeam3P; // 0x14
	float fSecondsUntilBreak; // 0x1c
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	int32_t LowFreq; // 0x8
	int32_t ParticleFrequency; // 0xc
	uint32_t FirstTimeOnly : 1; // 0x10
	uint32_t LastTimeOnly : 1; // 0x10
	uint32_t UseReflectedImpactVector : 1; // 0x10
	FName CustomName; // 0x14
	TArray<ObjectProperty> ParticleModuleEventsToSendToGame; // 0x1c
};

struct FSwitchObjectCase {
	ObjectProperty ObjectValue; // 0x0
	uint32_t bFallThru : 1; // 0x8
	uint32_t bDefaultValue : 1; // 0x8
};

struct FSettingOption {
	ObjectProperty Obj; // 0x0
	ObjectProperty Base; // 0x8
	ObjectProperty Type; // 0x10
	ObjectProperty TypeTF; // 0x18
	ObjectProperty Left; // 0x20
	ObjectProperty Right; // 0x28
	ObjectProperty Focus; // 0x30
	ObjectProperty Color; // 0x38
	ObjectProperty Slider; // 0x40
	ObjectProperty SliderTF; // 0x48
	ObjectProperty SliderTitle; // 0x50
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
	FRawDistributionFloat FadeInDistance; // 0x14
	FRawDistributionFloat FadeOutDistance; // 0x38
};

struct FTouchTracker {
	int32_t Handle; // 0x0
	int32_t TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	EInputEvent EventType; // 0x10
	uint32_t bTrapInput : 1; // 0x14
};

struct FMolotovCenterInfo {
	int32_t ChildrenFront[0x3]; // 0x0
	int32_t ChildrenFrontLeft[0x3]; // 0xc
	int32_t ChildrenFrontRight[0x3]; // 0x18
	int32_t ChildrenBack[0x3]; // 0x24
	int32_t ChildrenBackLeft[0x3]; // 0x30
	int32_t ChildrenBackRight[0x3]; // 0x3c
};

struct FAgentArchetypeInfo {
	ObjectProperty AgentArchetype; // 0x0
	float FrequencyModifier; // 0x8
	int32_t MaxAllowed; // 0xc
	int32_t CurrSpawned; // 0x10
	TArray<ObjectProperty> GroupMembers; // 0x14
};

struct FPlayerDataStoreGroup {
	ObjectProperty PlayerOwner; // 0x0
	TArray<ObjectProperty> DataStores; // 0x8
};

struct FMobileInputZoneClassMap {
	FString Name; // 0x0
	UMobileInputZone* ClassType; // 0x10
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FPermissionsResultByUniqueNetId {
	FUniqueNetId User; // 0x0
	uint32_t bHasPermission : 1; // 0x8
};

struct FKSphereElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	uint32_t bNoRBCollision : 1; // 0x44
	uint32_t bPerPolyShape : 1; // 0x44
};

struct FIncomingDamageEntry {
	ObjectProperty attacker; // 0x0
	TG_EQUIP_POINT DeviceSlot; // 0x8
	FVector SourceInitialLocation; // 0xc
	FRotator SourceInitialAim; // 0x18
	float ExpireTime; // 0x24
	float RemovalTime; // 0x28
	float Weight; // 0x2c
};

struct FInteriorSettings {
	uint32_t bIsWorldInfo : 1; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
	float InsulationDistanceMin; // 0x24
	float InsulationDistanceMax; // 0x28
	float InsulationTime; // 0x2c
};

struct FVoxConversation {
	FString sTypeSpokenFirst; // 0x0
	FString sTypeSpokenSecond; // 0x10
	int32_t nTypeSpokenFirst; // 0x20
	int32_t nTypeSpokenSecond; // 0x24
};

struct FSettingsPropertyPropertyMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0xc
	EPropertyValueMappingType MappingType; // 0x1c
	TArray<FIdToStringMapping> ValueMappings; // 0x20
	TArray<FSettingsData> PredefinedValues; // 0x30
	float MinVal; // 0x40
	float MaxVal; // 0x44
	float RangeIncrement; // 0x48
};

struct FApexModuleDestructibleSettings {
	int32_t MaxChunkIslandCount; // 0x0
	int32_t MaxShapeCount; // 0x4
	int32_t MaxRrbActorCount; // 0x8
	float MaxChunkSeparationLOD; // 0xc
	uint32_t bOverrideMaxChunkSeparationLOD : 1; // 0x10
};

struct FPermissionsResult {
	FSessionMemberInfo User; // 0x0
	uint32_t bHasPermission : 1; // 0x30
};

struct FTrackedCollision {
	uint32_t IsColliding : 1; // 0x0
	ObjectProperty Target; // 0x4
	ComponentProperty TargetComp; // 0xc
	int32_t NumTouches; // 0x14
};

struct FWeightRule {
	FWeightNodeRule FirstNode; // 0x0
	FWeightNodeRule SecondNode; // 0x20
};

struct FShakeParams {
	EShakeParam X; // 0x0
	EShakeParam Y; // 0x1
	EShakeParam Z; // 0x2
	char Padding; // 0x3
};

struct FOnlineProfile {
	FString UserId; // 0x0
	EOnlineAccountTier AccountTier; // 0x10
	int32_t Gamerscore; // 0x14
	FString ApplicationDisplayName; // 0x18
	FString GameDisplayName; // 0x28
	FString ApplicationDisplayPictureResizeURL; // 0x38
	FString GameDisplayPictureResizeURL; // 0x48
};

struct FMarketplaceInventoryItem {
	FString ProductID; // 0x0
	EMediaItemType MediaItemType; // 0x10
	EInventoryItemState ItemState; // 0x11
	int32_t ConsumableBalance; // 0x14
	int32_t TitleId; // 0x18
	TArray<FString> ContainerIds; // 0x1c
	FQWord StartDate; // 0x2c
	FQWord EndDate; // 0x34
	FQWord RightsObtainedDate; // 0x3c
	FString URL; // 0x44
	FString ConsumableUrl; // 0x54
};

struct FParticleAttractorCollisionAction {
	ParticleAttractorActionType Type; // 0x0
	FString EventName; // 0x4
};

struct FDataField {
	FString FieldName; // 0x0
	FASValue Value; // 0x10
	FASValue Last; // 0x30
	uint32_t bDirty : 1; // 0x50
};

struct FBuildingMeshInfo {
	ObjectProperty Mesh; // 0x0
	float DimX; // 0x8
	float DimZ; // 0xc
	float Chance; // 0x10
	ComponentProperty Translation; // 0x14
	ComponentProperty Rotation; // 0x1c
	uint32_t bMeshScaleTranslation : 1; // 0x24
	uint32_t bOverrideMeshLightMapRes : 1; // 0x24
	int32_t OverriddenMeshLightMapRes; // 0x28
	TArray<ObjectProperty> MaterialOverrides; // 0x2c
	TArray<FBuildingMatOverrides> SectionOverrides; // 0x3c
};

struct FTitleFileMcp : FTitleFile {
	FPointer HttpDownloader; // 0x24
};

struct FParticleEmitterReplayFrame {
	int32_t EmitterType; // 0x0
	int32_t OriginalEmitterIndex; // 0x4
	FPointer FrameState; // 0x8
};

struct FAkMeterCallbackState {
	Fdword dwBusID; // 0x0
	uint32_t bActive : 1; // 0x4
	float fLevel; // 0x8
	float fTimestamp; // 0xc
};

struct FMcpMessageContents {
	FString MessageId; // 0x0
	TArray<char> MessageContents; // 0x10
};

struct FApexClothingAssetInfo {
	TArray<FApexClothingLodInfo> ClothingLodInfo; // 0x0
	FName ClothingAssetName; // 0x10
};

struct FSet_Mirror {
	FSparseArray_Mirror Elements; // 0x0
	int32_t InlineHash; // 0x38
	FPointer Hash; // 0x3c
	int32_t HashSize; // 0x44
};

struct FRBCornerAngleInfo {
	float Angle; // 0x0
	float CornerSize; // 0x4
};

struct FTerrainDecorationInstance {
	ComponentProperty Component; // 0x0
	float X; // 0x8
	float Y; // 0xc
	float Scale; // 0x10
	int32_t Yaw; // 0x14
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FNearbyDynamicItem {
	ObjectProperty Dynamic; // 0x0
};

struct FDigitizedImaniConfig {
	float fShiftX; // 0x0
	float fShiftY; // 0x4
};

struct FChatMessage {
	FString sMessage; // 0x0
	uint32_t bIsPaidBattlePass : 1; // 0x10
	uint32_t bIsVerifiedPlayer : 1; // 0x10
	Fdword dwBattlePassXp; // 0x14
	Fdword dwSenderId; // 0x18
	Fdword dwSenderPortalId; // 0x1c
};

struct FUIAxisEmulationData : FUIKeyRepeatData {
	uint32_t bEnabled : 1; // 0x10
};

struct FMcpInventoryItemAttribute {
	FString AttributeId; // 0x0
	int32_t Value; // 0x10
};

struct FPComPerformanceCaptureStatsPerNode {
	ObjectProperty Node; // 0x0
	TArray<FPComPerformanceCaptureStat> Stats; // 0x8
};

struct FSocialPostImageInfo {
	FSocialPostImageFlags Flags; // 0x0
	FString MessageText; // 0x4
	FString TitleText; // 0x14
	FString PictureCaption; // 0x24
	FString PictureDescription; // 0x34
};

struct FInlinePointerArray_Mirror {
	FPointer InlineData; // 0x0
	FArray_Mirror SecondaryData; // 0x8
};

struct FPlayerInformation {
	FName ControllerName; // 0x0
	FString PlayerName; // 0x8
	FUniqueNetId UniqueId; // 0x18
	uint32_t bIsBot : 1; // 0x20
	int32_t BotId; // 0x24
	FString BotName; // 0x28
	int32_t Taskforce; // 0x38
};

struct FLinearColorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveLinearColor ParameterValueCurve; // 0x40
};

struct FMoonShardPawnRecord {
	ObjectProperty pCharacter; // 0x0
	MOONSHARD_WITHIN_RANGE eWithin; // 0x8
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FUIConsumablePack {
	ObjectProperty Obj; // 0x0
	ObjectProperty Title; // 0x8
	ObjectProperty Icon; // 0x10
	ObjectProperty Price; // 0x18
	ObjectProperty PurchaseButton; // 0x20
	ObjectProperty Highlight; // 0x28
	ObjectProperty SaleBanner; // 0x30
};

struct FLobbyTransitionData {
	FLobbyTransitionPlayer FriendlyTeam[0xa]; // 0x0
	FLobbyTransitionPlayer EnemyTeam[0xa]; // 0x168
};

struct FDisplayGroupInfo {
	FName DisplayGroupName; // 0x0
	DisplayGroupOnType WhenDisplayGroupOn; // 0x8
	float Strength; // 0xc
	uint32_t bOn : 1; // 0x10
	uint32_t ForceOffIfMeshHidden : 1; // 0x10
};

struct FUIAnimData {
	float fStartTime; // 0x0
	float fEndTime; // 0x4
	char eType; // 0x8
	char eQuad; // 0x9
	float fOrig; // 0xc
	float fTarget; // 0x10
	uint32_t bAnimating : 1; // 0x14
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
};

struct FMcpClashMobChallengeFile {
	uint32_t should_keep_post_challenge : 1; // 0x0
	FString title_id; // 0x4
	FString file_name; // 0x14
	FString dl_name; // 0x24
	FString hash_code; // 0x34
	FString Type; // 0x44
	McpChallengeFileStatus Status; // 0x54
};

struct FChatterEvent {
	int32_t nChatterTypeId; // 0x0
	int32_t nAkEventSuffixId; // 0x4
};

struct FFogMaskData {
	int32_t nSize; // 0x0
	int32_t nMapDrawLocationX; // 0x4
	int32_t nMapDrawLocationY; // 0x8
	uint32_t bLocationChanged : 1; // 0xc
	uint32_t bVisionRangeChanged : 1; // 0xc
	FBitArray_Mirror m_MaskPoints; // 0x10
};

struct FPathStore {
	TArray<FEdgePointer> EdgeList; // 0x0
};

struct FUIDataStoreInputAlias {
	FName AliasName; // 0x0
	FUIInputKeyData PlatformInputKeys[0x3]; // 0x8
};

struct FWeaponMeshSwapStrategy {
	uint32_t bPlayPutAway : 1; // 0x0
	EWeaponMeshSwapRetrieveStrategy RetrieveStrategy; // 0x4
	uint32_t bClearEquipPoint : 1; // 0x8
};

struct FEffectSpotInfo {
	uint32_t bIsActive : 1; // 0x0
	FVector vLocation; // 0x4
	FRotator rRotation; // 0x10
	float fRadius; // 0x1c
	float fHeight; // 0x20
	int32_t nFXIndex; // 0x24
	int32_t nIntensityLevel; // 0x28
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	ObjectProperty Function; // 0x10
};

struct FTgAbilityInfo {
	int32_t DeviceIds[0x11]; // 0x0
};

struct FQueryMappingRequest {
	FString ExternalType; // 0x0
	ObjectProperty Request; // 0x10
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FColorDefinition {
	FString Id; // 0x0
	char R; // 0x10
	char G; // 0x11
	char B; // 0x12
};

struct FClientBandwidthTestData {
	EMeshBeaconBandwidthTestType TestType; // 0x0
	EMeshBeaconBandwidthTestState CurrentState; // 0x1
	int32_t NumBytesToSendTotal; // 0x4
	int32_t NumBytesSentTotal; // 0x8
	int32_t NumBytesSentLast; // 0xc
	float ElapsedTestTime; // 0x10
};

struct FRigidBodyImpactInfo {
	float LastImpactTime; // 0x0
	ObjectProperty PhysMat; // 0x4
};

struct FIndirectArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FQueuedRewind {
	ObjectProperty pTarget; // 0x0
	float fDelay; // 0x8
	float fDuration; // 0xc
	float fRate; // 0x10
};

struct FAccoladeData {
	int32_t nMsgId; // 0x0
	int32_t nPlace; // 0x4
	int32_t nValue; // 0x8
};

struct FSelectedMenuItem {
	int32_t Index; // 0x0
	float Offset; // 0x4
	uint32_t bEndOfList : 1; // 0x8
};

struct FDeferredNode {
	float WorldTime; // 0x0
	FPointer CurrentNode; // 0x4
	FPointer CachedStatus; // 0xc
	FPointer StorageMemory; // 0x14
	FPointer WorkingMemory; // 0x1c
};

struct FQueuedSubtitle {
	uint32_t CurrentlyPlaying : 1; // 0x0
	int32_t SubtitleMessageId; // 0x4
	FString SubtitleText; // 0x8
	ObjectProperty SubtitleSound; // 0x18
	int32_t AkId; // 0x20
};

struct FAffectedPawn {
	ObjectProperty pPawn; // 0x0
	FVector vRelativeOffsetAtGrab; // 0x8
	float fInvPullInTimeTotal; // 0x14
	float fPullInTimeLeft; // 0x18
};

struct FEffectQueueEntry {
	int32_t nEffectGroupID; // 0x0
	int32_t nExtraInfo; // 0x4
	FVector vHitLocation; // 0x8
	FRotator rHitNormal; // 0x14
};

struct FActivityGoalIds {
	Fdword dwActivityId; // 0x0
	Fdword dwGoalId; // 0x4
};

struct FDLDeadTeleportTargets {
	FVector TargetPosition; // 0x0
	FRotator TargetRotation; // 0xc
	float ValidTimeRemaining; // 0x18
};

struct FGameStream {
	uint32_t bLive : 1; // 0x0
	uint32_t bFeatured : 1; // 0x0
	uint32_t bSpecial : 1; // 0x0
	STREAMTYPE Type; // 0x4
	FString Title; // 0x8
	FString StreamURL; // 0x18
	FString ChannelName; // 0x28
	FString Description; // 0x38
	FString Viewers; // 0x48
};

struct FGameSessionInformation {
	int32_t AppTitleID; // 0x0
	int32_t PlatformType; // 0x4
	FString Language; // 0x8
	FString GameplaySessionTimestamp; // 0x18
	float GameplaySessionStartTime; // 0x28
	float GameplaySessionEndTime; // 0x2c
	uint32_t bGameplaySessionInProgress : 1; // 0x30
	FString GameplaySessionID; // 0x34
	FString GameClassName; // 0x44
	FString MapName; // 0x54
	FString MapURL; // 0x64
	int32_t SessionInstance; // 0x74
	int32_t GameTypeId; // 0x78
	FUniqueNetId OwningNetId; // 0x7c
	int32_t PlaylistId; // 0x84
};

struct FMessageRedirect {
	int32_t nMsgId; // 0x0
	FString sKey; // 0x4
};

struct FSeqOpInputLink {
	FString LinkDesc; // 0x0
	uint32_t bHasImpulse : 1; // 0x10
	int32_t QueuedActivations; // 0x14
	uint32_t bDisabled : 1; // 0x18
	uint32_t bDisabledPIE : 1; // 0x18
	ObjectProperty LinkedOp; // 0x1c
	int32_t DrawY; // 0x24
	uint32_t bHidden : 1; // 0x28
	float ActivateDelay; // 0x2c
	uint32_t bMoving : 1; // 0x30
	uint32_t bClampedMax : 1; // 0x30
	uint32_t bClampedMin : 1; // 0x30
};

struct FKCachedConvexData_Mirror {
	TArray<int32_t> CachedConvexElements; // 0x0
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FTrackedProjectileUpdateData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float UpdateServerTime; // 0x18
};

struct FOnlineGameSearchResult {
	ObjectProperty GameSettings; // 0x0
	FPointer PlatformData; // 0x8
};

struct FRigidBodyState {
	FVector Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector LinVel; // 0x20
	FVector AngVel; // 0x2c
	char bNewData; // 0x38
};

struct FBoneAtom {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	float Scale; // 0x1c
};

struct FStunStackEntry {
	ObjectProperty Effect; // 0x0
	EStunType StunType; // 0x8
};

struct FSilhouetteColorSettings {
	uint32_t bUsesMultipleColors : 1; // 0x0
	uint32_t bUsesEnemyRangeColorVariance : 1; // 0x0
	FColor BlueColor; // 0x4
	FColor EnemyColor; // 0x8
	FColor PurpleColor; // 0xc
	FColor OrangeColor; // 0x10
	FColor EnemyTargetedEffectiveRangeColor; // 0x14
	FColor EnemyTargetedMaxRangeColor; // 0x18
	FColor RedColor; // 0x1c
	FColor AbyssalEchoColor; // 0x20
};

struct FSkelControlModifier {
	FName SkelControlName; // 0x0
	TArray<FTimeModifier> Modifiers; // 0x8
};

struct FDLRewindTargets {
	FVector RewindPosition; // 0x0
	FRotator RewindRotation; // 0xc
};

struct FRaumShard {
	char nNonce; // 0x0
	char nId; // 0x1
	uint32_t bIsActive : 1; // 0x4
	uint32_t bIsSucking : 1; // 0x4
	float fCurrentSpeed; // 0x8
	float fTTL; // 0xc
	ObjectProperty aShardActor; // 0x10
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetId PartyLeader; // 0x4
	TArray<FPlayerReservation> PartyMembers; // 0xc
};

struct FUIAcquiredItem {
	ObjectProperty Card; // 0x0
	ObjectProperty Avatar; // 0x8
	ObjectProperty mcEquipButton; // 0x10
	ObjectProperty mcEquippedText; // 0x18
	ObjectProperty mcEquipPrompt; // 0x20
	ObjectProperty mcStoreItemContainer; // 0x28
	ObjectProperty mcItemContainer; // 0x30
	ObjectProperty mcBoostContainer; // 0x38
	ObjectProperty mcBoostQuantity; // 0x40
	ObjectProperty mcChestContainer; // 0x48
	ObjectProperty mcChestQuantityText; // 0x50
	ObjectProperty mcChestChampionPortrait; // 0x58
	ObjectProperty mcChestChampionPortraitTexture; // 0x60
	ObjectProperty mcChestCardQuantity; // 0x68
	ObjectProperty mcChampionIcon; // 0x70
	ObjectProperty mcChampionImage; // 0x78
	ObjectProperty mcChampionTitle; // 0x80
	ObjectProperty mcItemIcon; // 0x88
	ObjectProperty mcCardIcon; // 0x90
	ObjectProperty mcLoadingFrame; // 0x98
	ObjectProperty mcDeathCard; // 0xa0
	ObjectProperty mcCurrency; // 0xa8
	ObjectProperty mcTexture; // 0xb0
	ObjectProperty mcRarityFrame; // 0xb8
	ObjectProperty mcRarityText; // 0xc0
	ObjectProperty mcItemTitle; // 0xc8
	ObjectProperty mcItemAudio; // 0xd0
	ObjectProperty mcItemChampion; // 0xd8
	ObjectProperty mcItemChampionIcon; // 0xe0
	ObjectProperty mcItemQuantityText; // 0xe8
	ObjectProperty mcOwnedText; // 0xf0
	ObjectProperty mcOwnedCheckmark; // 0xf8
	ObjectProperty mcQuestIcon; // 0x100
};

struct FCrackShotBonusDamageTarget {
	ObjectProperty pTarget; // 0x0
	float fBonusDamageEndTime; // 0x8
};

struct FPostProcessSettingsOverride {
	FPostProcessSettings Settings; // 0x0
	uint32_t bBlendingIn : 1; // 0x180
	uint32_t bBlendingOut : 1; // 0x180
	float CurrentBlendInTime; // 0x184
	float CurrentBlendOutTime; // 0x188
	float BlendInDuration; // 0x18c
	float BlendOutDuration; // 0x190
	float BlendStartTime; // 0x194
	FInterpCurveFloat TimeAlphaCurve; // 0x198
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FSMMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x4
};

struct FHudProjectile {
	int32_t nId; // 0x0
	uint32_t bIsActive : 1; // 0x4
	uint32_t bInRange : 1; // 0x4
	FVector vProjLoc; // 0x8
	float fScaleMult; // 0x14
	ObjectProperty pObj; // 0x18
	ObjectProperty pPointer; // 0x20
	ObjectProperty pIconTinted; // 0x28
	ObjectProperty pIcon; // 0x30
	ObjectProperty pArrow; // 0x38
};

struct FScreenShakeStruct {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FVector RotSinOffset; // 0x20
	FShakeParams RotParam; // 0x2c
	FVector LocAmplitude; // 0x30
	FVector LocFrequency; // 0x3c
	FVector LocSinOffset; // 0x48
	FShakeParams LocParam; // 0x54
	float FOVAmplitude; // 0x58
	float FOVFrequency; // 0x5c
	float FOVSinOffset; // 0x60
	EShakeParam FOVParam; // 0x64
	FName ShakeName; // 0x68
	uint32_t bOverrideTargetingDampening : 1; // 0x70
	float TargetingDampening; // 0x74
};

struct FSkelMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x4
};

struct FMcpCompressMessageRequest {
	TArray<char> SourceBuffer; // 0x0
	TArray<char> DestBuffer; // 0x10
	int32_t OutCompressedSize; // 0x20
	ObjectProperty Request; // 0x24
	FPointer CompressionWorker; // 0x2c
};

struct FTouchData {
	int32_t Handle; // 0x0
	char TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	float TotalMoveDistance; // 0x10
	FDouble InitialDeviceTime; // 0x14
	float TouchDuration; // 0x1c
	FDouble MoveEventDeviceTime; // 0x20
	float MoveDeltaTime; // 0x28
	uint32_t bInUse : 1; // 0x2c
	ObjectProperty Zone; // 0x30
	ETouchType State; // 0x38
	TArray<FTouchDataEvent> Events; // 0x3c
	float LastActiveTime; // 0x4c
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FFunctionExpressionInput {
	ObjectProperty ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FSkillLevelRawData {
	float NumDeaths; // 0x0
	float Damage; // 0x4
	float Kills; // 0x8
	float SoloKills; // 0xc
	float Assists; // 0x10
	float Healing; // 0x14
	float Credits; // 0x18
	float Killstreak; // 0x1c
	float ObjectiveTime; // 0x20
	float Shielding; // 0x24
};

struct FDjBladesVGSFace {
	int32_t nVgsId; // 0x0
	DjBladesFace eFace; // 0x4
};

struct FGLOBALEFFECT_ENTRY {
	ObjectProperty eg; // 0x0
	ObjectProperty pawnInstigator; // 0x8
};

struct FModeData {
	float c_fBuildupTime; // 0x0
	uint32_t c_bContinuousFire : 1; // 0x4
	uint32_t c_FxInstantFire : 1; // 0x4
	FName c_nmOffhandAnimationType; // 0x8
	uint32_t c_bScaleFireAnimsWithRefire : 1; // 0x10
	uint32_t c_bInterruptAnimOnRefire : 1; // 0x10
	float c_fEffectRadius; // 0x14
	float c_fMaxRange; // 0x18
	int32_t c_nDamageOverrideDeviceId; // 0x1c
	ObjectProperty c_WhileFiringCameraAnim; // 0x20
};

struct FBeaconInfo {
	ObjectProperty BeaconTarget; // 0x0
	ObjectProperty BeaconPawn; // 0x8
	FImpactInfo BeaconImpactInfo; // 0x10
};

struct FPropertyPair {
	int32_t PropertyId; // 0x0
	int32_t Value; // 0x4
};

struct FTGEQUIP_SLOTS_STRUCT {
	int32_t SlotIndices[0x31]; // 0x0
	int32_t MiscItems[0x31]; // 0xc4
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
	FString CurrencyType; // 0x40
};

struct FOverlayMICList {
	TArray<ObjectProperty> MICs; // 0x0
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FTrailSocketSamplePoint {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
};

struct FSocialPostPrivileges {
	uint32_t bCanPostImage : 1; // 0x0
	uint32_t bCanPostLink : 1; // 0x0
};

struct FForceFeedbackPlayingInfo {
	ObjectProperty WaveForm; // 0x0
	ObjectProperty Instigator; // 0x8
	int32_t CurrentSample; // 0x10
	float ElapsedTime; // 0x14
	float ScaleDuration; // 0x18
	float ScaleMagnitude; // 0x1c
};

struct FGameCrowdAttachmentInfo {
	ObjectProperty StaticMesh; // 0x0
	float Chance; // 0x8
	FVector Scale3D; // 0xc
};

struct FMultiCueSplineSoundSlot {
	ObjectProperty SoundCue; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	FDouble LastUpdateTime; // 0x18
	float SourceInteriorVolume; // 0x20
	float SourceInteriorLPF; // 0x24
	float CurrentInteriorVolume; // 0x28
	float CurrentInteriorLPF; // 0x2c
	uint32_t bPlaying : 1; // 0x30
};

struct FClientMeshBeaconConnection {
	FUniqueNetId PlayerNetId; // 0x0
	float ElapsedHeartbeatTime; // 0x8
	FPointer Socket; // 0xc
	uint32_t bConnectionAccepted : 1; // 0x14
	FClientConnectionBandwidthTestData BandwidthTest; // 0x18
	ENATType NatType; // 0x40
	uint32_t bCanHostVs : 1; // 0x44
	float GoodHostRatio; // 0x48
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x4c
	int32_t MinutesSinceLastTest; // 0x5c
};

struct FInventoryData {
	FQWord nInvId; // 0x0
	int32_t nItemId; // 0x8
	int32_t nPower; // 0xc
	int32_t nLevel; // 0x10
	int32_t nInstanceCount; // 0x14
	uint32_t bBoundFlag : 1; // 0x18
	float fAcquiredDatetime; // 0x1c
	int32_t nEquipSlotValueId; // 0x20
};

struct FSelectedTerrainVertex {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Weight; // 0x8
};

struct FAchievementMappingInfo {
	int32_t AchievementId; // 0x0
	FName AchievementName; // 0x4
	int32_t ViewId; // 0xc
	int32_t ProgressCount; // 0x10
	int32_t MaxProgress; // 0x14
	uint32_t bAutoUnlock : 1; // 0x18
};

struct FFloatMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<float> MICResetFloats; // 0x10
};

struct FGameClassShortName {
	FString ShortName; // 0x0
	FString GameClassName; // 0x10
};

struct FSessionMemberInfo {
	FUniqueNetId PlayerNetId; // 0x0
	ESessionMemberStatus MemberStatus; // 0x8
	FString SecureAddress; // 0xc
	FString NickName; // 0x1c
	uint32_t Muted : 1; // 0x2c
};

struct FCoverMeshes {
	ObjectProperty Base; // 0x0
	ObjectProperty LeanLeft; // 0x8
	ObjectProperty LeanRight; // 0x10
	ObjectProperty LeanLeftPref; // 0x18
	ObjectProperty LeanRightPref; // 0x20
	ObjectProperty Climb; // 0x28
	ObjectProperty Mantle; // 0x30
	ObjectProperty SlipLeft; // 0x38
	ObjectProperty SlipRight; // 0x40
	ObjectProperty SwatLeft; // 0x48
	ObjectProperty SwatRight; // 0x50
	ObjectProperty PopUp; // 0x58
	ObjectProperty PlayerOnly; // 0x60
};

struct FPullData {
	ObjectProperty Character; // 0x0
	FVector SourceLocation; // 0x8
	FVector TargetLocation; // 0x14
};

struct FSyntheticImpactEffectArgs {
	FVector vHitLocation; // 0x0
	int32_t nEquipSlot; // 0xc
	int32_t nSocketIndex; // 0x10
	uint32_t bSuccessfulHit : 1; // 0x14
};

struct FNxDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FFriendsQuery {
	FUniqueNetId UniqueId; // 0x0
	uint32_t bIsFriend : 1; // 0x8
};

struct FHeadSkinChildInfo {
	int32_t nHeadSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FBotDifficultyDebugData {
	uint32_t CurrentlyActive : 1; // 0x0
	uint32_t DisparityDetected : 1; // 0x0
	uint32_t ChangesLockedOut : 1; // 0x0
	int32_t TimeBeforeTrigger; // 0x4
	EBotDifficultyLevel TaskForce1BotDifficulty; // 0x8
	EBotDifficultyLevel TaskForce2BotDifficulty; // 0x9
	float TaskForce1Skill; // 0xc
	float TaskForce2Skill; // 0x10
	FSkillLevelPercentageData SkillPercentages[0x2]; // 0x14
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FClientConnectionBandwidthTestData {
	EMeshBeaconBandwidthTestState CurrentState; // 0x0
	EMeshBeaconBandwidthTestType TestType; // 0x1
	int32_t BytesTotalNeeded; // 0x4
	int32_t BytesReceived; // 0x8
	FDouble RequestTestStartTime; // 0xc
	FDouble TestStartTime; // 0x14
	FConnectionBandwidthStats BandwidthStats; // 0x1c
};

struct FEffectSpotTarget {
	ObjectProperty Target; // 0x0
	uint32_t bNeedsRefresh : 1; // 0x8
};

struct FMcpClashMobChallengeEvent {
	FString unique_challenge_id; // 0x0
	FString Description; // 0x10
	FString visible_date; // 0x20
	FString start_date; // 0x30
	FString end_date; // 0x40
	FString completed_date; // 0x50
	FString purge_date; // 0x60
	int32_t repeat_after_days; // 0x70
	int32_t repeat_count; // 0x74
	FString challenge_type; // 0x78
	int32_t num_attempts; // 0x88
	int32_t num_successful_attempts; // 0x8c
	int32_t goal_value; // 0x90
	int32_t goal_start_value; // 0x94
	int32_t goal_current_value; // 0x98
	uint32_t has_started : 1; // 0x9c
	uint32_t is_visible : 1; // 0x9c
	uint32_t has_completed : 1; // 0x9c
	uint32_t was_successful : 1; // 0x9c
	TArray<FMcpClashMobChallengeFile> file_list; // 0xa0
	FMcpClashMobPushNotification start_notification; // 0xb0
	FMcpClashMobPushNotification end_notification; // 0xf4
	int32_t facebook_likes; // 0x138
	FString facebook_comments; // 0x13c
	float facebook_like_scaler; // 0x14c
	float facebook_comment_scaler; // 0x150
	int32_t facebook_like_goal_progress; // 0x154
	int32_t facebook_comment_goal_progress; // 0x158
	FString facebook_id; // 0x15c
	FString facebook_post_message; // 0x16c
	uint32_t wants_facebook_posting : 1; // 0x17c
	int32_t twitter_retweets; // 0x180
	float twitter_retweets_scaler; // 0x184
	int32_t twitter_goal_progress; // 0x188
	FString twitter_id; // 0x18c
	FString twitter_message; // 0x19c
	uint32_t wants_twitter_posting : 1; // 0x1ac
};

struct FSurrenderData {
	float fLastSurrenderTime; // 0x0
	TArray<FSurrenderVote> SurrenderVotes; // 0x4
	int32_t nSurrenderTotal; // 0x14
	int32_t nSurrenderNeeded; // 0x18
	int32_t nSurrenderVoteCount; // 0x1c
	int32_t nNoSurrenderVoteCount; // 0x20
};

struct FUIGoalData {
	int32_t nDate; // 0x0
	int32_t nGoal; // 0x4
	int32_t nValue; // 0x8
	int32_t nProgress; // 0xc
	int32_t nDisplayId; // 0x10
	int32_t nLootId; // 0x14
	int32_t nGoalProgress; // 0x18
	uint32_t bCompleted : 1; // 0x1c
	FString sDate; // 0x20
	FString sDesc; // 0x30
	FString sTier; // 0x40
	FString sTitle; // 0x50
	FString sSource; // 0x60
};

struct FFireLinkItem {
	ECoverType SrcType; // 0x0
	ECoverAction SrcAction; // 0x1
	ECoverType DestType; // 0x2
	ECoverAction DestAction; // 0x3
};

struct FQueuedAvatarRequest {
	float CheckTime; // 0x0
	int32_t NumberOfAttempts; // 0x4
	FUniqueNetId PlayerNetId; // 0x8
	int32_t Size; // 0x10
	DelegateProperty ReadOnlineAvatarCompleteDelegate; // 0x14
};

struct FCommunityContentFile {
	int32_t ContentId; // 0x0
	FString RemoteContentPath; // 0x4
	EOnlineFileType ContentType; // 0x14
	int32_t FileSize; // 0x18
	FUniqueNetId Owner; // 0x1c
	int32_t DownloadCount; // 0x24
	float AverageRating; // 0x28
	int32_t RatingCount; // 0x2c
	int32_t LastRatingGiven; // 0x30
	FString LocalFilePath; // 0x34
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FUIITEM_CLIP {
	ObjectProperty pObj; // 0x0
	ObjectProperty pSelected; // 0x8
	ObjectProperty pButton; // 0x10
	ObjectProperty pSaleBanner; // 0x18
};

struct FAchievementMediaAsset {
	FString AssetName; // 0x0
	EAchievementMediaAssetType AssetType; // 0x10
	FString AssetURL; // 0x14
};

struct FTEAMTIMEMANAGER_ENTRY {
	ObjectProperty m_TimerManager; // 0x0
	int32_t m_nDeviceId; // 0x8
};

struct FLightMapRef {
	FPointer Reference; // 0x0
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FActorToLookAt {
	ObjectProperty Actor; // 0x0
	float Rating; // 0x8
	float EnteredTime; // 0xc
	float LastKnownDistance; // 0x10
	float StartTimeBeingLookedAt; // 0x14
	uint32_t CurrentlyBeingLookedAt : 1; // 0x18
};

struct FSparseArray_Mirror {
	TArray<int32_t> Elements; // 0x0
	FBitArray_Mirror AllocationFlags; // 0x10
	int32_t FirstFreeIndex; // 0x30
	int32_t NumFreeIndices; // 0x34
};

struct FCamFocusPointParams {
	ObjectProperty FocusActor; // 0x0
	FName FocusBoneName; // 0x8
	FVector FocusWorldLoc; // 0x10
	float CameraFOV; // 0x1c
	FVector2D InterpSpeedRange; // 0x20
	FVector2D InFocusFOV; // 0x28
	uint32_t bAlwaysFocus : 1; // 0x30
	uint32_t bAdjustCamera : 1; // 0x30
	uint32_t bIgnoreTrace : 1; // 0x30
	float FocusPitchOffsetDeg; // 0x34
};

struct FTgPropertyInstance {
	int32_t m_nPropIndex; // 0x0
	int32_t m_nPropertyId; // 0x4
	float m_fBase; // 0x8
	float m_fRaw; // 0xc
	float m_fMinimum; // 0x10
	float m_fMaximum; // 0x14
	float m_fScalingFactor; // 0x18
};

struct FPlayerNickMetaData {
	FName PlayerNickName; // 0x0
	FString PlayerNickColumnName; // 0x8
};

struct FPlaylistPopulation {
	int32_t PlaylistId; // 0x0
	int32_t WorldwideTotal; // 0x4
	int32_t RegionTotal; // 0x8
};

struct FBlendByPercentValues {
	float fPercent; // 0x0
};

struct FRawInputKeyEventData {
	FName InputKeyName; // 0x0
	char ModifierKeyFlags; // 0x8
};

struct FInputKeyAction {
	FName InputKeyName; // 0x0
	EInputEvent InputKeyState; // 0x8
	TArray<FSeqOpOutputInputLink> TriggeredOps; // 0xc
	TArray<ObjectProperty> ActionsToExecute; // 0x1c
};

struct FUIInputKeyData {
	FRawInputKeyEventData InputKeyData; // 0x0
	FString ButtonFontMarkupString; // 0xc
};

struct FMcpClashMobPushNotification {
	TArray<FString> device_tokens; // 0x0
	FString badge_type; // 0x10
	FString Sound; // 0x20
	FString Message; // 0x30
	FMcpClashMobPushNotificationParams Params; // 0x40
};

struct FAimAssistKeyframeData {
	FName KeyframeName; // 0x0
	float Distance; // 0x8
};

struct FSoftBodyTetraLink {
	int32_t Index; // 0x0
	FVector Bary; // 0x4
};

struct FTargetMark {
	ObjectProperty Target; // 0x0
	float fTimeLeft; // 0x8
	int32_t nNumMarks; // 0xc
	TArray<ObjectProperty> AppliedEffects; // 0x10
};

struct FHitPawn {
	int32_t nPawnId; // 0x0
	float fTimeHit; // 0x4
};

struct FPropertyInfo {
	FName PropertyName; // 0x0
	uint32_t bModifyProperty : 1; // 0x8
	FString PropertyValue; // 0xc
};

struct FSmoothScrollingAxis {
	uint32_t bEnable : 1; // 0x0
	float fDelay; // 0x4
	float fMargin; // 0x8
	int32_t nTarget; // 0xc
	int32_t nVelocity; // 0x10
	float fBufferPos; // 0x14
	float fSpan; // 0x18
	float fAnimTime; // 0x1c
};

struct FSynchronizedActorVisibilityHistory {
	FPointer State; // 0x0
	FPointer CriticalSection; // 0x8
};

struct FDeviceToCharacterID {
	int32_t CharacterID; // 0x0
	int32_t DeviceID; // 0x4
};

struct FMarkedTargetHook {
	ObjectProperty aActor; // 0x0
	float fTime; // 0x8
	uint32_t bFiredSince : 1; // 0xc
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FSceneInfo {
	int32_t nDepth; // 0x0
	FName nmName; // 0x4
	FString sPath; // 0xc
};

struct FMolotovPointInfo {
	FVector vLocation; // 0x0
	FRotator rRotation; // 0xc
	int32_t nEffectSpotIndex; // 0x18
	float fHeatLevel; // 0x1c
	TArray<int32_t> nTriNeighbors; // 0x20
};

struct FPendingTeleportInfo {
	ObjectProperty PendingActor; // 0x0
	float TouchTimestamp; // 0x8
	uint32_t HasPlayedPreTeleport : 1; // 0xc
};

struct FAchievementTitleAssociation {
	FString LocalizedTitleName; // 0x0
	int32_t TitleId; // 0x10
};

struct FAnimInfo {
	FName AnimSeqName; // 0x0
	ObjectProperty AnimSeq; // 0x8
	int32_t AnimLinkupIndex; // 0x10
};

struct FNotifyTrackKey {
	float Time; // 0x0
	ObjectProperty Notify; // 0x4
};

struct FChannelCloseTimeOverride {
	int32_t Channel; // 0x0
	int32_t AutoCloseTime; // 0x4
};

struct FPawnDamagerStruct {
	ObjectProperty DamagerPawn; // 0x0
	float fTimestamp; // 0x8
};

struct FTeamEvents {
	FGameEvents TotalEvents; // 0x0
	FWeaponEvents WeaponEvents; // 0x48
	FDamageEvents DamageAsPlayerEvents; // 0xa0
	FDamageEvents DamageAsTargetEvents; // 0xf8
	FProjectileEvents ProjectileEvents; // 0x150
	FPawnEvents PawnEvents; // 0x1a8
};

struct FMolotovGrowthInfo {
	int32_t nStrandAllotment; // 0x0
	int32_t nMaxSpots; // 0x4
	int32_t nMaxInitialStrands; // 0x8
	float fStrandGrowthFraction; // 0xc
	uint32_t bStrandsAreSaturated : 1; // 0x10
	int32_t nCenterGrowthVariance; // 0x14
	int32_t nSpreadsPerTick; // 0x18
};

struct FRiderShieldPerTargetHistory {
	ObjectProperty HitTarget; // 0x0
	float fLockOutTime; // 0x8
};

struct FAnimBlendChild {
	FName Name; // 0x0
	ObjectProperty Anim; // 0x8
	float Weight; // 0x10
	float BlendWeight; // 0x14
	uint32_t bMirrorSkeleton : 1; // 0x18
	uint32_t bIsAdditive : 1; // 0x18
};

struct FFunctionExpressionOutput {
	ObjectProperty ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FWaveformSample {
	char LeftAmplitude; // 0x0
	char RightAmplitude; // 0x1
	char LeftTriggerAmplitude; // 0x2
	char RightTriggerAmplitude; // 0x3
	EWaveformFunction LeftFunction; // 0x4
	EWaveformFunction RightFunction; // 0x5
	EWaveformFunction LeftTriggerFunction; // 0x6
	EWaveformFunction RightTriggerFunction; // 0x7
	float Duration; // 0x8
};

struct FCanvasUVTri {
	FVector2D V0_Pos; // 0x0
	FVector2D V0_UV; // 0x8
	FVector2D V1_Pos; // 0x10
	FVector2D V1_UV; // 0x18
	FVector2D V2_Pos; // 0x20
	FVector2D V2_UV; // 0x28
};

struct FDefaultAudioSwitch {
	FString sSwitchName; // 0x0
	FString sSwitchValue; // 0x10
};

struct FGFxWidgetBinding {
	FName WidgetName; // 0x0
	UGFxObject* WidgetClass; // 0x8
};

struct FTerrainPatchBounds {
	float MinHeight; // 0x0
	float MaxHeight; // 0x4
	float MaxDisplacement; // 0x8
};

struct FPoisonBoltInfo {
	ObjectProperty pawnTarget; // 0x0
	ObjectProperty DeployableTarget; // 0x8
	uint32_t bEffectActive : 1; // 0x10
};

struct FMcpClashMobPushNotificationParams {
	int32_t bah; // 0x0
};

struct FSkillLevelPercentageData {
	float NumDeathsPercentage; // 0x0
	float DamagePercentage; // 0x4
	float KillsPercentage; // 0x8
	float SoloKillsPercentage; // 0xc
	float AssistsPercentage; // 0x10
	float HealingPercentage; // 0x14
	float CreditsPercentage; // 0x18
	float ObjectiveTimePercentage; // 0x1c
	float ShieldingPercentage; // 0x20
	float KillstreakMultiplier; // 0x24
};

struct FPolySegmentSpan {
	FPointer Poly; // 0x0
	FVector P1; // 0x8
	FVector P2; // 0x14
};

struct FPayloadStatus {
	ObjectProperty PayloadStatusCon; // 0x0
	ObjectProperty Diamond; // 0x8
	ObjectProperty DiamondTint; // 0x10
	ObjectProperty DashForward; // 0x18
	ObjectProperty DashBackward; // 0x20
	float fTargetDashFAlpha; // 0x28
	float fTargetDashBAlpha; // 0x2c
	float fTargetTintAlpha; // 0x30
	int32_t nTargetTintFrame; // 0x34
	ObjectProperty PayloadContestedCon; // 0x38
	ObjectProperty ContestedTF; // 0x40
	ObjectProperty ContestedLeft; // 0x48
	ObjectProperty ContestedRight; // 0x50
	float fTargetContestedAlpha; // 0x58
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	FString Map; // 0x24
	TArray<FString> Op; // 0x34
	FString Portal; // 0x44
	FString SecureAddress; // 0x54
	int32_t Valid; // 0x64
};

struct FBarTickTypes {
	FString sMaskName; // 0x0
	FString sContainerName; // 0x10
	float fWidth; // 0x20
	EHealthTickType eBorderTickType; // 0x24
	ObjectProperty mcBorderTickMask; // 0x28
	ObjectProperty mcLeftBorderTick; // 0x30
	ObjectProperty mcRightBorderTick; // 0x38
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
	FName AnimSeqName; // 0x18
	FVector Location; // 0x20
	FRotator Rotation; // 0x2c
	ObjectProperty PawnInst; // 0x38
};

struct FTeamInformation {
	int32_t TeamIndex; // 0x0
	FString TeamName; // 0x4
	FColor TeamColor; // 0x14
	int32_t MaxSize; // 0x18
};

struct FNavigationQueueEntry {
	ObjectProperty TargetPawn; // 0x0
	ObjectProperty TargetActor; // 0x8
	FVector TargetLocation; // 0x10
	uint32_t bNewEntry : 1; // 0x1c
	uint32_t bCanCacheLOS : 1; // 0x1c
	uint32_t bCachedLOS : 1; // 0x1c
	uint32_t bLookAtTarget : 1; // 0x1c
	uint32_t bMustHaveLOS : 1; // 0x1c
	uint32_t bStopNavOnReachedDestination : 1; // 0x1c
	float DistanceTolerance; // 0x20
	int32_t NodeToken; // 0x24
	int32_t TeleportIndex; // 0x28
};

struct FLocalTalker {
	uint32_t bHasVoice : 1; // 0x0
	uint32_t bHasNetworkedVoice : 1; // 0x0
	uint32_t bIsRecognizingSpeech : 1; // 0x0
	uint32_t bWasTalking : 1; // 0x0
	uint32_t bIsTalking : 1; // 0x0
	uint32_t bIsRegistered : 1; // 0x0
	float TimeSinceLastPacket; // 0x4
};

struct FUICardDisplayEntry {
	ObjectProperty Obj; // 0x0
	ObjectProperty Card; // 0x8
	ObjectProperty Icon; // 0x10
	ObjectProperty PowerLevel; // 0x18
	ObjectProperty CardLevel; // 0x20
	int32_t DeviceID; // 0x28
};

struct FUVCoords {
	uint32_t bCustomCoords : 1; // 0x0
	float U; // 0x4
	float V; // 0x8
	float UL; // 0xc
	float VL; // 0x10
};

struct FBeamModifierOptions {
	uint32_t bModify : 1; // 0x0
	uint32_t bScale : 1; // 0x0
	uint32_t bLock : 1; // 0x0
};

struct FModFxAudioValues {
	uint32_t bApplyToBodyParam : 1; // 0x0
	FName nmParamName; // 0x4
	float fOnBeatMultiplier; // 0xc
	float fOffBeatMultiplier; // 0x10
	float fTarget; // 0x14
	float fActual; // 0x18
	float fLambda; // 0x1c
	float fDecay; // 0x20
	float fRaw; // 0x24
	float fDampenAmt; // 0x28
};

struct FTitleFileWeb : FTitleFile {
	FString StringData; // 0x24
	ObjectProperty HTTPRequest; // 0x34
	EMcpFileCompressionType FileCompressionType; // 0x3c
};

struct FRawDistributionVector : FRawDistribution {
	ComponentProperty Distribution; // 0x1c
};

struct FMobileInputGroup {
	FString GroupName; // 0x0
	TArray<ObjectProperty> AssociatedZones; // 0x10
};

struct FTargetScoreInfo {
	int32_t Score; // 0x0
	int32_t Index; // 0x4
};

struct FTargetAimTrackingDebugVals {
	int32_t DebugState; // 0x0
	FName trackingCurveSetName; // 0x4
	float strengthMultiplier[0x2]; // 0xc
	float strengthByAccuracy[0x2]; // 0x14
	float strengthByDesiredAngle[0x2]; // 0x1c
	float strengthFinal[0x2]; // 0x24
	float rawDesiredTurnAmt[0x2]; // 0x2c
	float rawDesiredTurnAmtPerSec[0x2]; // 0x34
};

struct FProfileSettingsCache {
	ObjectProperty Profile; // 0x0
	TArray<DelegateProperty> ReadDelegates; // 0x8
	TArray<DelegateProperty> WriteDelegates; // 0x18
	TArray<DelegateProperty> ProfileDataChangedDelegates; // 0x28
};

struct FPComOpenBroadcasterSettings {
	uint32_t bAllowWebcam : 1; // 0x0
	uint32_t bAllowMicrophone : 1; // 0x0
	uint32_t bAllowDesktopAudio : 1; // 0x0
};

struct FViewIdToLeaderboardName {
	int32_t ViewId; // 0x0
	FString LeaderboardName; // 0x4
};

struct FPhysXVerticalProperties {
	FPhysXEmitterVerticalProperties Emitters; // 0x0
};

struct FLobbyMeshInfo {
	FVector Translation; // 0x0
	FRotator Rotation; // 0xc
	float Scale; // 0x18
	ObjectProperty SkelMesh; // 0x1c
	ObjectProperty PhysAsset; // 0x24
	ObjectProperty AnimTreeTemplate; // 0x2c
	TArray<ObjectProperty> AnimSets; // 0x34
	ObjectProperty MorphTargetSet; // 0x44
	uint32_t bOnlySelfShadow : 1; // 0x4c
	uint32_t bUseParentAnimComponent : 1; // 0x4c
	uint32_t bUseBoundsFromParentAnimComponent : 1; // 0x4c
	FName AttachSocketName; // 0x50
	TArray<ObjectProperty> MaterialOverrides; // 0x58
	uint32_t bUseIndividualLightEnvironment : 1; // 0x68
	uint32_t bUseOverlayMesh : 1; // 0x68
};

struct FPagedEntry {
	int32_t nValue; // 0x0
	FString sText; // 0x4
};

struct FDialogueEvent {
	float fRequestTime; // 0x0
	int32_t nPriority; // 0x4
	float fRelevance; // 0x8
	int32_t ExtraInfo; // 0xc
	float fPause; // 0x10
	EEmote EEmote; // 0x14
	EEmoteCategory eCat; // 0x15
};

struct FSwarmDebugOptions {
	uint32_t bDistributionEnabled : 1; // 0x0
	uint32_t bForceContentExport : 1; // 0x0
	uint32_t bInitialized : 1; // 0x0
};

struct FMaterialReferenceList {
	ObjectProperty TargetMaterial; // 0x0
	TArray<FPrimitiveMaterialRef> AffectedMaterialRefs; // 0x8
	TArray<FPostProcessMaterialRef> AffectedPPChainMaterialRefs; // 0x18
};

struct FMatchLobbyPlayerCustomize {
	int32_t nBotId; // 0x0
	int32_t nSkinId; // 0x4
	int32_t nWeaponDeviceId; // 0x8
	int32_t nWeaponSkinId; // 0xc
	int32_t nVoiceId; // 0x10
	int32_t nEmoteId; // 0x14
	int32_t nMVPPoseId; // 0x18
	int32_t nSprayId; // 0x1c
};

struct FDeckCardData {
	int32_t nDeviceId; // 0x0
	int32_t nPlayerId; // 0x4
};

struct FDLTeleportTargets {
	FVector TargetPosition; // 0x0
	FRotator TargetRotation; // 0xc
	ObjectProperty TargetIllusion; // 0x18
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FPBMeshCompInfo {
	ComponentProperty MeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FValueRequestState : FSaveSlotRequestState {
	FName ValueId; // 0x28
};

struct FExtraDamageInfo {
	uint32_t bCritical : 1; // 0x0
	uint32_t bHeadShot : 1; // 0x0
	uint32_t bKillingBlow : 1; // 0x0
	uint32_t bCombo : 1; // 0x0
	uint32_t bLatent : 1; // 0x0
	uint32_t bMarked : 1; // 0x0
	uint32_t bCapped : 1; // 0x0
	uint32_t bNoInstigator : 1; // 0x0
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FOnlineStatsRow {
	FUniqueNetId PlayerID; // 0x0
	FSettingsData Rank; // 0x8
	FString NickName; // 0x18
	TArray<FSettingsData> StatValues; // 0x28
};

struct FOnlineContent {
	EOnlineContentType ContentType; // 0x0
	char UserIndex; // 0x1
	uint32_t bIsCorrupt : 1; // 0x4
	int32_t DeviceID; // 0x8
	int32_t LicenseMask; // 0xc
	FString FriendlyName; // 0x10
	FString Filename; // 0x20
	FString ContentPath; // 0x30
	TArray<FString> ContentPackages; // 0x40
	TArray<FString> ContentFiles; // 0x50
};

struct FDebugPropertyMod {
	FString sProperty; // 0x0
	float fModifier; // 0x10
	uint32_t bPercent : 1; // 0x14
	ObjectProperty pEffect; // 0x18
};

struct FTIP_Transition {
	FName TransName; // 0x0
	FName AnimName; // 0x8
};

struct FDamageInstance {
	float fDamage; // 0x0
	float fTimestamp; // 0x4
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FPSE_SkinAk {
	int32_t nSkinId; // 0x0
	ObjectProperty AkEvent; // 0x4
};

struct FTG_LAST_PURCHASE {
	int32_t nItemId; // 0x0
	int32_t nCount; // 0x4
};

struct FSkelControlSkinGateChild {
	ObjectProperty SkelControl; // 0x0
	int32_t nSkinId; // 0x8
	int32_t nSkinLevel; // 0xc
	float DrawY; // 0x10
};

struct FHelmetMorphRestrictions {
	FName MorphName; // 0x0
	float Weight; // 0x8
};

struct FUICListEntry {
	ObjectProperty pDisplay; // 0x0
	ObjectProperty pInteractable; // 0x8
	float fOrigX; // 0x10
	float fOrigY; // 0x14
	float fOrigAlpha; // 0x18
	float fOrigWidth; // 0x1c
	float fOrigHeight; // 0x20
	float fOrigXScale; // 0x24
	float fOrigYScale; // 0x28
	float fOrigRotation; // 0x2c
	float fDisplayWidth; // 0x30
	float fDisplayHeight; // 0x34
	int32_t nNavPosX; // 0x38
	int32_t nNavPosY; // 0x3c
	int32_t nNavWidth; // 0x40
	int32_t nNavHeight; // 0x44
};

struct FHealAccumulator {
	int32_t nProfileId; // 0x0
	int32_t nSkinId; // 0x4
	int32_t nIconOverrideId; // 0x8
	float fRawAmount; // 0xc
	float fChangeAmount; // 0x10
	uint32_t bHealingReduced : 1; // 0x14
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FSlotMoveRef {
	FPolyReference Poly; // 0x0
	FBasedPosition Dest; // 0x24
	int32_t Direction; // 0x5c
};

struct FAccuracySettings {
	uint32_t bUsesAdvancedAccuracy : 1; // 0x0
	float fMaxAccuracy; // 0x4
	float fMinAccuracy; // 0x8
	float fAccuracyLossPerShot; // 0xc
	float fAccuracyGainPerSec; // 0x10
	float fAccuracyGainDelay; // 0x14
	int32_t nNumFreeShots; // 0x18
};

struct FTgSettingPropMapping {
	int32_t nSettingId; // 0x0
	int32_t nPropId; // 0x4
	int32_t nPlayerFlag; // 0x8
};

struct FClientAdjustment {
	float TimeStamp; // 0x0
	EPhysics newPhysics; // 0x4
	FVector NewLoc; // 0x8
	FVector NewVel; // 0x14
	ObjectProperty NewBase; // 0x20
	FVector NewFloor; // 0x28
	char bAckGoodMove; // 0x34
};

struct FGameResourceDataProvider {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	uint32_t bExpandProviders : 1; // 0x18
	UUIResourceDataProvider* ProviderClass; // 0x1c
};

struct FChannelData {
	int32_t nChannel; // 0x0
	FString sName; // 0x4
};

struct FBGTEAM_PLAYER {
	int32_t nBotId; // 0x0
	int32_t nLives; // 0x4
	char eMorph; // 0x8
	float fHealth; // 0xc
	ObjectProperty pObj; // 0x10
	ObjectProperty pIcon; // 0x18
	ObjectProperty pDead; // 0x20
	ObjectProperty pName; // 0x28
	ObjectProperty pLives; // 0x30
	ObjectProperty pHealth; // 0x38
	ObjectProperty pHealthBar; // 0x40
	ObjectProperty pHealthTip; // 0x48
};

struct FUIDeployableOverlay : FUITargetableOverlay {
	ObjectProperty pIconParent; // 0x84
	ObjectProperty pLeftArc; // 0x8c
	ObjectProperty pRightArc; // 0x94
	ObjectProperty pTopArc; // 0x9c
	ObjectProperty pPointer; // 0xa4
	ObjectProperty pDynamicIcon; // 0xac
	ObjectProperty pDynamicIconTexture; // 0xb4
	ObjectProperty pBarrageFrame; // 0xbc
	ObjectProperty pBarrageMeter; // 0xc4
	float fAnimTime; // 0xcc
	EDeployableOverlayInternalState eState; // 0xd0
	float fDamagePulseTimer; // 0xd4
	int32_t nCurrentIcon; // 0xd8
	int32_t nDynamicIconProfileId; // 0xdc
	int32_t nDynamicIconSkinId; // 0xe0
};

struct FDebugNavCost {
	FString Desc; // 0x0
	int32_t Cost; // 0x10
};

struct FCurveKey {
	FName CurveName; // 0x0
	float Weight; // 0x8
};

struct FSkeletalMeshLODInfo {
	float DisplayFactor; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	TArray<char> bEnableShadowCasting; // 0x18
	TArray<TriangleSortOption> TriangleSorting; // 0x28
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x38
	uint32_t bDisableCompressions : 1; // 0x48
	uint32_t bHasBeenSimplified : 1; // 0x48
	TArray<FBoneToRemove> BonesToRemove; // 0x4c
};

struct FAimData {
	FVector StartTrace; // 0x0
	FVector EndTrace; // 0xc
	FVector AimVector; // 0x18
	ObjectProperty HitActor; // 0x24
	float ClientMovementTimeStamp; // 0x2c
	uint32_t bResult : 1; // 0x30
};

struct FTgQueuedRefire {
	int32_t ClientFireRequestId; // 0x0
	char DesiredFireMode; // 0x4
	float AttackSpeedPercChange; // 0x8
	FAimData Aim; // 0xc
};

struct FArcingInfo {
	float ArcTime; // 0x0
	float RemainingArcTime; // 0x4
	int32_t JumpsRemaining; // 0x8
	ObjectProperty PreviousArcTarget; // 0xc
	TArray<ObjectProperty> PreviousTargets; // 0x14
	ObjectProperty ArcFiremode; // 0x24
};

struct FTgTimerData {
	int32_t nIndex; // 0x0
	char byTimer; // 0x4
	float fStartTime; // 0x8
	float fRemaining; // 0xc
	uint32_t bRepeat : 1; // 0x10
	uint32_t bPausedByGame : 1; // 0x10
	float Rate; // 0x14
	FTGT_REG_LINK CallbackRegistry; // 0x18
};

struct FComboInfo {
	ObjectProperty Target; // 0x0
	ObjectProperty Instigator; // 0x8
	float fMarkTime; // 0x10
};

struct FTagInfo {
	FName nmTag; // 0x0
	int32_t nChildIndex; // 0x8
};

struct FVectorMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	FVector Constant; // 0x38
};

struct FAchievementProgressStat {
	int32_t AchievementId; // 0x0
	int32_t Progress; // 0x4
	int32_t MaxProgress; // 0x8
	uint32_t bUnlock : 1; // 0xc
};

struct FManualCoverTypeInfo {
	char SlotIndex; // 0x0
	ECoverType ManualCoverType; // 0x1
};

struct FTabInfo {
	FString sTitle; // 0x0
	FString sURL; // 0x10
};

struct FTrackedProjectileInitData {
	int32_t FireModeID; // 0x0
	int32_t ProjectileId; // 0x4
	FVector SpawnLocation; // 0x8
	FVector SpawnRotation; // 0x14
	FVector SpawnVelocity; // 0x20
	float SpawnServerTime; // 0x2c
};

struct FKBoxElem {
	FMatrix TM; // 0x0
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
	uint32_t bNoRBCollision : 1; // 0x4c
	uint32_t bPerPolyShape : 1; // 0x4c
};

struct FOnDamagedParams {
	ObjectProperty attacker; // 0x0
	ObjectProperty Dev; // 0x8
	ObjectProperty eg; // 0x10
	FImpactInfo Impact; // 0x18
	float fBuffedDamage; // 0x94
	float fMitigatedDamage; // 0x98
	float fPreDamageHealth; // 0x9c
	float fShieldDamage; // 0xa0
	FExtraDamageInfo ExtraInfo; // 0xa4
	int32_t nPropertyId; // 0xa8
};

struct FCurrentPostProcessVolumeInfo {
	FPostProcessSettings LastSettings; // 0x0
	ObjectProperty LastVolumeUsed; // 0x180
	float BlendStartTime; // 0x188
	float LastBlendTime; // 0x18c
};

struct FStateVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
};

struct FHostMigrationState {
	EHostMigrationProgress HostMigrationProgress; // 0x0
	float HostMigrationElapsedTime; // 0x4
	float HostMigrationTravelCountdown; // 0x8
	FString HostMigrationTravelURL; // 0xc
	uint32_t bHostMigrationEnabled : 1; // 0x1c
};

struct FSplineConnection {
	ComponentProperty SplineComponent; // 0x0
	ObjectProperty ConnectTo; // 0x8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FAnimByRotation {
	FRotator DesiredRotation; // 0x0
	FName AnimName; // 0xc
};

struct FKSphylElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	float Length; // 0x44
	uint32_t bNoRBCollision : 1; // 0x48
	uint32_t bPerPolyShape : 1; // 0x48
};

struct FPBScopeProcessInfo {
	ObjectProperty OwningBuilding; // 0x0
	ObjectProperty Ruleset; // 0x8
	FName RulesetVariation; // 0x10
	uint32_t bGenerateLODPoly : 1; // 0x18
	uint32_t bPartOfNonRect : 1; // 0x18
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	uint32_t bGetSeedFromInstance : 1; // 0x8
	uint32_t bInstanceSeedIsIndex : 1; // 0x8
	uint32_t bResetSeedOnEmitterLooping : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0xc
};

struct FPlatformInterfaceDelegateResult {
	uint32_t bSuccessful : 1; // 0x0
	FPlatformInterfaceData Data; // 0x4
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FLinearDOFSetup {
	char bLimited; // 0x0
	float LimitSize; // 0x4
};

struct FKillWithComboEntry {
	ObjectProperty pTarget; // 0x0
	float fTime; // 0x8
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FThreadSafeCounter {
	int32_t Value; // 0x0
};

struct FSkelControlListHead {
	FName BoneName; // 0x0
	ObjectProperty ControlHead; // 0x8
};

struct FASColorTransform {
	FLinearColor Multiply; // 0x0
	FLinearColor Add; // 0x10
};

struct FStanceTransitionParam {
	int32_t FromChild; // 0x0
	int32_t ToChild; // 0x4
};

struct FPBRuleLink {
	ObjectProperty NextRule; // 0x0
	FName LinkName; // 0x8
};

struct FParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror ParticleMBInfoMap; // 0x0
};

struct FAmmoBlendParams {
	int32_t MinAmmo; // 0x0
	int32_t MaxAmmo; // 0x4
	int32_t ChildNum; // 0x8
};

struct FTPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	FVector2D HUDOffset; // 0x1c
};

struct FDefaultRepulsorData {
	char TargetType; // 0x0
	float MaxEnemyWeight; // 0x4
	float MaxFriendlyWeight; // 0x8
	ERepulsorWeightMethod SolverType; // 0xc
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FCollisionSettingsDeployable {
	AdvancedCollisionMode mCollisionMode; // 0x0
	uint32_t bUseMeshForCollision : 1; // 0x4
	uint32_t bPawnsCanBaseOnMe : 1; // 0x4
	uint32_t bAutoRegisterObstacle : 1; // 0x4
	uint32_t bHasRegisteredObstacle : 1; // 0x4
	uint32_t bOnlyBlockShotsFromFront : 1; // 0x4
	uint32_t bBlockFriendlyFire : 1; // 0x4
	uint32_t bBlockEnemyFire : 1; // 0x4
	float fProjectileAllowanceRadius; // 0x8
	float fExplosionAllowanceRadius; // 0xc
	uint32_t bProjectilesPassThrough : 1; // 0x10
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FPlayerStorageArrayProvider {
	int32_t PlayerStorageId; // 0x0
	ObjectProperty Provider; // 0x4
};

struct FDriftInfo {
	float fStartTime; // 0x0
	float fEndTime; // 0x4
};

struct FSubtitleCue {
	FString Text; // 0x0
	float Time; // 0x10
	int32_t m_nMsgId; // 0x14
};

struct FUserAccountInfo {
	FString DateOfBirth; // 0x0
	FString Email; // 0x10
	FString FirstName; // 0x20
	FString LastName; // 0x30
	FString Gamertag; // 0x40
};

struct FOnlineCrossTitleContent : FOnlineContent {
	int32_t TitleId; // 0x60
};

struct FTgSettingsSet {
	TArray<FTgKeyBind> Keybinds; // 0x0
	int32_t nCharacterId; // 0x10
};

struct FAmbientSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	float Weight; // 0x10
};

struct FMcpMessageList {
	FString ToUniqueUserId; // 0x0
	TArray<FMcpMessage> Messages; // 0x10
};

struct FPlayerEvents {
	FGameEvents TotalEvents; // 0x0
	FWeaponEvents WeaponEvents; // 0x48
	FDamageEvents DamageAsPlayerEvents; // 0xa0
	FDamageEvents DamageAsTargetEvents; // 0xf8
	FProjectileEvents ProjectileEvents; // 0x150
	FPawnEvents PawnEvents; // 0x1a8
};

struct FPostProcessMaterialRef {
	ObjectProperty Effect; // 0x0
};

struct FOnlineProfileSetting {
	EOnlineProfilePropertyOwner Owner; // 0x0
	FSettingsProperty ProfileSetting; // 0x4
};

struct FEffectSpotFXInfo {
	ObjectProperty Fx; // 0x0
	int32_t nFXIndex; // 0x8
};

struct FWeaponFireResults {
	uint32_t bDidServerValidation : 1; // 0x0
	FImpactInfo Impact; // 0x4
};

struct FTrackingSettings {
	uint32_t bUsesTracking : 1; // 0x0
	ObjectProperty mTarget; // 0x4
	float fTurnStrength; // 0xc
	float fVertTurnStrength; // 0x10
	float fTrackingProximityDistance; // 0x14
	uint32_t bIgnoreNonTargets : 1; // 0x18
	uint32_t bIgnoreWorldIfSeeking : 1; // 0x18
	uint32_t bIgnoreWorldIfNotSeeking : 1; // 0x18
	uint32_t bInfiniteRangeWhileTracking : 1; // 0x18
	uint32_t bDestroyIfTargetDied : 1; // 0x18
};

struct FHomingBombTrackingTargets {
	ObjectProperty PotentialTarget; // 0x0
	float fScore; // 0x8
};

struct FASDisplayInfo {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float Rotation; // 0xc
	float XRotation; // 0x10
	float YRotation; // 0x14
	float XScale; // 0x18
	float YScale; // 0x1c
	float ZScale; // 0x20
	float Alpha; // 0x24
	uint32_t Visible : 1; // 0x28
	uint32_t hasX : 1; // 0x28
	uint32_t hasY : 1; // 0x28
	uint32_t hasZ : 1; // 0x28
	uint32_t hasRotation : 1; // 0x28
	uint32_t hasXRotation : 1; // 0x28
	uint32_t hasYRotation : 1; // 0x28
	uint32_t hasXScale : 1; // 0x28
	uint32_t hasYScale : 1; // 0x28
	uint32_t hasZScale : 1; // 0x28
	uint32_t hasAlpha : 1; // 0x28
	uint32_t hasVisible : 1; // 0x28
};

struct FMeshPlacement {
	int32_t nSkinId; // 0x0
	int32_t nMeshId; // 0x4
	FName SocketName; // 0x8
};

struct FCIHStack {
	ObjectProperty pTarget; // 0x0
	int32_t nStackCount; // 0x8
	float fLifetime; // 0xc
};

struct FMarketplaceProductImage {
	FString Id; // 0x0
	int32_t Height; // 0x10
	int32_t Width; // 0x14
	FString Purpose; // 0x18
	TArray<FString> Purposes; // 0x28
	FString ResizeURL; // 0x38
};

struct FBuffMonsterMIC {
	ObjectProperty SpawnedMIC; // 0x0
	ObjectProperty DroppedMIC; // 0x8
	ObjectProperty TimerMIC; // 0x10
};

struct FSZombieInfo {
	uint32_t bEnabled : 1; // 0x0
	int32_t Mode; // 0x4
	uint32_t RemoveNextTime : 1; // 0x8
	int32_t TicksUntilCheckLocation; // 0xc
	FVector LastLocation; // 0x10
	float VelocityCap; // 0x1c
	FRotator Rotation; // 0x20
	float fLastMoveTime; // 0x2c
	float fSecondsUntilInhandFireStateChange; // 0x30
	uint32_t bFiringInhand : 1; // 0x34
	float fSecondsUntilAbility1FireStateChange; // 0x38
	uint32_t bFiringAbility1 : 1; // 0x3c
	float fSecondsUntilAbility2FireStateChange; // 0x40
	uint32_t bFiringAbility2 : 1; // 0x44
	float fSecondsUntilAltFireFireStateChange; // 0x48
	uint32_t bFiringAltFire : 1; // 0x4c
	float fSecondsUntilChangeMove; // 0x50
};

struct FFx_Sound {
	int32_t c_nId; // 0x0
	ObjectProperty c_SoundObject; // 0x4
	ComponentProperty c_acSound; // 0xc
	uint32_t c_bAllowSoundToFinishFlag : 1; // 0x14
	uint32_t c_bCanHearThroughStealth : 1; // 0x14
	uint32_t c_bForceAudioComponent : 1; // 0x14
	ObjectProperty c_AkEvent; // 0x18
};

struct FMcpGroup {
	FString OwnerId; // 0x0
	FString GroupID; // 0x10
	FString GroupName; // 0x20
	EMcpGroupAccessLevel AccessLevel; // 0x30
	TArray<FMcpGroupMember> Members; // 0x34
};

struct FOnHealedParams {
	ObjectProperty Healer; // 0x0
	ObjectProperty Dev; // 0x8
	ObjectProperty eg; // 0x10
	FImpactInfo Impact; // 0x18
	float fHealAmount; // 0x94
	float fHealthChange; // 0x98
	int32_t nPropertyId; // 0x9c
	uint32_t bPlayCameraHealEffect : 1; // 0xa0
};

struct FGameEvents {
	FMap_Mirror Events; // 0x0
};

struct FPotentialTargetInfo {
	ObjectProperty Target; // 0x0
	int32_t NumHits; // 0x8
	float Dist; // 0xc
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FUICardDisplayGroup {
	FUICardDisplayEntry Items[0x4]; // 0x0
	FUICardDisplayEntry Cards[0x5]; // 0xb0
	int32_t LastCardsPawnId; // 0x18c
};

struct FParticleEventKismetData : FParticleEventData {
	uint32_t UsePSysCompLocation : 1; // 0x34
	FVector Normal; // 0x38
};

struct FSavedRewindVals {
	float fHealth; // 0x0
	FVector vLocation; // 0x4
	FRotator rRotation; // 0x10
	float fTime; // 0x1c
	uint32_t bCollideWorld : 1; // 0x20
};

struct FTerrainBVTree {
	TArray<int32_t> Nodes; // 0x0
};

struct FMcpUserStatus {
	FString McpId; // 0x0
	FString UDID; // 0x10
	FString CountryCode; // 0x20
	FString LastActiveDate; // 0x30
	int32_t DaysInactive; // 0x40
	uint32_t bIsBanned : 1; // 0x44
};

struct FReduceActiveCooldownEntry {
	int32_t nDeviceId; // 0x0
	int32_t nFireMode; // 0x4
	float fValue; // 0x8
	uint32_t bPercent : 1; // 0xc
	float fApplicationTime; // 0x10
	float fCooldownFloor; // 0x14
	uint32_t bIgnoreChargeScaling : 1; // 0x18
};

struct FSetAndLerpInstruction : FLerpToInstruction {
	FString LerpFromId; // 0x24
};

struct FCachedTerrainMaterialArray {
	TArray<FPointer> CachedMaterials; // 0x0
};

struct FPlayerMember {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FActivityGoal {
	int32_t nTargetValue; // 0x0
	int32_t nProgressValue; // 0x4
	FString sDescription; // 0x8
	FString sName; // 0x18
	uint32_t bClaimed : 1; // 0x28
	int32_t nGoalId; // 0x2c
	TArray<FGoalRewardItem> pLootItems; // 0x30
};

struct FTraceHitInfo {
	ObjectProperty Material; // 0x0
	ObjectProperty PhysMaterial; // 0x8
	int32_t Item; // 0x10
	int32_t LevelIndex; // 0x14
	FName BoneName; // 0x18
	ComponentProperty HitComponent; // 0x20
};

struct FProjectileClassEventData {
	FName ProjectileClassName; // 0x0
};

struct FMcpIdMapping {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
};

struct FAttractLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FEffectInstanceInfo {
	float fTimestamp; // 0x0
	float fDamageValue; // 0x4
};

struct FMICStateParamInterpData {
	int32_t nMaterialIndex; // 0x0
	FName nmToStateName; // 0x4
	FName nmFromStateName; // 0xc
	float fStartTime; // 0x14
	float fEndTime; // 0x18
	FMICStateParams SavedState; // 0x1c
};

struct FNavMeshPathConstraintCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x4
};

struct FExternalTexture {
	FString Resource; // 0x0
	ObjectProperty Texture; // 0x10
};

struct FScalarMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x34
	float Constant; // 0x38
};

struct FFontRenderInfo {
	uint32_t bClipText : 1; // 0x0
	uint32_t bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FOffhandAnimation {
	FName m_OffhandUseType; // 0x0
	FName m_AnimName; // 0x8
	uint32_t m_bFullBody : 1; // 0x10
};

struct FPhysXEmitterVerticalProperties {
	uint32_t bDisableLod : 1; // 0x0
	int32_t ParticlesLodMin; // 0x4
	int32_t ParticlesLodMax; // 0x8
	int32_t PacketsPerPhysXParticleSystemMax; // 0xc
	uint32_t bApplyCylindricalPacketCulling : 1; // 0x10
	float SpawnLodVsFifoBias; // 0x14
};

struct FMessageClip {
	int32_t nIcon; // 0x0
	int32_t nType; // 0x4
	int32_t nValue; // 0x8
	float fTimer; // 0xc
	float fDuration; // 0x10
	ObjectProperty pMovie; // 0x14
	ObjectProperty pTimer; // 0x1c
	ObjectProperty pTimerBar; // 0x24
};

struct FLensFlareElementMaterials {
	TArray<ObjectProperty> ElementMaterials; // 0x0
};

struct FNetViewer {
	ObjectProperty InViewer; // 0x0
	ObjectProperty Viewer; // 0x8
	FVector ViewLocation; // 0x10
	FVector AlternateViewLocation; // 0x1c
	FVector ViewDir; // 0x28
	uint32_t bHasAlternateViewLocation : 1; // 0x34
};

struct FUIMVPDATA {
	int32_t nBot; // 0x0
	int32_t nBody; // 0x4
	int32_t nPedestal; // 0x8
	int32_t nMVPType; // 0xc
	int32_t nFrame; // 0x10
	int32_t nLevel; // 0x14
	int32_t nValue; // 0x18
	int32_t nWeapon; // 0x1c
	ObjectProperty pPlayer; // 0x20
};

struct FAudioEQEffect {
	FDouble RootTime; // 0x0
	float HFFrequency; // 0x8
	float HFGain; // 0xc
	float MFCutoffFrequency; // 0x10
	float MFBandwidth; // 0x14
	float MFGain; // 0x18
	float LFFrequency; // 0x1c
	float LFGain; // 0x20
};

struct FKeyBind {
	FName Name; // 0x0
	FString Command; // 0x8
	uint32_t Control : 1; // 0x18
	uint32_t Shift : 1; // 0x18
	uint32_t Alt : 1; // 0x18
	uint32_t bIgnoreCtrl : 1; // 0x18
	uint32_t bIgnoreShift : 1; // 0x18
	uint32_t bIgnoreAlt : 1; // 0x18
	uint32_t LeftShoulder : 1; // 0x18
	uint32_t LeftTrigger : 1; // 0x18
	uint32_t RightShoulder : 1; // 0x18
	uint32_t RightTrigger : 1; // 0x18
	uint32_t LeftThumbStick : 1; // 0x18
	uint32_t RightThumbStick : 1; // 0x18
	uint32_t bIgnorePadModifier : 1; // 0x18
};

struct FScalarParameterInterpStruct {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	float InterpTime; // 0xc
	float WarmupTime; // 0x10
};

struct FUIDataValue {
	UIID eType; // 0x0
	uint32_t bDirty : 1; // 0x4
	float fValue; // 0x8
	FString sValue; // 0xc
};

struct FAccoladeStruct {
	int32_t AccoladeId; // 0x0
	int32_t ActivityId; // 0x4
	int32_t Type; // 0x8
	int32_t Value; // 0xc
};

struct FV2DOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
};

struct FMobilePostProcessSettings {
	uint32_t bOverride_Mobile_BlurAmount : 1; // 0x0
	uint32_t bOverride_Mobile_TransitionTime : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Scale : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Threshold : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Tint : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_Distance : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_MinRange : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_MaxRange : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_NearBlurFactor : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_FarBlurFactor : 1; // 0x0
	float Mobile_BlurAmount; // 0x4
	float Mobile_TransitionTime; // 0x8
	float Mobile_Bloom_Scale; // 0xc
	float Mobile_Bloom_Threshold; // 0x10
	FLinearColor Mobile_Bloom_Tint; // 0x14
	float Mobile_DOF_Distance; // 0x24
	float Mobile_DOF_MinRange; // 0x28
	float Mobile_DOF_MaxRange; // 0x2c
	float Mobile_DOF_NearBlurFactor; // 0x30
	float Mobile_DOF_FarBlurFactor; // 0x34
};

struct FLevelStreamingData {
	uint32_t bShouldBeLoaded : 1; // 0x0
	uint32_t bShouldBeVisible : 1; // 0x0
	uint32_t bShouldBlockOnLoad : 1; // 0x0
	ObjectProperty Level; // 0x4
};

struct FCylinder {
	float Radius; // 0x0
	float Height; // 0x4
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FUIRangeData {
	float CurrentValue; // 0x0
	float MinValue; // 0x4
	float MaxValue; // 0x8
	float NudgeValue; // 0xc
	uint32_t bIntRange : 1; // 0x10
};

struct FDeviceTeamInfo {
	int32_t Power; // 0x0
	int32_t Level; // 0x4
	int32_t CurrentDeviceId; // 0x8
	int32_t LastKnownDeviceId[0x3]; // 0xc
	int32_t CurrentDeviceCount; // 0x18
	int32_t LastKnownDeviceCount[0x3]; // 0x1c
};

struct FAcquisitionCarouselItem {
	ObjectProperty mcPurchaseItem; // 0x0
	ObjectProperty mcPurchaseChest; // 0x8
	ObjectProperty mcPurchaseCard; // 0x10
	ObjectProperty mcPurchaseItemDisplay; // 0x18
	ObjectProperty mcPurchaseItemIcon; // 0x20
	ObjectProperty mcPurchaseItemCardIcon; // 0x28
	ObjectProperty mcPurchaseItemCurrency; // 0x30
	ObjectProperty mcPurchaseItemRarityFrame; // 0x38
	ObjectProperty mcPurchaseItemRarityText; // 0x40
	ObjectProperty mcPurchaseItemTypeIcon; // 0x48
	ObjectProperty mcPurchaseItemTitle; // 0x50
	ObjectProperty mcPurchaseItemSubtitle; // 0x58
	ObjectProperty mcPurchaseItemChampion; // 0x60
	ObjectProperty mcPurchaseItemChampionIcon; // 0x68
	ObjectProperty mcPurchaseItemChampionLarge; // 0x70
	ObjectProperty mcPurchaseItemChampionTitle; // 0x78
	ObjectProperty mcPurchaseItemChampionImage; // 0x80
	ObjectProperty mcPurchaseItemAudio; // 0x88
};

struct FMarketplaceProductDetails {
	FString StandardId; // 0x0
	EMediaItemType MediaItemType; // 0x10
	FString ProductName; // 0x14
	FString ProductID; // 0x24
	FQWord ReleaseDate; // 0x34
	FString SandboxId; // 0x3c
	int32_t TitleId; // 0x4c
	uint32_t bIsBundle : 1; // 0x50
	uint32_t bIsPartOfAnyBundle : 1; // 0x50
	FString ReducedName; // 0x54
	TArray<FMarketplaceProductImage> Images; // 0x64
	EOnlineEnumerationReadState DetailsReadState; // 0x74
	TArray<FMarketplaceProductAvailability> Availabilities; // 0x78
	FString ProductDescription; // 0x88
	FString IncludeTaxMessage; // 0x98
};

struct FTrailSample {
	float RelativeTime; // 0x0
	FVector FirstEdgeSample; // 0x4
	FVector ControlPointSample; // 0x10
	FVector SecondEdgeSample; // 0x1c
};

struct FPlayOfTheGameEventCounter {
	EPlayOfTheGameEventType EventType; // 0x0
	float Threshold; // 0x4
	float Counter; // 0x8
	float TimeOut; // 0xc
	float Timer; // 0x10
};

struct FSwappedMeshResetInfo {
	ComponentProperty SkelMeshComp; // 0x0
	int32_t MaterialIndex; // 0x8
	ObjectProperty OrigMatInst; // 0xc
};

struct FAppliedMaterialHandle {
	int32_t nHandle; // 0x0
	TScriptInterface<Class> pAppliedMesh; // 0x4
};

struct FCompartmentRunList {
	uint32_t RigidBody : 1; // 0x0
	uint32_t Fluid : 1; // 0x0
	uint32_t Cloth : 1; // 0x0
	uint32_t SoftBody : 1; // 0x0
};

struct FInputKeyEvent {
	FName nmKey; // 0x0
	EInputEvent eEvent; // 0x8
	FString sDisplayName; // 0xc
};

struct FTgKeyCommand {
	uint32_t bAllowGamepadAxis : 1; // 0x0
	int32_t nPropId; // 0x4
	FString sKeyCommand; // 0x8
	FString sMirroredCommand; // 0x18
	TArray<FString> sDefaultKeys; // 0x28
	TArray<FString> sDefaultGamepad; // 0x38
};

struct FNamedNetDriver {
	FName NetDriverName; // 0x0
	FPointer NetDriver; // 0x8
};

struct FRecogVocabulary {
	TArray<FRecognisableWord> WhoDictionary; // 0x0
	TArray<FRecognisableWord> WhatDictionary; // 0x10
	TArray<FRecognisableWord> WhereDictionary; // 0x20
	FString VocabName; // 0x30
	TArray<char> VocabData; // 0x40
	TArray<char> WorkingVocabData; // 0x50
};

struct FPComActiveInputLightingPreset {
	int32_t LoopCount; // 0x0
	float CurrentTime; // 0x4
	float PlaybackRate; // 0x8
};

struct FFilterLimit {
	uint32_t Enabled : 1; // 0x0
	float Base; // 0x4
	float NoiseScale; // 0x8
	float NoiseAmount; // 0xc
};

struct FAnimationEndInformation {
	TArray<ObjectProperty> TreeBranchToLeaf; // 0x0
	float PlayedTime; // 0x10
	float ExcessTime; // 0x14
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x0
	TArray<FPlane> PermutedVertexData; // 0x10
	TArray<int32_t> FaceTriData; // 0x20
	TArray<FVector> EdgeDirections; // 0x30
	TArray<FVector> FaceNormalDirections; // 0x40
	TArray<FPlane> FacePlaneData; // 0x50
	FBox ElemBox; // 0x60
};

struct FPropertyDecayParams {
	float LambdaImpulse; // 0x0
	float LambdaAccumulation; // 0x4
	float DecayImpulse; // 0x8
	float DecayAccumulation; // 0xc
	float AccumulationImpulseMix; // 0x10
};

struct FFollowLaneState {
	int32_t LastLaneIndex; // 0x0
	uint32_t bFinalApproach : 1; // 0x4
	uint32_t bLockedToMarker : 1; // 0x4
};

struct FWeaponDOF {
	uint32_t IsActive : 1; // 0x0
	EDOFType DOFType; // 0x4
	float Falloff; // 0x8
	float BlurKernelSize; // 0xc
	EFocusType FocusType; // 0x10
	float FocusInnerRadius; // 0x14
	float FocusDistance; // 0x18
	float MaxNearBlurAmount; // 0x1c
	float MinBlurAmount; // 0x20
	float MaxFarBlurAmount; // 0x24
};

struct FBotLifeData {
	uint32_t bAlive : 1; // 0x0
	int32_t nSpawnTime; // 0x4
	int32_t nRespawnTime; // 0x8
	TArray<int32_t> m_DeathTimes; // 0xc
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FReverbSettings {
	uint32_t bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	float Volume; // 0x8
	float FadeTime; // 0xc
};

struct FUserEdgeData {
	FVector StartA; // 0x0
	FVector EndA; // 0xc
	FVector StartB; // 0x18
	FVector EndB; // 0x24
	char TraversalType; // 0x30
	float EdgeCost; // 0x34
};

struct FExposedLink {
	FCoverReference TargetActor; // 0x0
	char ExposedScale; // 0x1c
};

struct FDynamicResourceProviderDefinition {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	UUIResourceCombinationProvider* ProviderClass; // 0x18
};

struct FStaticMeshLODElement {
	ObjectProperty Material; // 0x0
	uint32_t bEnableShadowCasting : 1; // 0x8
	uint32_t bEnableCollision : 1; // 0x10
};

struct FFx_AssemblyData {
	FName m_nmSocketName; // 0x0
	FName m_nmDisplayGroup; // 0x8
	int32_t m_nDisplayMode; // 0x10
	int32_t m_nSpecialFxId; // 0x14
	int32_t m_nIndex; // 0x18
	int32_t m_nEquipmentSlot; // 0x1c
	uint32_t m_bAppliesToAllModes : 1; // 0x20
	uint32_t m_bAttachToGround : 1; // 0x20
};

struct FEEmoteCategoryChance {
	float fDefault; // 0x0
	float fPlayerVGS; // 0x4
	float fAbilityOnCooldown; // 0x8
	float fTakingDamage; // 0xc
	float fCelebration; // 0x10
	float fKills; // 0x14
	float fAction; // 0x18
	float fContext; // 0x1c
	float fUltimate; // 0x20
	float fOverride; // 0x24
	float fMovement; // 0x28
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FNotificationMessageInfo {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FPlayOfTheGameInfo {
	ObjectProperty PRI; // 0x0
	float Rating; // 0x8
};

struct FLocalizedStringSettingMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0xc
	TArray<FStringIdToStringMapping> ValueMappings; // 0x1c
};

struct FApexClothingLodInfo {
	TArray<int32_t> ClothingSectionInfo; // 0x0
};

struct FQueuedImpactEffect {
	FVector HitLocation; // 0x0
	uint32_t bSuccessfulHit : 1; // 0xc
	ObjectProperty HitActor; // 0x10
	FVector HitNormal; // 0x18
	FVector FireOrigin; // 0x24
	int32_t nEquipSlot; // 0x30
};

struct FEventData {
	ObjectProperty _this; // 0x0
	ObjectProperty Target; // 0x8
	FString Type; // 0x10
	int32_t Data; // 0x20
	int32_t mouseIndex; // 0x24
	int32_t Button; // 0x28
	int32_t Index; // 0x2c
	int32_t lastIndex; // 0x30
};

struct FLandscapeLayerStruct {
	ObjectProperty LayerInfoObj; // 0x0
	uint32_t bSelected : 1; // 0x8
};

struct FPSE_Skin {
	int32_t nSkinId; // 0x0
	ObjectProperty SoundCue; // 0x4
};

struct FSessionUpdateInfo {
	TArray<FSessionMemberInfo> MembersJoined; // 0x0
	TArray<FSessionMemberInfo> MembersLeft; // 0x10
	uint32_t bHostDeviceTokenChanged : 1; // 0x20
	uint32_t bInitializationStateChanged : 1; // 0x20
	uint32_t bMatchmakingStatusChanged : 1; // 0x20
	uint32_t bMemberJoinedOrLeft : 1; // 0x20
	uint32_t bMemberStatusChanged : 1; // 0x20
	uint32_t bSessionJoinabilityChanged : 1; // 0x20
	uint32_t bCustomPropertyChange : 1; // 0x20
	uint32_t bMemberCustomPropertyChange : 1; // 0x20
};

struct FMobileDistanceFieldParams {
	float Gamma; // 0x0
	float AlphaRefVal; // 0x4
	float SmoothWidth; // 0x8
	uint32_t EnableShadow : 1; // 0xc
	FVector2D ShadowDirection; // 0x10
	FLinearColor ShadowColor; // 0x18
	float ShadowSmoothWidth; // 0x28
	FDepthFieldGlowInfo GlowInfo; // 0x2c
	int32_t BlendMode; // 0x50
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FPhysXSimulationProperties {
	uint32_t bUseHardware : 1; // 0x0
	uint32_t bFixedTimeStep : 1; // 0x0
	float TimeStep; // 0x4
	int32_t MaxSubSteps; // 0x8
};

struct FOptionData {
	float fValue; // 0x0
	float fOther; // 0x4
	FString sName; // 0x8
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FHudMarker {
	float fOrigBotY; // 0x0
	float fOrigTopY; // 0x4
	float fValue; // 0x8
	float fTime; // 0xc
	float fAngle; // 0x10
	float fOffset; // 0x14
	uint32_t bActive : 1; // 0x18
	FVector vHitLoc; // 0x1c
	FVector vPawnLoc; // 0x28
	ObjectProperty pObj; // 0x34
	ObjectProperty pTop; // 0x3c
	ObjectProperty pBot; // 0x44
};

struct FUIHistoryData {
	int32_t nId; // 0x0
	int32_t nClass; // 0x4
	FString sDate; // 0x8
	FString sMode; // 0x18
	FString sScore; // 0x28
	EHistoryResult eResult; // 0x38
	FString sDuration; // 0x3c
	FDateTimeWrapper dtEvent; // 0x4c
};

struct FUtilitySet {
	FUtilityFunctionList Functions; // 0x0
	FUtilityFunctionList Filters; // 0x24
};

struct FCoverReference : FActorReference {
	int32_t SlotIdx; // 0x18
};

struct FTitleSafeZoneArea {
	float MaxPercentX; // 0x0
	float MaxPercentY; // 0x4
	float RecommendedPercentX; // 0x8
	float RecommendedPercentY; // 0xc
};

struct FFootstepSoundInfo {
	FName MaterialType; // 0x0
	ObjectProperty Sound; // 0x8
};

struct FPawnClassEventData {
	FName PawnClassName; // 0x0
};

struct FUtilityFunctionList {
	FPointer UtilityFunctionList; // 0x0
	int32_t UtilityFunctionListCount; // 0x8
	FPointer StaticMemory; // 0xc
	FPointer CachedUtilities; // 0x14
	FPointer DynamicStorageMemory; // 0x1c
};

struct FConsoleMessage {
	FString Text; // 0x0
	FColor TextColor; // 0x10
	float MessageLife; // 0x14
	ObjectProperty PRI; // 0x18
};

struct FJointConstraintInformation {
	float AngleConstraint; // 0x0
	float StretchConstraint; // 0x4
};

struct FTgAIBotPlayersToSpawn {
	FString fsName; // 0x0
	int32_t nBotId; // 0x10
	Fdword dwPlayerId; // 0x14
	int32_t nTaskForceId; // 0x18
	int32_t nSpawnTableDetailId; // 0x1c
};

struct FTgSilhouetteInfo {
	SafeObjectProperty Silhouette; // 0x0
	ComponentProperty ParentMesh; // 0xc
};

struct FDeferredLeaderboardWrite {
	FString LeaderboardName; // 0x0
	int32_t Score; // 0x10
	TArray<int32_t> LeaderboardData; // 0x14
};

struct FUIKeyRepeatData {
	FName CurrentRepeatKey; // 0x0
	FDouble NextRepeatTime; // 0x8
};

struct FAmmoTransaction {
	float TransactionTimestamp; // 0x0
	int32_t TransactionId; // 0x4
	int32_t AmmoAmountChanged; // 0x8
	uint32_t FilledClip : 1; // 0xc
};

struct FOnlineFriendMessage {
	FUniqueNetId SendingPlayerId; // 0x0
	FString SendingPlayerNick; // 0x8
	uint32_t bIsFriendInvite : 1; // 0x18
	uint32_t bIsGameInvite : 1; // 0x18
	uint32_t bWasAccepted : 1; // 0x18
	uint32_t bWasDenied : 1; // 0x18
	FString Message; // 0x1c
};

struct FCurrentPlayerMet {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FCheckpointRecord {
	uint32_t bCollideActors : 1; // 0x0
};

struct FAvoidOtherSampleItem {
	int32_t RotOffset; // 0x0
	char NumMagSamples; // 0x4
	uint32_t bFallbackOnly : 1; // 0x8
};

struct FTEAMSTAT_INFO {
	ObjectProperty pObj; // 0x0
	ObjectProperty pIcon; // 0x8
	ObjectProperty pText; // 0x10
	ObjectProperty pTip; // 0x18
	ObjectProperty pBar; // 0x20
	ObjectProperty pBackground; // 0x28
	ObjectProperty pMask; // 0x30
	FString sIcon; // 0x38
	float fMaskBaseWidth; // 0x48
};

struct FNxDestructibleParameters {
	FNxDestructibleDamageParameters DamageParameters; // 0x0
	FNxDestructibleDebrisParameters DebrisParameters; // 0x14
	FNxDestructibleAdvancedParameters AdvancedParameters; // 0x40
	float DamageThreshold; // 0x58
	float DamageToRadius; // 0x5c
	float DamageCap; // 0x60
	float ForceToDamage; // 0x64
	float ImpactVelocityThreshold; // 0x68
	float MaterialStrength; // 0x6c
	float DamageToPercentDeformation; // 0x70
	float DeformationPercentLimit; // 0x74
	uint32_t bFormExtendedStructures : 1; // 0x78
	int32_t SupportDepth; // 0x7c
	int32_t MinimumFractureDepth; // 0x80
	int32_t DebrisDepth; // 0x84
	int32_t EssentialDepth; // 0x88
	float DebrisLifetimeMin; // 0x8c
	float DebrisLifetimeMax; // 0x90
	float DebrisMaxSeparationMin; // 0x94
	float DebrisMaxSeparationMax; // 0x98
	FBox ValidBounds; // 0x9c
	float MaxChunkSpeed; // 0xb8
	float MassScaleExponent; // 0xbc
	FNxDestructibleParametersFlag Flags; // 0xc0
	float GrbVolumeLimit; // 0xc4
	float GrbParticleSpacing; // 0xc8
	float FractureImpulseScale; // 0xcc
	TArray<FNxDestructibleDepthParameters> DepthParameters; // 0xd0
	int32_t DynamicChunksDominanceGroup; // 0xe0
	uint32_t UseDynamicChunksGroupsMask : 1; // 0xe4
	ERBCollisionChannel DynamicChunksChannel; // 0xe8
	FRBCollisionChannelContainer DynamicChunksCollideWithChannels; // 0xec
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FRenderingPerformanceOverrides {
	uint32_t bAllowAmbientOcclusion : 1; // 0x0
	uint32_t bAllowDominantWholeSceneDynamicShadows : 1; // 0x0
	uint32_t bAllowMotionBlurSkinning : 1; // 0x0
	uint32_t bAllowTemporalAA : 1; // 0x0
	uint32_t bAllowLightShafts : 1; // 0x0
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FClientBeaconConnection {
	FUniqueNetId PartyLeader; // 0x0
	float ElapsedHeartbeatTime; // 0x8
	FPointer Socket; // 0xc
};

struct FTGTEAM_ENTRY {
	FString fsName; // 0x0
	FString fsMapName; // 0x10
	int32_t nHealth; // 0x20
	int32_t nMaxHealth; // 0x24
	uint32_t bLeader : 1; // 0x28
	ObjectProperty pPrep; // 0x2c
};

struct FTimerData {
	uint32_t bLoop : 1; // 0x0
	uint32_t bPaused : 1; // 0x0
	FName FuncName; // 0x4
	float Rate; // 0xc
	float Count; // 0x10
	float TimerTimeDilation; // 0x14
	ObjectProperty TimerObj; // 0x18
};

struct FEEmoteAbilityChance {
	float fDefault; // 0x0
	float fAbility1; // 0x4
	float fAbility2; // 0x8
	float fAbility3; // 0xc
	float fMount; // 0x10
};

struct FStompElement {
	float fTangentToVelocity; // 0x0
	ObjectProperty pStompRep; // 0x4
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FUIQueuedSounds {
	float fStartTime; // 0x0
	ObjectProperty akSound; // 0x4
};

struct FSynchGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty MasterNode; // 0x10
	FName GroupName; // 0x18
	uint32_t bFireSlaveNotifies : 1; // 0x20
	float RateScale; // 0x24
};

struct FStateScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
};

struct FSavedChargeState {
	uint32_t m_bWantsCharge : 1; // 0x0
	float m_fCurrentTimeInCharge; // 0x4
	uint32_t m_bUsePhysFlyingForCharge : 1; // 0x8
	FVector m_vChargeDirection; // 0xc
	float m_fChargeSpeed; // 0x18
	float m_fChargeTime; // 0x1c
	float m_fPostChargeVelocityMult; // 0x20
	float m_fPostChargeVelocityCap; // 0x24
	uint32_t m_bPostChargeUseWalkSpeed : 1; // 0x28
	uint32_t m_bChargeRespectsMoveSpeedMultipliers : 1; // 0x28
};

struct FCachedTgAnimNodeStanceTransitionInfo {
	int32_t Index; // 0x0
	ObjectProperty Node; // 0x4
};

struct FViewTargetInfo {
	ObjectProperty Pawn; // 0x0
	ObjectProperty ClosestEnemyTower; // 0x8
	int32_t Rating; // 0x10
	float DistSqToClosestEnemy; // 0x14
	float DistSqToClosestFriend; // 0x18
	float DistSqToGoldFury; // 0x1c
	float DistSqToEnemyTower; // 0x20
	int32_t NumCloseEnemies; // 0x24
	int32_t NumCloseFriends; // 0x28
};

struct FMcpClashMobChallengeUserStatus {
	FString unique_challenge_id; // 0x0
	FString unique_user_id; // 0x10
	int32_t num_attempts; // 0x20
	int32_t num_successful_attempts; // 0x24
	int32_t goal_progress; // 0x28
	uint32_t did_complete : 1; // 0x2c
	FString last_update_time; // 0x30
	int32_t user_award_given; // 0x40
	FString accept_time; // 0x44
	uint32_t did_preregister : 1; // 0x54
	FString facebook_like_time; // 0x58
	uint32_t enrolled_via_facebook : 1; // 0x68
	uint32_t liked_via_facebook : 1; // 0x68
	uint32_t commented_via_facebook : 1; // 0x68
	FString twitter_retweet_time; // 0x6c
	uint32_t enrolled_via_twitter : 1; // 0x7c
	uint32_t retweeted : 1; // 0x7c
};

struct FAdjustDamageParams {
	ObjectProperty Dev; // 0x0
	FImpactInfo Impact; // 0x8
	float fBaseDamage; // 0x84
	int32_t nPropertyId; // 0x88
	uint32_t bCritical : 1; // 0x8c
	FExtraDamageInfo ExtraInfo; // 0x90
};

struct FImpactInfo {
	ObjectProperty HitActor; // 0x0
	FVector HitLocation; // 0x8
	FVector HitNormal; // 0x14
	FVector RayDir; // 0x20
	FVector StartTrace; // 0x2c
	FTraceHitInfo HitInfo; // 0x38
	float PercAbsorbedDamage; // 0x60
	ObjectProperty DeviceModeReference; // 0x64
	ObjectProperty Projectile; // 0x6c
	uint32_t bDirectHit : 1; // 0x74
	char nShotsHit; // 0x78
};

struct FActivateOp {
	ObjectProperty ActivatorOp; // 0x0
	ObjectProperty Op; // 0x8
	int32_t InputIdx; // 0x10
	float RemainingDelay; // 0x14
};

struct FPBParamSwatch {
	FName SwatchName; // 0x0
	TArray<FPBMaterialParam> Params; // 0x8
};

struct FConfiguredGameSetting {
	int32_t GameSettingId; // 0x0
	FString GameSettingsClassName; // 0x4
	FString URL; // 0x14
	ObjectProperty GameSettings; // 0x24
};

struct FImpactToValidate {
	int32_t PackedAssociatedShotIDs; // 0x0
	float ImpactTimeStamp; // 0x4
	FImpactInfo Impact; // 0x8
	char byPackedExtraInfo; // 0x84
	char byOffsetX; // 0x85
	char byOffsetY; // 0x86
	char byOffsetZ; // 0x87
};

struct FRecognisableWord {
	int32_t Id; // 0x0
	FString ReferenceWord; // 0x4
	FString PhoneticWord; // 0x14
};

struct FFireLink {
	TArray<char> Interactions; // 0x0
	int32_t PackedProperties_CoverPairRefAndDynamicInfo; // 0x10
	uint32_t bFallbackLink : 1; // 0x14
	uint32_t bDynamicIndexInited : 1; // 0x14
};

struct FMaterialStackInstance {
	int32_t nId; // 0x0
	int32_t nPriority; // 0x4
	TArray<ObjectProperty> MICs; // 0x8
	uint32_t bTimelapse : 1; // 0x18
};

struct FLandscapeWeightmapUsage {
	ComponentProperty ChannelUsage[0x4]; // 0x0
};

struct FMolotovTriangleInfo {
	int32_t index1; // 0x0
	int32_t index2; // 0x4
	int32_t index3; // 0x8
	int32_t neighborIndex1; // 0xc
	int32_t neighborIndex2; // 0x10
	int32_t neighborIndex3; // 0x14
	int32_t nRank; // 0x18
	float fHeatLevel; // 0x1c
	FVector vTriCenter; // 0x20
	FVector vCenterDirection; // 0x2c
};

struct FTextureLinkedListMirror {
	FPointer Element; // 0x0
	FPointer Next; // 0x8
	FPointer PrevLink; // 0x10
};

struct FCameraShakeInstance {
	ObjectProperty SourceShake; // 0x0
	FName SourceShakeName; // 0x8
	float OscillatorTimeRemaining; // 0x10
	uint32_t bBlendingIn : 1; // 0x14
	float CurrentBlendInTime; // 0x18
	uint32_t bBlendingOut : 1; // 0x1c
	float CurrentBlendOutTime; // 0x20
	FVector LocSinOffset; // 0x24
	FVector RotSinOffset; // 0x30
	float FOVSinOffset; // 0x3c
	FVector2D HUDSinOffset; // 0x40
	float Scale; // 0x48
	ObjectProperty AnimInst; // 0x4c
	ECameraAnimPlaySpace PlaySpace; // 0x54
	FMatrix UserPlaySpaceMatrix; // 0x60
};

struct FPlayOfTheGameEventData {
	EPlayOfTheGameEventType EventType; // 0x0
	float TimeStamp; // 0x4
	float WeightedRating; // 0x8
};

struct FTViewTarget {
	ObjectProperty Target; // 0x0
	ObjectProperty Controller; // 0x8
	FTPOV POV; // 0x10
	float AspectRatio; // 0x34
	ObjectProperty PRI; // 0x38
};

struct FAkEventTrackKey {
	float Time; // 0x0
	ObjectProperty Event; // 0x4
};

struct FInputMatchRequest {
	TArray<FInputEntry> Inputs; // 0x0
	ObjectProperty MatchActor; // 0x10
	FName MatchFuncName; // 0x18
	DelegateProperty MatchDelegate; // 0x20
	FName FailedFuncName; // 0x30
	FName RequestName; // 0x38
	int32_t MatchIdx; // 0x40
	float LastMatchTime; // 0x44
};

struct FKnockbackHit {
	FVector vHitNormal; // 0x0
	ObjectProperty aHitActor; // 0xc
};

struct FRecentStunnedTarget {
	ObjectProperty Target; // 0x0
	float fTimestamp; // 0x8
};

struct FCrowdSpawnInfoItem {
	ObjectProperty SeqSpawner; // 0x0
	uint32_t bSpawningActive : 1; // 0x8
	float SpawnRate; // 0xc
	int32_t SpawnNum; // 0x10
	float Remainder; // 0x14
	TArray<ObjectProperty> ActiveAgents; // 0x18
	TArray<FAgentArchetypeInfo> AgentArchetypes; // 0x28
	float AgentFrequencySum; // 0x38
	float MaxSpawnDist; // 0x3c
	float MaxSpawnDistSq; // 0x40
	float MinBehindSpawnDist; // 0x44
	float MinBehindSpawnDistSq; // 0x48
	float AgentWarmupTime; // 0x4c
	uint32_t bForceObstacleChecking : 1; // 0x50
	uint32_t bForceNavMeshPathing : 1; // 0x50
	uint32_t bEnableCrowdLightEnvironment : 1; // 0x50
	uint32_t bCastShadows : 1; // 0x50
	FLightingChannelContainer AgentLightingChannel; // 0x54
	int32_t NumAgentsToTickPerFrame; // 0x58
	int32_t LastAgentTickedIndex; // 0x5c
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x60
	float SpawnPrioritizationInterval; // 0x70
	int32_t PrioritizationIndex; // 0x74
	int32_t PrioritizationUpdateIndex; // 0x78
	TArray<ObjectProperty> PrioritizedSpawnPoints; // 0x7c
	float PlayerPositionPredictionTime; // 0x8c
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FSavedTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FFastDamageEntry {
	int32_t nDamage; // 0x0
	float fTime; // 0x4
};

struct FMeshAssets {
	FString m_sSkeletalMesh; // 0x0
	FString m_sPhysicsAsset; // 0x10
	FString m_sAnimTreeTemplate; // 0x20
	FString m_sAnimSets; // 0x30
};

struct FLocalizedStringSetting {
	int32_t Id; // 0x0
	int32_t ValueIndex; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x8
};

struct FUIAxisEmulationDefinition {
	FName AxisInputKey; // 0x0
	FName AdjacentAxisInputKey; // 0x8
	uint32_t bEmulateButtonPress : 1; // 0x10
	FName InputKeyToEmulate[0x2]; // 0x14
};

struct FDominantShadowInfo {
	FMatrix WorldToLight; // 0x0
	FMatrix LightToWorld; // 0x40
	FBox LightSpaceImportanceBounds; // 0x80
	int32_t ShadowMapSizeX; // 0x9c
	int32_t ShadowMapSizeY; // 0xa0
};

struct FHitReactionInfo {
	FVector2D vDesiredAngle; // 0x0
	float fHitTime; // 0x8
};

struct FCastingInfo {
	int32_t nWidth; // 0x0
	uint32_t bActive : 1; // 0x4
	float fPercent; // 0x8
	ObjectProperty pObj; // 0xc
	ObjectProperty pText; // 0x14
	ObjectProperty pAnim; // 0x1c
};

struct FSocialPostLinkInfo : FSocialPostImageInfo {
	FString TitleURL; // 0x44
	FString PictureURL; // 0x54
};

struct FRotator {
	int32_t Pitch; // 0x0
	int32_t Yaw; // 0x4
	int32_t Roll; // 0x8
};

struct FWaypointObjective {
	ObjectProperty pClip; // 0x0
	ObjectProperty pIcon; // 0x8
	ObjectProperty pDist; // 0x10
	ObjectProperty pPulse; // 0x18
	ObjectProperty pTitle; // 0x20
	uint32_t bVisible : 1; // 0x28
};

struct FMcpGroupMember {
	FString MemberId; // 0x0
	EMcpGroupAcceptState AcceptState; // 0x10
};

struct FUIPlayerOverlay : FUITargetableOverlay {
	int32_t nMarked; // 0x84
	int32_t nStreak; // 0x88
	int32_t nUltCharge; // 0x8c
	float fBarragePercent; // 0x90
	ObjectProperty pMarked; // 0x94
	ObjectProperty pStreak; // 0x9c
	ObjectProperty pUltimatePercent; // 0xa4
	ObjectProperty pBarrageFrame; // 0xac
	ObjectProperty pBarrageMeter; // 0xb4
	ObjectProperty pHuntersMark; // 0xbc
	ObjectProperty pLexExecuteMark; // 0xc4
	ObjectProperty pLexTargetMark; // 0xcc
	ObjectProperty pLexVengeanceMark; // 0xd4
	ObjectProperty pLexExecuteGuide; // 0xdc
	ObjectProperty pAstroLotus; // 0xe4
	ObjectProperty pCorvusMark; // 0xec
	ObjectProperty pReiMark; // 0xf4
	ObjectProperty pSevenMark; // 0xfc
	ObjectProperty pRespawnMask; // 0x104
	ObjectProperty pSoulCharges; // 0x10c
	ObjectProperty pTelepunch; // 0x114
	ObjectProperty pMojiCounter; // 0x11c
	ObjectProperty pCorrupterUI; // 0x124
	float fHideTimer; // 0x12c
	uint32_t bInParty : 1; // 0x130
	EPlayerIconState eIconState; // 0x134
	uint32_t bShowPlayerName : 1; // 0x138
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FLensFlareElement {
	FName ElementName; // 0x0
	float RayDistance; // 0x8
	uint32_t bIsEnabled : 1; // 0xc
	uint32_t bUseSourceDistance : 1; // 0xc
	uint32_t bNormalizeRadialDistance : 1; // 0xc
	uint32_t bModulateColorBySource : 1; // 0xc
	FVector Size; // 0x10
	TArray<ObjectProperty> LFMaterials; // 0x1c
	FRawDistributionFloat LFMaterialIndex; // 0x2c
	FRawDistributionFloat Scaling; // 0x50
	FRawDistributionVector AxisScaling; // 0x74
	FRawDistributionFloat Rotation; // 0x98
	uint32_t bOrientTowardsSource : 1; // 0xbc
	FRawDistributionVector Color; // 0xc0
	FRawDistributionFloat Alpha; // 0xe4
	FRawDistributionVector Offset; // 0x108
	FRawDistributionVector DistMap_Scale; // 0x12c
	FRawDistributionVector DistMap_Color; // 0x150
	FRawDistributionFloat DistMap_Alpha; // 0x174
};

struct FOnlineImageDownload {
	FString URL; // 0x0
	ObjectProperty HTTPRequest; // 0x10
	EOnlineImageDownloadState State; // 0x18
	uint32_t bPendingRemoval : 1; // 0x1c
	ObjectProperty Texture; // 0x20
};

struct FClientConnectionRequest {
	FUniqueNetId PlayerNetId; // 0x0
	ENATType NatType; // 0x8
	uint32_t bCanHostVs : 1; // 0xc
	float GoodHostRatio; // 0x10
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x14
	int32_t MinutesSinceLastTest; // 0x24
};

struct FRewardInfo {
	int32_t RequestedReward; // 0x0
	int32_t BoostReward; // 0x4
	int32_t ActualReward; // 0x8
	int32_t ActualRewardAccum; // 0xc
	int32_t BoostRewardAccum; // 0x10
	int32_t ErrorMessage; // 0x14
};

struct FQueuedActivationInfo {
	ObjectProperty ActivatedEvent; // 0x0
	ObjectProperty InOriginator; // 0x8
	ObjectProperty InInstigator; // 0x10
	TArray<int32_t> ActivateIndices; // 0x18
	uint32_t bPushTop : 1; // 0x28
};

struct FGameSettingsCfg {
	UOnlineGameSettings* GameSettingsClass; // 0x0
	ObjectProperty Provider; // 0x8
	ObjectProperty GameSettings; // 0x10
	FName SettingsName; // 0x18
};

struct FSteamUserCloudMetadata {
	FString UserId; // 0x0
	TArray<FEmsFile> UserCloudMetadata; // 0x10
};

struct FSaveSlotRequestState {
	FString McpId; // 0x0
	FString SaveSlotId; // 0x10
	ObjectProperty Request; // 0x20
};

struct FAnimBlendInfo {
	FName AnimName; // 0x0
	FAnimInfo AnimInfo; // 0x8
	float Weight; // 0x1c
};

struct FFaceFXTrackKey {
	float StartTime; // 0x0
	FString FaceFXGroupName; // 0x4
	FString FaceFXSeqName; // 0x14
};

struct FTgRandomAnimInfo {
	float Chance; // 0x0
	char LoopCountMin; // 0x4
	char LoopCountMax; // 0x5
	float BlendInTime; // 0x8
	uint32_t bCanRepeat : 1; // 0xc
	char LoopCount; // 0x10
	uint32_t bCallOnAnimEndOnParent : 1; // 0x14
	uint32_t m_bChooseNewNodeOnAnimEnd : 1; // 0x14
	FVector2D m_ChildActiveTime; // 0x18
};

struct FStickyBombPendingDetonate {
	int32_t nProjID; // 0x0
	int32_t nDeployID; // 0x4
	FVector vExplodeLocation; // 0x8
};

struct FTipSavedState {
	int32_t nTipId; // 0x0
	int32_t nMatchVisibleCount; // 0x4
	int32_t nTotalVisibleCount; // 0x8
	float fLastVisibleTime; // 0xc
	uint32_t nCompletedCount : 1; // 0x10
	uint32_t bSuppressed : 1; // 0x10
};

struct FMcpInventorySaveSlot {
	FString OwningMcpId; // 0x0
	FString SaveSlotId; // 0x10
	TArray<FMcpInventoryItem> Items; // 0x20
};

struct FTerrainDecoration {
	ObjectProperty Factory; // 0x0
	float MinScale; // 0x8
	float MaxScale; // 0xc
	float Density; // 0x10
	float SlopeRotationBlend; // 0x14
	int32_t RandSeed; // 0x18
	TArray<FTerrainDecorationInstance> Instances; // 0x1c
};

struct FChildBlendParam {
	int32_t FromChild; // 0x0
	int32_t ToChild; // 0x4
	float BlendTime; // 0x8
	float MaxBlendTime; // 0xc
};

struct FManagedValue {
	FName ValueId; // 0x0
	int32_t Value; // 0x8
};

struct FRegisterUserRequest {
	FString UDID; // 0x0
	FString McpId; // 0x10
	ObjectProperty Request; // 0x20
};

struct FMetaDataKeyFrame {
	float Time; // 0x0
	float TargetValue; // 0x4
};

struct FMcpGroupList {
	FString RequesterId; // 0x0
	TArray<FMcpGroup> Groups; // 0x10
};

struct FUIITEMRANK {
	int32_t nId; // 0x0
	int32_t nRank; // 0x4
	int32_t nCost; // 0x8
};

struct FKismetDrawTextInfo {
	FString MessageText; // 0x0
	FString AppendedText; // 0x10
	ObjectProperty MessageFont; // 0x20
	FVector2D MessageFontScale; // 0x28
	FVector2D MessageOffset; // 0x30
	FColor MessageColor; // 0x38
	float MessageEndTime; // 0x3c
};

struct FLobbySMAMeterBus {
	Fdword dwBusID; // 0x0
	LobbyMeterBusIntent eIntent; // 0x4
	ObjectProperty akOnStop; // 0x8
};

struct FFunctionWrapperInfo {
	FPointer FunctionWrapper; // 0x0
	char CallbackType; // 0x8
	ObjectProperty HandleOwner; // 0xc
};

struct FLerpToInstruction {
	FString Id; // 0x0
	float Time; // 0x10
	FString LerpToId; // 0x14
};

struct FMenuListDragInfo {
	uint32_t bIsDragging : 1; // 0x0
	ObjectProperty TouchedItem; // 0x4
	FSelectedMenuItem OrigSelectedItem; // 0xc
	FVector2D StartTouch; // 0x18
	float TouchTime; // 0x20
	float ScrollAmount; // 0x24
	float AbsScrollAmount; // 0x28
	FDragHistoryData UpdateHistory[0x4]; // 0x2c
	int32_t NumUpdates; // 0x4c
	uint32_t bHasSelectedChanged : 1; // 0x50
};

struct FBloodStoneTarget {
	ObjectProperty pTarget; // 0x0
	float fTime; // 0x8
};

struct FCompositeTextureType {
	ObjectProperty CompTexture; // 0x0
	FName TextureParamName; // 0x8
};

struct FCrowdSpawnerPlayerInfo {
	FVector ViewLocation; // 0x0
	FRotator ViewRotation; // 0xc
	FVector PredictLocation; // 0x18
	ObjectProperty PC; // 0x24
};

struct FParticleSystemLOD {
	uint32_t bLit : 1; // 0x0
};

struct FMeshAccessoryStorage {
	ComponentProperty m_Accessory; // 0x0
	ObjectProperty m_Source; // 0x8
};

struct FLightmassLightSettings {
	float IndirectLightingScale; // 0x0
	float IndirectLightingSaturation; // 0x4
	float ShadowExponent; // 0x8
};

struct FFx_Material {
	int32_t nFxMatId; // 0x0
	ObjectProperty c_MITV; // 0x4
	int32_t nFxMatTypeCode; // 0xc
	FName nmMIC; // 0x10
	uint32_t bApplyIfSameTeam : 1; // 0x18
};

struct FFuriaFTrackingTargets {
	ObjectProperty PotentialTarget; // 0x0
	float fScore; // 0x8
};

struct FDiminishedEffectInfo {
	float fMaxPosValue; // 0x0
	float fPosTotal; // 0x4
	float fMaxNegValue; // 0x8
	float fNegTotal; // 0xc
};

struct FFaceFXSoundCueKey {
	ObjectProperty FaceFXSoundCue; // 0x0
	ObjectProperty FaceFXAkEvent; // 0x8
};

struct Fm_PhaseProfile {
	int32_t m_Phase; // 0x0
	TArray<Fm_PhaseTransitionAnimSet> m_TransitionAnimSets; // 0x4
};

struct FLobbyTransitionPlayer {
	int32_t nClassId; // 0x0
	FString sPlayerName; // 0x4
	FString sClassName; // 0x14
};

struct FSkinChildInfo {
	int32_t nSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FBunnyHealHistoryEntry {
	ObjectProperty TargetPawn; // 0x0
	float fBounceDelay; // 0x8
	ObjectProperty HealProj; // 0xc
	uint32_t bValidImpact : 1; // 0x14
};

struct FWeaponSkinChildInfo {
	int32_t nWeaponSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FMiniMapServerEntity {
	FVector vLocation; // 0x0
	MiniMapEntityType eType; // 0xc
	int32_t nSubType; // 0x10
	int32_t nProfileId; // 0x14
	TgMapTeam Team; // 0x18
	int32_t nVisionRange; // 0x1c
	uint32_t bIsDead : 1; // 0x20
	ObjectProperty RepInfo; // 0x24
	int32_t nIdx; // 0x2c
	uint32_t bMarked : 1; // 0x30
	char bVisibleOnMap; // 0x34
	char bVisibleBySentinel; // 0x35
	uint32_t bVisibleByDetector : 1; // 0x38
	float fLastPingTime; // 0x3c
	uint32_t bRequireLOS : 1; // 0x40
	uint32_t bDetector : 1; // 0x40
	uint32_t bSentinel : 1; // 0x40
	char byVisionMask; // 0x44
	float fHealthPCT; // 0x48
	ObjectProperty FogOfWarArea; // 0x4c
	uint32_t FogOfWarAreaRevealed : 1; // 0x54
};

struct FLevelGridCellCoordinate {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FSevenMarkedTargetInfo {
	int32_t nTargetPawnId; // 0x0
	int32_t nMarkedCount; // 0x4
};

struct FGameStatGroup {
	EGameStatGroups Group; // 0x0
	int32_t Level; // 0x4
};

struct FQueuedSoundEvent {
	float fDelay; // 0x0
	TScriptInterface<Class> SNActor; // 0x4
	ENotifySound eSound; // 0x14
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct Fm_TransitionAnimSet {
	TG_POSTURE m_TransitionToPosture; // 0x0
	FName m_TransitionAnimName; // 0x4
};

struct FStaticMeshLODInfo {
	TArray<FStaticMeshLODElement> Elements; // 0x0
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float StereoBleed; // 0x8
	float LFEBleed; // 0xc
	float VoiceCenterChannelVolume; // 0x10
	float RadioFilterVolume; // 0x14
	float RadioFilterVolumeThreshold; // 0x18
	uint32_t bApplyEffects : 1; // 0x1c
	uint32_t bAlwaysPlay : 1; // 0x1c
	uint32_t bIsUISound : 1; // 0x1c
	uint32_t bIsMusic : 1; // 0x1c
	uint32_t bReverb : 1; // 0x1c
	uint32_t bCenterChannelOnly : 1; // 0x1c
	uint32_t bApplyAmbientVolumes : 1; // 0x1c
	uint32_t bApplyInsulationVolumes : 1; // 0x1c
	FName m_nmSoundMode; // 0x20
	float m_fNonLocalPriorityBoost; // 0x28
	float m_fLocalPriorityBoost; // 0x2c
};

struct FTrackedDamagedTargets {
	ObjectProperty pTarget; // 0x0
	float fBonusDamageEndTime; // 0x8
};

struct FEmptyPanel {
	ObjectProperty mcRoot; // 0x0
	ObjectProperty mcTF0; // 0x8
	ObjectProperty mcTF1; // 0x10
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FSubscribedInputEventParameters : FInputEventParameters {
	FName InputAliasName; // 0x20
};

struct FGameCrowdAttachmentList {
	FName SocketName; // 0x0
	TArray<FGameCrowdAttachmentInfo> List; // 0x8
};

struct FDelayedImpactInfo {
	float fDeliveryDelayRemaining; // 0x0
	FImpactInfo Impact; // 0x4
};

struct FTerrainLayer {
	FString Name; // 0x0
	ObjectProperty Setup; // 0x10
	int32_t AlphaMapIndex; // 0x18
	uint32_t Highlighted : 1; // 0x1c
	uint32_t WireframeHighlighted : 1; // 0x1c
	uint32_t Hidden : 1; // 0x1c
	FColor HighlightColor; // 0x20
	FColor WireframeColor; // 0x24
	int32_t MinX; // 0x28
	int32_t MinY; // 0x2c
	int32_t MaxX; // 0x30
	int32_t MaxY; // 0x34
};

struct FDamageClassEventData {
	FName DamageClassName; // 0x0
};

struct FPComInputLightingPreset {
	FName PresetName; // 0x0
	FInterpCurveLinearColor Curve; // 0x8
	FLinearColor ColorTint; // 0x1c
	int32_t LoopCount; // 0x2c
	float PlaybackRate; // 0x30
	float BlendInTime; // 0x34
	int32_t Priority; // 0x38
};

struct FCameraStackInfo {
	TG_CAMERAPOSTURE ePosture; // 0x0
	int32_t nStackId; // 0x4
};

struct FCoverInfo {
	ObjectProperty Link; // 0x0
	int32_t SlotIdx; // 0x8
};

struct FChildrenBlendInfo {
	EPhysics m_PhysicsState; // 0x0
	TArray<FChildBlendInfo> m_ChildBlendInfo; // 0x4
};

struct FUIPooledOverlayData {
	ObjectProperty pClip; // 0x0
	ObjectProperty pAnim; // 0x8
	ObjectProperty pText; // 0x10
	ObjectProperty pTF; // 0x18
	ObjectProperty pTF2; // 0x20
	EOverlayPoolType PoolType; // 0x28
};

struct FGFxStoredViewportParams {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Width; // 0x8
	int32_t Height; // 0xc
	uint32_t bInitialized : 1; // 0x10
};

struct Fdword {
	int32_t A; // 0x0
};

struct FParticleEventCollideData : FParticleEventData {
	float ParticleTime; // 0x34
	FVector Normal; // 0x38
	float Time; // 0x44
	int32_t Item; // 0x48
	FName BoneName; // 0x4c
};

struct FSplineSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	float Weight; // 0x18
	FDouble LastUpdateTime; // 0x1c
	float SourceInteriorVolume; // 0x24
	float SourceInteriorLPF; // 0x28
	float CurrentInteriorVolume; // 0x2c
	float CurrentInteriorLPF; // 0x30
};

struct FPlayerReservation {
	FUniqueNetId NetId; // 0x0
	int32_t Skill; // 0x8
	int32_t XpLevel; // 0xc
	FDouble Mu; // 0x10
	FDouble Sigma; // 0x18
	float ElapsedSessionTime; // 0x20
};

struct FPawnDamageMitigator {
	ObjectProperty MitigatingPawn; // 0x0
	PawnDamageMitigatorReason eReason; // 0x8
};

struct FSoftBodySpecialBoneInfo {
	FName BoneName; // 0x0
	SoftBodyBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0xc
};

struct FSpectatorBookmark {
	ObjectProperty ViewTarget; // 0x0
	SpectatorCameraMode ViewMode; // 0x8
	FTPOV POV; // 0xc
};

struct FActiveDecalInfo {
	ComponentProperty Decal; // 0x0
	float LifetimeRemaining; // 0x8
};

struct FSwitchRange {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FTimeModifier {
	float Time; // 0x0
	float TargetStrength; // 0x4
};

struct FWeightNodeRule {
	FName NodeName; // 0x0
	ObjectProperty CachedNode; // 0x8
	ObjectProperty CachedSlotNode; // 0x10
	EWeightCheck WeightCheck; // 0x18
	int32_t ChildIndex; // 0x1c
};

struct FAimComponent {
	FName BoneName; // 0x0
	FAimTransform LU; // 0x10
	FAimTransform LC; // 0x30
	FAimTransform LD; // 0x50
	FAimTransform CU; // 0x70
	FAimTransform CC; // 0x90
	FAimTransform CD; // 0xb0
	FAimTransform RU; // 0xd0
	FAimTransform RC; // 0xf0
	FAimTransform RD; // 0x110
};

struct FOrbitOptions {
	uint32_t bProcessDuringSpawn : 1; // 0x0
	uint32_t bProcessDuringUpdate : 1; // 0x0
	uint32_t bUseEmitterTime : 1; // 0x0
};

struct FOnlineGameSearchQuery {
	TArray<FOnlineGameSearchORClause> OrClauses; // 0x0
	TArray<FOnlineGameSearchSortClause> SortClauses; // 0x10
};

struct FWorldFractureSettings {
	float ChanceOfPhysicsChunkOverride; // 0x0
	uint32_t bEnableChanceOfPhysicsChunkOverride : 1; // 0x4
	uint32_t bLimitExplosionChunkSize : 1; // 0x4
	float MaxExplosionChunkSize; // 0x8
	uint32_t bLimitDamageChunkSize : 1; // 0xc
	float MaxDamageChunkSize; // 0x10
	int32_t MaxNumFacturedChunksToSpawnInAFrame; // 0x14
	float FractureExplosionVelScale; // 0x18
};

struct FQueuedImpactDecal {
	ObjectProperty ImpactFx; // 0x0
	FVector HitLocation; // 0x8
	FVector HitNormal; // 0x14
};

struct FsPingInfo {
	int32_t nPlayerId; // 0x0
	float fStartTime; // 0x4
	FVector vPingedLoc; // 0x8
	uint32_t bPinging : 1; // 0x14
	PING_TYPE eType; // 0x18
};

struct FTG_HUD_INFO {
	uint32_t bEnemy : 1; // 0x0
	uint32_t bShowNameplate : 1; // 0x0
	uint32_t bShowOverlays : 1; // 0x0
	uint32_t bIsTargeted : 1; // 0x0
	uint32_t bLocalPlayerHasLOS : 1; // 0x0
};

struct FASValue {
	ASType Type; // 0x0
	uint32_t B : 1; // 0x4
	float N; // 0x8
	int32_t I; // 0xc
	FString S; // 0x10
};

struct FRenderCommandFence {
	int32_t NumPendingFences; // 0x0
};

