TimeDateStamp = 0x673d5270
CheckSum = 0x2762f7e
GameVersion = "v3.0.4.31"
#define OFFSET_HIGHLIGHTSETTINGS 0xB2AD371
[Interfaces]
 
[Miscellaneous]
TimeDateStamp=0x673d5270
CheckSum=0x2762f7e
GameVersion=v3.0.4.31
NUM_ENT_ENTRIES=0x10000
cl_entitylist=0x2022bf8
LocalEntityHandle=0x181d228
InputSystem=0x19a2780
NameList=0xd506380
ViewRender=0x77bd448
ViewMatrix=0x11a350
CPlayer!lastVisibleTime=0x1990
CWeaponX!crosshairTargetTime=0x1994
CWeaponX!lastCrosshairTargetTime=0x1998
CPlayer!camera_origin=0x1ee0
CPlayer!camera_angles=0x1eec
CBaseAnimating!m_pStudioHdr=0xff0
HighlightSettings=0xb2ad370
NetworkVarTablePtr=0xd6ad4d0
NetworkVarTableLen=300
 
[NetworkedStringTables]
EffectDispatch=0x077bf3b8
ExtraParticleFilesTable=0x077beb08
ImpactEffectTableNames=0x077bd438
Materials=0x077beae0
Movies=0x077bfc70
ParticleEffectNames=0x077bf3c8
ScriptNames=0x077bd458
SkinNames=0x077bd4a0
SoundIDs=0x077bd480
VguiScreen=0x077beb00
WeaponNames=0x077bfc80
 
[Buttons]
in_break=0x077bff78
in_camin=0x0d5d7540
in_camout=0x0d507490
in_campitchdown=0x0d507268
in_campitchup=0x0d5d7560
in_camyawleft=0x0d507d30
in_camyawright=0x0d507480
in_commandermousemove=0x077bfce8
in_pause_menu=0x077bfe30
in_weaponCycle=0x077bfe88
 
[ClientClasses]
 
[ClientClass.Ids]
 
[ClientClass.Sizes]
 
[RecvTable.DT_AI_BaseNPC]
statuseffectsdata_npc=0x0000
m_localOrigin=0x0004
m_hGroundEntity=0x0324
m_iHealth=0x0328
m_localAngles=0x0388
m_iMaxHealth=0x0470
m_lifeState=0x0690
m_inventory=0x18c8
m_fireteamSlotIndex=0x1be0
m_aiSprinting=0x1d5a
m_aiNetworkFlags=0x1d7c
m_isHologram=0x1d80
m_title=0x1d81
m_aiSettingsIndex=0x1da4
m_subclass=0x1da8
 
[RecvTableTypes.DT_AI_BaseNPC]
@extends=DT_BaseCombatCharacter
statuseffectsdata_npc=DT_AI_BaseNPC_StatusEffects
m_localOrigin=Vector
m_hGroundEntity=Int
m_iHealth=Int
m_localAngles=Vector
m_iMaxHealth=Int
m_lifeState=Int
m_inventory=DT_WeaponInventoryActiveWeaponOnly
m_fireteamSlotIndex=Int
m_aiSprinting=Int
m_aiNetworkFlags=Int
m_isHologram=Int
m_title=String
m_aiSettingsIndex=Int
m_subclass=Int
 
[RecvTable.DT_AI_BaseNPC_StatusEffects]
m_statusEffectsTimedNPCNV=0x1be8
m_statusEffectsEndlessNPCNV=0x1c30
 
[RecvTableTypes.DT_AI_BaseNPC_StatusEffects]
m_statusEffectsTimedNPCNV=DataTable
m_statusEffectsEndlessNPCNV=DataTable
 
[RecvTable.DT_AmbientGeneric]
m_radius=0x0970
m_isEnabled=0x0974
m_networkTableSoundID=0x0980
m_networkedSegmentEndpointWorldSpace=0x0988
m_hasPolylineSegments=0x0994
 
[RecvTableTypes.DT_AmbientGeneric]
@extends=DT_BaseEntity
m_radius=Float
m_isEnabled=Int
m_networkTableSoundID=Int
m_networkedSegmentEndpointWorldSpace=Vector
m_hasPolylineSegments=Int
 
[RecvTable.DT_BaseAnimating]
serveranimdata=0x0000
m_animPlaybackRate=0x0010
m_animModelIndex=0x0014
m_animFrozen=0x001e
m_bClientSideRagdoll=0x001f
m_vecForce=0x0020
m_flPoseParameter=0x002c
m_flEstIkOffset=0x008c
m_passDamageToParent=0x06bc
m_animNetworkFlags=0x0998
m_animActive=0x099c
m_animCollisionEnabled=0x099f
m_animRelativeToGroundEnabled=0x09a0
m_animPlantingEnabled=0x09a1
m_animRelativeData=0x09a4
m_syncingWithEntity=0x0a94
m_predictedAnimEventData=0x0a98
m_nRagdollImpactFXTableId=0x0b04
m_flSkyScaleStartValue=0x0b08
m_flSkyScaleEndValue=0x0b0c
m_flSkyScaleStartTime=0x0b10
m_flSkyScaleEndTime=0x0b14
m_SequenceTransitioner=0x0b30
m_itemFlavorGUID=0x0d54
m_nSkin=0x0d60
m_skinMod=0x0d64
m_nBody=0x0d68
m_camoIndex=0x0d6c
m_nForceBone=0x0da8
m_bSequenceFinished=0x0e0c
m_lockedAnimDeltaYaw=0x0e10
m_flModelScale=0x0e18
 
[RecvTableTypes.DT_BaseAnimating]
@extends=DT_BaseEntity
serveranimdata=DT_ServerAnimationData
m_animPlaybackRate=Float
m_animModelIndex=Int
m_animFrozen=Int
m_bClientSideRagdoll=Int
m_vecForce=Vector
m_flPoseParameter=DataTable
m_flEstIkOffset=Float
m_passDamageToParent=Int
m_animNetworkFlags=Int
m_animActive=Int
m_animCollisionEnabled=Int
m_animRelativeToGroundEnabled=Int
m_animPlantingEnabled=Int
m_animRelativeData=DT_AnimRelativeData
m_syncingWithEntity=Int
m_predictedAnimEventData=DT_PredictedAnimEventData
m_nRagdollImpactFXTableId=Int
m_flSkyScaleStartValue=Float
m_flSkyScaleEndValue=Float
m_flSkyScaleStartTime=Time
m_flSkyScaleEndTime=Time
m_SequenceTransitioner=DT_SequenceTransitioner
m_itemFlavorGUID=Int
m_nSkin=Int
m_skinMod=Int
m_nBody=Int
m_camoIndex=Int
m_nForceBone=Int
m_bSequenceFinished=Int
m_lockedAnimDeltaYaw=Float
m_flModelScale=Float
 
[RecvTable.DT_BaseCombatCharacter]
bcc_localdata=0x0000
m_weaponGettingSwitchedOut=0x0008
m_showActiveWeapon3p=0x0010
m_vecViewOffset.x=0x0034
m_vecViewOffset.y=0x0038
m_vecViewOffset.z=0x003c
m_cloakEndTime=0x01cc
m_cloakFadeInEndTime=0x01d0
m_cloakFadeOutStartTime=0x01d4
m_cloakFadeInDuration=0x01d8
m_cloakFlickerAmount=0x01dc
m_cloakFlickerEndTime=0x01e0
m_networkedFlags=0x02d8
m_deathVelocity=0x0360
m_minimapData=0x0858
m_nameVisibilityFlags=0x08a8
m_bIsPlayerOverheating=0x1890
m_playerOverheatValue=0x1894
m_timeLastGeneratedPlayerOverheat=0x1898
m_lastFiredTime=0x18a0
m_lastFiredWeapon=0x18a4
m_raiseFromMeleeEndTime=0x18a8
m_sharedEnergyCount=0x18ac
m_sharedEnergyTotal=0x18b0
m_sharedEnergyLockoutThreshold=0x18b4
m_lastSharedEnergyRegenTime=0x18b8
m_sharedEnergyRegenRate=0x18bc
m_sharedEnergyRegenDelay=0x18c0
m_lastSharedEnergyTakeTime=0x18c4
m_selectedWeapons=0x1930
m_latestPrimaryWeapons=0x1934
m_latestPrimaryWeaponsIndexZeroOrOne=0x193c
m_latestNonOffhandWeapons=0x1944
m_lastCycleSlot=0x194c
m_weaponPermission=0x1954
m_weaponDelayEnableTime=0x1958
m_weaponDisabledInScript=0x195c
m_weaponDisabledFlags=0x1972
m_weaponInventorySlotLockedFlags=0x1974
m_weaponTypeDisabledFlags=0x1978
m_weaponTypeDisabledRefCount=0x197c
m_allowHudSelectionWhileWeaponsDisabled=0x1986
m_weaponAmmoRegenDisabled=0x1987
m_weaponAmmoRegenDisabledRefCount=0x1988
m_akimboState=0x198c
m_akimboShouldAltFire=0x198d
m_hudInfo_visibilityTestAlwaysPasses=0x198e
m_contextAction=0x19a0
m_phaseShiftType=0x19cc
m_phaseShiftTimeStart=0x19d0
m_phaseShiftTimeEnd=0x19d4
m_targetInfoPingValue=0x1b70
 
[RecvTableTypes.DT_BaseCombatCharacter]
@extends=DT_BaseAnimatingOverlay
bcc_localdata=DT_BCCLocalPlayerExclusive
m_weaponGettingSwitchedOut=DataTable
m_showActiveWeapon3p=DataTable
m_vecViewOffset.x=Float
m_vecViewOffset.y=Float
m_vecViewOffset.z=Float
m_cloakEndTime=Float
m_cloakFadeInEndTime=Time
m_cloakFadeOutStartTime=Float
m_cloakFadeInDuration=Float
m_cloakFlickerAmount=Float
m_cloakFlickerEndTime=Time
m_networkedFlags=Int
m_deathVelocity=Vector
m_minimapData=DT_MinimapBaseEntityData
m_nameVisibilityFlags=Int
m_bIsPlayerOverheating=Int
m_playerOverheatValue=Float
m_timeLastGeneratedPlayerOverheat=Time
m_lastFiredTime=Time
m_lastFiredWeapon=Int
m_raiseFromMeleeEndTime=Time
m_sharedEnergyCount=Int
m_sharedEnergyTotal=Int
m_sharedEnergyLockoutThreshold=Int
m_lastSharedEnergyRegenTime=Time
m_sharedEnergyRegenRate=Time
m_sharedEnergyRegenDelay=Float
m_lastSharedEnergyTakeTime=Time
m_selectedWeapons=DataTable
m_latestPrimaryWeapons=DataTable
m_latestPrimaryWeaponsIndexZeroOrOne=DataTable
m_latestNonOffhandWeapons=DataTable
m_lastCycleSlot=Int
m_weaponPermission=Int
m_weaponDelayEnableTime=Time
m_weaponDisabledInScript=Int
m_weaponDisabledFlags=Int
m_weaponInventorySlotLockedFlags=Int
m_weaponTypeDisabledFlags=Int
m_weaponTypeDisabledRefCount=DataTable
m_allowHudSelectionWhileWeaponsDisabled=Int
m_weaponAmmoRegenDisabled=Int
m_weaponAmmoRegenDisabledRefCount=Int
m_akimboState=Int
m_akimboShouldAltFire=Int
m_hudInfo_visibilityTestAlwaysPasses=Int
m_contextAction=Int
m_phaseShiftType=Int
m_phaseShiftTimeStart=Time
m_phaseShiftTimeEnd=Time
m_targetInfoPingValue=Int
 
[RecvTable.DT_BaseGrenade]
moveparent=0x001c
m_parentAttachment=0x0020
m_baseTakeDamage=0x06b4
m_invulnerableToDamageCount=0x06b8
m_parentAttachmentModel=0x0750
m_DmgRadius=0x2da4
m_grenadeStatusFlags=0x2db8
m_doesExplode=0x2dbc
m_ziplineGrenadeExpectedEndPosition=0x2e20
 
[RecvTableTypes.DT_BaseGrenade]
@extends=DT_Projectile
moveparent=Int
m_parentAttachment=Int
m_baseTakeDamage=Int
m_invulnerableToDamageCount=Int
m_parentAttachmentModel=Int
m_DmgRadius=Float
m_grenadeStatusFlags=Int
m_doesExplode=Int
m_ziplineGrenadeExpectedEndPosition=Vector
 
[RecvTable.DT_BaseToggle]
m_vecFinalDest=0x0984
m_movementType=0x0990
m_flMoveTargetTime=0x0994
 
[RecvTableTypes.DT_BaseToggle]
@extends=DT_BaseEntity
m_vecFinalDest=Vector
m_movementType=Int
m_flMoveTargetTime=Time
 
[RecvTable.DT_BaseViewModel]
overlay_vars=0x0000
m_animStartTime=0x0008
m_animOverlayIsActive=0x0008
m_animStartCycle=0x000c
m_animPlaybackRate=0x0010
m_animModelIndex=0x0014
m_animOverlayStartTime=0x0014
m_animSequence=0x001c
m_animFrozen=0x001e
m_animOverlayStartCycle=0x0038
m_fEffects=0x0040
m_animOverlayPlaybackRate=0x005c
m_nModelIndex=0x0060
m_clrRender=0x0080
m_animOverlayModelIndex=0x0080
m_animOverlaySequence=0x00a4
m_animOverlayWeight=0x00b8
m_animOverlayOrder=0x00dc
m_animOverlayAnimTime=0x0100
m_animOverlayFadeInDuration=0x0124
m_animOverlayFadeOutDuration=0x0148
m_nRenderMode=0x03b1
m_nBody=0x0d68
m_nResetEventsStartTime=0x0d74
m_fireDeferredStopsStartTime=0x0d7c
m_bSequenceFinished=0x0e0c
m_flModelScale=0x0e18
m_overlayEventParity=0x1661
m_viewModelOwner=0x18e8
m_projectileIsVisible=0x18ec
m_bBlockEventLayer=0x1e80
m_isAdsTransition=0x1e81
m_hWeapon=0x1e84
m_tracerAttachments=0x1e88
m_tracerAttachmentsScoped=0x1e8a
m_attackEventStartTime=0x1e8c
 
[RecvTableTypes.DT_BaseViewModel]
overlay_vars=DT_OverlayVars
m_animStartTime=Time
m_animOverlayIsActive=DataTable
m_animStartCycle=Float
m_animPlaybackRate=Float
m_animModelIndex=Int
m_animOverlayStartTime=DataTable
m_animSequence=Int
m_animFrozen=Int
m_animOverlayStartCycle=DataTable
m_fEffects=Int
m_animOverlayPlaybackRate=DataTable
m_nModelIndex=Int
m_clrRender=Int
m_animOverlayModelIndex=DataTable
m_animOverlaySequence=DataTable
m_animOverlayWeight=DataTable
m_animOverlayOrder=DataTable
m_animOverlayAnimTime=DataTable
m_animOverlayFadeInDuration=DataTable
m_animOverlayFadeOutDuration=DataTable
m_nRenderMode=Int
m_nBody=Int
m_nResetEventsStartTime=Float
m_fireDeferredStopsStartTime=Float
m_bSequenceFinished=Int
m_flModelScale=Float
m_overlayEventParity=DataTable
m_viewModelOwner=Int
m_projectileIsVisible=Int
m_bBlockEventLayer=Int
m_isAdsTransition=Int
m_hWeapon=Int
m_tracerAttachments=DataTable
m_tracerAttachmentsScoped=DataTable
m_attackEventStartTime=Time
 
[RecvTable.DT_BoneFollower]
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_networkedFlags=0x02d8
m_localAngles=0x0388
m_hOwnerEntity=0x039c
m_Collision=0x03b8
m_CollisionGroup=0x0438
m_modelIndex=0x0970
m_boneIndex=0x0974
 
[RecvTableTypes.DT_BoneFollower]
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_networkedFlags=Int
m_localAngles=Vector
m_hOwnerEntity=Int
m_Collision=DT_CollisionProperty
m_CollisionGroup=Int
m_modelIndex=Int
m_boneIndex=Int
 
[RecvTable.DT_CPropDoor]
HighlightSettings=0x0000
m_fEffects=0x0040
m_usableType=0x0044
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_networkedFlags=0x02d8
m_iTeamNum=0x0338
m_localAngles=0x0388
m_nSkin=0x0d60
m_skinMod=0x0d64
m_closedAngle=0x1600
m_angle=0x1604
m_startAngle=0x1608
m_startAngleVel=0x160c
m_startMoveTime=0x1610
m_isLocked=0x1614
m_isReinforced=0x1615
m_oppositeDoor=0x1618
m_interactingPlayer=0x1668
m_interactingPlayerWantsOpen=0x166c
 
[RecvTableTypes.DT_CPropDoor]
HighlightSettings=DT_HighlightSettings
m_fEffects=Int
m_usableType=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_networkedFlags=Int
m_iTeamNum=Int
m_localAngles=Vector
m_nSkin=Int
m_skinMod=Int
m_closedAngle=Float
m_angle=Float
m_startAngle=Float
m_startAngleVel=Float
m_startMoveTime=Time
m_isLocked=Int
m_isReinforced=Int
m_oppositeDoor=Int
m_interactingPlayer=Int
m_interactingPlayerWantsOpen=Int
 
[RecvTable.DT_CascadeLight]
m_shadowDirection=0x0970
m_envLightShadowDirection=0x0988
m_bEnabled=0x099c
m_bEnableShadows=0x099d
m_LightColor=0x099f
m_cloudMaskName=0x09a3
m_cloudOffset=0x0aa8
m_cloudScale=0x0ab4
 
