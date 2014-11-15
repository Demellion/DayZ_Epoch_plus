private ["_model"];
_model = "Survivor2_DZ";
// Skin Change
	sleep 0.1;
	[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
	waitUntil {typeOf player == _model};
	systemChat "Вы сбросили одежду";
