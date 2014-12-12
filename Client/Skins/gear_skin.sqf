private ["_model","_clanmessage","_side","_cnt"];
// Skin change script by DT Demellion.
// Clans Skins, UIDs and names here
// IMPORTANT: DO NOT put epoch functionary skins like traders skins
// as this will result in a bugs and Anti-Hack bans for players.
//serverTraders = ["CZ_Special_Forces_TL_DES_EP1","RU_Citizen3","Rocker4","Profiteer4","Rita_Ensler_EP1","CIV_EuroMan01_EP1","CIV_EuroMan02_EP1","TK_GUE_Soldier_5_EP1","MVD_Soldier_GL","Worker2","Worker3","Woodlander1","UN_CDF_Soldier_Pilot_EP1","RU_WorkWoman1","Dr_Annie_Baker_EP1","RU_Citizen4","RU_WorkWoman5","RU_Citizen1","RU_Villager3","TK_CIV_Takistani04_EP1","Pilot_EP1","RU_Profiteer4","Woodlander3","Dr_Hladik_EP1","Doctor","HouseWife1","GUE_Woodlander2","US_Soldier_EP1","US_Delta_Force_EP1","TK_Aziz_EP1","CZ_Soldier_AT_DES_EP1","RU_Hooker4","RU_Hooker3"];
_model = nil;
_cnt = {isPlayer _x && _x != player} count (player nearEntities [['Man','LandVehicle','Air'], 10]);
if (_cnt > 0) exitWith { titleText ["<Skin>: Вы слишком близко к игроку/зомби/технике!", "PLAIN DOWN", 3]; systemchat "<Skin>: Too close to a player/zombie/vehicle!";};

/* Admin Skins */
A1 = ["76561198063078194"];  //demellion
AM1 = "RUS_Soldier_Marksman";
A2 = ["0"]; //
AM2 = "Survivor2_DZ"; 
A3 = ["0"]; // 
AM3 = "Survivor2_DZ"; 
A4 = ["0"]; // 
AM4 = "Survivor2_DZ"; 
A5 = ["0"]; // 
AM5 = "Survivor2_DZ"; 
A6= ["0"]; // 
AM6 = "Survivor2_DZ";
A7= ["0"]; //
AM7 = "Survivor2_DZ";
A8= ["0"]; //
AM8 = "Survivor2_DZ";
A9= ["0"]; //
AM9 = "Survivor2_DZ";
A10= ["0"]; //
AM10 = "Survivor2_DZ";


/* Clan 1 Description */
CL1 = ["0","0","0","0"];
CCL1 = ["0"];
CM1 = "Survivor2_DZ"; 
CCM1 = "Survivor2_DZ";
CN1 = "Name";
/* Clan 2 Description */
CL2 = ["0","0","0"];
CCL2 = ["0"];
CM2 = "Survivor2_DZ";
CCM2 = "Survivor2_DZ";
CN2 = "Name";
/* Clan 3 Description */
CL3 = ["0","0","0"];
CCL3 = ["0"];
CM3 = "Survivor2_DZ";
CCM3 = "Survivor2_DZ";
CN3 = "Name";
/* Clan 4 Description */
CL4 = ["0","0","0"];
CCL4 = ["0"];
CM4 = "Survivor2_DZ";
CCM4 = "Survivor2_DZ";
CN4 = "Name";
/* Clan 5 Description */
CL5 = ["0","0","0"];
CCL5 = ["0"];
CM5 = "Survivor2_DZ";
CCM5 = "Survivor2_DZ";
CN5 = "Name";
/* Clan 6 Description */
CL6 = ["0","0","0","0"];
CCL6 = ["0"];
CM6 = "Survivor2_DZ"; 
CCM6 = "Survivor2_DZ";
CN6 = "Name";
/* Clan 7 Description */
CL7 = ["0","0","0"];
CCL7 = ["0"];
CM7 = "Survivor2_DZ";
CCM7 = "Survivor2_DZ";
CN7 = "Name";
/* Clan 8 Description */
CL8 = ["0","0","0"];
CCL8 = ["0"];
CM8 = "Survivor2_DZ";
CCM8 = "Survivor2_DZ";
CN8 = "Name";
/* Clan 9 Description */
CL9 = ["0","0","0"];
CCL9 = ["0"];
CM9 = "Survivor2_DZ";
CCM9 = "Survivor2_DZ";
CN9 = "Name";
/* Clan 10 Description */
CL10 = ["0","0","0"];
CCL10 = ["0"];
CM10 = "Survivor2_DZ";
CCM10 = "Survivor2_DZ";
CN10 = "Name";

