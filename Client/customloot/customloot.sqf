//==========================================================//
//Written by Bushido, Demellion                             //
//ver = 1.0                                                 //
//==========================================================//
private ["_PLAYERUID","_DEFAULTU","_PL1","_PL2","_PL3"];
_DEFAULTU = ["U_C_Journalist","U_C_WorkerCoveralls","U_C_Poor_1","U_C_Poloshirt_redwhite","U_C_Poloshirt_salmon","U_C_Poloshirt_tricolour","U_C_Poloshirt_burgundy","U_C_Poloshirt_blue","U_C_Poloshirt_stripped"] call BIS_fnc_selectRandom;
_PLAYERUID = getPlayerUID player;
_PL1 = ["76561198084920007","76561198019128017","76561198118833814","76561198114444265"]; 
_PL2 = ["76561198157419587","0","0"];
_PL3 = ["0","0","0"];
if (_PLAYERUID in _PL1) then {_DEFAULTU = "U_O_GhillieSuit"; systemChat "Клан RM Вы получили Вип Бонус!До - 25.04.15"}; 
if (_PLAYERUID in _PL2) then {_DEFAULTU = "U_O_GhillieSuit"; systemChat "Клан RM Вы получили Вип Бонус!До - Бесконечности!"}; 
if (_PLAYERUID in _PL3) then {_DEFAULTU = "U_C_Poor_1"; systemChat "Вы получили Вип Бонус!"}; 
if (isNil "Bushido") then {
Bushido = false;
};
if (!Bushido) then {
	systemChat "Вы получили случайный стартовый бонус!"; 
	removeAllWeapons player;
	_PISTOLANDmag = [["hgun_Pistol_heavy_02_F","6Rnd_45ACP_Cylinder"],["hgun_Pistol_heavy_02_Yorris_F","6Rnd_45ACP_Cylinder"],["hgun_Pistol_heavy_01_MRD_F","11Rnd_45ACP_Mag"],["hgun_Pistol_heavy_01_F","11Rnd_45ACP_Mag"],["hgun_ACPC2_F","9Rnd_45ACP_Mag"],["hgun_Rook40_F","16Rnd_9x21_Mag"],["hgun_P07_F","16Rnd_9x21_Mag"]] call BIS_fnc_selectRandom;
	_PISTOL = _PistolANDmag select 0;
	_MAG = _PistolANDmag select 1;
	_FOOD = ["CookedSheep_EPOCH","CookedGoat_EPOCH","CookedChicken_EPOCH","CookedRabbit_EPOCH","ItemTunaCooked","ItemSeaBassCooked","ItemTroutCooked","FoodSnooter","FoodMeeps"] call BIS_fnc_selectRandom;
	_DRINK = ["ItemSodaRbull","ItemSodaOrangeSherbet","ItemSodaPurple","ItemSodaMocha","ItemSodaBurst","FoodWalkNSons","WhiskeyNoodle"] call BIS_fnc_selectRandom;
	player addWeapon _PISTOL;
	player addWeapon "EpochRadio0";
	player addVest "V_41_EPOCH";
	player addMagazine _MAG;
	player addMagazine _FOOD;
	player addMagazine _DRINK;
	player forceAddUniform _DEFAULTU;
    Bushido = true;
};

player addEventHandler [
	"Respawn",
	{
		getcallcab = true;
		Bushido = true;
	}
];