[RecvTableTypes.DT_CascadeLight]
m_shadowDirection=Vector
m_envLightShadowDirection=Vector
m_bEnabled=Int
m_bEnableShadows=Int
m_LightColor=Int
m_cloudMaskName=String
m_cloudOffset=Vector
m_cloudScale=Float
 
[RecvTable.DT_CollisionProperty]
m_vecMins=0x0010
m_vecMaxs=0x001c
m_usSolidFlags=0x0028
m_nSolidType=0x002c
m_triggerBloat=0x002d
m_collisionDetailLevel=0x002e
m_nSurroundType=0x003c
m_vecSpecifiedSurroundingMins=0x0048
m_vecSpecifiedSurroundingMaxs=0x0054
 
[RecvTableTypes.DT_CollisionProperty]
m_vecMins=Vector
m_vecMaxs=Vector
m_usSolidFlags=Int
m_nSolidType=Int
m_triggerBloat=Int
m_collisionDetailLevel=Int
m_nSurroundType=Int
m_vecSpecifiedSurroundingMins=Vector
m_vecSpecifiedSurroundingMaxs=Vector
 
[RecvTable.DT_ColorCorrection]
m_hOwnerEntity=0x039c
m_localOrigin=0x0970
m_MinFalloff=0x097c
m_MaxFalloff=0x0980
m_flFadeInDuration=0x0984
m_flFadeOutDuration=0x0988
m_flMaxWeight=0x098c
m_flCurWeight=0x0990
m_netLookupFilename=0x0994
m_bEnabled=0x0a98
m_bMaster=0x0a99
m_bClientSide=0x0a9a
m_bExclusive=0x0a9b
 
[RecvTableTypes.DT_ColorCorrection]
m_hOwnerEntity=Int
m_localOrigin=Vector
m_MinFalloff=Float
m_MaxFalloff=Float
m_flFadeInDuration=Float
m_flFadeOutDuration=Float
m_flMaxWeight=Float
m_flCurWeight=Float
m_netLookupFilename=String
m_bEnabled=Int
m_bMaster=Int
m_bClientSide=Int
m_bExclusive=Int
 
[RecvTable.DT_DeathBoxProp]
moveparent=0x001c
m_parentAttachment=0x0020
m_fEffects=0x0040
m_usableType=0x0044
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_networkedFlags=0x02d8
m_visibilityFlags=0x0330
m_iTeamNum=0x0338
m_localAngles=0x0388
m_hOwnerEntity=0x039c
m_Collision=0x03b8
m_CollisionGroup=0x0438
m_iSignifierName=0x0478
m_iName=0x0481
m_holdUsePrompt=0x0610
m_pressUsePrompt=0x0618
m_lifeState=0x0690
m_scriptNetData=0x0694
m_phaseShiftFlags=0x06b0
m_parentAttachmentModel=0x0750
m_fadeDist=0x075c
m_usablePriority=0x0818
m_usableDistanceOverride=0x081c
m_usableFOV=0x0820
m_usePromptSize=0x0824
m_firstChildEntityLink=0x0930
m_firstParentEntityLink=0x0934
m_realmsBitMask=0x0938
m_nSkin=0x0d60
m_bUseHitboxesForRenderBox=0x1551
m_bAnimateInStaticShadow=0x1552
m_customOwnerName=0x15d0
 
[RecvTableTypes.DT_DeathBoxProp]
moveparent=Int
m_parentAttachment=Int
m_fEffects=Int
m_usableType=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_networkedFlags=Int
m_visibilityFlags=Int
m_iTeamNum=Int
m_localAngles=Vector
m_hOwnerEntity=Int
m_Collision=DT_CollisionProperty
m_CollisionGroup=Int
m_iSignifierName=String
m_iName=String
m_holdUsePrompt=String
m_pressUsePrompt=String
m_lifeState=Int
m_scriptNetData=Int
m_phaseShiftFlags=Int
m_parentAttachmentModel=Int
m_fadeDist=Float
m_usablePriority=Int
m_usableDistanceOverride=Float
m_usableFOV=Float
m_usePromptSize=Float
m_firstChildEntityLink=Int
m_firstParentEntityLink=Int
m_realmsBitMask=BitMask
m_nSkin=Int
m_bUseHitboxesForRenderBox=Int
m_bAnimateInStaticShadow=Int
m_customOwnerName=String
 
[RecvTable.DT_DynamicLight]
m_Flags=0x0970
m_LightStyle=0x0971
m_Radius=0x0974
m_Exponent=0x0978
m_InnerAngle=0x097c
m_OuterAngle=0x0980
m_SpotRadius=0x0984
 
[RecvTableTypes.DT_DynamicLight]
@extends=DT_BaseEntity
m_Flags=Int
m_LightStyle=Int
m_Radius=Float
m_Exponent=Int
m_InnerAngle=Float
m_OuterAngle=Float
m_SpotRadius=Float
 
[RecvTable.DT_DynamicProp]
m_iTeamNum=0x0338
m_lifeState=0x0690
m_bUseHitboxesForRenderBox=0x1551
m_bAnimateInStaticShadow=0x1552
 
[RecvTableTypes.DT_DynamicProp]
@extends=DT_BreakableProp
m_iTeamNum=Int
m_lifeState=Int
m_bUseHitboxesForRenderBox=Int
m_bAnimateInStaticShadow=Int
 
[RecvTable.DT_DynamicPropLightweight]
moveparent=0x001c
m_parentAttachment=0x0020
m_fEffects=0x0040
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_networkedFlags=0x02d8
m_visibilityFlags=0x0330
m_localAngles=0x0388
m_Collision=0x03b8
m_CollisionGroup=0x0438
m_phaseShiftFlags=0x06b0
m_parentAttachmentModel=0x0750
m_fadeDist=0x075c
m_nSkin=0x0d60
m_skinMod=0x0d64
 
[RecvTableTypes.DT_DynamicPropLightweight]
moveparent=Int
m_parentAttachment=Int
m_fEffects=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_networkedFlags=Int
m_visibilityFlags=Int
m_localAngles=Vector
m_Collision=DT_CollisionProperty
m_CollisionGroup=Int
m_phaseShiftFlags=Int
m_parentAttachmentModel=Int
m_fadeDist=Float
m_nSkin=Int
m_skinMod=Int
 
[RecvTable.DT_EntityDissolve]
m_flStartTime=0x0978
m_flFadeStart=0x097c
m_flFadeLength=0x0980
m_nDissolveType=0x0984
m_isLethal=0x0988
 
[RecvTableTypes.DT_EntityDissolve]
@extends=DT_BaseEntity
m_flStartTime=Time
m_flFadeStart=Float
m_flFadeLength=Float
m_nDissolveType=Int
m_isLethal=Int
 
[RecvTable.DT_EntityLinkPage]
pageIndex=0x0970
next=0x0974
entity=0x0d74
 
[RecvTableTypes.DT_EntityLinkPage]
pageIndex=Int
next=DataTable
entity=DataTable
 
[RecvTable.DT_FuncBrushLightweight]
moveparent=0x001c
m_parentAttachment=0x0020
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_networkedFlags=0x02d8
m_visibilityFlags=0x0330
m_localAngles=0x0388
m_Collision=0x03b8
m_CollisionGroup=0x0438
m_parentAttachmentModel=0x0750
 
[RecvTableTypes.DT_FuncBrushLightweight]
moveparent=Int
m_parentAttachment=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_networkedFlags=Int
m_visibilityFlags=Int
m_localAngles=Vector
m_Collision=DT_CollisionProperty
m_CollisionGroup=Int
m_parentAttachmentModel=Int
 
[RecvTable.DT_GlobalNonRewinding]
m_gameTimescale=0x0974
m_playerObserver=0x0978
m_playerMiscData=0x0d78
 
[RecvTableTypes.DT_GlobalNonRewinding]
m_gameTimescale=Float
m_playerObserver=DataTable
m_playerMiscData=DataTable
 
[RecvTable.DT_GrappleHook]
moveparent=0x001c
m_parentAttachment=0x0020
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_visibilityFlags=0x0330
m_localAngles=0x0388
m_hOwnerEntity=0x039c
m_realmsBitMask=0x0938
m_grappleZipline=0x1550
 
[RecvTableTypes.DT_GrappleHook]
moveparent=Int
m_parentAttachment=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_visibilityFlags=Int
m_localAngles=Vector
m_hOwnerEntity=Int
m_realmsBitMask=BitMask
m_grappleZipline=Int
 
[RecvTable.DT_HighlightSettings]
m_highlightTeamIndex=0x01e8
m_highlightTeamBits=0x01f8
m_highlightGenericContexts=0x029d
m_highlightFocused=0x02a5
m_highlightFadeDuration=0x02a8
m_highlightFadeParity=0x02b0
 
[RecvTableTypes.DT_HighlightSettings]
m_highlightTeamIndex=DataTable
m_highlightTeamBits=DataTable
m_highlightGenericContexts=DataTable
m_highlightFocused=Int
m_highlightFadeDuration=DataTable
m_highlightFadeParity=Int
 
[RecvTable.DT_ImportantOnEntSound]
m_networkTableSoundID=0x0970
m_hAttachedToEntity=0x0974
m_beginTime=0x0978
m_hSuppressedClient=0x097c
m_milesSignal=0x0980
m_selector=0x0988
 
[RecvTableTypes.DT_ImportantOnEntSound]
m_networkTableSoundID=Int
m_hAttachedToEntity=Int
m_beginTime=Time
m_hSuppressedClient=Int
m_milesSignal=Int
m_selector=Int
 
[RecvTable.DT_InfoPlacementHelper]
m_localOrigin=0x0004
moveparent=0x001c
m_parentAttachment=0x0020
m_localAngles=0x0388
m_parentAttachmentModel=0x0750
 
[RecvTableTypes.DT_InfoPlacementHelper]
m_localOrigin=Vector
moveparent=Int
m_parentAttachment=Int
m_localAngles=Vector
m_parentAttachmentModel=Int
 
[RecvTable.DT_Local]
m_airMoveBlockPlanes=0x0000
m_iHideHUD=0x0014
m_superJumpsUsed=0x0018
m_jumpedOffRodeo=0x001c
m_jumpPressTime=0x0020
m_prevJumpPressTime=0x0024
m_jetpackActivateTime=0x0028
m_jetpackDeactivateTime=0x002c
m_flSuitPower=0x0030
m_flSuitJumpPower=0x0034
m_flSuitGrapplePower=0x0038
m_flFallVelocity=0x003c
m_flStepSize=0x0040
m_airSlowMoFrac=0x0044
predictableFlags=0x0048
m_bitsActiveDevices=0x004c
m_forceStance=0x0050
m_forceSlide=0x0054
m_duckToggleOn=0x0055
m_bDrawViewmodel=0x0056
m_bAllowAutoMovement=0x0057
m_accelScale=0x0058
m_powerRegenRateScale=0x005c
m_dodgePowerDelayScale=0x0060
m_hSkyCamera=0x0078
m_skybox3d.scale=0x007c
m_skybox3d.useWorldFog=0x0080
m_skybox3d.fog.botAlt=0x0084
m_skybox3d.fog.topAlt=0x0088
m_skybox3d.fog.halfDistBot=0x008c
m_skybox3d.fog.halfDistTop=0x0090
m_skybox3d.fog.distColorStr=0x0094
m_skybox3d.fog.dirColorStr=0x0098
m_skybox3d.fog.distOffset=0x009c
m_skybox3d.fog.densityScale=0x00a0
m_skybox3d.fog.halfAngleDeg=0x00a4
m_skybox3d.fog.HDRColorScale=0x00a8
m_skybox3d.fog.distColor=0x00ac
m_skybox3d.fog.dirColor=0x00b0
m_skybox3d.fog.direction=0x00b4
m_skybox3d.fog.enable=0x00c6
m_audio.localSound[0]=0x00cc
m_audio.localSound[1]=0x00d8
m_audio.localSound[2]=0x00e4
m_audio.localSound[3]=0x00f0
m_audio.localSound[4]=0x00fc
m_audio.localSound[5]=0x0108
m_audio.localSound[6]=0x0114
m_audio.localSound[7]=0x0120
m_audio.soundscapeIndex=0x012c
m_audio.localBits=0x0130
m_audio.entIndex=0x0134
m_animNearZ=0x0150
lastAttacker=0x0154
attackedCount=0x0158
m_airMoveBlockPlanes[0]=0x0174
m_airMoveBlockPlaneTime=0x018c
m_airMoveBlockPlaneCount=0x0190
m_queuedMeleePressTime=0x0194
m_queuedGrappleMeleeTime=0x0198
m_disableMeleeUntilRelease=0x01a4
m_meleePressTime=0x01a8
m_meleeInputIndex=0x01ac
m_trackedChildProjectileCount=0x01b0
m_oneHandedWeaponUsage=0x01b4
m_flCockpitEntryTime=0x01b8
m_ejectStartTime=0x01bc
m_disembarkStartTime=0x01c0
m_hotDropImpactTime=0x01c4
m_outOfBoundsDeadTime=0x01c8
m_objectiveIndex=0x01cc
m_objectiveEntity=0x01d0
m_objectiveEndTime=0x01d4
m_cinematicEventFlags=0x01d8
m_forcedDialogueOnly=0x01dc
m_titanBuildTime=0x01e0
m_titanBubbleShieldTime=0x01e4
m_titanEmbarkEnabled=0x01e8
m_titanDisembarkEnabled=0x01e9
m_voicePackIndex=0x01ec
m_playerAnimStationaryGoalFeetYaw=0x01f0
m_playerAnimJumping=0x01f4
m_playerAnimJumpStartTime=0x01f8
m_playerAnimFirstJumpFrame=0x01fc
m_playerAnimDodging=0x01fd
m_playerAnimJumpActivity=0x01fe
m_playerAnimLanding=0x0200
m_playerAnimShouldLand=0x0201
m_playerAnimLandStartTime=0x0204
m_playerAnimInAirWalk=0x0208
m_playerAnimPrevFrameSequenceMotionYaw=0x020c
m_playerAnimMeleeParity=0x0210
m_playerAnimMeleeStartTime=0x0214
m_playerLocalGravityBlendStartRotation=0x0248
m_playerLocalGravityBlendEndRotation=0x0258
m_playerLocalGravityBlendEndDirection=0x0268
m_playerLocalGravityBlendStartTime=0x0274
m_playerLocalGravityBlendEndTime=0x0278
m_playerLocalGravityBlendStrength=0x027c
m_playerLocalGravityStrength=0x0280
m_playerLocalGravityType=0x0284
m_playerLocalGravityPoint=0x0288
m_playerLocalGravityLineStart=0x0294
m_playerLocalGravityLineEnd=0x02a0
m_playerLocalGravityEntity=0x02ac
m_playerLocalGravityLineStartEntity=0x02b0
m_playerLocalGravityLineEndEntity=0x02b4
m_playerFloatLookStartTime=0x02b8
m_playerFloatLookEndTime=0x02bc
m_wallrunLatestFloorHeight=0x02c0
m_wallrunFromJetpack=0x02c4
m_groundNormal=0x02c8
m_continuousUseBlocked=0x02d4
m_useEnt=0x02d8
 
[RecvTableTypes.DT_Local]
m_airMoveBlockPlanes=Array
m_iHideHUD=Int
m_superJumpsUsed=Int
m_jumpedOffRodeo=Int
m_jumpPressTime=Time
m_prevJumpPressTime=Time
m_jetpackActivateTime=Time
m_jetpackDeactivateTime=Time
m_flSuitPower=Float
m_flSuitJumpPower=Float
m_flSuitGrapplePower=Float
m_flFallVelocity=Float
m_flStepSize=Float
m_airSlowMoFrac=Float
predictableFlags=Int
m_bitsActiveDevices=Int
m_forceStance=Int
m_forceSlide=Int
m_duckToggleOn=Int
m_bDrawViewmodel=Int
m_bAllowAutoMovement=Int
m_accelScale=Float
m_powerRegenRateScale=Float
m_dodgePowerDelayScale=Float
m_hSkyCamera=Int
m_skybox3d.scale=Int
m_skybox3d.useWorldFog=Int
m_skybox3d.fog.botAlt=Float
m_skybox3d.fog.topAlt=Float
m_skybox3d.fog.halfDistBot=Float
m_skybox3d.fog.halfDistTop=Float
m_skybox3d.fog.distColorStr=Float
m_skybox3d.fog.dirColorStr=Float
m_skybox3d.fog.distOffset=Float
m_skybox3d.fog.densityScale=Float
m_skybox3d.fog.halfAngleDeg=Float
m_skybox3d.fog.HDRColorScale=Float
m_skybox3d.fog.distColor=Int
m_skybox3d.fog.dirColor=Int
m_skybox3d.fog.direction=Vector
m_skybox3d.fog.enable=Int
m_audio.localSound[0]=Vector
m_audio.localSound[1]=Vector
m_audio.localSound[2]=Vector
m_audio.localSound[3]=Vector
m_audio.localSound[4]=Vector
m_audio.localSound[5]=Vector
m_audio.localSound[6]=Vector
m_audio.localSound[7]=Vector
m_audio.soundscapeIndex=Int
m_audio.localBits=Int
m_audio.entIndex=Int
m_animNearZ=Float
lastAttacker=Int
attackedCount=Int
m_airMoveBlockPlanes[0]=Vector
m_airMoveBlockPlaneTime=Time
m_airMoveBlockPlaneCount=Int
m_queuedMeleePressTime=Time
m_queuedGrappleMeleeTime=Time
m_disableMeleeUntilRelease=Int
m_meleePressTime=Time
m_meleeInputIndex=Int
m_trackedChildProjectileCount=Int
m_oneHandedWeaponUsage=Int
m_flCockpitEntryTime=Time
m_ejectStartTime=Time
m_disembarkStartTime=Time
m_hotDropImpactTime=Time
m_outOfBoundsDeadTime=Time
m_objectiveIndex=Int
m_objectiveEntity=Int
m_objectiveEndTime=Time
m_cinematicEventFlags=Int
m_forcedDialogueOnly=Int
m_titanBuildTime=Time
m_titanBubbleShieldTime=Time
m_titanEmbarkEnabled=Int
m_titanDisembarkEnabled=Int
m_voicePackIndex=Int
m_playerAnimStationaryGoalFeetYaw=Float
m_playerAnimJumping=Int
m_playerAnimJumpStartTime=Time
m_playerAnimFirstJumpFrame=Int
m_playerAnimDodging=Int
m_playerAnimJumpActivity=Int
m_playerAnimLanding=Int
m_playerAnimShouldLand=Int
m_playerAnimLandStartTime=Time
m_playerAnimInAirWalk=Int
m_playerAnimPrevFrameSequenceMotionYaw=Float
m_playerAnimMeleeParity=Int
m_playerAnimMeleeStartTime=Time
m_playerLocalGravityBlendStartRotation=Rotation
m_playerLocalGravityBlendEndRotation=Rotation
m_playerLocalGravityBlendEndDirection=Vector
m_playerLocalGravityBlendStartTime=Time
m_playerLocalGravityBlendEndTime=Time
m_playerLocalGravityBlendStrength=Float
m_playerLocalGravityStrength=Float
m_playerLocalGravityType=Int
m_playerLocalGravityPoint=Vector
m_playerLocalGravityLineStart=Vector
m_playerLocalGravityLineEnd=Vector
m_playerLocalGravityEntity=Int
m_playerLocalGravityLineStartEntity=Int
m_playerLocalGravityLineEndEntity=Int
m_playerFloatLookStartTime=Time
m_playerFloatLookEndTime=Time
m_wallrunLatestFloorHeight=Float
m_wallrunFromJetpack=Int
m_groundNormal=Vector
m_continuousUseBlocked=Int
m_useEnt=Int
 
