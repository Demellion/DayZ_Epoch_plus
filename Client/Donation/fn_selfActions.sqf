/* ------------------------------------ Donator Start ------------------------------------ */
if (true) then {
private ["_onLadder","_canDo","_cursor","_cursorTrader"];
_onLadder =  (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf && !r_player_unconscious && !_onLadder);
_cursor = cursorTarget;
_cursorTrader = typeOf cursorTarget in ["BAF_Soldier_Medic_W"];

/* Actions */
    if((speed player <= 1) && _canDo && _cursorTrader && (player distance _cursor <=3)) then {
        if (player_donate_g1 < 0) then {
            player_donate_g1 = player addaction[("<t color=""#ffffff"">" + ("Donate: 1 Briefcase (2000 Humanity)") +"</t>"),"donation\donator.sqf",["ItemBriefcase100oz",1],12,false,true,"", ""];
        };
        if (player_donate_g2 < 0) then {
            player_donate_g2 = player addaction[("<t color=""#ffffff"">" + ("Donate: 2 Briefcase (4000 Humanity)") +"</t>"),"donation\donator.sqf",["ItemBriefcase100oz",2],11,false,true,"", ""];
        };
        if (player_donate_g3 < 0) then {
            player_donate_g3 = player addaction[("<t color=""#ffffff"">" + ("Donate: 5 Briefcase (10000 Humanity)") +"</t>"),"donation\donator.sqf",["ItemBriefcase100oz",5],10,false,true,"", ""];
        };
        if (player_donate_b1< 0) then {
            player_donate_b1 = player addaction[("<t color=""#ffffff"">" + ("Donate: 1 Laserbatteries (2000 Humanity)") +"</t>"),"donation\donator.sqf",["Laserbatteries",1],9,false,true,"", ""];
        };
        if (player_donate_b2< 0) then {
            player_donate_b2 = player addaction[("<t color=""#ffffff"">" + ("Donate: 2 Laserbatteries (4000 Humanity)") +"</t>"),"donation\donator.sqf",["Laserbatteries",2],8,false,true,"", ""];
        };
        if (player_donate_b3< 0) then {
            player_donate_b3 = player addaction[("<t color=""#ffffff"">" + ("Donate: 5 Laserbatteries (10000 Humanity)") +"</t>"),"donation\donator.sqf",["Laserbatteries",5],7,false,true,"", ""];
        };
        if (player_donate_s< 0) then {
            player_donate_s = player addaction[("<t color=""#ffffff"">" + ("Donate: 1 IR-Strobe (20000 Humanity)") +"</t>"),"donation\donator.sqf",["IRStrobe",1],6,false,true,"", ""];
        };
    } else {    
        player removeAction player_donate_g1;
        player removeAction player_donate_g2;
        player removeAction player_donate_g3;
        player removeAction player_donate_b1;
        player removeAction player_donate_b2;
        player removeAction player_donate_b3;
        player removeAction player_donate_s;
        player_donate_g1 = -1;
        player_donate_g2 = -1;
        player_donate_g3 = -1;
        player_donate_b1 = -1;
        player_donate_b2 = -1;
        player_donate_b3 = -1;
        player_donate_s   = -1;
    };
};
/* ------------------------------------ Donator End -------------------------------------- */
