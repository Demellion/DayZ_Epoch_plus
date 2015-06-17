[] spawn {
 private ["_time","_backpack","_backpack_x","_entities","_vehs","_backcargo"];
 _servertime = 240; // 4 Hours on each restart
_time = (diag_tickTime/60);
_entities = (position player) nearEntities [["Epoch_Male_F", "Epoch_Female_F"], 10];

fnc_nodupe = {
while {1 == 1} do
{  
    {
    if ((isPlayer _x && _x != player) && (alive _x)) then {
    _backpack=backpackContainer player;
    _backpack_x=backpackContainer _x;
        if(_backpack ==_backpack_x) then {
        hint "А по мозгам не хочешь?";
        systemChat "Too smart, you ass?";
        removeBackpack player;
        };
    }; 
    } forEach _entities;
    uisleep 1;
};
};
    
fnc_timers = {
while {1 == 1} do
{
   
    if (_time > (_servertime - 5)) then {
    waitUntil {!isnull (findDisplay TradeNPCMenu)};
    (findDisplay TradeNPCMenu) closedisplay 0;
    closeDialog 0;
    hint "Торговцы ушли в ожидание! Ожидайте рестарта";
    systemChat "Traders gone standby! Wait until restart"; 
    };

    if(_time > (_servertime - 2)) then {
    waitUntil {!isnull (findDisplay 602)};
    (findDisplay 602) closedisplay 0;
    closeDialog 0;
    hint "Инветарь более недоступен! Ожидайте рестарта";
    systemChat "Inventory is disabled! Wait until restart";
    };
    uisleep 0.1;
};
};

call fnc_nodupe;
waitUntil {_time > (_servertime - 5)};
call fnc_timers; 
waitUntil {_time > (_servertime - 1)};
exit; // This should be added to Battleye filters with kick-nolog operator.


};