[RecvTable.DT_MinimapBaseEntityData]
visibilityDefaultFlag=0x0000
visibilityShowFlag=0x0020
flags=0x0040
zOrder=0x0044
customState=0x0048
objectScale=0x004c
 
[RecvTableTypes.DT_MinimapBaseEntityData]
visibilityDefaultFlag=DataTable
visibilityShowFlag=DataTable
flags=Int
zOrder=Int
customState=Int
objectScale=Float
 
[RecvTable.DT_Missile]
m_hSpecificTarget=0x2df4
m_targetPosition=0x2e04
m_useTargetPosition=0x2e10
 
[RecvTableTypes.DT_Missile]
@extends=DT_Projectile
m_hSpecificTarget=Int
m_targetPosition=Vector
m_useTargetPosition=Int
 
[RecvTable.DT_ParticleSystem]
m_localOrigin=0x0004
moveparent=0x001c
m_parentAttachment=0x0020
m_fEffects=0x0040
m_visibilityFlags=0x0330
m_iTeamNum=0x0338
m_localAngles=0x0388
m_hOwnerEntity=0x039c
m_parentAttachmentModel=0x0750
m_realmsBitMask=0x0938
m_iEffectIndex=0x0970
m_nStopType=0x0974
m_bActive=0x0979
m_bForceRenderAlways=0x097b
m_flStartTime=0x097c
m_bInSkybox=0x0985
m_killForReplay=0x0986
m_enemyControlPoint=0x098c
m_enemyControlPointOverride=0x098d
m_bLOSBlockScan=0x098e
m_vServerControlPoints=0x0994
m_hControlPointEnts=0x09d0
m_controlPointAttachTypes=0x09e4
m_controlPoint1AttachmentId=0x09f8
m_vServerControlPointColorIds=0x09fd
m_parentAttachType=0x0a04
m_bPlaySounds=0x0a44
m_soundSuffix=0x0a48
 
[RecvTableTypes.DT_ParticleSystem]
m_localOrigin=Vector
moveparent=Int
m_parentAttachment=Int
m_fEffects=Int
m_visibilityFlags=Int
m_iTeamNum=Int
m_localAngles=Vector
m_hOwnerEntity=Int
m_parentAttachmentModel=Int
m_realmsBitMask=BitMask
m_iEffectIndex=Int
m_nStopType=Int
m_bActive=Int
m_bForceRenderAlways=Int
m_flStartTime=Time
m_bInSkybox=Int
m_killForReplay=Int
m_enemyControlPoint=Int
m_enemyControlPointOverride=Int
m_bLOSBlockScan=Int
m_vServerControlPoints=DataTable
m_hControlPointEnts=DataTable
m_controlPointAttachTypes=DataTable
m_controlPoint1AttachmentId=Int
m_vServerControlPointColorIds=DataTable
m_parentAttachType=Int
m_bPlaySounds=Int
m_soundSuffix=String
 
[RecvTable.DT_PhysicsProp]
m_bAwake=0x1558
m_ignoresCollisionWithCombatCharacters=0x1559
m_isRolling=0x155a
m_networkTableRollSoundId=0x155c
m_iPhysicsMode=0x1588
m_fMass=0x158c
m_collisionMins=0x1590
m_collisionMaxs=0x159c
 
[RecvTableTypes.DT_PhysicsProp]
@extends=DT_BreakableProp
m_bAwake=Int
m_ignoresCollisionWithCombatCharacters=Int
m_isRolling=Int
m_networkTableRollSoundId=Int
m_iPhysicsMode=Int
m_fMass=Float
m_collisionMins=Vector
m_collisionMaxs=Vector
 
[RecvTable.DT_Player]
localdata=0x0000
teamshareddata=0x0000
connectionQualityIndex=0x0000
m_passives=0x0000
portalnonlocaldata=0x0000
stickerinventory=0x0000
m_vecAbsOrigin=0x0004
isLocalOriginLocal=0x0010
m_fFlags=0x00c8
m_hGroundEntity=0x0324
m_iHealth=0x0328
m_flMaxspeed=0x032c
m_jumpPadDebounceExpireTime=0x0350
m_iMaxHealth=0x0470
m_lifeState=0x0690
m_overlayEventParity=0x1661
m_inventory=0x18c8
m_selectedOffhands=0x1946
m_selectedOffhandsPendingHybridAction=0x1949
m_titanSoul=0x19c4
m_bZooming=0x1be1
m_zoomToggleOnStartTime=0x1be4
m_zoomBaseFrac=0x1be8
m_zoomBaseTime=0x1bec
m_zoomFullStartTime=0x1bf0
m_currentFramePlayer=0x2088
pl=0x24b0
m_ammoPoolCapacity=0x2534
m_hasBadReputation=0x2538
m_hardware=0x2540
m_platformUserId=0x2548
m_progressionUserId=0x2550
m_unSpoofedPlatformUserId=0x2558
m_EadpUserId=0x2560
m_crossPlayChat=0x2568
m_crossPlayChatFriends=0x2569
m_crossProgressionMigrated=0x256a
m_laserSightColorCustomized=0x256b
m_laserSightColor=0x256c
m_classModsActive=0x2578
"m_passives[ 0 ]"=0x2730
m_bleedoutState=0x2760
m_bleedoutStartTime=0x2764
m_statusEffectsTimedPlayerNV=0x2768
m_statusEffectsEndlessPlayerNV=0x2858
m_damageComboLatestUpdateTime=0x291c
m_damageComboStartHealth=0x2920
m_gestureSequences=0x2924
m_gestureStartTimes=0x2934
m_gestureBlendInDuration=0x2954
m_gestureBlendOutDuration=0x2974
m_gestureFadeOutStartTime=0x2994
m_gestureFadeOutDuration=0x29b4
m_gestureAutoKillBitfield=0x29d4
m_autoSprintForced=0x2a18
m_fIsSprinting=0x2a1c
m_playerSettingForStickySprintForward=0x2a1e
m_playerSettingForHoldToSprint=0x2a1f
m_lastSprintPressTime=0x2a20
m_stickySprintForwardEnableTime=0x2a24
m_stickySprintForwardDisableTime=0x2a28
m_damageImpulseNoDecelEndTime=0x2a40
m_playerVehicles=0x2a4c
m_playerVehicleCount=0x2a54
m_playerVehicleDriven=0x2a58
m_playerVehicleUseTime=0x2a5c
m_duckState=0x2a60
m_leanState=0x2a64
m_canStand=0x2a69
m_StandHullMin=0x2a6c
m_StandHullMax=0x2a78
m_DuckHullMin=0x2a84
m_DuckHullMax=0x2a90
m_entitySyncingWithMe=0x2a9c
m_upDir=0x2aa0
m_traversalState=0x2b24
m_traversalType=0x2b28
m_traversalForwardDir=0x2b54
m_traversalRefPos=0x2b60
m_traversalYawDelta=0x2b8c
m_traversalYawPoseParameter=0x2b90
m_wallClimbSetUp=0x2ba8
m_wallHanging=0x2ba9
m_grapple=0x2cc0
m_grappleActive=0x2d48
m_grappleDetachTime=0x2d4c
m_turret=0x2d94
m_hViewModels=0x2d98
m_viewOffsetEntity=0x2da8
m_animViewEntity=0x2de8
m_activeZipline=0x2ed8
m_ziplineValid3pWeaponLayerAnim=0x2ee4
m_ziplineState=0x2ee8
m_ziplineGrenadeBeginStationEntity=0x2f84
m_ziplineGrenadeBeginStationAttachmentId=0x2f88
m_shadowShieldActive=0x2fb0
m_tempShieldHealth=0x2fb4
m_extraShieldHealth=0x2fb8
m_extraShieldTier=0x2fbc
m_glideMeter=0x2fcc
m_isPerformingBoostAction=0x2fec
m_lastJumpPadTouched=0x3140
m_launchCount=0x3148
m_launcherAirControlActive=0x314c
m_melee=0x3278
m_useCredit=0x32b0
m_playerFlags=0x32c0
m_hasMic=0x32c8
m_inPartyChat=0x32c9
m_communicationsAutoBlocked=0x32ca
m_playerMoveSpeedScale=0x32cc
m_bShouldDrawPlayerWhileUsingViewEntity=0x3518
m_iSpawnParity=0x3584
m_flDeathTime=0x3648
m_ragdollCreationOrigin=0x364c
m_ragdollCreationYaw=0x3658
m_lastDodgeTime=0x3698
m_timeJetpackHeightActivateCheckPassed=0x36c0
m_grappleHook=0x3760
m_petTitan=0x3764
m_xp=0x378c
m_skill_mu=0x3794
m_bHasMatchAdminRole=0x3798
m_ubEFNoInterpParity=0x40e0
m_hColorCorrectionCtrl=0x40e4
m_title=0x4108
m_Shared=0x4438
m_pilotClassIndex=0x448c
m_playerScriptNetDataGlobal=0x4718
m_helmetType=0x4720
m_armorType=0x4724
m_controllerModeActive=0x472c
m_skydiveForwardPoseValueTarget=0x4750
m_skydiveSidePoseValueTarget=0x475c
m_skydiveState=0x4784
m_skydiveDiveAngle=0x479c
m_skydiveIsDiving=0x47a0
m_skydiveSpeed=0x47a4
m_skydiveStrafeAngle=0x47a8
m_skydivePlayerPitch=0x47bc
m_skydivePlayerYaw=0x47c0
m_skydiveFromSkywardLaunch=0x47fd
m_skydiveScriptInputOverride=0x4800
m_skydiveContraintPostion=0x4804
m_skydiveContraintRadius=0x4810
m_skywardLaunchState=0x4814
m_skywardLaunchSlowStartTime=0x4828
m_skywardLaunchSlowEndTime=0x482c
m_skywardLaunchFastEndTime=0x4830
m_skywardLaunchEndTime=0x4838
m_skywardLaunchSlowSpeed=0x4840
m_skywardLaunchFastSpeed=0x4844
m_skywardOffset=0x4848
m_skywardLaunchInterrupted=0x4858
m_skywardLaunchFollowing=0x4859
m_skywardObstacleAvoidanceEndPos=0x485c
m_armoredLeapAirPos=0x486c
m_armoredLeapEndPos=0x4878
m_armoredLeapType=0x4884
m_armoredLeapPhase=0x4888
m_armoredLeapStartTime=0x488c
m_dragReviveState=0x48f8
m_dragReviveOutroStartTime=0x48fc
m_reviveTarget=0x4900
 
[RecvTableTypes.DT_Player]
@extends=DT_BaseCombatCharacter
localdata=DT_LocalPlayerExclusive
teamshareddata=DT_PlayerTeamShared
connectionQualityIndex=DT_ConnectionQualityIndex
m_passives=Array
portalnonlocaldata=DT_PortalNonLocalPlayerExclusive
stickerinventory=DT_PlayerStickerInventory
m_vecAbsOrigin=Vector
isLocalOriginLocal=Int
m_fFlags=Int
m_hGroundEntity=Int
m_iHealth=Int
m_flMaxspeed=Float
m_jumpPadDebounceExpireTime=Time
m_iMaxHealth=Int
m_lifeState=Int
m_overlayEventParity=DataTable
m_inventory=DT_WeaponInventory
m_selectedOffhands=DataTable
m_selectedOffhandsPendingHybridAction=DataTable
m_titanSoul=Int
m_bZooming=Int
m_zoomToggleOnStartTime=Time
m_zoomBaseFrac=Float
m_zoomBaseTime=Time
m_zoomFullStartTime=Time
m_currentFramePlayer=DT_CurrentData_Player
pl=DT_PlayerState
m_ammoPoolCapacity=Int
m_hasBadReputation=Int
m_hardware=Int
m_platformUserId=BitMask
m_progressionUserId=BitMask
m_unSpoofedPlatformUserId=BitMask
m_EadpUserId=BitMask
m_crossPlayChat=Int
m_crossPlayChatFriends=Int
m_crossProgressionMigrated=Int
m_laserSightColorCustomized=Int
m_laserSightColor=Vector
m_classModsActive=BitMask
"m_passives[ 0 ]"=BitMask
m_bleedoutState=Int
m_bleedoutStartTime=Float
m_statusEffectsTimedPlayerNV=DataTable
m_statusEffectsEndlessPlayerNV=DataTable
m_damageComboLatestUpdateTime=Time
m_damageComboStartHealth=Int
m_gestureSequences=DataTable
m_gestureStartTimes=DataTable
m_gestureBlendInDuration=DataTable
m_gestureBlendOutDuration=DataTable
m_gestureFadeOutStartTime=DataTable
m_gestureFadeOutDuration=DataTable
m_gestureAutoKillBitfield=Int
m_autoSprintForced=Int
m_fIsSprinting=Int
m_playerSettingForStickySprintForward=Int
m_playerSettingForHoldToSprint=Int
m_lastSprintPressTime=Time
m_stickySprintForwardEnableTime=Time
m_stickySprintForwardDisableTime=Time
m_damageImpulseNoDecelEndTime=Time
m_playerVehicles=DataTable
m_playerVehicleCount=Int
m_playerVehicleDriven=Int
m_playerVehicleUseTime=Time
m_duckState=Int
m_leanState=Int
m_canStand=Int
m_StandHullMin=Vector
m_StandHullMax=Vector
m_DuckHullMin=Vector
m_DuckHullMax=Vector
m_entitySyncingWithMe=Int
m_upDir=Vector
m_traversalState=Int
m_traversalType=Int
m_traversalForwardDir=Vector
m_traversalRefPos=Vector
m_traversalYawDelta=Float
m_traversalYawPoseParameter=Int
m_wallClimbSetUp=Int
m_wallHanging=Int
m_grapple=DT_GrappleData
m_grappleActive=Int
m_grappleDetachTime=Time
m_turret=Int
m_hViewModels=DataTable
m_viewOffsetEntity=DT_Player_ViewOffsetEntityData
m_animViewEntity=DT_Player_AnimViewEntityData
m_activeZipline=Int
m_ziplineValid3pWeaponLayerAnim=Int
m_ziplineState=Int
m_ziplineGrenadeBeginStationEntity=Int
m_ziplineGrenadeBeginStationAttachmentId=Int
m_shadowShieldActive=Int
m_tempShieldHealth=Int
m_extraShieldHealth=Int
m_extraShieldTier=Int
m_glideMeter=Float
m_isPerformingBoostAction=Int
m_lastJumpPadTouched=Int
m_launchCount=Int
m_launcherAirControlActive=Int
m_melee=DT_PlayerMelee_PlayerData
m_useCredit=Int
m_playerFlags=Int
m_hasMic=Int
m_inPartyChat=Int
m_communicationsAutoBlocked=Int
m_playerMoveSpeedScale=Float
m_bShouldDrawPlayerWhileUsingViewEntity=Int
m_iSpawnParity=Int
m_flDeathTime=Time
m_ragdollCreationOrigin=Vector
m_ragdollCreationYaw=Float
m_lastDodgeTime=Time
m_timeJetpackHeightActivateCheckPassed=Time
m_grappleHook=Int
m_petTitan=Int
m_xp=Int
m_skill_mu=Float
m_bHasMatchAdminRole=Int
m_ubEFNoInterpParity=Int
m_hColorCorrectionCtrl=Int
m_title=String
m_Shared=DT_PlayerShared
m_pilotClassIndex=Int
m_playerScriptNetDataGlobal=Int
m_helmetType=Int
m_armorType=Int
m_controllerModeActive=Int
m_skydiveForwardPoseValueTarget=Float
m_skydiveSidePoseValueTarget=Float
m_skydiveState=Int
m_skydiveDiveAngle=Float
m_skydiveIsDiving=Int
m_skydiveSpeed=Float
m_skydiveStrafeAngle=Float
m_skydivePlayerPitch=Float
m_skydivePlayerYaw=Float
m_skydiveFromSkywardLaunch=Int
m_skydiveScriptInputOverride=Float
m_skydiveContraintPostion=Vector
m_skydiveContraintRadius=Float
m_skywardLaunchState=Int
m_skywardLaunchSlowStartTime=Float
m_skywardLaunchSlowEndTime=Float
m_skywardLaunchFastEndTime=Float
m_skywardLaunchEndTime=Float
m_skywardLaunchSlowSpeed=Float
m_skywardLaunchFastSpeed=Float
m_skywardOffset=Vector
m_skywardLaunchInterrupted=Int
m_skywardLaunchFollowing=Int
m_skywardObstacleAvoidanceEndPos=Vector
m_armoredLeapAirPos=Vector
m_armoredLeapEndPos=Vector
m_armoredLeapType=Int
m_armoredLeapPhase=Int
m_armoredLeapStartTime=Time
m_dragReviveState=Int
m_dragReviveOutroStartTime=Float
m_reviveTarget=Int
 
