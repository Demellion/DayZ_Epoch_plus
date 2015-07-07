// Demellion Dismal for InGarta.com
private ["_humanity","_tag","_type"];
waitUntil {!isNull player};


while {true} do {
	if((isPlayer cursorTarget) && (alive cursorTarget) && (side cursorTarget == side player) && (player distance cursorTarget < 7)) then {
	_humanity = cursorTarget getVariable "humanity";
	_tag = name cursorTarget;
	sleep 0.5;
	if (_humanity < -5000) then {_type = "BANDIT"; cutText [format["%1\n[%2]",_tag,_type],"PLAIN",0.1];};
	if (_humanity > 5000) then {_type = "HERO"; cutText [format["%1\n[%2]",_tag,_type],"PLAIN",0.1];};
	if ( (_humanity > -4999) AND (_humanity < 4999) ) then {_type = "NEUTRAL"; cutText [format["%1\n[%2]",_tag,_type],"PLAIN",0.1];};
	};
};
