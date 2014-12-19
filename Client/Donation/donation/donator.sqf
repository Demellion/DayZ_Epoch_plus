private ["_item","_count","_gCounter","_bCounter","_sCounter","_humanity","_fnc_item","_fnc_count","_fnc_hadd"];
	_item = 	         (_this select 3) select 0;
	_count =           (_this select 3) select 1;
    	_gCounter =     {_x == "ItemBriefcase100oz";} count magazines player;
    	_sCounter =     {_x == "IRStrobe";} count magazines player;
    	_bCounter =     {_x == "Laserbatteries";} count magazines player;
    	_humanity =     player getVariable['humanity', 0];
    	
    if (isNil "_humanity")  exitWith {systemChat "DEBUG: humanity sync error";};
    if (isNil "_item")          exitWith {systemChat "DEBUG: item sync error";};
    if (isNil "_count")        exitWith {systemChat "DEBUG: count sync error";};
    
fnc_donate = {
        _fnc_item = _this select 0;
		_fnc_count = _this select 1;
		_fnc_hadd = _this select 2;
        	player removeAction player_donate_g1;
        	player removeAction player_donate_g2;
        	player removeAction player_donate_g3;
        	player removeAction player_donate_b1;
        	player removeAction player_donate_b2;
        	player removeAction player_donate_b3;
        	player removeAction player_donate_s;
        	
		disableuserinput true; disableuserinput true; disableuserinput true;
		player playActionNow "Medic";
		sleep 6;
        	for "_x" from 1 to _fnc_count do {
			player removeMagazine _fnc_item;
        	};
        	[player,_fnc_hadd] call player_humanityChange;
		player switchMove "";
		player playActionNow "stop";		
		disableuserinput false; disableuserinput false; disableuserinput false;

		cutText [format ["<Пожертвование>: Вы внесли свое пожертвование! (+%1)",_fnc_hadd],"PLAIN DOWN",1];
		systemChat format ["<Donation>: Successful donation! (+%1)",_fnc_hadd];
	}; 

if (_item == "ItemBriefcase100oz") then {
    if (_gCounter < _count) exitWith {cutText ["<Пожертвование>: У вас недостаточно предметов!", "PLAIN DOWN"];systemChat "<Donation>: Not enough items!";};
    if (_humanity >= 0) exitWith {cutText ["<Пожертвование>: Вы не можете внести пожертвование!", "PLAIN DOWN"];systemChat "<Donation>: You cant donate!";};
    
    if (_count == 1) then { _hadd = 2000; [_item,_count,_hadd] call fnc_donate;};
    if (_count == 2) then { _hadd = 4000; [_item,_count,_hadd] call fnc_donate;};
    if (_count == 5) then { _hadd = 10000; [_item,_count,_hadd] call fnc_donate;};
};
if (_item == "Laserbatteries") then {
    if (_bCounter < _count) exitWith {cutText ["<Пожертвование>: У вас недостаточно предметов!", "PLAIN DOWN"];systemChat "<Donation>: Not enough items!";};
    if (_humanity >= 0) exitWith {cutText ["<Пожертвование>: Вы не можете внести пожертвование!", "PLAIN DOWN"];systemChat "<Donation>: You cant donate!";};
    
    if (_count == 1) then { _hadd = 2000; [_item,_count,_hadd] call fnc_donate;};
    if (_count == 2) then { _hadd = 4000; [_item,_count,_hadd] call fnc_donate;};
    if (_count == 5) then { _hadd = 10000; [_item,_count,_hadd] call fnc_donate;};
};
if (_item == "IRStrobe") then {
    if (_sCounter < _count) exitWith {cutText ["<Пожертвование>: У вас недостаточно предметов!", "PLAIN DOWN"];systemChat "<Donation>: Not enough items!";};
    if (_humanity >= 0) exitWith {cutText ["<Пожертвование>: Вы не можете внести пожертвование!", "PLAIN DOWN"];systemChat "<Donation>: You cant donate!";};
    
    if (_count == 1) then { _hadd = 20000; [_item,_count,_hadd] call fnc_donate;};
};