[RecvTable.DT_PlayerDecoy]
m_vecViewOffset.x=0x0034
m_vecViewOffset.y=0x0038
m_vecViewOffset.z=0x003c
m_cloakEndTime=0x01cc
m_cloakFadeInEndTime=0x01d0
m_cloakFadeOutStartTime=0x01d4
m_cloakFadeInDuration=0x01d8
m_cloakFlickerAmount=0x01dc
m_cloakFlickerEndTime=0x01e0
m_iHealth=0x0328
m_iMaxHealth=0x0470
m_nameVisibilityFlags=0x08a8
m_currentState=0x1890
m_decoyFlags=0x1894
m_lastPulseTime=0x189c
m_currentClass=0x18a0
m_classModsActive=0x18a8
m_decoyVelocity=0x18b0
 
[RecvTableTypes.DT_PlayerDecoy]
@extends=DT_BaseAnimatingOverlay
m_vecViewOffset.x=Float
m_vecViewOffset.y=Float
m_vecViewOffset.z=Float
m_cloakEndTime=Float
m_cloakFadeInEndTime=Time
m_cloakFadeOutStartTime=Float
m_cloakFadeInDuration=Float
m_cloakFlickerAmount=Float
m_cloakFlickerEndTime=Time
m_iHealth=Int
m_iMaxHealth=Int
m_nameVisibilityFlags=Int
m_currentState=Int
m_decoyFlags=Int
m_lastPulseTime=Time
m_currentClass=BitMask
m_classModsActive=BitMask
m_decoyVelocity=Vector
 
[RecvTable.DT_PlayerMelee_PlayerData]
meleeAttackParity=0x0008
attackActive=0x000c
attackRecoveryShouldBeQuick=0x000d
isSprintAttack=0x000e
attackStartTime=0x0010
attackHitEntity=0x0014
attackHitEntityTime=0x0018
attackLastHitNonWorldEntity=0x001c
scriptedState=0x0020
pendingMeleePress=0x0024
lungeBoost=0x0028
previousMainOffhand=0x0034
 
[RecvTableTypes.DT_PlayerMelee_PlayerData]
meleeAttackParity=Int
attackActive=Int
attackRecoveryShouldBeQuick=Int
isSprintAttack=Int
attackStartTime=Time
attackHitEntity=Int
attackHitEntityTime=Time
attackLastHitNonWorldEntity=Time
scriptedState=Int
pendingMeleePress=Int
lungeBoost=Vector
previousMainOffhand=Int
 
[RecvTable.DT_PlayerState]
currentClass=0x0010
requestedClass=0x0018
onDeathClass=0x0020
deadflag=0x006c
 
[RecvTableTypes.DT_PlayerState]
currentClass=BitMask
requestedClass=BitMask
onDeathClass=BitMask
deadflag=Int
 
[RecvTable.DT_PlayerWaypoint]
moveparent=0x001c
m_parentAttachment=0x0020
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_networkedFlags=0x02d8
m_visibilityFlags=0x0330
m_iTeamNum=0x0338
m_teamMemberIndex=0x0340
m_hOwnerEntity=0x039c
m_iSignifierName=0x0478
m_parentAttachmentModel=0x0750
m_realmsBitMask=0x0938
m_waypointType=0x0970
m_waypointBitfield=0x0974
m_waypointEnts=0x0978
m_waypointVectors=0x0998
m_waypointGameTimes=0x09f8
m_waypointInts=0x0a18
m_waypointFloats=0x0a38
m_objectivePackedInt=0x0a58
m_waypointGroupName=0x0a5c
m_waypointGroupFlags=0x0a7c
m_waypointCustomType=0x0a80
m_waypointStringA=0x0aa0
m_waypointStringB=0x0ae0
m_waypointAssetA=0x0b28
m_waypointAssetB=0x0ba8
 
[RecvTableTypes.DT_PlayerWaypoint]
moveparent=Int
m_parentAttachment=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_networkedFlags=Int
m_visibilityFlags=Int
m_iTeamNum=Int
m_teamMemberIndex=Int
m_hOwnerEntity=Int
m_iSignifierName=String
m_parentAttachmentModel=Int
m_realmsBitMask=BitMask
m_waypointType=Int
m_waypointBitfield=Int
m_waypointEnts=DataTable
m_waypointVectors=DataTable
m_waypointGameTimes=DataTable
m_waypointInts=DataTable
m_waypointFloats=DataTable
m_objectivePackedInt=Int
m_waypointGroupName=String
m_waypointGroupFlags=Int
m_waypointCustomType=String
m_waypointStringA=String
m_waypointStringB=String
m_waypointAssetA=String
m_waypointAssetB=String
 
[RecvTable.DT_PointCamera]
m_FOV=0x09d0
m_bFogEnable=0x0a10
m_bActive=0x0a11
 
[RecvTableTypes.DT_PointCamera]
@extends=DT_BaseEntity
m_FOV=Float
m_bFogEnable=Int
m_bActive=Int
 
[RecvTable.DT_PortalPointPush]
m_bEnabled=0x0970
m_flMagnitude=0x0974
m_flRadius=0x0978
m_flInnerRadius=0x097c
m_flConeOfInfluence=0x0980
 
[RecvTableTypes.DT_PortalPointPush]
@extends=DT_BaseEntity
m_bEnabled=Int
m_flMagnitude=Float
m_flRadius=Float
m_flInnerRadius=Float
m_flConeOfInfluence=Float
 
[RecvTable.DT_PropSurvival]
moveparent=0x001c
m_parentAttachment=0x0020
m_fEffects=0x0040
m_usableType=0x0044
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_nModelIndex=0x0060
m_networkedFlags=0x02d8
m_visibilityFlags=0x0330
m_localAngles=0x0388
m_Collision=0x03b8
m_CollisionGroup=0x0438
m_iSignifierName=0x0478
m_parentAttachmentModel=0x0750
m_usablePriority=0x0818
m_usableDistanceOverride=0x081c
m_usableFOV=0x0820
m_usePromptSize=0x0824
m_realmsBitMask=0x0938
m_itemFlavorGUID=0x0d54
m_nSkin=0x0d60
m_skinMod=0x0d64
m_nBody=0x0d68
m_camoIndex=0x0d6c
m_ammoInClip=0x1554
m_customScriptInt=0x1558
m_survivalProperty=0x155c
m_weaponNameIndex=0x1564
m_modBitField=0x1568
m_survivalPropFadeDist=0x1570
 
[RecvTableTypes.DT_PropSurvival]
moveparent=Int
m_parentAttachment=Int
m_fEffects=Int
m_usableType=Int
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_nModelIndex=Int
m_networkedFlags=Int
m_visibilityFlags=Int
m_localAngles=Vector
m_Collision=DT_CollisionProperty
m_CollisionGroup=Int
m_iSignifierName=String
m_parentAttachmentModel=Int
m_usablePriority=Int
m_usableDistanceOverride=Float
m_usableFOV=Float
m_usePromptSize=Float
m_realmsBitMask=BitMask
m_itemFlavorGUID=Int
m_nSkin=Int
m_skinMod=Int
m_nBody=Int
m_camoIndex=Int
m_ammoInClip=Int
m_customScriptInt=Int
m_survivalProperty=Int
m_weaponNameIndex=Int
m_modBitField=Int
m_survivalPropFadeDist=Float
 
[RecvTable.DT_RopeKeyframe]
m_localOrigin=0x0004
moveparent=0x001c
m_parentAttachment=0x0020
m_clrRender=0x0080
m_visibilityFlags=0x0330
m_hOwnerEntity=0x039c
m_nRenderMode=0x03b1
m_parentAttachmentModel=0x0750
m_fadeDist=0x075c
m_ropeZiplineAutoDetachDistance=0x0970
m_ziplineSagEnable=0x0974
m_ziplineSagHeight=0x0978
m_ziplineMoveSpeedScale=0x0a70
m_startOffset=0x0a74
m_endOffset=0x0a80
m_wiggleFadeStartTime=0x0a8c
m_wiggleEndTime=0x0a90
m_wiggleMaxLen=0x0a94
m_wiggleMagnitude=0x0a98
m_wiggleSpeed=0x0a9c
m_flScrollSpeed=0x0ad4
m_RopeFlags=0x0ad8
m_iRopeMaterialModelIndex=0x0adc
m_nSegments=0x0d60
m_hStartPoint=0x0d64
m_hEndPoint=0x0d68
m_hPrevPoint=0x0d6c
m_iStartAttachment=0x0d70
m_iEndAttachment=0x0d71
m_subdivStackCount=0x0d9c
m_subdivSliceCount=0x0da0
m_ropeLength=0x0da4
m_constraintIterations=0x0dac
m_ropeDampening=0x0db0
m_Slack=0x0db4
m_TextureScale=0x0db8
m_fLockedPoints=0x0dbc
m_lockDirectionCutoffLength=0x0dc0
m_lockDirectionStrength=0x0dc4
m_nChangeCount=0x0dc8
m_Width=0x0dcc
m_bConstrainBetweenEndpoints=0x0e60
 
[RecvTableTypes.DT_RopeKeyframe]
m_localOrigin=Vector
moveparent=Int
m_parentAttachment=Int
m_clrRender=Int
m_visibilityFlags=Int
m_hOwnerEntity=Int
m_nRenderMode=Int
m_parentAttachmentModel=Int
m_fadeDist=Float
m_ropeZiplineAutoDetachDistance=Float
m_ziplineSagEnable=Int
m_ziplineSagHeight=Float
m_ziplineMoveSpeedScale=Float
m_startOffset=Vector
m_endOffset=Vector
m_wiggleFadeStartTime=Time
m_wiggleEndTime=Time
m_wiggleMaxLen=Float
m_wiggleMagnitude=Float
m_wiggleSpeed=Float
m_flScrollSpeed=Float
m_RopeFlags=Int
m_iRopeMaterialModelIndex=Int
m_nSegments=Int
m_hStartPoint=Int
m_hEndPoint=Int
m_hPrevPoint=Int
m_iStartAttachment=Int
m_iEndAttachment=Int
m_subdivStackCount=Int
m_subdivSliceCount=Int
m_ropeLength=Int
m_constraintIterations=Int
m_ropeDampening=Float
m_Slack=Int
m_TextureScale=Float
m_fLockedPoints=Int
m_lockDirectionCutoffLength=Int
m_lockDirectionStrength=Float
m_nChangeCount=Int
m_Width=Float
m_bConstrainBetweenEndpoints=Int
 
[RecvTable.DT_ScriptMover]
m_parentAttachment=0x0020
m_vecAngVelocity=0x0158
m_vecVelocity=0x037c
m_localAngles=0x0388
m_initialOrigin=0x17a8
m_initialAngles=0x17b4
 
[RecvTableTypes.DT_ScriptMover]
@extends=DT_ScriptProp
m_parentAttachment=Int
m_vecAngVelocity=Vector
m_vecVelocity=Vector
m_localAngles=Vector
m_initialOrigin=Vector
m_initialAngles=Vector
 
[RecvTable.DT_ScriptMoverLightweight]
moveparent=0x001c
m_parentAttachment=0x0020
m_fEffects=0x0040
m_moverNetworkCellX=0x0048
m_moverNetworkCellY=0x004c
m_moverNetworkCellZ=0x0050
m_moverNetworkLocalOrigin=0x0054
m_nModelIndex=0x0060
m_moverNetworkAngularVelocity=0x0158
m_networkedFlags=0x02d8
m_moverNetworkLinearVelocity=0x037c
m_moverNetworkLocalAngles=0x0388
m_scriptNameIndex=0x0588
m_parentAttachmentModel=0x0750
m_fadeDist=0x075c
m_moveModeNonPhysics=0x16b4
m_moveModeIsLocal=0x16b8
m_moveToStartPos=0x16bc
m_moveToEndPos=0x16c8
m_moveToTimeStart=0x16d4
m_moveToTimeEnd=0x16d8
m_moveToTimeEaseIn=0x16dc
m_moveToTimeEaseOut=0x16e0
m_moveVelocity=0x16e4
m_moveGravity=0x16f0
m_trainStartTime=0x16fc
m_trainStopTime=0x1700
m_trainStartDistance=0x1704
m_trainCurrentNode=0x1708
m_trainStopNode=0x170c
m_trainInitialSpeed=0x1710
m_trainGoalSpeed=0x1714
m_trainAcceleration=0x1718
m_trainLastNode=0x171c
m_trainLastDistance=0x1720
m_trainLastSpeed=0x1724
m_trainFollowMover=0x1728
m_trainFollowDistance=0x172c
m_trainBreadcrumb=0x1730
m_trainBreadcrumbBegin=0x1750
m_trainBreadcrumbCount=0x1754
m_trainAutoRollStrength=0x1758
m_trainAutoRollLookAheadDistance=0x175c
m_trainAutoRollMax=0x1760
m_trainSimulateBeforeMeEntity=0x1764
m_rotateModeNonPhysics=0x1768
m_rotateModeIsLocal=0x176c
m_RotateToAnglesStart=0x1770
m_RotateToAnglesEnd=0x177c
m_rotateToTimeStart=0x1788
m_rotateToTimeEnd=0x178c
m_rotateToTimeEaseIn=0x1790
m_rotateToTimeEaseOut=0x1794
m_rotateAxis=0x1798
m_rotateSpeed=0x17a4
m_initialOrigin=0x17a8
m_initialAngles=0x17b4
m_trainPitchMax=0x17c0
m_useNonPhysicsMoveInterpolation=0x17d4
 
[RecvTableTypes.DT_ScriptMoverLightweight]
moveparent=Int
m_parentAttachment=Int
m_fEffects=Int
m_moverNetworkCellX=Int
m_moverNetworkCellY=Int
m_moverNetworkCellZ=Int
m_moverNetworkLocalOrigin=Vector
m_nModelIndex=Int
m_moverNetworkAngularVelocity=Vector
m_networkedFlags=Int
m_moverNetworkLinearVelocity=Vector
m_moverNetworkLocalAngles=Vector
m_scriptNameIndex=Int
m_parentAttachmentModel=Int
m_fadeDist=Float
m_moveModeNonPhysics=Int
m_moveModeIsLocal=Int
m_moveToStartPos=Vector
m_moveToEndPos=Vector
m_moveToTimeStart=Time
m_moveToTimeEnd=Time
m_moveToTimeEaseIn=Float
m_moveToTimeEaseOut=Float
m_moveVelocity=Vector
m_moveGravity=Vector
m_trainStartTime=Time
m_trainStopTime=Time
m_trainStartDistance=Float
m_trainCurrentNode=Int
m_trainStopNode=Int
m_trainInitialSpeed=Float
m_trainGoalSpeed=Float
m_trainAcceleration=Float
m_trainLastNode=Int
m_trainLastDistance=Float
m_trainLastSpeed=Float
m_trainFollowMover=Int
m_trainFollowDistance=Float
m_trainBreadcrumb=DataTable
m_trainBreadcrumbBegin=Int
m_trainBreadcrumbCount=Int
m_trainAutoRollStrength=Float
m_trainAutoRollLookAheadDistance=Float
m_trainAutoRollMax=Float
m_trainSimulateBeforeMeEntity=Int
m_rotateModeNonPhysics=Int
m_rotateModeIsLocal=Int
m_RotateToAnglesStart=Vector
m_RotateToAnglesEnd=Vector
m_rotateToTimeStart=Time
m_rotateToTimeEnd=Time
m_rotateToTimeEaseIn=Float
m_rotateToTimeEaseOut=Float
m_rotateAxis=Vector
m_rotateSpeed=Float
m_initialOrigin=Vector
m_initialAngles=Vector
m_trainPitchMax=Float
m_useNonPhysicsMoveInterpolation=Int
 
[RecvTable.DT_ScriptMoverTrainNode]
m_cellX=0x0048
m_cellY=0x004c
m_cellZ=0x0050
m_localOrigin=0x0054
m_scriptNameIndex=0x0588
m_firstChildEntityLink=0x0930
m_firstParentEntityLink=0x0934
m_numSmoothPoints=0x0970
m_trainNodeMakeSmoothPointsParity=0x0974
m_tangentType=0x0978
m_perfectCircularRotation=0x097c
 
[RecvTableTypes.DT_ScriptMoverTrainNode]
m_cellX=Int
m_cellY=Int
m_cellZ=Int
m_localOrigin=Vector
m_scriptNameIndex=Int
m_firstChildEntityLink=Int
m_firstParentEntityLink=Int
m_numSmoothPoints=Int
m_trainNodeMakeSmoothPointsParity=Int
m_tangentType=Int
m_perfectCircularRotation=Int
 
[RecvTable.DT_ScriptNetData_SNDC_DEATH_BOX]
m_bools=0x0000
m_ranges=0x0000
m_int32s=0x0000
m_times=0x0000
m_entities=0x0000
m_bools[0]=0x0b80
m_ranges[0]=0x0b86
m_int32s[0]=0x0b90
m_times[0]=0x0bc8
m_entities[0]=0x0bd4
 
