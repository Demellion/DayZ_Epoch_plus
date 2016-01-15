// Author: Demellion (Dismal Team) for Epoch Mod
private ["_obj","_obj2","_lock","_lock2","_distance","_playerpos","_hackername","_hackeruid","_timeout"];
_timeout = 0;
while {true} do {
	_obj = nearestObject [player, "Safe_EPOCH"];
	if (!isNull _obj) then {
	_distance = player distance _obj;
		if ((player distance _obj) < 4) then {
		_lock = _obj getVariable ["Epoch_Locked",false];
			if ((_lock) && (!isNull (findDisplay 602))) then {
				_hackeruid = (getPlayerUID player);
				_hackername = (name (vehicle player));
				_playerpos = (position player);
				(findDisplay 602) closeDisplay 0;
				ASH = [0,_hackeruid,_hackername,_playerpos];
				publicVariableServer "ASH";
				sleep 0.1;
				[] execVM "compile\fn_clientKick.sqf";
			};
			if (!_lock) then {
			_obj2 = nearestObjects [_obj,["Safe_EPOCH"],4];
			_lock2 = {_x getVariable ["Epoch_Locked",false];} forEach _obj2;
				if (_lock2  && (_timeout == 0) && (!isNull (findDisplay 602))) then {
				_hackeruid = (getPlayerUID player);
				_hackername = (name (vehicle player));
				_playerpos = (position player);
				ASH = [2,_hackeruid,_hackername,_playerpos];
				publicVariableServer "ASH";
				_timeout = 30;
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
				_hackeruid = (getPlayerUID player);
				_hackername = (name (vehicle player));
				_playerpos = (position player);
				(findDisplay 602) closeDisplay 0;
				ASH = [0,_hackeruid,_hackername,_playerpos];
				publicVariableServer "ASH";
				sleep 0.1;
				[] execVM "compile\fn_clientKick.sqf";
			};
			if (!_lock) then {
			_obj2 = nearestObjects [_obj,["LockBox_EPOCH"],4];
			_lock2 = {_x getVariable ["Epoch_Locked",false];} forEach _obj2;
				if (_lock2  && (_timeout == 0) && (!isNull (findDisplay 602))) then {
				_hackeruid = (getPlayerUID player);
				_hackername = (name (vehicle player));
				_playerpos = (position player);
				ASH = [2,_hackeruid,_hackername,_playerpos];
				publicVariableServer "ASH";
				_timeout = 30;
				};
			};
		//systemChat format["ACCESS LOG: object: %1, locked: %2, distance: %3 nearest objects:%4",_obj,_lock,_distance,_obj2]; 
		};
	};
	sleep 1;
	if (_timeout > 0) then {_timeout = _timeout - 1} else {_timeout = 0;};
};