// Checks and assocs
/* Admin Skins */
if ((getPlayerUID player) in A1) then {_model = AM1; _clanmessage = "I made you my bitch!";};
if ((getPlayerUID player) in A2) then {_model = AM2; _clanmessage = "Whats up nigga";};
if ((getPlayerUID player) in A3) then {_model = AM3; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A4) then {_model = AM4; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A5) then {_model = AM5; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A6) then {_model = AM6; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A7) then {_model = AM7; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A8) then {_model = AM8; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A9) then {_model = AM9; _clanmessage = "Welcome";};
if ((getPlayerUID player) in A10) then {_model = AM10; _clanmessage = "Welcome";};
/* Clan Members */
if ((getPlayerUID player) in CL1) then {_model = CM1; _clanmessage = CN1;};
if ((getPlayerUID player) in CL2) then {_model = CM2; _clanmessage = CN2;};
if ((getPlayerUID player) in CL3) then {_model = CM3; _clanmessage = CN3;};
if ((getPlayerUID player) in CL4) then {_model = CM4; _clanmessage = CN4;};
if ((getPlayerUID player) in CL5) then {_model = CM5; _clanmessage = CN5;};
if ((getPlayerUID player) in CL6) then {_model = CM6; _clanmessage = CN6;};
if ((getPlayerUID player) in CL7) then {_model = CM7; _clanmessage = CN7;};
if ((getPlayerUID player) in CL8) then {_model = CM8; _clanmessage = CN8;};
if ((getPlayerUID player) in CL9) then {_model = CM9; _clanmessage = CN9;};
if ((getPlayerUID player) in CL10) then {_model = CM10; _clanmessage = CN10;};
/* Clan Commanders */
if ((getPlayerUID player) in CCL1) then {_model = CCM1; _clanmessage = CN1;};
if ((getPlayerUID player) in CCL2) then {_model = CCM2; _clanmessage = CN2;};
if ((getPlayerUID player) in CCL3) then {_model = CCM3; _clanmessage = CN3;};
if ((getPlayerUID player) in CCL4) then {_model = CCM4; _clanmessage = CN4;};
if ((getPlayerUID player) in CCL5) then {_model = CCM5; _clanmessage = CN5;};
if ((getPlayerUID player) in CCL6) then {_model = CCM6; _clanmessage = CN6;};
if ((getPlayerUID player) in CCL7) then {_model = CCM7; _clanmessage = CN7;};
if ((getPlayerUID player) in CCL8) then {_model = CCM8; _clanmessage = CN8;};
if ((getPlayerUID player) in CCL9) then {_model = CCM9; _clanmessage = CN9;};
if ((getPlayerUID player) in CCL10) then {_model = CCM10; _clanmessage = CN10;};

/* Skin Change */
if (isNil "_model") exitWith {systemChat "<Clan Skin>: You dont have a clan skin!"; titleText ["<Clan Skin>: У вас нет кланового скина!", "PLAIN DOWN", 3]};
	sleep 0.1;
	[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
	waitUntil {typeOf player == _model};
	 _side = createGroup west;
	 sleep 0.1;
	[player] joinSilent _side;
	systemChat format["<Clan Skin>: %1", _clanmessage];