[RecvTableTypes.DT_ScriptNetData_SNDC_DEATH_BOX]
@extends=DT_ScriptNetData
m_bools=Array
m_ranges=Array
m_int32s=Array
m_times=Array
m_entities=Array
m_bools[0]=Int
m_ranges[0]=Int
m_int32s[0]=Int
m_times[0]=Time
m_entities[0]=Int
 
[RecvTable.DT_ScriptNetData_SNDC_GLOBAL]
m_bools=0x0000
m_ranges=0x0000
m_int32s=0x0000
m_times=0x0000
m_entities=0x0000
m_bools[0]=0x0b80
m_ranges[0]=0x0b92
m_int32s[0]=0x0bd8
m_times[0]=0x0c20
m_entities[0]=0x0c88
 
[RecvTableTypes.DT_ScriptNetData_SNDC_GLOBAL]
@extends=DT_ScriptNetData
m_bools=Array
m_ranges=Array
m_int32s=Array
m_times=Array
m_entities=Array
m_bools[0]=Int
m_ranges[0]=Int
m_int32s[0]=Int
m_times[0]=Time
m_entities[0]=Int
 
[RecvTable.DT_ScriptNetData_SNDC_GLOBAL_NON_REWIND]
m_bools=0x0000
m_ranges=0x0000
m_int32s=0x0000
m_times=0x0000
m_entities=0x0000
m_bools[0]=0x0b80
m_ranges[0]=0x0b92
m_int32s[0]=0x0bb8
m_times[0]=0x0be0
m_entities[0]=0x0c28
 
[RecvTableTypes.DT_ScriptNetData_SNDC_GLOBAL_NON_REWIND]
@extends=DT_ScriptNetData
m_bools=Array
m_ranges=Array
m_int32s=Array
m_times=Array
m_entities=Array
m_bools[0]=Int
m_ranges[0]=Int
m_int32s[0]=Int
m_times[0]=Time
m_entities[0]=Int
 
[RecvTable.DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE]
m_bools=0x0000
m_ranges=0x0000
m_int32s=0x0000
m_times=0x0000
m_entities=0x0000
m_bools[0]=0x0b80
m_ranges[0]=0x0ba0
m_int32s[0]=0x0bdc
m_times[0]=0x0bf4
m_entities[0]=0x0c1c
 
[RecvTableTypes.DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE]
@extends=DT_ScriptNetData
m_bools=Array
m_ranges=Array
m_int32s=Array
m_times=Array
m_entities=Array
m_bools[0]=Int
m_ranges[0]=Int
m_int32s[0]=Int
m_times[0]=Time
m_entities[0]=Int
 
[RecvTable.DT_ScriptNetData_SNDC_PLAYER_GLOBAL]
m_bools=0x0000
m_ranges=0x0000
m_int32s=0x0000
m_times=0x0000
m_entities=0x0000
m_bools[0]=0x0b80
m_ranges[0]=0x0b92
m_int32s[0]=0x0bd0
m_times[0]=0x0c58
m_entities[0]=0x0c90
 
[RecvTableTypes.DT_ScriptNetData_SNDC_PLAYER_GLOBAL]
@extends=DT_ScriptNetData
m_bools=Array
m_ranges=Array
m_int32s=Array
m_times=Array
m_entities=Array
m_bools[0]=Int
m_ranges[0]=Int
m_int32s[0]=Int
m_times[0]=Time
m_entities[0]=Int
 
[RecvTable.DT_ScriptNetData_SNDC_TITAN_SOUL]
m_bools=0x0000
m_ranges=0x0000
m_int32s=0x0000
m_times=0x0000
m_entities=0x0000
m_bools[0]=0x0b80
m_ranges[0]=0x0b8a
m_int32s[0]=0x0bb0
m_times[0]=0x0bc0
m_entities[0]=0x0be8
 
[RecvTableTypes.DT_ScriptNetData_SNDC_TITAN_SOUL]
@extends=DT_ScriptNetData
m_bools=Array
m_ranges=Array
m_int32s=Array
m_times=Array
m_entities=Array
m_bools[0]=Int
m_ranges[0]=Int
m_int32s[0]=Int
m_times[0]=Time
m_entities[0]=Int
 
[RecvTable.DT_ScriptProp]
m_cloakEndTime=0x01cc
m_cloakFadeInEndTime=0x01d0
m_cloakFadeOutStartTime=0x01d4
m_cloakFadeInDuration=0x01d8
m_cloakFlickerAmount=0x01dc
m_cloakFlickerEndTime=0x01e0
m_networkedFlags=0x02d8
m_iHealth=0x0328
m_iMaxHealth=0x0470
m_minimapData=0x0858
m_nameVisibilityFlags=0x08a8
m_title=0x15f0
m_footstepType=0x1610
m_renderColorFriendlyIsValid=0x1650
m_renderColorFriendly=0x1651
m_armorType=0x1658
m_scriptPropFlags=0x165c
m_scriptPropSmartAmmoLockType=0x1660
 
[RecvTableTypes.DT_ScriptProp]
@extends=DT_DynamicProp
m_cloakEndTime=Float
m_cloakFadeInEndTime=Time
m_cloakFadeOutStartTime=Float
m_cloakFadeInDuration=Float
m_cloakFlickerAmount=Float
m_cloakFlickerEndTime=Time
m_networkedFlags=Int
m_iHealth=Int
m_iMaxHealth=Int
m_minimapData=DT_MinimapBaseEntityData
m_nameVisibilityFlags=Int
m_title=String
m_footstepType=String
m_renderColorFriendlyIsValid=Int
m_renderColorFriendly=Int
m_armorType=Int
m_scriptPropFlags=Int
m_scriptPropSmartAmmoLockType=Int
 
[RecvTable.DT_ScriptTraceVolume]
m_shapeType=0x0970
m_sphereRadius=0x0974
m_boxMins=0x0978
m_boxMaxs=0x0984
m_drawDebug=0x0990
 
[RecvTableTypes.DT_ScriptTraceVolume]
@extends=DT_BaseEntity
m_shapeType=Int
m_sphereRadius=Float
m_boxMins=Vector
m_boxMaxs=Vector
m_drawDebug=Int
 
[RecvTable.DT_ServerAnimationData]
m_animStartTime=0x0008
m_animStartCycle=0x000c
m_animSequence=0x001c
m_nResetEventsStartTime=0x0d74
m_fireDeferredStopsStartTime=0x0d7c
 
[RecvTableTypes.DT_ServerAnimationData]
m_animStartTime=Time
m_animStartCycle=Float
m_animSequence=Int
m_nResetEventsStartTime=Float
m_fireDeferredStopsStartTime=Float
 
[RecvTable.DT_SoundData]
m_targetEnt=0x0000
m_soundID=0x0008
m_networkTableID=0x0010
m_soundIsStart=0x0014
m_seek=0x0018
m_selector=0x001c
 
[RecvTableTypes.DT_SoundData]
m_targetEnt=Int
m_soundID=BitMask
m_networkTableID=Int
m_soundIsStart=Int
m_seek=Float
m_selector=Int
 
[RecvTable.DT_StatusEffectPlugin]
m_hOwnerEntity=0x039c
m_statusEffectsTimedPluginNV=0x0970
m_statusEffectsEndlessPluginNV=0x0988
 
[RecvTableTypes.DT_StatusEffectPlugin]
m_hOwnerEntity=Int
m_statusEffectsTimedPluginNV=DataTable
m_statusEffectsEndlessPluginNV=DataTable
 
[RecvTable.DT_StatusEffectTimedData]
seComboVars=0x0008
seTimeEnd=0x000c
seEaseOut=0x0010
sePausedTimeRemaining=0x0014
 
[RecvTableTypes.DT_StatusEffectTimedData]
seComboVars=Int
seTimeEnd=Time
seEaseOut=Float
sePausedTimeRemaining=Time
 
[RecvTable.DT_TEBreakModel]
m_vecOrigin=0x0028
m_angRotation.x=0x0034
m_angRotation.y=0x0038
m_angRotation.z=0x003c
m_vecSize=0x0040
m_vecVelocity=0x004c
m_nRandomization=0x0058
m_nModelIndex=0x005c
m_nCount=0x0060
m_fTime=0x0064
m_nFlags=0x0068
 
[RecvTableTypes.DT_TEBreakModel]
@extends=DT_BaseTempEntity
m_vecOrigin=Vector
m_angRotation.x=Float
m_angRotation.y=Float
m_angRotation.z=Float
m_vecSize=Vector
m_vecVelocity=Vector
m_nRandomization=Int
m_nModelIndex=Int
m_nCount=Int
m_fTime=Float
m_nFlags=Int
 
[RecvTable.DT_TEExplosion]
m_fScale=0x0038
m_nFrameRate=0x003c
m_nFlags=0x0040
m_vecNormal=0x0044
m_chMaterialType=0x0050
m_nRadius=0x0054
m_nMagnitude=0x005c
m_impactEffectTableIndex=0x0060
m_surfaceProp=0x0064
m_owner=0x0068
m_victim=0x006c
 
[RecvTableTypes.DT_TEExplosion]
@extends=DT_TEParticleSystem
m_fScale=Float
m_nFrameRate=Int
m_nFlags=Int
m_vecNormal=Vector
m_chMaterialType=Int
m_nRadius=Int
m_nMagnitude=Int
m_impactEffectTableIndex=Int
m_surfaceProp=Int
m_owner=Int
m_victim=Int
 
[RecvTable.DT_TEParticleSystem]
m_vecOrigin.x=0x0028
m_vecOrigin.y=0x002c
m_vecOrigin.z=0x0030
 
[RecvTableTypes.DT_TEParticleSystem]
@extends=DT_BaseTempEntity
m_vecOrigin.x=Float
m_vecOrigin.y=Float
m_vecOrigin.z=Float
 
[RecvTable.DT_TEPhysicsProp]
m_vecOrigin=0x0028
m_angRotation.x=0x0034
m_angRotation.y=0x0038
m_angRotation.z=0x003c
m_vecVelocity=0x0040
m_nModelIndex=0x004c
m_nSkin=0x0050
m_nFlags=0x0054
m_nEffects=0x0058
 
[RecvTableTypes.DT_TEPhysicsProp]
@extends=DT_BaseTempEntity
m_vecOrigin=Vector
m_angRotation.x=Float
m_angRotation.y=Float
m_angRotation.z=Float
m_vecVelocity=Vector
m_nModelIndex=Int
m_nSkin=Int
m_nFlags=Int
m_nEffects=Int
 
[RecvTable.DT_TEProjectileTrail]
m_owner=0x0028
m_startPos=0x002c
m_endPos=0x0038
m_weaponClassIndex=0x0044
m_modBitfield=0x0048
m_projectileTrailIndex=0x004c
m_impactEffectTable=0x0050
 
[RecvTableTypes.DT_TEProjectileTrail]
@extends=DT_BaseTempEntity
m_owner=Int
m_startPos=Vector
m_endPos=Vector
m_weaponClassIndex=Int
m_modBitfield=Int
m_projectileTrailIndex=Int
m_impactEffectTable=Int
 
[RecvTable.DT_TEScriptParticleSystemOnEntity]
m_effectIndex=0x0028
m_ent=0x002c
m_attachType=0x0030
m_attachType2=0x0034
m_attachmentId=0x0038
m_attachmentId2=0x0039
 
[RecvTableTypes.DT_TEScriptParticleSystemOnEntity]
@extends=DT_BaseTempEntity
m_effectIndex=Int
m_ent=Int
m_attachType=Int
m_attachType2=Int
m_attachmentId=Int
m_attachmentId2=Int
 
[RecvTable.DT_TEShatterSurface]
m_vecOrigin=0x0028
m_vecAngles=0x0034
m_vecForce=0x0040
m_vecForcePos=0x004c
m_flWidth=0x0058
m_flHeight=0x005c
m_flShardSize=0x0060
m_nSurfaceType=0x0064
 
[RecvTableTypes.DT_TEShatterSurface]
@extends=DT_BaseTempEntity
m_vecOrigin=Vector
m_vecAngles=Vector
m_vecForce=Vector
m_vecForcePos=Vector
m_flWidth=Float
m_flHeight=Float
m_flShardSize=Float
m_nSurfaceType=Int
 
[RecvTable.DT_Team]
player_array_element=0x0000
"\"player_array\""=0x0000
m_score=0x0970
m_score2=0x0974
m_scriptCustomValue=0x0978
m_iTeamTeamNum=0x097c
m_szTeamname=0x09a0
 
[RecvTableTypes.DT_Team]
player_array_element=Int
"\"player_array\""=Array
m_score=Int
m_score2=Int
m_scriptCustomValue=Int
m_iTeamTeamNum=Int
m_szTeamname=String
 
[RecvTable.DT_Turret]
m_iHealth=0x0328
m_iMaxHealth=0x0470
m_overlayEventParity=0x1661
m_settingsIndex=0x1898
m_driver=0x18ac
m_forceAimPitch=0x18d4
m_forceAimYaw=0x18d8
m_driverDetachTime=0x18dc
m_driverState=0x18e0
m_turretWeapon=0x18e4
m_title=0x18f0
 
[RecvTableTypes.DT_Turret]
@extends=DT_BaseAnimatingOverlay
m_iHealth=Int
m_iMaxHealth=Int
m_overlayEventParity=DataTable
m_settingsIndex=Int
m_driver=Int
m_forceAimPitch=Float
m_forceAimYaw=Float
m_driverDetachTime=Float
m_driverState=Int
m_turretWeapon=Int
m_title=String
 
[RecvTable.DT_WeaponPlayerData]
m_moveSpread=0x0008
m_spreadStartTime=0x000c
m_spreadStartFracHip=0x0010
m_spreadStartFracADS=0x0014
m_kickSpreadHipfire=0x0018
m_kickSpreadADS=0x001c
m_kickTime=0x0020
m_kickScaleBasePitch=0x0024
m_kickScaleBaseYaw=0x0028
m_kickPatternScaleBase=0x002c
m_kickSpringHeatBaseTime=0x0030
m_kickSpringHeatBaseValue=0x0034
m_semiAutoTriggerHoldTime=0x0038
m_semiAutoTriggerDown=0x003c
m_pendingTriggerPull=0x003d
m_semiAutoNeedsRechamber=0x003e
m_pendingReloadAttempt=0x003f
m_offhandHybridNormalMode=0x0040
m_pendingoffhandHybridToss=0x0041
m_fastHolster=0x0042
m_didFirstDeploy=0x0043
m_shouldCatch=0x0044
m_clipModelIsHidden=0x0045
m_segmentedReloadEndSeqRequired=0x0046
m_reloadStartedEmpty=0x0047
m_segmentedAnimStartedOneHanded=0x0048
m_segmentedAnimStartedAkimbo=0x0049
m_segmentedReloadCanRestartLoop=0x004a
m_segmentedReloadLoopFireLocked=0x004b
m_realtimeModCmds=0x004c
m_realtimeModCmdHead=0x0054
m_realtimeModCmdCount=0x0055
m_realtimeModCanADS=0x0056
m_customActivityAttachedModelIndex=0x0058
m_customActivityAttachedModelAttachmentId=0x005c
m_fireRateLerp_startTime=0x0060
m_fireRateLerp_startFraction=0x0064
m_fireRateLerp_stopTime=0x0068
m_fireRateLerp_stopFraction=0x006c
m_chargeAnimIndex=0x0070
m_chargeAnimIndexOld=0x0074
m_proScreen_owner=0x0078
m_proScreen_int0=0x007c
m_proScreen_int1=0x0080
m_proScreen_int2=0x0084
m_proScreen_float0=0x0088
m_proScreen_float1=0x008c
m_proScreen_float2=0x0090
m_reloadMilestone=0x0094
m_rechamberMilestone=0x0098
m_cooldownMilestone=0x009c
m_prevSeqWeight=0x00a0
m_fullReloadStartTime=0x00a4
m_scriptTime0=0x00a8
m_scriptTime1=0x00ac
m_scriptFlags0=0x00b0
m_scriptInt0=0x00b4
m_scriptInt1=0x00b6
m_curZoomFOV=0x00b8
m_targetZoomFOV=0x00bc
m_zoomFOVLerpTime=0x00c0
m_zoomFOVLerpEndTime=0x00c4
m_latestDryfireTime=0x00c8
m_requestedAttackEndTime=0x00cc
m_currentAltFireAnimIndex=0x00d0
m_legendaryModelIndex=0x00d4
m_charmModelIndex=0x00d8
m_charmAttachment=0x00dc
m_charmItemFlavorGUID=0x00e0
m_akimboDisabled=0x00e4
 
