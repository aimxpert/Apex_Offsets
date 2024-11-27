uint32_t ObserverList = 0x2024C18;
uint32_t LOCAL_PLAYER = 0x24F6288;
uint32_t ENTITY_LIST = 0x2022BF8;
uint32_t HIGHLIGHT_SETTING = 0xB2AD370;
uint32_t LEVEL_NAME = 0x18ECF84;
uint32_t Name_List = 0xD506380;
uint32_t VIEW_RENDERER = 0x77BD448;
uint32_t VIEW_MATRIX = 0x11A350;
uint32_t InputSystem = 0x19A2780;
uint32_t mouse_sensitivity = 0x23C1A10;
uint32_t NetworkVarTablePtr = 0xD6AD4D0;
uint32_t m_playerScriptNetDataGlobal = 0x4718;
uint32_t m_lastVisibleTime = 0x1990;
uint32_t crosshairTargetStartTime = 0x1994;
uint32_t lastCrosshairTargetTime = 0x1998;
 
//[Local]
uint32_t CPlayer_camera_origin = 0x1EE0;
uint32_t CPlayer_camera_angles = 0x1EEC;
uint32_t m_vecPunchWeapon_Angle = 0x2438;
uint32_t m_ammoPoolCapacity = 0x2534;
uint32_t m_iViewAngles = m_ammoPoolCapacity - 0x14;
uint32_t m_SwayAngle = m_iViewAngles - 0x10;
uint32_t m_ammoPoolCount = 0x223C;
uint32_t m_yaw = m_ammoPoolCount - 0x8;
uint32_t m_bZooming = 0x1BE1;
 
//[Player]
uint32_t m_iHealth = 0x328;
uint32_t m_shieldHealth = 0x1A0;
uint32_t m_shieldHealthMax = 0x1A4;
uint32_t m_armorType = 0x4724;
uint32_t m_pStudioHdr = 0xFF0;
uint32_t m_lifeState = 0x690;
uint32_t m_bleedoutState = 0x2760;
uint32_t m_iTeamNum = 0x338;    // no test
uint32_t m_vecAbsOrigin = 0x17C;        // no test
uint32_t m_vecAbsVelocity = 0x170;      // no test
uint32_t m_iBoneMatrix = 0xDF0;
 
//[Weapon]
uint32_t m_latestPrimaryWeapons = 0x1934;
uint32_t m_weaponNameIndex = 0x1778;
uint32_t m_playerData = 0x15D0;
 
//[Buttons]
uint64_t in_attack = 0x77BFD68;
uint64_t in_jump = 0x77BFE50;
uint64_t in_duck = 0x77BFF58;
uint64_t in_forward = 0x77BFC98;
uint64_t in_reload = 0x77BFDA8;
uint64_t in_toggle_duck = 0x77BFD78;
uint64_t in_toggle_zoom = 0x77BFDC8;
uint64_t in_backward = 0x77BFCC0;
uint64_t in_moveleft = 0x77BFC88;
uint64_t in_moveright = 0x77BFCB0;
uint64_t in_zoom = 0x77BFEE0;
uint64_t in_speed = 0x77BFCD0;
qq214620428 is online now
