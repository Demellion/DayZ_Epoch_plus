/* ------------------------------------ Gems Gambling Start ------------------------------------ */
if (true) then {
private ["_mags","_trader","_cursor","_state","_canDo","_onLadder", "_hasEmeraldItem","_hasRubyItem","_hasAmethystItem","_hasSapphireItem","_hasObsidianItem","_hasTopazItem","_hasCitrineItem"];
_onLadder =  (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf && !r_player_unconscious && !_onLadder);
_mags = magazines player;
_cursor = cursorTarget;
_trader = typeOf cursorTarget in ["US_Soldier_EP1"];
_state = 0;
    if ((_trader) && (player distance _cursor <= 3)) then {_state = 1;} else {_state = 0;};
    if ("ItemEmerald" in _mags) then    {_hasEmeraldItem = true;} else  {_hasEmeraldItem = false;};
    if ("ItemRuby" in _mags) then       {_hasRubyItem = true;} else     {_hasRubyItem = false;};
    if ("ItemAmethyst" in _mags) then   {_hasAmethystItem = true;} else {_hasAmethystItem = false;};
    if ("ItemSapphire" in _mags) then   {_hasSapphireItem = true;} else {_hasSapphireItem = false;};
    if ("ItemObsidian" in _mags) then   {_hasObsidianItem = true;} else {_hasObsidianItem = false;};
    if ("ItemTopaz" in _mags) then      {_hasTopazItem = true;} else    {_hasTopazItem = false;};
    if ("ItemCitrine" in _mags) then    {_hasCitrineItem = true;} else  {_hasCitrineItem = false;};
/* Actions */
    if((speed player <= 1) && _canDo) then {
        if ((player_gamble_emerald < 0) && (_hasEmeraldItem)) then {
            player_gamble_emerald = player addaction[("<t color=""#00cc00"">" + ("Gamble Emerald") +"</t>"),"gamble\gems_gamble.sqf",["ItemEmerald",_state],12,false,true,"", ""];
        };
        if ((player_gamble_ruby < 0) && (_hasRubyItem)) then {
            player_gamble_ruby = player addaction[("<t color=""#cc3300"">" + ("Gamble Ruby") +"</t>"),"gamble\gems_gamble.sqf",["ItemRuby",_state],11,false,true,"", ""];
        };
        if ((player_gamble_amethyst < 0) && (_hasAmethystItem)) then {
            player_gamble_amethyst = player addaction[("<t color=""#990099"">" + ("Gamble Amethyst") +"</t>"),"gamble\gems_gamble.sqf",["ItemAmethyst",_state],10,false,true,"", ""];
        };
        if ((player_gamble_sapphire < 0) && (_hasSapphireItem)) then {
            player_gamble_sapphire = player addaction[("<t color=""#3399ff"">" + ("Gamble Sapphire") +"</t>"),"gamble\gems_gamble.sqf",["ItemSapphire",_state],9,false,true,"", ""];
        };
        if ((player_gamble_obsidian < 0) && (_hasObsidianItem)) then {
            player_gamble_obsidian = player addaction[("<t color=""#330000"">" + ("Gamble Obsidian") +"</t>"),"gamble\gems_gamble.sqf",["ItemObsidian",_state],8,false,true,"", ""];
        };
        if ((player_gamble_topaz < 0) && (_hasTopazItem)) then {
            player_gamble_topaz = player addaction[("<t color=""#ffff00"">" + ("Gamble Topaz") +"</t>"),"gamble\gems_gamble.sqf",["ItemTopaz",_state],7,false,true,"", ""];
        };
        if ((player_gamble_citrine < 0) && (_hasCitrineItem)) then {
            player_gamble_citrine = player addaction[("<t color=""#cc9933"">" + ("Gamble Citrine") +"</t>"),"gamble\gems_gamble.sqf",["ItemCitrine",_state],6,false,true,"", ""];
        };
    } else {    
        player removeAction player_gamble_emerald;
		player removeAction player_gamble_ruby;
        player removeAction player_gamble_amethyst;
        player removeAction player_gamble_sapphire;
        player removeAction player_gamble_obsidian;
        player removeAction player_gamble_topaz;
        player removeAction player_gamble_citrine;
        player_gamble_emerald = -1;
        player_gamble_ruby = -1;
        player_gamble_amethyst = -1;
        player_gamble_sapphire = -1;
        player_gamble_obsidian = -1;
        player_gamble_topaz = -1;
        player_gamble_citrine = -1;
 };
};
/* ------------------------------------ Gems Gambling End -------------------------------------- */