[RecvTableTypes.DT_WeaponPlayerData]
m_moveSpread=Float
m_spreadStartTime=Time
m_spreadStartFracHip=Float
m_spreadStartFracADS=Float
m_kickSpreadHipfire=Float
m_kickSpreadADS=Float
m_kickTime=Time
m_kickScaleBasePitch=Float
m_kickScaleBaseYaw=Float
m_kickPatternScaleBase=Float
m_kickSpringHeatBaseTime=Time
m_kickSpringHeatBaseValue=Float
m_semiAutoTriggerHoldTime=Time
m_semiAutoTriggerDown=Int
m_pendingTriggerPull=Int
m_semiAutoNeedsRechamber=Int
m_pendingReloadAttempt=Int
m_offhandHybridNormalMode=Int
m_pendingoffhandHybridToss=Int
m_fastHolster=Int
m_didFirstDeploy=Int
m_shouldCatch=Int
m_clipModelIsHidden=Int
m_segmentedReloadEndSeqRequired=Int
m_reloadStartedEmpty=Int
m_segmentedAnimStartedOneHanded=Int
m_segmentedAnimStartedAkimbo=Int
m_segmentedReloadCanRestartLoop=Int
m_segmentedReloadLoopFireLocked=Int
m_realtimeModCmds=DataTable
m_realtimeModCmdHead=Int
m_realtimeModCmdCount=Int
m_realtimeModCanADS=Int
m_customActivityAttachedModelIndex=Int
m_customActivityAttachedModelAttachmentId=Int
m_fireRateLerp_startTime=Time
m_fireRateLerp_startFraction=Float
m_fireRateLerp_stopTime=Time
m_fireRateLerp_stopFraction=Float
m_chargeAnimIndex=Int
m_chargeAnimIndexOld=Int
m_proScreen_owner=Int
m_proScreen_int0=Int
m_proScreen_int1=Int
m_proScreen_int2=Int
m_proScreen_float0=Float
m_proScreen_float1=Float
m_proScreen_float2=Float
m_reloadMilestone=Int
m_rechamberMilestone=Int
m_cooldownMilestone=Int
m_prevSeqWeight=Int
m_fullReloadStartTime=Time
m_scriptTime0=Time
m_scriptTime1=Time
m_scriptFlags0=Int
m_scriptInt0=Int
m_scriptInt1=Int
m_curZoomFOV=Float
m_targetZoomFOV=Float
m_zoomFOVLerpTime=Float
m_zoomFOVLerpEndTime=Time
m_latestDryfireTime=Time
m_requestedAttackEndTime=Time
m_currentAltFireAnimIndex=Int
m_legendaryModelIndex=Int
m_charmModelIndex=Int
m_charmAttachment=Int
m_charmItemFlavorGUID=Int
m_akimboDisabled=Int
 
[RecvTable.DT_World]
m_WorldMins=0x0970
m_WorldMaxs=0x097c
m_bStartDark=0x0988
m_statusEffectsGenerationNV=0x099c
m_worldFlags=0x09a4
m_timeshiftArmDeviceSkin=0x09a8
m_spTitanLoadoutUnlocks=0x09ac
m_deathFieldIsActive=0x09b0
m_deathFieldOrigin=0x09f0
m_deathFieldRadiusStart=0x0cf0
m_deathFieldRadiusEnd=0x0df0
m_deathFieldTimeStart=0x0ef0
m_deathFieldTimeEnd=0x0ff0
m_teamRelationRulesForPVE=0x10f0
m_civilTeamsMaskA=0x10f8
m_civilTeamsMaskB=0x1108
m_rabidTeamsMask=0x1120
m_crossPlayGen5PcRealmsBitMask=0x1138
m_crossPlayWithPcRealmsBitMask=0x1140
 
[RecvTableTypes.DT_World]
@extends=DT_BaseEntity
m_WorldMins=Vector
m_WorldMaxs=Vector
m_bStartDark=Int
m_statusEffectsGenerationNV=Int
m_worldFlags=Int
m_timeshiftArmDeviceSkin=Int
m_spTitanLoadoutUnlocks=Int
m_deathFieldIsActive=DataTable
m_deathFieldOrigin=DataTable
m_deathFieldRadiusStart=DataTable
m_deathFieldRadiusEnd=DataTable
m_deathFieldTimeStart=DataTable
m_deathFieldTimeEnd=DataTable
m_teamRelationRulesForPVE=Int
m_civilTeamsMaskA=DataTable
m_civilTeamsMaskB=DataTable
m_rabidTeamsMask=DataTable
m_crossPlayGen5PcRealmsBitMask=BitMask
m_crossPlayWithPcRealmsBitMask=BitMask
 
[RecvTable.DT_Ziprail]
m_numZiprailPathNodes=0x0fa0
m_numSmoothPointsForPathNodes=0x0fa4
m_tangentTypesForPathNodes=0x1024
m_positionsForPathNodes=0x10a4
m_smoothDistanceToNode=0x1224
m_ziprailPathLen=0x12a4
m_pathExtentsMins=0x12a8
m_pathExtentsMaxs=0x12b4
m_ziprailUseAutoDetachSpeed=0x12c0
 
[RecvTableTypes.DT_Ziprail]
@extends=DT_Zipline
m_numZiprailPathNodes=Int
m_numSmoothPointsForPathNodes=DataTable
m_tangentTypesForPathNodes=DataTable
m_positionsForPathNodes=DataTable
m_smoothDistanceToNode=DataTable
m_ziprailPathLen=Float
m_pathExtentsMins=Vector
m_pathExtentsMaxs=Vector
m_ziprailUseAutoDetachSpeed=Int
 
[WeaponSettingsMeta]
count=1198
list=0xad63480
types=0x216e9a8
base=0x19c8
 
