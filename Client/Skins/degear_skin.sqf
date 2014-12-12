// DT Demellion Degear script
private ["_model","_cnt"];
_model = nil;
_cnt = {isPlayer _x && _x != player} count (player nearEntities [['Man','LandVehicle','Air'], 10]);
if (_cnt > 0) exitWith { titleText ["<Skin>: Вы слишком близко к игроку/зомби/технике!", "PLAIN DOWN", 3]; systemchat "<Skin>: Too close to a player/zombie/vehicle!";};
_model = "Survivor2_DZ";
// Skin Change
	sleep 0.1;
	[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
	waitUntil {typeOf player == _model};
	systemChat "Вы сбросили одежду";
