private ["_side"];
  waitUntil {(!isNull Player) and (alive Player) and (player == player) and (!isNil 'dayz_animalCheck')};
	if (side player != "west") then {_side = createGroup west; [player] joinSilent _side;};