[WeaponSettings]
{empty}=0x0000
offhand_active_slot=0x0000
offhand_blocks_sprint=0x0004
offhand_default_inventory_slot=0x0008
offhand_interupts_weapon_anims=0x000c
offhand_raise_is_interrupt_resumable=0x000d
offhand_activates_on_zoom=0x000e
offhand_hold_enabled=0x000f
offhand_deploy_requires_input=0x0010
hide_holstered_sidearm_when_active=0x0011
offhand_transition_has_attach_detach_anim_events=0x0012
offhand_toss_hold_is_resumable=0x0013
offhand_toss_activates_on_attack=0x0014
toss_has_post_loop=0x0015
offhand_switch_on_attack=0x0016
offhand_hybrid_switch_on_attack=0x0017
offhand_hybrid_switch_on_lower=0x0018
offhand_hybrid_block_switch_if_empty=0x0019
offhand_hybrid_alt_hand_uses_attack_button=0x001a
offhand_hybrid_tracks_projectiles=0x001b
offhand_hybrid_reset_shot_count_on_attack=0x001c
offhand_hidden_for_fullscreen_ads=0x001d
offhand_uses_hud_ammo_status=0x001e
offhand_allows_inpect=0x001f
offhand_wants_first_deploy=0x0020
offhand_disable_other_offhands=0x0021
offhand_holds_on_tactical=0x0022
offhand_deactivate_on_jump_toggle_or_release=0x0023
offhand_instant_swap_to_offhand=0x0024
offhand_chargeEnd_holster_on_noattack=0x0025
offhand_clear_zoom_on_activate=0x0026
offhand_allow_swap_to_on_zipline=0x0027
offhand_only_swap_to_on_ground=0x0028
offhand_interrupt_climbing=0x0029
offhand_include_primary_activity_mods=0x002a
offhand_match_player_skin=0x002b
offhand_can_interrupt_itself=0x002c
offhand_cancelled_by_melee=0x002d
offhand_switch_slot=0x002e
offhand_restore_after_melee=0x002f
offhand_switch_force_draw=0x0030
smart_ammo_hud_type=0x0034
smart_ammo_weapon_type=0x0038
smart_ammo_lock_type=0x003c
smart_ammo_search_angle=0x0040
smart_ammo_search_distance=0x0044
smart_ammo_new_target_delay=0x0048
smart_ammo_apply_new_target_delay_to_first_target=0x004c
smart_ammo_target_max_locks_normal=0x0050
smart_ammo_target_max_locks_heavy=0x0054
smart_ammo_target_npc_lock_factor=0x0058
smart_ammo_alert_npc_fraction=0x005c
smart_ammo_max_targets=0x0060
smart_ammo_max_targeted_burst=0x0064
smart_ammo_alt_lock_style=0x0068
smart_ammo_allow_ads_lock=0x0069
smart_ammo_allow_hip_fire_lock=0x006a
smart_ammo_allow_search_while_firing=0x006b
smart_ammo_allow_search_while_inactive=0x006c
smart_ammo_only_search_on_charge=0x006d
smart_ammo_always_do_burst=0x006e
smart_ammo_track_cloaked_targets=0x006f
smart_ammo_targeting_time_min=0x0070
smart_ammo_targeting_time_max=0x0074
smart_ammo_targeting_time_min_npc=0x0078
smart_ammo_targeting_time_max_npc=0x007c
smart_ammo_targeting_time_modifier_cloaked=0x0080
smart_ammo_targeting_time_modifier_projectile=0x0084
smart_ammo_targeting_time_modifier_projectile_owner=0x0088
smart_ammo_unlock_debounce_time=0x008c
smart_ammo_draw_acquisition_lines=0x0090
smart_ammo_target_confirmed_sound=0x0098
smart_ammo_target_confirming_sound=0x00a0
smart_ammo_target_found_sound=0x00a8
smart_ammo_target_lost_sound=0x00b0
smart_ammo_looping_sound_acquiring=0x00b8
smart_ammo_looping_sound_locked=0x00c0
smart_ammo_search_npcs=0x00c8
smart_ammo_search_players=0x00c9
smart_ammo_stick_to_fully_locked_targets=0x00ca
smart_ammo_hold_and_reset_after_all_locks=0x00cc
smart_ammo_active_shot_time=0x00d0
smart_ammo_active_shot_on_first_lock_only=0x00d4
smart_ammo_active_shot_damage_multiplier=0x00d8
smart_ammo_player_targets_must_be_tracked=0x00dc
smart_ammo_npc_targets_must_be_tracked=0x00dd
smart_ammo_other_targets_must_be_tracked=0x00de
smart_ammo_tracked_targets_check_visibility=0x00df
smart_ammo_max_trackers_per_target=0x00e0
smart_ammo_tracker_status_effects=0x00e4
smart_ammo_lock_effect_attachment=0x00e8
smart_ammo_lock_effect2_attachment=0x00f0
smart_ammo_search_friendly_team=0x00f8
smart_ammo_search_enemy_team=0x00f9
smart_ammo_search_neutral_team=0x00fa
smart_ammo_search_phase_shift=0x00fb
regen_ammo_sound_range_name_2=0x0100
regen_ammo_sound_range_name_1=0x0108
regen_ammo_sound_range_start_3=0x0110
regen_ammo_sound_range_start_2=0x0114
aimassist_disable_hipfire=0x0118
aimassist_disable_ads=0x0119
aimassist_disable_hipfire_titansonly=0x011a
aimassist_disable_ads_titansonly=0x011b
aimassist_disable_hipfire_humansonly=0x011c
aimassist_disable_ads_humansonly=0x011d
aimassist_adspull_weaponclass=0x0120
aimassist_adspull_zoomStart=0x0124
aimassist_adspull_zoomEnd=0x0128
akimbo_weapon_flip_mouse_button_input=0x012c
is_akimbo_weapon=0x012d
use_akimbo_damage_source=0x012e
akimbo_deploy_holsters_althand=0x012f
activitymodifier1p=0x0130
activitymodifier3p=0x0138
play_one_handed_alt_hand_anim_on_mainhand=0x0140
has_linked_anims=0x0141
anim_reuse_unarmed=0x0142
anim_stop_start_gesture_on_attack=0x0143
use_discard_anim=0x0144
ap_leghead_ratio_easy=0x0148
ap_leghead_ratio_hard=0x014c
ap_aim_accuracy_easy=0x0150
ap_aim_accuracy_hard=0x0154
ap_zoom_accuracy_easy=0x0158
ap_zoom_accuracy_hard=0x015c
ap_min_burst=0x0160
ap_max_burst=0x0164
ap_min_close_range_burst=0x0168
ap_max_close_range_burst=0x016c
ap_max_range_for_close_burst=0x0170
ap_rest_time_between_bursts_min=0x0174
ap_rest_time_between_bursts_max=0x0178
ap_max_engage_range=0x017c
ap_min_engage_range=0x0180
ap_optimal_range=0x0184
ap_zoom_allowed=0x0188
allow_headshots=0x0189
projectiles_per_shot=0x018c
blast_pattern=0x0190
blast_pattern_default_scale=0x0194
blast_pattern_npc_scale=0x0198
blast_pattern_zero_distance=0x019c
bodygroup1_set=0x01a0
bodygroup2_set=0x01a4
bodygroup3_set=0x01a8
bodygroup4_set=0x01ac
bodygroup5_set=0x01b0
bodygroup6_set=0x01b4
bodygroup7_set=0x01b8
bodygroup8_set=0x01bc
bodygroup9_set=0x01c0
bodygroup10_set=0x01c4
bodygroup11_set=0x01c8
bodygroup12_set=0x01cc
bodygroup13_set=0x01d0
bodygroup14_set=0x01d4
bodygroup15_set=0x01d8
bodygroup16_set=0x01dc
bodygroup17_set=0x01e0
bodygroup18_set=0x01e4
bodygroup19_set=0x01e8
bodygroup20_set=0x01ec
bodygroup21_set=0x01f0
bodygroup22_set=0x01f4
bodygroup23_set=0x01f8
bodygroup24_set=0x01fc
bodygroup25_set=0x0200
bodygroup26_set=0x0204
bodygroup27_set=0x0208
bodygroup28_set=0x020c
bodygroup29_set=0x0210
bodygroup30_set=0x0214
bodygroup31_set=0x0218
bodygroup32_set=0x021c
bodygroup_ads_scope_set=0x0220
bodygroup_ammo_index_count=0x0224
zoomed_convar_sensitivity_index=0x0228
zoomed_convar_toggle_sensitivity_index=0x022c
clip_bodygroup_show_for_milestone_0=0x0230
clip_bodygroup_show_for_milestone_1=0x0231
clip_bodygroup_show_for_milestone_2=0x0232
clip_bodygroup_show_for_milestone_3=0x0233
bolt_hitsize=0x0234
bolt_hitsize_grow1_time=0x0238
bolt_hitsize_grow1_size=0x023c
bolt_hitsize_grow2_time=0x0240
bolt_hitsize_grow2_size=0x0244
bolt_hitsize_growfinal_lerptime=0x0248
bolt_hitsize_growfinal_size=0x024c
bolt_bounce_frac=0x0250
bolt_gravity_enabled=0x0254
bolt_zero_distance=0x0258
rui_crosshair_index=0x025c
active_crosshair_count=0x0260
ordnance_crosshair_always_on_start_index=0x0264
crosshair_force_sprint_fade_disabled=0x0268
red_crosshair_range=0x026c
dof_nearDepthStart=0x0270
dof_nearDepthEnd=0x0274
dof_zoom_nearDepthStart=0x0278
dof_zoom_nearDepthEnd=0x027c
dof_zoom_focusArea_Horizontal=0x0280
dof_zoom_focusArea_Top=0x0284
dof_zoom_focusArea_Bottom=0x0288
has_energized=0x028c
energized_duration=0x0290
energized_time_consumed_per_shot=0x0294
energize_activity_time=0x0298
energize_effect0_attachment=0x02a0
energize_effect0_attachment_scope=0x02a8
can_energize_when_energized=0x02b0
regen_ammo_sound_range_start_1=0x02b4
regen_ammo_while_firing=0x02b8
regen_ammo_forced_delay=0x02bc
regen_ammo_stockpile_drain_rate_when_charging=0x02c0
fx_muzzle_flash_attach=0x02c8
fx_muzzle_flash2_attach=0x02d0
fx_shell_eject_attach=0x02d8
fx_shell_eject2_attach=0x02e0
fx_muzzle_flash_attach_scoped=0x02e8
fx_muzzle_flash2_attach_scoped=0x02f0
fx_shell_eject_attach_scoped=0x02f8
fx_shell_eject2_attach_scoped=0x0300
clear_fx_on_new_view_model=0x0308
regen_ammo_stockpile_max_fraction=0x030c
regen_ammo_refill_start_delay=0x0310
regen_ammo_refill_rate=0x0314
ammo_regen_takes_from_stockpile=0x0318
ammo_pool_type=0x031c
chance_for_bonus_last_shot_in_clip=0x0320
lifetime_shots_default=0x0324
low_ammo_fraction=0x0328
destroy_on_all_ammo_take=0x032c
uses_ammo_pool=0x032d
ammo_display=0x0330
ammo_drains_to_empty_on_fire=0x0338
ammo_display_as_clips=0x0339
ammo_no_remove_from_stockpile=0x033a
ammo_no_remove_from_clip=0x033b
ammo_size_segmented_reload=0x033c
grapple_weapon=0x0340
grapple_scaled_ammo_drain=0x0341
grapple_power_required=0x0344
grapple_power_use_rate=0x0348
grapple_maxLength=0x034c
grapple_maxLengthVert=0x0350
grapple_shootVel=0x0354
grapple_retractVel=0x0358
ammo_min_to_fire_autoreloads=0x035c
ammo_clip_random_loss_on_npc_drop_chunksize=0x0360
ammo_clip_random_loss_on_npc_drop=0x0364
rapid_fire_overrides_min_ammo=0x0368
ammo_min_to_fire=0x036c
printname=0x0370
shortprintname=0x0378
description=0x0380
force_has_weapon_clone=0x0388
clone_sync_to_player=0x0389
clone_anim_blending=0x038a
silenced=0x038b
is_semi_auto=0x038c
primary_fire_does_not_block_sprint=0x038d
bypass_semiauto_hold_protection=0x038e
gamepad_use_yaw_speed_for_pitch_ads=0x038f
locks_weapon_change=0x0390
attack_button_presses_melee=0x0391
attack_button_presses_ads=0x0392
alt_fire_alternates_viewkick_yaw=0x0393
give_command_forced_inventory_slot=0x0394
alt_fire_anim_count=0x0398
zoomfrac_autoattack=0x039c
allow_zoom_on_raise=0x03a0
update_player_last_fire_time=0x03a1
alt_hand_3p_attach_name=0x03a8
deflect_missile_impacts=0x03b0
deflect_missile_impacts_dot=0x03b4
althand_allow_mainhand_on_zipline=0x03b8
fire_in_real_world_while_phased=0x03b9
fire_to_redirect_projectile_mid_flight=0x03ba
shared_energy_cost=0x03bc
shared_energy_charge_cost=0x03c0
core_duration=0x03c4
core_build_time=0x03c8
sway_rotate_scale_unzoomed=0x03cc
sway_rotate_scale_zoomed=0x03d0
player_hands_attachment=0x03d8
looping_sounds=0x03e0
readymessage=0x03e8
readyhint=0x03f0
active_optic_appearance=0x03f8
body_skin=0x0400
anim_alt_idleAttack=0x0404
minimap_reveal_distance=0x0408
breaks_cloak=0x040c
battle_chatter_event=0x0410
challeng_req=0x0418
challenge_tier=0x0420
mod_print_name=0x0428
mod_short_print_name=0x0430
mod_description=0x0438
never_drop=0x0440
destroy_on_drop=0x0441
thirdperson_fire_from_mount_point=0x0442
show_pre_modded_tracer=0x0443
chroma_color=0x0444
heat_per_bullet=0x0450
lifesteal_heal_percent=0x0454
heartbeat_sensor_size=0x0458
ammo_per_shot=0x045c
ammo_clip_reload_max=0x0460
ammo_default_total=0x0464
hideForSkydive=0x0468
hide_when_holstered=0x0469
object_placement_run_mode=0x046c
object_placer=0x0470
object_placement_distance_max=0x0474
object_placement_hill_angle_max=0x0478
object_placement_force_upright=0x047c
object_placement_clearance_behind=0x0480
object_placement_last_good_distance_max=0x0484
object_placement_last_good_angle_max=0x0488
object_placement_drop_to_ground_offset_max=0x048c
object_placement_distance_to_ground_max=0x0490
object_placement_percent_off_ledge_max=0x0494
object_placement_ground_penetration_max=0x0498
object_placement_use_top_trace=0x049c
object_placement_top_side_percent_pierce_max=0x04a0
object_placement_top_distance_pierce_max=0x04a4
object_placement_trace_through_turrets=0x04a8
object_placement_ignore_players=0x04a9
object_placement_vehicle_attachment_index=0x04ac
object_placement_vehicle_offset=0x04b0
object_placement_special=0x04bc
ammo_stockpile_max=0x04c0
custom_haptics_control=0x04c4
r_trig_custom_str=0x04c8
r_trig_custom_mode=0x04cc
l_trig_custom_str=0x04d0
l_trig_custom_mode=0x04d4
disable_zoomed_rechamber=0x04d8
enable_highlight_networking_on_creation=0x04d9
rechamber_time=0x04dc
rechamber_time_late1=0x04e0
rechamber_time_late2=0x04e4
rechamber_time_late3=0x04e8
vortex_drain=0x04ec
fire_sound_1=0x04f0
fire_sound_2=0x04f8
fire_sound_3=0x0500
fire_sound_first_shot=0x0508
fire_sound_1_npc=0x0510
fire_sound_2_npc=0x0518
fire_sound_3_npc=0x0520
fire_sound_first_shot_npc=0x0528
fire_sound_1_player_1p=0x0530
fire_sound_2_player_1p=0x0538
fire_sound_3_player_1p=0x0540
fire_sound_first_shot_player_1p=0x0548
fire_sound_1_player_3p=0x0550
fire_sound_2_player_3p=0x0558
fire_sound_3_player_3p=0x0560
fire_sound_first_shot_player_3p=0x0568
fire_sound_partial_burst_player_1p=0x0570
fire_sound_partial_burst_player_3p=0x0578
burst_or_looping_fire_sound_start=0x0580
burst_or_looping_fire_sound_middle=0x0588
burst_or_looping_fire_sound_end=0x0590
burst_or_looping_fire_sound_start_npc=0x0598
burst_or_looping_fire_sound_resume_npc=0x05a0
burst_or_looping_fire_sound_middle_npc=0x05a8
burst_or_looping_fire_sound_end_npc=0x05b0
burst_or_looping_fire_sound_start_1p=0x05b8
burst_or_looping_fire_sound_resume_1p=0x05c0
burst_or_looping_fire_sound_middle_1p=0x05c8
burst_or_looping_fire_sound_end_1p=0x05d0
burst_or_looping_fire_sound_start_3p=0x05d8
burst_or_looping_fire_sound_resume_3p=0x05e0
burst_or_looping_fire_sound_middle_3p=0x05e8
burst_or_looping_fire_sound_end_3p=0x05f0
idle_sound_player_1p=0x05f8
low_ammo_sound_name_1=0x0600
low_ammo_sound_name_2=0x0608
low_ammo_sound_name_3=0x0610
low_ammo_sound_name_4=0x0618
low_ammo_sound_name_5=0x0620
low_ammo_sound_name_6=0x0628
low_ammo_sound_name_7=0x0630
low_ammo_sound_name_8=0x0638
low_ammo_sound_name_9=0x0640
low_ammo_sound_name_10=0x0648
low_ammo_sound_name_11=0x0650
low_ammo_sound_name_12=0x0658
low_ammo_sound_name_13=0x0660
low_ammo_sound_name_14=0x0668
low_ammo_sound_name_15=0x0670
low_ammo_sound_range_start_1=0x0678
low_ammo_sound_range_start_2=0x067c
low_ammo_sound_range_start_3=0x0680
low_ammo_sound_range_name_1=0x0688
low_ammo_sound_range_name_2=0x0690
low_ammo_sound_range_name_3=0x0698
sound_disabledfire=0x06a0
sound_dryfire=0x06a8
sound_pickup=0x06b0
sound_weapon_ready=0x06b8
sound_cook_warning=0x06c0
sound_throw_1p=0x06c8
sound_throw_3p=0x06d0
sound_deploy_1p=0x06d8
sound_deploy_3p=0x06e0
sound_grenade_projectile=0x06e8
sound_trigger_pull=0x06f0
sound_trigger_release=0x06f8
spread_stand_hip=0x0700
spread_stand_hip_run=0x0704
spread_stand_hip_sprint=0x0708
spread_stand_ads=0x070c
spread_crouch_hip=0x0710
spread_crouch_ads=0x0714
spread_air_hip=0x0718
spread_air_hip_moving=0x071c
spread_air_ads=0x0720
spread_air_ads_moving=0x0724
spread_wallrunning=0x0728
spread_wallhanging=0x072c
spread_moving_decay_rate=0x0730
spread_moving_increase_rate=0x0734
spread_kick_on_fire_stand_hip=0x0738
spread_kick_on_fire_stand_ads=0x073c
spread_kick_on_fire_crouch_hip=0x0740
spread_kick_on_fire_crouch_ads=0x0744
spread_kick_on_fire_air_hip=0x0748
spread_kick_on_fire_air_ads=0x074c
spread_min_kick=0x0750
spread_max_kick_stand_hip=0x0754
spread_max_kick_stand_ads=0x0758
spread_max_kick_crouch_hip=0x075c
spread_max_kick_crouch_ads=0x0760
spread_max_kick_air_hip=0x0764
spread_max_kick_air_ads=0x0768
spread_decay_rate=0x076c
spread_decay_delay=0x0770
spread_time_to_max=0x0774
primary_attack_ignores_spread=0x0778
spread_update_hipfire_in_ads=0x0779
threat_scope_fadedist_start=0x077c
threat_scope_fadedist_end=0x0780
threat_scope_enabled=0x0784
threat_scope_zoomToggle_only=0x0785
threat_scope_zoomfrac_start=0x0788
threat_scope_zoomfrac_end=0x078c
threat_scope_bounds_tagname1=0x0790
threat_scope_bounds_tagname2=0x0798
threat_scope_bounds_width=0x07a0
threat_scope_bounds_height=0x07a4
threat_scope_fadeWithDistance=0x07a8
weapon_type_flags=0x07ac
is_consumable=0x07b0
is_twohanded_consumable=0x07b1
is_clacker=0x07b2
is_burn_mod=0x07b3
is_heirloom=0x07b4
is_artifact=0x07b5
cooldown_type=0x07b8
holster_type=0x07bc
ballistic_type=0x07c0
viewmodel_offset_hip=0x07c4
viewmodel_offset_ads=0x07d0
viewmodel_offset_zoom_frac_start=0x07dc
viewmodel_offset_zoom_frac_end=0x07e0
viewmodel_offset_offhand_scale=0x07e4
viewmodel_ads_centerpoint_attachment=0x07e8
viewmodel_ads_rui_bottomleft_attachment=0x07f0
viewmodel_offset_ads_by_centerpoint=0x07f8
viewmodel_color_by_soundmeter=0x07fc
viewmodel_spring_jolt=0x0800
viewmodel_jolt_scale=0x0804
viewmodel_jolt_backwardPerShot=0x0808
viewmodel_jolt_side=0x080c
viewmodel_jolt_roll=0x0818
zipline_station_attachment_ground=0x0828
zipline_station_attachment_wall=0x0830
zipline_station_attachment_ledge=0x0838
zipline_station_animation_begin=0x0840
zipline_station_animation_ground=0x0848
zipline_station_animation_wall=0x0850
zipline_station_animation_ledge=0x0858
zipline_grenade=0x0860
zipline_grenade_auto_detach_distance=0x0864
zipline_grenade_snap_distance=0x0868
zipline_grenade_snap_angle=0x086c
zipline_distance_min=0x0870
zipline_distance_max=0x0874
ammo_clip_size=0x0878
ammo_suck_behavior=0x087c
ads_force_firstperson=0x0880
ads_fov_zoomfrac_end=0x0884
ads_fov_zoomfrac_start=0x0888
move_speed_modifier_ads_passive=0x088c
move_speed_modifier=0x0890
ads_anim_blend_enabled=0x0894
viewkick_pattern=0x0898
viewkick_pattern_valuePerShot=0x089c
cooldown_viewkick_pitch_base=0x08a0
cooldown_viewkick_pitch_random=0x08a4
cooldown_viewkick_pitch_random_innerexclude=0x08a8
cooldown_viewkick_yaw_base=0x08ac
cooldown_viewkick_yaw_random=0x08b0
cooldown_viewkick_yaw_random_innerexclude=0x08b4
cooldown_viewkick_softScale=0x08b8
cooldown_viewkick_hardScale=0x08bc
cooldown_viewkick_adsScale=0x08c0
viewkick_hipfire_weaponFraction=0x08c4
viewkick_hipfire_weaponFraction_vmScale=0x08c8
viewkick_ads_weaponFraction=0x08cc
viewkick_ads_weaponFraction_vmScale=0x08d0
viewkick_duck_scale=0x08d4
viewkick_hover_scale=0x08d8
viewkick_move_scale=0x08dc
viewkick_air_scale_ads=0x08e0
viewkick_pitch_base=0x08e4
viewkick_pitch_random=0x08e8
viewkick_pitch_random_innerexclude=0x08ec
viewkick_pitch_softScale=0x08f0
viewkick_pitch_hardScale=0x08f4
viewkick_perm_pitch_base=0x08f8
viewkick_perm_pitch_random=0x08fc
viewkick_perm_pitch_random_innerexclude=0x0900
viewkick_roll_randomMin=0x0904
viewkick_roll_randomMax=0x0908
viewkick_roll_softScale=0x090c
viewkick_roll_hardScale=0x0910
viewkick_roll_base=0x0914
viewkick_scale_firstshot_hipfire=0x0918
viewkick_scale_firstshot_ads=0x091c
viewkick_scale_min_hipfire=0x0920
viewkick_scale_max_hipfire=0x0924
viewkick_scale_min_ads=0x0928
viewkick_scale_max_ads=0x092c
viewkick_scale_valuePerShot=0x0930
viewkick_scale_pitch_valueLerpStart=0x0934
viewkick_scale_yaw_valueLerpStart=0x0938
viewkick_scale_pitch_valueLerpEnd=0x093c
viewkick_scale_yaw_valueLerpEnd=0x0940
viewkick_scale_valueDecayDelay=0x0944
viewkick_scale_valueDecayRate=0x0948
viewkick_pc_yaw_scale=0x094c
viewkick_pc_pitch_scale=0x0950
viewkick_spring=0x0954
viewkick_spring_hot=0x0958
viewkick_spring_heatpershot=0x095c
viewkick_spring_cooldown_holdtime=0x0960
viewkick_spring_cooldown_fadetime=0x0964
viewkick_spring_velocityScalePerShot=0x0968
viewkick_yaw_base=0x096c
viewkick_yaw_random=0x0970
viewkick_yaw_random_innerexclude=0x0974
viewkick_yaw_softScale=0x0978
viewkick_yaw_hardScale=0x097c
viewkick_perm_yaw_base=0x0980
viewkick_perm_yaw_random=0x0984
viewkick_perm_yaw_random_innerexclude=0x0988
viewdrift_ads_stand_scale_pitch=0x098c
viewdrift_ads_crouch_scale_pitch=0x0990
viewdrift_ads_air_scale_pitch=0x0994
viewdrift_ads_speed_pitch=0x0998
viewdrift_ads_stand_scale_yaw=0x099c
viewdrift_ads_crouch_scale_yaw=0x09a0
viewdrift_ads_air_scale_yaw=0x09a4
viewdrift_ads_speed_yaw=0x09a8
viewdrift_ads_delay=0x09ac
viewdrift_hipfire_stand_scale_pitch=0x09b0
viewdrift_hipfire_crouch_scale_pitch=0x09b4
viewdrift_hipfire_air_scale_pitch=0x09b8
viewdrift_hipfire_speed_pitch=0x09bc
viewdrift_hipfire_stand_scale_yaw=0x09c0
viewdrift_hipfire_crouch_scale_yaw=0x09c4
viewdrift_hipfire_air_scale_yaw=0x09c8
viewdrift_hipfire_speed_yaw=0x09cc
ads_move_speed_scale=0x09d0
force_zoom_in_on_activate=0x09d4
sound_zoom_out_althand=0x09d8
sound_zoom_in_althand=0x09e0
stat_damage=0x09e8
stat_accuracy=0x09ec
stat_range=0x09f0
stat_rof=0x09f4
menu_image=0x09f8
menu_icon=0x0a00
menu_alt_icon=0x0a08
ui1_enable=0x0a10
ui2_enable=0x0a11
ui3_enable=0x0a12
ui4_enable=0x0a13
ui5_enable=0x0a14
ui6_enable=0x0a15
ui7_enable=0x0a16
ui8_enable=0x0a17
 
[ConVars]
 
