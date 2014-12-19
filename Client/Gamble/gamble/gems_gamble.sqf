private ["_gemtype","_state","_removedGem","_awardItem","_awardAmount","_awardArray","_var1","_var2","_var3"];
	_gemtype = 	(_this select 3) select 0;
	_state =           (_this select 3) select 1;
    if (_state < 1) exitWith {cutText ["<Лотерея>: Вы должны связатся с торговцем камней!", "PLAIN DOWN"];systemChat "<Gamble>: You must contact a gems trader!";};
    if (isNil "_gemtype") exitWith {};
 
fnc_gamble = {
        _removedGem = _this select 0;
		_awardItem = _this select 1;
		_awardAmount = _this select 2;
		player removeAction player_gamble_emerald;
		player removeAction player_gamble_ruby;
        player removeAction player_gamble_amethyst;
        player removeAction player_gamble_sapphire;
        player removeAction player_gamble_obsidian;
        player removeAction player_gamble_topaz;
        player removeAction player_gamble_citrine;
		
		disableuserinput true; disableuserinput true; disableuserinput true;
		player removeMagazine _removedGem;
		player playActionNow "Medic";
		sleep 6;
		for "_x" from 1 to _awardAmount do {
		    player addMagazine _awardItem; 
		};
		player switchMove "";
		player playActionNow "stop";		
		disableuserinput false; disableuserinput false; disableuserinput false;
		cutText format ["<Лотерея>: Вы разыграли %1 на %2x %3",_removedGem,_awardAmount,_awardItem];
		systemChat format ["<Gamble>: You gambled %1 for %2x %3",_removedGem,_awardAmount,_awardItem];
		if (_awardItem == "IRStrobe") then {
			customRemoteMessage = ['globalChat', "выиграл в лотерею ИК-Метку", player];
            publicVariable "customRemoteMessage";
		};
	}; 

if (_gemtype == "ItemEmerald") then {

	_awardArray = [
		["IRStrobe",1],
		["Laserbatteries",8],
		["Laserbatteries",7],
		["Laserbatteries",6],
		["Laserbatteries",5],
		["Laserbatteries",4],
		["Laserbatteries",3],
		["Laserbatteries",2],
		["Laserbatteries",1],
		["ItemBriefcase100oz",4],
		["ItemBriefcase100oz",3],
		["ItemBriefcase100oz",2],
		["ItemBriefcase100oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;
};

if (_gemtype == "ItemRuby") then {

	_awardArray = [
		["Laserbatteries",4],
		["Laserbatteries",3],
		["Laserbatteries",2],
		["Laserbatteries",1],
		["ItemBriefcase100oz",3],
		["ItemBriefcase100oz",2],
		["ItemBriefcase100oz",1],
		["ItemBriefcase90oz",1],
		["ItemBriefcase80oz",1],
		["ItemBriefcase70oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;
};
if (_gemtype == "ItemAmethyst") then {

	_awardArray = [
		["Laserbatteries",2],
		["Laserbatteries",1],
		["ItemBriefcase100oz",2],
		["ItemBriefcase100oz",1],
		["ItemBriefcase90oz",1],
		["ItemBriefcase80oz",1],
		["ItemBriefcase70oz",1],
		["ItemBriefcase60oz",1],
		["ItemBriefcase50oz",1],
		["ItemBriefcase40oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;
};
if (_gemtype == "ItemSapphire") then {

	_awardArray = [
		["Laserbatteries",2],
		["Laserbatteries",1],
		["ItemAmethyst",1],
		["ItemBriefcase100oz",1],
		["ItemBriefcase90oz",1],
		["ItemBriefcase80oz",1],
		["ItemBriefcase70oz",1],
		["ItemBriefcase60oz",1],
		["ItemBriefcase50oz",1],
		["ItemBriefcase40oz",1],
		["ItemBriefcase30oz",1],
		["ItemBriefcase20oz",1],
		["ItemBriefcase10oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;
};
if (_gemtype == "ItemObsidian") then {

	_awardArray = [
		["ItemSapphire",1],
		["ItemBriefcase100oz",1],
		["ItemBriefcase90oz",1],
		["ItemBriefcase80oz",1],
		["ItemBriefcase70oz",1],
		["ItemBriefcase60oz",1],
		["ItemBriefcase50oz",1],
		["ItemBriefcase40oz",1],
		["ItemBriefcase30oz",1],
		["ItemBriefcase20oz",1],
		["ItemBriefcase10oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;	
};
if (_gemtype == "ItemTopaz") then {

	_awardArray = [
		["ItemObsidian",1],
		["ItemBriefcase50oz",1],
		["ItemBriefcase40oz",1],
		["ItemBriefcase30oz",1],
		["ItemBriefcase20oz",1],
		["ItemBriefcase10oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;
};
if (_gemtype == "ItemCitrine") then {

	_awardArray = [
		["ItemTopaz",1],
		["ItemBriefcase50oz",1],
		["ItemBriefcase40oz",1],
		["ItemBriefcase30oz",1],
		["ItemBriefcase20oz",1],
		["ItemBriefcase10oz",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1],
		["ItemBriefcaseEmpty",1]
	] call BIS_fnc_selectRandom;
	sleep 0.1;
	_var1 = _gemtype;
	_var2 = _awardArray  select 0;
	_var3 = _awardArray  select 1;
	[_var1,_var2,_var3] call fnc_gamble;
};

 




