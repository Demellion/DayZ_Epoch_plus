_hoverGambler = typeOf cursorTarget in ["US_Soldier_EP1"];
_cursorTarget = cursorTarget;
_gemID = "ItemObsidian";
_gemName = "Obsidian";
_pname = name player;
if (_hoverGambler && (player distance _cursorTarget <= 3)) then {
//------- Animation sequence start ----------
    disableuserinput true;
    disableuserinput true;
    disableuserinput true;
    player removeMagazine _gemID;
    player removeAction player_gamble_obsidian;
    player playActionNow "Medic";
    r_interrupt = false;
    sleep 6;
//--------Reward calculations----------------

    _items = [
	
    "ItemSapphire",
    "ItemObsidian",
	"ItemBriefcase80oz",
	"ItemBriefcase70oz", 
	"ItemBriefcase60oz",
    "ItemTopaz",
    "ItemTopaz",
    "ItemTopaz"
	
	
	];
    _reward = _items select floor random count _items;
    player addMagazine _reward;
    
//--------Animation  sequence end------------
    disableuserinput false;
    disableuserinput false;
    disableuserinput false; 
    r_interrupt = false;
    player switchMove "";
    player playActionNow "stop";
//---------------Rewards reports------------- 

    cutText [format["Gambled: [%1] for [%2]",_gemName,_reward], "PLAIN DOWN"];
    diag_log text format ["GAMBLE: %1 GAMBLED %2 FOR %3",_pname,_gemName,_reward];
} 
else {
    cutText [format["You need to contact a Gems Trader to gamble."], "PLAIN DOWN"];
};
//Gamble script by Demellion - status: alpha.
