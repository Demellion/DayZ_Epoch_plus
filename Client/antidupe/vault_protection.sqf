// Author: Demellion (Dismal Team) for Epoch Mod
private ["_obj","_obj2","_lock","_lock2","_distance","_argument"];
// This can be moved to Server if you know howto
fn_access_block = {
	_argument = _this select 0;
	hackeruid = (getPlayerUID player);
	hackername = (name (vehicle player));
	publicVariable hackeruid;
	publicVariable hackername;
	sleep 1;
	
	// infiSTAR BAN (add HackingSafe var to badvars)
	if (_argument == 0) then {
	(findDisplay 602) closeDisplay 0;
	 {[format["%1 (%2) BANNED, REASON - [SAFE/LOCKBOX HACK]",hackeruid,hackername],0,0.7,10,2] spawn bis_fnc_dynamictext} remoteExecCall ["bis_fnc_call", 0]; 
	HackingSafe = [];
	publicVariable HackingSafe;	
	};
	// Battleye KICK (add HackingSafe var to rules)
	if (_argument == 1) then {
	(findDisplay 602) closeDisplay 0;
	{[format["%1 (%2) BANNED, REASON - [SAFE/LOCKBOX HACK]",hackeruid,hackername],0,0.7,10,2] spawn bis_fnc_dynamictext} remoteExecCall ["bis_fnc_call", 0]; 
	HackingSafe = [];
	publicVariable HackingSafe;
	};		
	// Default LOG
	if (_argument == 2) then {
	// any log functions
	};	
	systemChat format["ACCESS VIOLATION: object: %1, locked: %2, distance: %3 nearest objects:%4",_obj,_lock,_distance,_obj2]; //DEBUG only
};

while {true} do {
	_obj = nearestObject [player, "Safe_EPOCH"];
	if (!isNull _obj) then {
	_distance = player distance _obj;
		if ((player distance _obj) < 4) then {
		_lock = _obj getVariable ["Epoch_Locked",false];
			if ((_lock) && (!isNull (findDisplay 602))) then {
				[0] call fn_access_block; // 0 - ban, 1 - kick
			};
			if (!_lock) then {
			_obj2 = nearestObjects [_obj,["Safe_EPOCH"],4];
			_lock2 = {_x getVariable ["Epoch_Locked",false];} forEach _obj2;
				if (_lock2  && (!isNull (findDisplay 602))) then {
				[2] call fn_access_block;
				};
			};
		};
	};
	_obj = nearestObject [player, "LockBox_EPOCH"];
	if (!isNull _obj) then {
	_distance = player distance _obj;
		if ((player distance _obj) < 4) then {
		_lock = _obj getVariable ["Epoch_Locked",false];
			if ((_lock) && (!isNull (findDisplay 602))) then {
				[0] call fn_access_block; // 0 - ban, 1 - kick
			};
			if (!_lock) then {
			_obj2 = nearestObjects [_obj,["LockBox_EPOCH"],4];
			_lock2 = {_x getVariable ["Epoch_Locked",false];} forEach _obj2;
				if (_lock2  && (!isNull (findDisplay 602))) then {
				[2] call fn_access_block;
				};
			};
		};
	};
	sleep 1;
};