[ConCommands]
+ability=0x023afb80
+ability_held=0x023b7e80
+attack=0x023bbfc0
+backward=0x023c17b0
+break=0x023b8ab0
+camdistance=0x023bd990
+camin=0x023b7ee0
+cammousemove=0x023b4d00
+camout=0x023b57c0
+campitchdown=0x023c1750
+campitchup=0x023af760
+camyawleft=0x023b8b10
+camyawright=0x023b7590
+commandermousemove=0x023bb100
+csm_rot_x_neg=0x01fb4780
+csm_rot_x_plus=0x02019f70
+csm_rot_y_neg=0x02016ba0
+csm_rot_y_plus=0x02019850
+displayFullscreenMap=0x023c4ab0
+dodge=0x023b6e70
+duck=0x023c2250
+forward=0x023afd80
+graph=0x023becd0
+jump=0x023c2f80
+klook=0x023bb260
+left=0x023c0fe0
+lookdown=0x023bedf0
+lookup=0x023bf7b0
+melee=0x023c27c0
+movedown=0x023bebd0
+moveleft=0x023b7c20
+moveright=0x023b05a0
+moveup=0x023b7030
+offhand0=0x023c3420
+offhand1=0x023b2d80
+offhand2=0x023c1d10
+offhand3=0x023bbec0
+offhand4=0x023c1810
+pause_menu=0x023c4b10
+ping=0x023ba410
+posedebug=0x01f82700
+pushtotalk=0x01823f60
+reload=0x023b5700
+right=0x023b3fa0
+score=0x023c3b60
+scriptCommand1=0x023c0250
+scriptCommand2=0x023c2820
+scriptCommand3=0x023b3e40
+scriptCommand4=0x023b7290
+scriptCommand5=0x023bf470
+scriptCommand6=0x023bf810
+scriptCommand7=0x023c3360
+scriptCommand8=0x023b4620
+scriptCommand9=0x023bf2f0
+showscores=0x023b08a0
+speed=0x023af220
+strafe=0x023c4a50
+toggle_duck=0x023b4fa0
+toggle_zoom=0x023b06a0
+use=0x023c1570
+useAndReload=0x023bf610
+use_alt=0x023b78e0
+use_long=0x023c22b0
+variableScopeToggle=0x023b5b00
+voicerecord=0x0181a5e0
+walk=0x023c42c0
+weaponCycle=0x023c3900
+weapon_discard=0x023bfaf0
+zoom=0x023b5760
-ability=0x023bb200
-ability_held=0x023b67d0
-attack=0x023b82d0
-backward=0x023af520
-break=0x023ba510
-camdistance=0x023c4140
-camin=0x023c0830
-cammousemove=0x023b4680
-camout=0x023b97b0
-campitchdown=0x023bf0b0
-campitchup=0x023b8c10
-camyawleft=0x023b7d80
-camyawright=0x023b6fd0
-commandermousemove=0x023c23a0
-csm_rot_x_neg=0x0201b4a0
-csm_rot_x_plus=0x01fb50f0
-csm_rot_y_neg=0x023a3f40
-csm_rot_y_plus=0x02018cf0
-displayFullscreenMap=0x023afc80
-dodge=0x023c3620
-duck=0x023bed90
-forward=0x023b73f0
-graph=0x023b7690
-jump=0x023b7b60
-klook=0x023b6830
-left=0x023b0640
-lookdown=0x023b71d0
-lookup=0x023af9e0
-melee=0x023bab20
-movedown=0x023b4ea0
-moveleft=0x023c11c0
-moveright=0x023b7bc0
-moveup=0x023bee50
-offhand0=0x023bf750
-offhand1=0x023c19b0
-offhand2=0x023c0a70
-offhand3=0x023b6890
-offhand4=0x023b0300
-pause_menu=0x023c1280
-ping=0x023b07a0
-posedebug=0x01f82760
-pushtotalk=0x01823a30
-reload=0x023b0440
-right=0x023bed30
-score=0x023c1b50
-scriptCommand1=0x023b0540
-scriptCommand2=0x023bf1f0
-scriptCommand3=0x023c33c0
-scriptCommand4=0x023c31c0
-scriptCommand5=0x023af2c0
-scriptCommand6=0x023aef80
-scriptCommand7=0x023c35c0
-scriptCommand8=0x023b3be0
-scriptCommand9=0x023be9d0
-showscores=0x023b3de0
-speed=0x023b7b00
-strafe=0x023c1cb0
-toggle_duck=0x023b7390
-toggle_zoom=0x023bf3f0
-use=0x023b3c80
-useAndReload=0x023af1c0
-use_alt=0x023c1510
-use_long=0x023b88b0
-variableScopeToggle=0x023b02a0
-voicerecord=0x01806fa0
-walk=0x023c3960
-weaponCycle=0x023b6ed0
-weapon_discard=0x023c4460
-zoom=0x023b9b30
BindToggle=0x01802fc0
CMaterialSystem_clear_loading=0x019b8a20
CMaterialSystem_set_loading=0x019b8420
ClientScript_OnMatchJipChanged_Cmd=0x0181f170
EADP_RTM_FORCE_TLS_ERROR=0x0199d780
EADP_RTM_send_presence=0x0199e150
EADP_RTM_test_subscribe=0x0199e250
EADP_dump_MyPresence=0x0199e0f0
EADP_dump_friends=0x01984ac0
EADP_get_friend_test=0x01984a00
EADP_is_friend_user_test=0x01984b20
EADP_search_test2=0x01984fd0
EADP_unfriend_user_test=0x01984a60
MemTrackDeltaSnapshot=0x018eb650
MemTrackPrintStats=0x018eb200
OnMultipleLoginDetected=0x0181a880
OriginRebootCLientAuthTokens_Test=0x01998810
PTCH_reset_state_logic=0x01f7ba40
RTM_FORCE_shutdown=0x0199d7e0
ReloadAimAssistSettings=0x0201f770
XLOG_TLS_close_connections=0x01f82ae0
aisettings_reparse_client=0x01f8c0b0
alias=0x01806c60
applyVideoChangesDeferred=0x01f89d50
bind=0x0181ec90
bind_US_standard=0x0181bd40
bind_held=0x01820120
bind_held_US_standard=0x0181f9c0
bind_list=0x0181c1a0
bind_list_abilities=0x01819820
bink_dump_precached_movies=0x01829e60
bot_loadout=0x02543c70
box=0x018eb310
buildcubemaps=0x01804230
cam_command=0x023bbaa0
cancelselect=0x023b3ce0
cc_emit=0x023b3110
centerview=0x01fb55b0
changelevel=0x01820e30
chat_wheel=0x023ce190
chroma_base=0x01829fd0
chroma_layer=0x01829f70
cl_dump_particle_stats=0x023cf790
cl_flip_visibility=0x01faa020
cl_fullupdate=0x018eb810
cl_interpolation_report=0x01faaa60
cl_mute_remove_oldest=0x0195a3b0
cl_odsl_abtest=0x023ca3b0
cl_odsl_abtest_on_persona_id=0x023cc730
cl_panelanimation=0x023c8fb0
cl_particles_dumplist=0x023ca750
cl_precacheinfo=0x018eab00
cl_removedecals=0x01faa960
cl_serverQuery=0x01991a20
cl_showents=0x018eb430
cl_trace_start_solid=0x024f0f10
cl_trace_test_hitbox_with_non_zero_start_offset=0x01fb3130
cl_updatevisibility=0x01fab480
clear_loading_progress_detente=0x01821300
clear_loading_progress_sp_text=0x01808020
cm_query_log_record=0x01803ef0
cm_query_log_replay=0x01806680
cmd=0x01803f50
cmd1=0x018039e0
cmd2=0x01804010
cmd3=0x018033e0
cmd4=0x01804290
collision_debug=0x01fa9d80
collision_debug_manual=0x01fab0e0
colorcorrectionui=0x01806e00
comms_connect=0x01950880
comms_disconnect=0x019508e0
comms_say=0x01950770
community_showerror=0x01983be0
connect=0x018ebe10
connectAsSpectator=0x018ec250
connectWithKey=0x018eaaa0
connectwithtoken=0x018ec8b0
controller_test_pad_report_generic=0x019a0960
convar_differences=0x01804a30
convar_findByFlags=0x018049d0
convar_list=0x018066e0
crash_oom=0x0acf25c0
createparty=0x018eb3d0
createpartyifnotinone=0x018ec0e0
csm_status=0x023a4850
damagedefs_reparse_client=0x02539390
devshots_screenshot=0x018eba30
dfs_print_flag_states=0x01994900
dfs_print_flagset=0x019953e0
dfs_print_true_flags=0x01994fb0
disconnect=0x018071a0
display_elapsedtime=0x01996110
dlight_debug=0x01fa9de0
do_InvitePeople_test=0x01998d40
do_Invite_friend_test=0x01998650
do_joinPeople_test=0x01998060
do_origin_test_presence=0x01998590
downloadPlaylists=0x0198f970
dumpClientStringTable=0x024f5300
dumpstringtables=0x01821940
echo=0x01804390
echo_error=0x01804af0
editor_toggle=0x0199d320
endmovie=0x018ec850
entitlements_send=0x0194f7e0
escape=0x01808120
exec=0x01806a60
execPlayerConfig=0x019962e0
execifexists=0x01804a90
exit=0x018087e0
eyeInfo=0x01fb1740
firstperson=0x023b76f0
force_centerview=0x023c1bb0
fps_stats_dump=0x019ac950
fps_stats_reset=0x019aea80
fps_stats_start=0x019ac710
fps_stats_stop=0x019aee00
friends_update=0x0199c990
fs_clear_open_duplicate_times=0x0199f780
fs_dump_open_duplicate_times=0x0199fa20
fs_fios_cancel_prefetches=0x019a0180
fs_fios_flush_cache=0x0199f720
fs_fios_prefetch_file=0x0199fc00
fs_fios_prefetch_file_in_pack=0x0199ff50
fs_fios_print_prefetches=0x0199fef0
fs_printopenfiles=0x01804e40
fs_warning_level=0x01805260
fx_impact_reparse=0x023b6630
gameui_activate=0x01985e90
gameui_hide=0x01985c20
getNewAuthToken=0x01997ea0
getfov=0x01faf6c0
gethttpdatacenterlist=0x018197c0
getpos=0x01fb5550
getpos_bind=0x0201e740
getposvec=0x023a36b0
give=0x02543ec0
help=0x01805200
hidepanel=0x02544040
hidevideos=0x023c8370
highlight_log=0x019f3770
host_runofftime=0x01995b90
hud_subtitles=0x023b8850
huffman_readProps=0x0199e3f0
impulse=0x023bea30
incrementvar=0x018218e0
ingamemenu_activate=0x023ca170
initMatchmaking=0x01807f20
invnext=0x023b7230
is_considered_sony_multiplayer=0x0201eee0
joinopeninvite=0x018eb370
joystick_initialize=0x023bf050
jpeg=0x018ebb40
key_updatelayout=0x019a4a40
launchplaylist=0x0198f5a0
leaveopeninvite=0x018ec630
listClientFXScriptHandles=0x024f0f70
listmodels=0x0181dcb0
loadPlaylists=0x0198d9b0
map=0x0181bf40
map_background=0x01818870
maps=0x0181c2a0
mat_antialias_mode=0x01819d10
mat_configcurrent=0x01822690
mat_crosshair=0x01804fe0
mat_crosshair_edit=0x01804c90
mat_crosshair_explorer=0x01803810
mat_crosshair_printmaterial=0x018050e0
mat_gamma=0x0181cae0
mat_printLiveTex=0x01f79800
mat_savechanges=0x0181c040
mat_setvideomode=0x0181f620
mat_vsync=0x01822520
match_abortAllSearches=0x0181f680
match_showAllSearches=0x01819690
matchmake=0x01821d20
matchmake_cancel=0x01822040
matchmake_cleanupforparty=0x0181fc50
maxplayers=0x01954f50
mem_compact=0x01996340
mem_dump=0x01994e40
mem_dump_all=0x01995e90
mem_dump_features=0x01996280
mem_dump_rpak_summary=0x01995550
mem_dump_rpaks=0x019947f0
mem_dump_vm=0x01994ac0
mem_eat=0x01992310
mem_incremental_compact=0x01995ef0
mem_leak_vm=0x01996220
mem_print_cheap_track=0x01995f50
mem_print_cheap_track_datatypes=0x019968d0
mem_print_cheap_track_features=0x019950c0
mem_print_cheap_track_json=0x01995920
mem_test=0x01994f50
mem_textures=0x019b55d0
mem_verify=0x01996870
mem_vram=0x019b5a90
memory=0x0181e480
metricmapnet_clear=0x01f7c7a0
miles_dump=0x01f88eb0
miles_event_info=0x01f89340
miles_insert_bug_marker=0x01f86db0
miles_pauseui_byname=0x01f8a490
miles_play=0x01f8bad0
miles_reboot=0x01f8be30
miles_record=0x01f872b0
miles_record_that=0x01f880d0
miles_stop_all=0x01f87b10
miles_unpauseui_byname=0x01f87ab0
miles_write_passive_dumpfile=0x01f88510
mmdevinit=0x018ead20
mtxFakeTime_DisplayCurrentFakeTime=0x01992150
multvar=0x01807000
net_channels=0x018077e0
net_dumpIncomingStats=0x018ec140
net_dumpOutgoingStats=0x018ebd00
net_dumpStats=0x018ebfd0
net_force_datarate=0x0181e420
net_status=0x0181d880
net_transmission_events_dump_incoming=0x0194ebd0
net_transmission_events_dump_outgoing=0x0194e490
net_transmission_events_reset=0x0194fa50
net_writeStatsFile=0x019954f0
network_protocol=0x0199e4f0
noop=0x018037b0
odl_override_pool_paks=0x025cbe70
openinvite=0x018ec410
openinvitecomplete=0x018eb920
openinvitelaunch=0x018eb5f0
origin_friendlist_dump=0x019985f0
particle_create=0x02014f20
particle_create_on_me=0x02017be0
particle_create_ss=0x023a48b0
particle_kill=0x01fb5ce0
particle_recreate=0x02014d80
particle_remove_all=0x023c8b70
particle_scrub_bake=0x02012ba0
particle_scrub_play=0x023ae260
particle_scrub_stop=0x023a3470
party_leave=0x01999ac0
path=0x01806ac0
pause=0x01808640
pausevideos=0x023cba90
perfcharts_record=0x01f7caf0
phys_objectDump=0x023cbc30
ping_specific_type=0x023cb7b0
pingdatacenters=0x01821cc0
pixelvis_debug=0x01fb5750
playerSettings_reparse=0x0253bed0
playlist_rotationIntervalOverride=0x0198db70
playlistdump=0x019917b0
playvideo=0x023cc530
playvideo_end_level_transition=0x023ca410
playvideo_exitcommand=0x023ce4f0
playvideo_exitcommand_nointerrupt=0x023cea70
playvideo_nointerrupt=0x023cf310
playvideo_scaled=0x023cc390
print_colorcorrection=0x01803fb0
print_texture_count=0x019b98d0
progress_enable=0x019902c0
quit=0x0181dc50
r_cheapwaterend=0x023d0d70
r_cheapwaterstart=0x024ec400
r_cleardecals=0x0181a580
r_dxgi_max_frame_latency=0x019f84e0
r_printdecalinfo=0x0198ee60
recompute_speed=0x01994de0
reload_level=0x0181f520
reload_localization=0x0194fb60
reload_script_callbacks=0x025403e0
reset_cam_ideal_angles=0x023b89b0
restart=0x0181ff60
restart_checkpoint=0x0181dbf0
roamingcam_setang=0x02016c00
roamingcam_setpos=0x023a37d0
roamingcam_setroll=0x0201dce0
rtk_styleConstantsApply=0x025deec0
rtk_styleConstantsPrint=0x025def20
rtk_styleConstantsRemove=0x025df080
rtk_styleConstantsRemoveAll=0x025defc0
rtk_styleConstantsRemoveAllAccessibility=0x025df020
rtk_styleConstantsRemoveAllApplied=0x025df1a0
rumble_print=0x01f89e80
savePlayerConfig=0x01991ee0
scoreboard_down=0x023cd990
scoreboard_focus=0x023cae10
scoreboard_mute=0x023ce690
scoreboard_profile=0x023cfdf0
scoreboard_toggle_focus=0x023cd890
scoreboard_up=0x023ccab0
screenshot=0x018eacc0
script_mem_report=0x025e6710
scriptremotefunctions_client_dump=0x01f88d10
scriptremotefunctions_print_client_stats=0x01f8b5d0
server_single_frame=0x0181d8e0
set=0x0253ce00
set_loading_progress_background=0x01819e50
set_loading_progress_detente=0x01822580
set_loading_progress_fadeout_enabled=0x01807500
set_loading_progress_sp_text=0x01807340
settype=0x01805e70
shake_stop=0x023ce8d0
shake_testpunch=0x023cecb0
show_loading_progress=0x018228a0
showpanel=0x02543fe0
showvideos=0x023cdc70
silentconnect=0x018eaf90
soundscape_dumpclient=0x01fb2850
spawn_as_pilot=0x023c8c30
spawn_as_titan=0x023cdd70
ss_map=0x0181d4c0
ss_reloadletterbox=0x023c7b70
sssss_enable=0x024eb540
startmovie=0x018ec740
status=0x01821a50
steam_printid=0x0199d130
steam_testOverlay=0x0199cec0
steamlink=0x0199c820
steamunlink=0x0199c930
stop_transition_videos_fadeout=0x023cb050
stopvideos=0x023c9be0
stopvideos_fadeout=0x023c6230
sv_precacheinfo=0x01954970
sv_showents=0x01956770
sv_writeSendTableStreamFile=0x019583b0
testCockpitJoltAngles=0x01fac220
testCockpitJoltOrigin=0x01fb3370
testhudanim=0x023c39c0
thread_test_tslist=0x01995e00
thread_test_tsqueue=0x01991e80
titan_loadout_select=0x023c8310
toggle=0x018064e0
toggle_enemy_minimap_visibility=0x023ca470
toggle_inventory=0x023ce290
toggle_map=0x023c9ce0
toggle_obs_highlight=0x023c8bd0
toggle_obs_player_tags=0x023cfa50
toggle_obs_ring_survey=0x023c9de0
toggle_observer_btn_hints=0x023c7ef0
toggle_observer_show_target_player_tag=0x023cf2b0
toggle_observer_ui=0x023cf7f0
ui_reloadscheme=0x01f85690
uiscript_reset=0x024eeae0
uiscript_resolutionchanged=0x024ef7d0
unbind=0x01818e70
unbind_US_standard=0x0181bee0
unbind_all_gamepad=0x0181f380
unbind_batch=0x0181de60
unbind_held=0x0181f110
unbind_held_US_standard=0x018085e0
unbindall=0x0181c0a0
unbindall_ignoreGamepad=0x01819cb0
unload_level_loadscreen=0x0181f050
unpausevideos=0x023ccbb0
urbs=0x0181c8a0
use_consumable=0x023cc6d0
user=0x01957170
users=0x01956500
valve_relay_known_identities=0x01f7ef00
version=0x0181f1d0
vgui_spew_fonts=0x025e34c0
vgui_togglepanel=0x01990a00
voicerecord_toggle=0x01808f20
weaponSelectOrdnance=0x023b81d0
weaponSelectPrimary0=0x023c1220
weaponSelectPrimary1=0x023b5960
weaponSelectPrimary2=0x023b3f40
weaponSelectSlingWeapon=0x023b7c80
weapon_activity=0x023bef50
weapon_inspect=0x023af420
weapon_list=0x020150a0
weapon_reparse=0x02543dc0
write_network_protocol=0x0199e550
xlog_list=0x0181a640
xlog_record=0x01822360
xlog_record_that=0x0181f0b0
xlog_stop=0x01819880
xlook=0x023bbf60
xmove=0x023b0100

[Buttons]
in_attack=0x077bfd68
in_backward=0x077bfcc0
in_break=0x077bff78
in_camin=0x0d5d7540
in_camout=0x0d507490
in_campitchdown=0x0d507268
in_campitchup=0x0d5d7560
in_camyawleft=0x0d507d30
in_camyawright=0x0d507480
in_commandermousemove=0x077bfce8
in_dodge=0x077bfec0
in_duck=0x077bff58
in_forward=0x077bfc98
in_graph=0x077bfdb8
in_jump=0x077bfe50
in_klook=0x077bfd08
in_left=0x077bfe20
in_lookdown=0x077bfe78
in_lookup=0x077bff68
in_melee=0x077bfcf8
in_movedown=0x077bfe10
in_moveleft=0x077bfc88
in_moveright=0x077bfcb0
in_moveup=0x077bfd28
in_offhand0=0x077bfd18
in_offhand1=0x077bfe40
in_offhand2=0x077bfeb0
in_offhand3=0x077bfef0
in_offhand4=0x077bff08
in_pause_menu=0x077bfe30
in_ping=0x077bfd38
in_reload=0x077bfda8
in_right=0x077bfe68
in_score=0x077bfea0
in_scriptCommand3=0x077bfd98
in_showscores=0x077bfea0
in_speed=0x077bfcd0
in_strafe=0x077bfde0
in_toggle_duck=0x077bfd78
in_toggle_zoom=0x077bfdc8
in_use=0x077bfed0
in_useAndReload=0x077bff38
in_use_alt=0x077bfd88
in_use_long=0x077bff48
in_variableScopeToggle=0x077bfe00
in_walk=0x077bff18
in_weaponCycle=0x077bfe88
in_weapon_discard=0x077bff28
in_zoom=0x077bfee0