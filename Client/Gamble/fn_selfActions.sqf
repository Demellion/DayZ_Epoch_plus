// ------------------------------------ Gems Gambling Start ------------------------------------
_gems = magazines player;

//Emerald Gamble 
if ("ItemEmerald" in _gems) then {
        hasEmeraldItem = true;
    } else { hasEmeraldItem = false;};
    if((speed player <= 1) && hasEmeraldItem && _canDo) then {
        if (player_gamble_emerald < 0) then {
            player_gamble_emerald = player addaction[("<t color=""#00cc00"">" + ("Gamble Emerald") +"</t>"),"gamble\gambleemerald.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_emerald;
        player_gamble_emerald = -1;
};
//Ruby Gamble 
if ("ItemRuby" in _gems) then {
        hasRubyItem = true;
    } else { hasRubyItem = false;};
    if((speed player <= 1) && hasRubyItem && _canDo) then {
        if (player_gamble_ruby < 0) then {
            player_gamble_ruby = player addaction[("<t color=""#cc3300"">" + ("Gamble Ruby") +"</t>"),"gamble\gambleruby.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_ruby;
        player_gamble_ruby = -1;
};
//Amethyst Gamble 
if ("ItemAmethyst" in _gems) then {
        hasAmethystItem = true;
    } else { hasAmethystItem = false;};
    if((speed player <= 1) && hasAmethystItem && _canDo) then {
        if (player_gamble_amethyst < 0) then {
            player_gamble_amethyst = player addaction[("<t color=""#990099"">" + ("Gamble Amethyst") +"</t>"),"gamble\gambleamethyst.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_amethyst;
        player_gamble_amethyst = -1;
};
//Sapphire Gamble 
if ("ItemSapphire" in _gems) then {
        hasSapphireItem = true;
    } else { hasSapphireItem = false;};
    if((speed player <= 1) && hasSapphireItem && _canDo) then {
        if (player_gamble_sapphire < 0) then {
            player_gamble_sapphire = player addaction[("<t color=""#3399ff"">" + ("Gamble Sapphire") +"</t>"),"gamble\gamblesapphire.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_sapphire;
        player_gamble_sapphire = -1;
};
//Obsidian Gamble 
if ("ItemObsidian" in _gems) then {
        hasObsidianItem = true;
    } else { hasObsidianItem = false;};
    if((speed player <= 1) && hasObsidianItem && _canDo) then {
        if (player_gamble_obsidian < 0) then {
            player_gamble_obsidian = player addaction[("<t color=""#330000"">" + ("Gamble Obsidian") +"</t>"),"gamble\gambleobsidian.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_obsidian;
        player_gamble_obsidian = -1;
};
//Topaz Gamble 
if ("ItemTopaz" in _gems) then {
        hasTopazItem = true;
    } else { hasTopazItem = false;};
    if((speed player <= 1) && hasTopazItem && _canDo) then {
        if (player_gamble_topaz < 0) then {
            player_gamble_topaz = player addaction[("<t color=""#ffff00"">" + ("Gamble Topaz") +"</t>"),"gamble\gambletopaz.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_topaz;
        player_gamble_topaz = -1;
};
//Citrine Gamble 
if ("ItemCitrine" in _gems) then {
        hasCitrineItem = true;
    } else { hasCitrineItem = false;};
    if((speed player <= 1) && hasCitrineItem && _canDo) then {
        if (player_gamble_citrine < 0) then {
            player_gamble_citrine = player addaction[("<t color=""#cc9933"">" + ("Gamble Citrine") +"</t>"),"gamble\gamblecitrine.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction player_gamble_citrine;
        player_gamble_citrine = -1;
};
