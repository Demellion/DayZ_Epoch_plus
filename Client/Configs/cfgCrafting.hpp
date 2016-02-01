/*
nearby[] =
{
	{
		"Fire",			//Name of field, anything
		"",				//image folder path (ie "\x\addons\a3_epoch_code\Data\UI\crafting\"), empty for Epoch default
		"fire",			//image prefix, suffix will be added by code. 2 possible suffixes: [_true.paa, _false.paa]
		{1,{"ALL"}},	//ARRAY of p3D {0,{"filename.p3d","filename.p3d"}} or ARRAY of logic classes {1,{"AIR","LAND","className"}}. Integer to switch array mode
		3,				//distance to check in meters
		1,				//count
		1,				//BOOL: object has to be on fire
		0				//BOOL: object has to be alive (not destroyed)
	};
};

//Can be multiple requirements like this, example requires both fire and water (unlimited, but requires mouse scroll if more than 8 elements):
nearby[] =
{
	{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0},
	{"Water source","","water",{0,{"barrelwater_f.p3d", "water_source_f.p3d", "pumpa.p3d", "misc_wellpump.p3d"}},3,1,0,0}
};
*/
// TODO //

// Some more guns (marksman guns)

/* Depreceated
	class EpochRadio0 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio1 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio2 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio3 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio4 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio5 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio6 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio7 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio8 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	};
	class EpochRadio9 : Item
	{
		recipe[] = { "CircuitParts", "ItemScraps","EnergyPack"};
		model = "\a3\ui_f\objects\Radio.p3d";
		previewPosition[] = {0.800569,1,0.272473};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Общение на определенной частоте."; 
	}; 
*/
/* Not Used
 	class ItemCooler0 : Item
	{
		recipe[] = { "ItemCoolerE", { "SnakeMeat_EPOCH", 2 }, "sweetcorn_epoch" };
		previewPosition[] = {0.795709,1,0.415296};
		previewScale = 0.8;
		previewVector = 0;
	};
	class ItemCooler1 : Item
	{
		recipe[] = { "ItemCoolerE", { "CookedRabbit_EPOCH", 2 }, "sweetcorn_epoch" };
		previewPosition[] = {0.795709,1,0.415296};
		previewScale = 0.8;
		previewVector = 0;
	};
	class ItemCooler2 : Item
	{
		recipe[] = { "ItemCoolerE", "CookedChicken_EPOCH", "sweetcorn_epoch" };
		previewPosition[] = {0.795709,1,0.415296};
		previewScale = 0.8;
		previewVector = 0;
	};
	class ItemCooler3 : Item
	{
		recipe[] = { "ItemCoolerE", "CookedGoat_EPOCH", "sweetcorn_epoch" };
		previewPosition[] = {0.795709,1,0.415296};
		previewScale = 0.8;
		previewVector = 0;
	};
	class ItemCooler4 : Item
	{
		recipe[] = { "ItemCoolerE", "CookedSheep_EPOCH", "sweetcorn_epoch" };
		previewPosition[] = {0.795709,1,0.415296};
		previewScale = 0.8;
		previewVector = 0;
	};
	class ItemCoolerE : Part
	{
		usedIn[] = { "ItemCooler0", "ItemCooler1", "ItemCooler2", "ItemCooler3", "ItemCooler4" };
		previewPosition[] = {0.795709,1,0.415296};
		previewScale = 0.8;
		previewVector = 0;
	};
	class sweetcorn_epoch : Part
	{
		usedIn[] = {"ItemCooler0","ItemCooler1","ItemCooler2","ItemCooler3","ItemCooler4"};
		previewPosition[] = {0.799332,1,0.26};
		previewScale = 2.7;
		previewVector = 0;
	};    
*/
/* Passed Special Offers
	class launch_RPG32_F : XItem
	{
	recipe[] = {{"Laserbatteries", 10}};
	displayName = "СПЕЦ: РПГ";
	descriptionFull = "<t color='#0099CC'>Специальное предложение. Время приобретения этого предмета ограничено.</t>";  
	previewScale = 0.3; // Large
	previewVector = 0.5;    
	};
	class RPG32_F : XItem
	{
  recipe[] = {{"Laserbatteries", 2}};
  displayName = "СПЕЦ: Снаряд РПГ";
	descriptionShort = "Свойства: Противотанковая (AT).";
	descriptionFull = "<t color='#0099CC'>Специальное предложение. Время приобретения этого предмета ограничено.</t>";  
	previewScale = 0.3; // Large
	previewVector = 0.5;    
	};
	class RPG32_HE_F : XItem
	{
  recipe[] = {{"Laserbatteries", 2}};
  displayName = "СПЕЦ: Снаряд РПГ";
	descriptionShort = "Свойства: Противопехотная (HE).";
	descriptionFull = "<t color='#0099CC'>Специальное предложение. Время приобретения этого предмета ограничено.</t>";  
	previewScale = 0.3; // Large
	previewVector = 0.5;    
	};
	class SpacerNULL : XItem
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};  
*/
class CfgCrafting
{
	DeveloperMode = 0; //used for 3D preview position and scale, set to 0 for live server!
	//You can customize basic theme of crafting UI here:
	colorScheme[] =
	{
		"\x\addons\a3_epoch_code\Data\UI\crafting\cancel.paa",
		"\x\addons\a3_epoch_code\Data\UI\crafting\craft.paa",
		"\x\addons\a3_epoch_code\Data\UI\crafting\close.paa",

		{"Recipes", 			{0,0,0,0.8}},
		{"Ingredients",			{0,0,0,0.8}},
		{"Preview",				{0.76,0.5,0.07,0.8}},
		{"Resources",			{0,0,0,0.8}},
		{"Description",			{0,0,0,0.8}},
		{" -- Requires -- ",	{0.99,0.53,0.03,1}},
		{" -- Used in -- ",		{0.99,0.53,0.03,1}},

		{0,1,0,1},		//Recipe LB, item found
		{0,1,0,1},		//Ingredients LB, Has items on player
		{1,1,0,1},		//Ingredients LB, Has items nearby
		{1,0,0,1}, 		//Ingredients LB, Missing items
		{1,1,1,1},		//Ingredients LB, Items used in...
		{0,0,0,0.1},	//Background color
		{0,0,0,1},		//Frame color
		{0,0,0,0},		//description ST
		{0,0,0,0},		//Recipe LB
		{0,0,0,0},		//Ingredients LB

		{0.76,0.5,0.07,0.8},	//progress bar
		{0,0,0,0.3},			//progress background
		"#FFFFFF",				//progress text HTML color

		{1,0.6,0.01,1}		//QTY color
	};

	/** --------- Don't edit --------- **/
	class Default //className, any object or item
	{
		craftTime = 1; //time it takes to craft

		recipe[] = {}; //nested arrays, {{"item", 1}};
		nearby[] = {}; //nearby requirements - fire, water source, object
		usedIn[] = {}; //item is an ingredient

		previewPosition[] = {0.8125,1,0.285}; //XzY
		previewScale = 1;
		previewVector = 0; //vector rotation multiplier

		priority = 0; //Recipe list priority, items with 0 are on top followed by order in config file.
		type = 0; //After crafting, item is added: [0 - to inventory], [1 - in weapon holder], [2 - as vehicle]
		descriptionFull = ""; //Structured text, added on new line after descriptionShort

		/** --------- Config Overrides --------- **/
		//displayName = "";
		//picture = "";
		//descriptionShort = "";
		//model = "\x\addons\a3_epoch_assets\models\logo.p3d";
    //interactAction = 0; // 0 = examine, 1 = eat, 2 = drink, 3 = build (CfgMagazines reference)
	};
	/*               Main templates             */
	class XItem: Default // Donation Items
	{
		priority = 0;
		type = 0;
		craftTime = 1;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#0099CC'>Игровая валюта, используется для обмена на ценные предметы или деньги</t>";        
	};
	class WeaponHolder: Default //Placed inside weaponholder in front of player (?)
	{
		priority = 1;
		type = 1;
		offset[] = {0,1,0}; //local space
		craftTime = 45;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#FD7F30'>Оружие<br />Затраты времени: 45 сек.</t>";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
	};
	class Vehicle: Default //Spawned in front of player (?)
	{
		priority = 1;
		type = 2;
		offset[] = {0,5,0}; //local space
		craftTime = 9000; // dev mode, should be 180!
		descriptionShort = "В разработке, этот предмет временно не доступен!.";
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
		//descriptionShort = "Свойства: Не указано.";
		//descriptionFull = "<t color='#FD7F30'>Транспорт<br />Затраты времени: 3 мин.</t>";
	};
	class Mods: Default //Goes into inventory
	{
		priority = 1;
		craftTime = 30;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#FD7F30'>Боевое оборудование<br />Затраты времени: 30 сек.</t>";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
	};
	class Ammo: Default //Goes into inventory
	{
		priority = 1;
		craftTime = 5;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#FD7F30'>Аммуниция<br />Затраты времени: 5 сек.</t>";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
	};        
	class Build: Default //base building kits gets higher priority on the list
	{
		priority = 2;
		craftTime = 10;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#FD7F30'>Предмет используемый для строительства<br />Затраты времени: 10 сек.</t>";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
	};
	class Item: Default //Goes into inventory
	{
		priority = 3;
		craftTime = 3;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#FD7F30'>Предметы общего назначения<br />Затраты времени: 3 сек.</t>";
	};
	class Part: Default //Looted part - an ingredient for other items, now is also craftable
	{
		priority = 3;
		descriptionShort = "Свойства: Не указано.";
		descriptionFull = "<t color='#FD7F30'>Материал для создания других предметов<br />Затраты времени: Нет.</t>";
		craftTime = 1;
		type = 0;
	};
  /*                     Special                      */
  
   /*                    Currency                   */
	class Laserbatteries : XItem
	{ 
    usedIn[] = { 
        "ItemSafe",
        "ItemLockbox",
        "Toolkit",
        "Medikit",
        "ItemDocument",
        "ItemTopaz",
        "ItemSapphire",
        "ItemOnyx",
        "ItemEmerald",
        "ItemRuby",
        "ItemJade",
        "wolf_mask_epoch",
        "pkin_mask_epoch",
        "clown_mask_epoch",
        "MeleeSword",
        "O_MRAP_02_F",
        "I_MRAP_03_EPOCH", 
        "B_MRAP_01_EPOCH",
        "O_MRAP_02_hmg_F",
        "I_MRAP_03_hmg_F",
        "B_MRAP_01_HMG_F "     
    };       
		previewPosition[] = {0.8,1,0.25};
		previewScale = 0.75;
		previewVector = 2.8;
		displayName = "Microreactor";
		model = "\A3\weapons_f\items\Toolkit.p3d";
		descriptionFull = "<t color='#0099CC'>Специальная валюта, используется для обмена на ценные предметы.<br /><a href='https://vk.com/market-112482079'>Купить предмет можно здесь.</a></t>";        
    };
	class ItemGoldBar : XItem
	{
		usedIn[] = {"ItemGoldBar10oz"};
		previewPosition[] = {0.801697,1,0.379502};
		previewScale = 3;
	};
	class ItemGoldBar10oz : XItem
	{
		//usedIn[] = {""};
        recipe[] = {{ "ItemGoldBar", 10}};
		previewPosition[] = {0.801697,1,0.379502};
		previewScale = 3;
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  		
	};
	class ItemQuartz : XItem
	{
		usedIn[] = {
                "optic_Arco",
                "optic_Hamr",
                "optic_Aco",
                "optic_ACO_grn",
                "optic_Holosight",
                "optic_SOS",
                "optic_MRCO",
                "optic_DMS",
                "optic_LRPS",
                "optic_NVS",
                "optic_Nightstalker",
                "optic_AMS",
                "optic_AMS_khk",
                "optic_AMS_snd",
                "optic_KHS_blk",
                "optic_KHS_hex",
                "optic_KHS_old",
                "optic_KHS_tan"      
    };
		previewPosition[] = {0.801697,1,0.379502};
		previewScale = 1;
	};
	class ItemGarnet : XItem
	{
		//usedIn[] = {""};
		previewPosition[] = {0.801697,1,0.379502};
		previewScale = 3;
	};
	class ItemCitrine : XItem
	{
		//usedIn[] = {""};
		previewPosition[] = {0.796925,1,0.285847};
		previewScale = 3.5;
		previewVector = 2.7;
	};
	class ItemAmethyst : XItem
	{
		//usedIn[] = {""};
		previewPosition[] = {0.798082,1,0.277137};
		previewScale = 3;
		previewVector = 2.9;
	};
	class ItemTopaz : XItem
	{
		//usedIn[] = {""};
    //recipe[] = {{ "Laserbatteries", 1 }};
		previewPosition[] = {0.79555,1,0.393739};
		previewScale = 3;
	};
	class ItemSapphire : XItem
	{
		//usedIn[] = {""};
    //recipe[] = {{ "Laserbatteries", 2 }};
		previewPosition[] = {0.804014,1,0.283865};
		previewScale = 3;
		previewVector = 3.3;
	};
	class ItemOnyx : XItem
	{
		//usedIn[] = {""};
    //recipe[] = {{ "Laserbatteries", 4 }};
		previewPosition[] = {0.799376,1,0.283337};
		previewScale = 3;
		previewVector = 3.1;
	};
	class ItemEmerald : XItem
	{
		//usedIn[] = {""};
    //recipe[] = {{ "Laserbatteries", 6 }};
		previewPosition[] = {0.805568,1,0.293134};
		previewScale = 3;
		previewVector = 2.5;
	};
	class ItemRuby : XItem
	{
		//usedIn[] = {""};
    //recipe[] = {{ "Laserbatteries", 10 }};
		previewPosition[] = {0.79555,1,0.393739};
		previewScale = 3;
	};
	class ItemJade : XItem
	{
		//usedIn[] = {""};
    //recipe[] = {{ "Laserbatteries", 12 }};
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 3;
	};
	class SpacerX : XItem
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};
  /*                   Weapons              */
	class srifle_GM6_F : WeaponHolder //Lynx Black
	{
	recipe[] = {{"Toolkit", 3}, {"ItemDocument",1}, {"ItemCorrugatedLg",5}};
	previewScale = 0.3; // Large
	previewVector = 0.5;    	
	};
	class srifle_LRR_F : WeaponHolder //LRR Black
	{
    recipe[] = {{"Toolkit", 3}, {"ItemDocument",1}, {"ItemCorrugatedLg",5}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;	
	};
	class m107_EPOCH : WeaponHolder //M107 Black
	{
	recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",5}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;	    
	};	
	class m107Tan_EPOCH : WeaponHolder //M107 Desert
	{
	recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",5}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;	    
	};
	class MMG_01_hex_F : WeaponHolder //Navid Hex 
	{
  recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;    
	}; 		
	class MMG_01_tan_F : WeaponHolder //Navid Desert 
	{
	recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;    
	}; 	
	class MMG_02_black_F : WeaponHolder //SPMG Black
	{
	recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;    
	}; 
	class MMG_02_camo_F : WeaponHolder //SPMG Camo
	{
	recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanGrn",1}, {"PaintCanBlk",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;    
	}; 
	class MMG_02_sand_F : WeaponHolder //SPMG Desert
	{
	recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5;
	};
	class LMG_Zafir_F : WeaponHolder //Zafir Black
	{
  recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
  };
	class m249_EPOCH : WeaponHolder //M249 Black
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};	
	class m249Tan_EPOCH : WeaponHolder //M249 Desert
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class M14_EPOCH : WeaponHolder // M14 Wood
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class M14Grn_EPOCH : WeaponHolder // M14 Green
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanGrn",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class srifle_DMR_06_camo_F : WeaponHolder // M14 Camo
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanGrn",1}, {"PaintCanBlk",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class srifle_DMR_06_olive_F : WeaponHolder // M14 Olive
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanGrn",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class srifle_DMR_01_F : WeaponHolder //Rahim Black
	{
    recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;    	
	};  
	class srifle_DMR_02_F : WeaponHolder //Mar-10 Black
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class srifle_DMR_02_camo_F : WeaponHolder // Mart-10 Camo
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanGrn",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class srifle_DMR_02_sniper_F : WeaponHolder // Mar-10 Desert
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};
	class srifle_DMR_03_F : WeaponHolder //Mk-1 EMR
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;  
	};
	class srifle_DMR_03_tan_F : WeaponHolder // Mk-1 EMR Desert
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;  
	};
	class srifle_DMR_03_multicam_F : WeaponHolder // Mk-1 EMR Camo
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanGrn",1}, {"PaintCanBlk",1}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;  
	};
	class srifle_DMR_05_blk_F : WeaponHolder // Cyrus Black
	{
	recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.25; // X-Large
	previewVector = 0.5; 
	};	
	class srifle_DMR_05_hex_F : WeaponHolder // Cyrus Hex
	{
    recipe[] = {{"Toolkit", 1}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanBrn",1}, {"PaintCanBlk",1}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;  
	};
	class srifle_DMR_04_F : WeaponHolder // ASP-1 Black
	{
    recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;  
	};		
	class srifle_DMR_04_Tan_F : WeaponHolder // ASP-1 Desert
	{
    recipe[] = {{"Toolkit", 2}, {"ItemDocument",1}, {"ItemCorrugatedLg",3}, {"PaintCanOra",1}, {"PaintCanYel",1}};
	previewScale = 0.4; // Medium
	previewVector = 0.5;  
	};		
	class SpacerW : WeaponHolder
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};
   /*                      Ammo               */ 
	class 5Rnd_127x108_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};
	class 5Rnd_127x108_APDS_Mag : Ammo
	{
		recipe[] = { { "EnergyPackLg", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 7Rnd_408_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 150Rnd_93x64_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 150Rnd_762x54_Box : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 200Rnd_556x45_M249 : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};
	class 130Rnd_338_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;	
	};
	class 20Rnd_762x51_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 10Rnd_762x54_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 10Rnd_338_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 10Rnd_127x54_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class 10Rnd_93x64_DMR_05_Mag : Ammo
	{
		recipe[] = { { "EnergyPack", 1 }, { "ItemScraps", 1 } };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};	
	class SpacerA : Ammo
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};	
  /*                     Vehicle                */ 
	class O_MRAP_02_F : Vehicle
	{
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
		recipe[] = {{"Laserbatteries", 5}};
		previewPosition[] = {0.8125,1,0.285};
		previewScale = 0.04;
		previewVector = 0;    
  }; //price = 3000; tax = 3.5// Infrit
	class I_MRAP_03_EPOCH : Vehicle
	{
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
    recipe[] = {{"Laserbatteries", 5}};
		previewPosition[] = {0.8125,1,0.285};
		previewScale = 0.04;
		previewVector = 0;        
  }; //price = 4000; tax = 3.5// Strider
	class B_MRAP_01_EPOCH : Vehicle
	{
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
    recipe[] = {{"Laserbatteries", 5}};
		previewPosition[] = {0.8125,1,0.285};
		previewScale = 0.04;
		previewVector = 0;    
  }; //price = 3500; tax = 3.5// Hunter
	class O_MRAP_02_hmg_F : Vehicle
	{
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
    recipe[] = {{"Laserbatteries", 9}};
		previewPosition[] = {0.8125,1,0.285};
		previewScale = 0.04;
		previewVector = 0;    
  };//price = 4500; tax = 3.5 // Infrit HMG
	class I_MRAP_03_hmg_F : Vehicle
	{
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
    recipe[] = {{"Laserbatteries", 12}};
		previewPosition[] = {0.8125,1,0.285};
		previewScale = 0.04;
		previewVector = 0;      
  };//price = 7000; tax = 3.5 // Strider HMG 14
	class B_MRAP_01_HMG_F : Vehicle
	{
		nearby[] = {{"Jammer", "", "electricity", {1,{"PlotPole_EPOCH"}}, 30, 1, 0, 1}};
    recipe[] = {{"Laserbatteries", 14}};
		previewPosition[] = {0.8125,1,0.285};
		previewScale = 0.04;
		previewVector = 0;      
  };//price = 6000; tax = 3.5 // Hunter HMG 12
	class SpacerV : Vehicle
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};  
  /*                      Mods                  */
	class optic_Arco : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 1 }, { "ItemQuartz", 2 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8; 
    descriptionShort = "Свойства: 2х коллиматор (зеленый).";    
  };  // 2x HOLO Collimator (Green Dot)
	class optic_Hamr : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 1 }, { "ItemQuartz", 2 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 2х коллиматор (красный).";  
  };  // 2x HOLO Collimator (Red Dot)
	class optic_Aco : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 1 }, { "ItemQuartz", 2 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 2х улучшенный коллиматор (красный).";      
  };  // 2x Advanced HOLO Collimator (Rifle Red Graph)
	class optic_ACO_grn : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 1 }, { "ItemQuartz", 2 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 2х улучшенный коллиматор (зеленый).";     
  };  // 2x Advanced HOLO Collimator (Rfile Green Graph)
	class optic_Holosight : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 1 }, { "ItemQuartz", 2 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 2х улучшенный HOLO (красный).";     
  };  // 2x Advanced HOLO Collimator (Rifle Red Graph)
	class optic_SOS : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 10-85x баллистический (красный).";      
  };  //10x-85x Sniper Optics (Mildots Analogue)
	class optic_MRCO : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 2x баллистический (отметки 200-800м).";          
  };  // 2x Ballistic Sniper Optics (200-800 Range Dots)
	class optic_DMS : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 4x баллистический (оптический дальномер).";          
  };  // 4x Ballistic Marksman Optics (Optical Rangefinder)
	class optic_LRPS : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 3 }, { "ItemQuartz", 6 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;            
    descriptionShort = "Свойства: 6-25x снайперский (милдоты).";      
  };  // 6x-25x Long Range Precision Scope (Mildots)
	class optic_NVS : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 6 }, {"CircuitParts", 2}, {"EnergyPackLg", 1}, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 5x ночного виденья.";          
  }; // 5x NVS Scope 
	class optic_Nightstalker : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 6 }, {"CircuitParts", 2}, {"EnergyPackLg", 1}, {"acc_pointer_IR", 1},{"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 4-10x с переключением НВ (встроенный лазерный дальномер).";          
  }; // 4x-10x Nightvision Mode Optics (Simple Sight)
	class optic_AMS : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 3x-10х снайперский (улучшенный).";       
  };  // 3x-10x Advanced Marksman Scope (Wildcard Ballistics Marks) [Black]
	class optic_AMS_khk : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 3x-10х снайперский (улучшенный).";    
  }; // 3x-10x Advanced Marksman Scope (Wildcard Ballistics Marks) [Khaki]
	class optic_AMS_snd : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;  
    descriptionShort = "Свойства: 3x-10х снайперский (улучшенный).";    
  }; // 3x-10x Advanced Marksman Scope (Wildcard Ballistics Marks) [Desert]
	class optic_KHS_blk : Mods 
	{
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8; 
    descriptionShort = "Свойства: 5x-10х снайперский (3-точечный пистолетный вариант).";    
  }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Black]
	class optic_KHS_hex : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 5x-10х снайперский (3-точечный пистолетный вариант).";      
  }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Hex]
	class optic_KHS_old : Mods 
	{
 		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
		recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
		previewPosition[] = {0.8,1,0.29};
		previewScale = 0.75;
		previewVector = 2.8;
    descriptionShort = "Свойства: 5x-10х снайперский (3-точечный пистолетный вариант).";      
  }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Used]
	class optic_KHS_tan : Mods 
	{
			nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};  
			recipe[] = { { "ItemScraps", 2 }, { "ItemQuartz", 4 }, {"ItemDocument", 1} };
			previewPosition[] = {0.8,1,0.29};
			previewScale = 0.75;
			previewVector = 2.8;
		descriptionShort = "Свойства: 5x-10х снайперский (3-точечный пистолетный вариант).";      
	  }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Desert]  
	class muzzle_snds_H : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};    
		model = "\A3\weapons_f\acc\acca_snds_h_F.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor 6.5";
	  };
	class muzzle_snds_L : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\weapons_f\acc\acca_snds_l_F.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor 9mm";
	  };
	class muzzle_snds_M : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\weapons_f\acc\acca_snds_h_F.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor 5.56";
	  };
	class muzzle_snds_B : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\weapons_f\acc\acca_snds_h_F.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor 7.62";
	  };
	class muzzle_snds_H_MG : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor 6.5 Mk200";
	  };
	class muzzle_snds_H_SW : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor 6.5 MX SW";
	  }; 
	class muzzle_snds_acp : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\weapons_f\acc\acca_snds_l_F.p3d";   
		previewScale = 0.75;
		previewVector = -3.9;
		displayName = "Supressor .45 ACP";
	  };
	class muzzle_snds_338_black : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\Weapons_F\Acc\acca_snds_338_black_F.p3d";
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor .338 (Black)";
	  };
	class muzzle_snds_338_green : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		previewPosition[] = {0.8125,1,0.085};
		model = "\A3\Weapons_F\Acc\acca_snds_338_green_F.p3d";  
		previewScale = 0.75;
		previewVector = -3.9;
	  displayName = "Supressor .338 (Green)";
	  };
	class muzzle_snds_338_tan : Mods
	{
		recipe[] = {{"ItemScraps",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		model = "\A3\Weapons_F\Acc\acca_snds_338_tan_F.p3d";   
		previewPosition[] = {0.8125,1,0.085};
		previewScale = 0.75;
		previewVector = -3.9;
		displayName = "Supressor .338 (Tan)";
	  };
	class Defib_EPOCH : Mods
	{
		recipe[] = {"Medikit","ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		model = "\x\addons\a3_epoch_assets_3\CfgWeapons\repairDefib.p3d";
		previewPosition[] = {0.8125,1,0.085};
		previewScale = 0.75;
		previewVector = -3.9;
		displayName = "Defib Plug";
		descriptionShort = "Свойства: Насадка Multigun для точеной дефибриляции.";
	  };
	class Repair_EPOCH : Mods
	{
		recipe[] = {"Toolkit","ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
			model = "\x\addons\a3_epoch_assets_3\CfgWeapons\repairVehicle.p3d";
		previewPosition[] = {0.8125,1,0.085};
		previewScale = 0.75;
		previewVector = -3.9;
		displayName = "Repair Plug";
		descriptionShort = "Свойства: Насадка Multigun для точеной починки техники."; 
	  };
	class bipod_01_F_snd  : Mods
	{
		recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_snd_F.p3d"; 
		previewPosition[] = {0.8125,1,0.385};	
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_01_F_blk : Mods
	{
		recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_blk_F.p3d";  
		previewPosition[] = {0.8125,1,0.385};
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_01_F_mtp : Mods
	{
	recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_mtp_F.p3d";  
		previewPosition[] = {0.8125,1,0.385};
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_02_F_blk : Mods
	{
		recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_blk_F.p3d";  
		previewPosition[] = {0.8125,1,0.385};
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_02_F_tan : Mods
	{
		recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_tan_F.p3d";  
		previewPosition[] = {0.8125,1,0.385};
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_02_F_hex : Mods
	{
		recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_hex_F.p3d";  
		previewPosition[] = {0.8125,1,0.385};
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_03_F_blk : Mods
	{
		recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		//model = "\A3\Weapons_F\Acc\accu_bipod_03_blk_F.p3d";  
		previewPosition[] = {0.8125,1,0.385};
		previewScale = 1.25;
		previewVector = -3.9;
	  };
	class bipod_03_F_oli : Mods
	{
    recipe[] = {{"ItemCorrugated",2},"ItemDocument"};
    nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
    //model = "\A3\Weapons_F\Acc\accu_bipod_03_oli_F.p3d";  
    previewPosition[] = {0.8125,1,0.385};
    previewScale = 1.25;
    previewVector = -3.9;
  };
	class SpacerM : Mods
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};   
  /*                      Build                  */        
	class CSGAS : Build
	{
		recipe[] = { "ItemMixOil", "jerrycan_epoch" };
		model = "\x\addons\a3_epoch_assets_2\jerrycan.p3d";
		previewPosition[] = {0.802443,1,0.254301};
		previewScale = 0.6;
		previewVector = 4.9;
	};
	class ItemCorrugatedLg : Build
	{
		usedIn[] = {
			"srifle_GM6_F",
			"srifle_LRR_F",
			"m107_EPOCH",
			"MMG_01_hex_F",
			"LMG_Zafir_F",
			"m249_EPOCH",
			"M14_EPOCH",
			"srifle_DMR_01_F",
			"srifle_DMR_02_F",
			"srifle_DMR_03_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"m249_EPOCH",
            "VehicleRepairLg", 
            "KitPlotPole", 
            "KitTankTrap",
            "KitHesco3"	
		};
		recipe[] = { { "ItemCorrugated", 3 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		previewPosition[] = {0.797491,1,0.32899};
		previewScale = 0.25;
		previewVector = 0.5;
	};
	class PartPlankPack : Build
	{
		usedIn[] = {"KitStudWall","KitWoodFloor","KitWoodFoundation","KitWoodStairs","KitWoodRamp","KitWoodLadder","KitWoodTower","KitTiPi","KitWorkbench","KitSpikeTrap","KitMetalTrap"};
		recipe[] = {{"WoodLog_EPOCH",2}};
		nearby[] = {};  
		previewPosition[] = {0.797837,1,0.288258};
		previewScale = 0.2;
		previewVector = 1;
	};
	class KitFirePlace : Build
	{
		recipe[] = {{"ItemRock",2},{"ItemStick",1}};
		model = "\x\addons\a3_epoch_assets_2\fireplace.p3d";
		previewPosition[] = {0.791523,1,0.244987};
		previewScale = 0.2;
		previewVector = 1.5;
	};
	class KitSpikeTrap : Build
	{
		recipe[] = {{"PartPlankPack",4}};
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		previewPosition[] = {0.797675,1,0.398882};
		previewScale = 0.07;
		previewVector = 0;
	};
	class KitMetalTrap : Build
	{
		recipe[] = {{"PartPlankPack",4}, {"ItemScraps",2}};
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		previewPosition[] = {0.797675,1,0.398882};
		previewScale = 0.07;
		previewVector = 0;
	};
	class KitStudWall : Build
	{
		recipe[] = {{"PartPlankPack",4}};
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_SIM.p3d";
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		previewPosition[] = {0.797675,1,0.398882};
		previewScale = 0.07;
		previewVector = 0;
	};
	class KitWoodFloor : Build
	{
		usedIn[] = { "KitWoodTower" };
		recipe[] = {{"PartPlankPack",4}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\Wooden_Floor.p3d";
		previewPosition[] = {0.800198,1,0.262418};
		previewScale = 0.055;
		previewVector = 3.6;
	};
	class KitWoodLadder : Build
	{
		recipe[] = { { "PartPlankPack", 4 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Ladder\wood_ladder.p3d";
		previewPosition[] = {0.798736,1,0.441696};
		previewScale = 0.08;
		previewVector = 0;
	};
	class KitWoodRamp : Build
	{
		recipe[] = { { "PartPlankPack", 6 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\Wood_Ramp.p3d";
		previewPosition[] = {0.799137,1,0.350575};
		previewScale = 0.05;
		previewVector = 0;
	};
	class KitTankTrap : Build
	{
		recipe[] = { { "ItemCorrugatedLg", 1 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\tank_trap.p3d";
		previewPosition[] = { 0.803749, 1, 0.448515 };
		previewScale = 0.17;
		previewVector = 0;
	};
	class KitHesco3 : Build
	{
		recipe[] = { { "MortarBucket", 2 }, { "ItemCorrugatedLg", 2 } };
		nearby[] = { { "Workbench", "", "workbench", { 1, { "WorkBench_EPOCH" } }, 3, 1, 0, 1 } };
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\hesco.p3d";
		previewPosition[] = { 0.803749, 1, 0.448515 };
		previewScale = 0.02;
		previewVector = 0;
	};
	class KitWoodStairs : Build
	{
		recipe[] = {{"PartPlankPack",4}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\Wood_stairs.p3d";
		previewPosition[] = {0.795037,1,0.377922};
		previewScale = 0.054;
		previewVector = 0;
	};
	class KitWoodTower : Build
	{
		recipe[] = { {"KitWoodFloor", 1}, { "PartPlankPack", 4 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Tower\Tower\Base_Tower_Frame.p3d";
		previewPosition[] = {0.800653,1,0.378749};
		previewScale = 0.05;
		previewVector = 0;
	};
	class KitTiPi : Build
	{
		recipe[] = { { "Pelt_EPOCH", 4 }, { "PartPlankPack", 2 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\tp.p3d";
		previewPosition[] = {0.801503,1,0.433758};
		previewScale = 0.06;
		previewVector = 0;
	};
	class KitShelf : Build
	{
		recipe[] = {{"ItemCorrugated",3}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\shelf.p3d";
		previewPosition[] = {0.803749,1,0.448515};
		previewScale = 0.17;
		previewVector = 0;
	};
	class KitWorkbench : Build
	{
		recipe[] = { { "PartPlankPack", 2 } };
		nearby[] = {};  
		model = "\x\addons\a3_epoch_assets_1\models\workbench.p3d";
		previewPosition[] = { 0.803749, 1, 0.448515 };
		previewScale = 0.17;
		previewVector = 0;
	};
	class KitFoundation : Build
	{
		recipe[] = {{"MortarBucket",4}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\Concrete_Col.p3d";
		previewPosition[] = {0.796787,1,0.211457};
		previewScale = 0.047;
		previewVector = 0;
	};
	class KitWoodFoundation : Build
	{
		recipe[] = {{"PartPlankPack",8}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\Wood_Col.p3d";
		previewPosition[] = {0.796787,1,0.211457};
		previewScale = 0.047;
		previewVector = 0;
	};
	class KitCinderWall : Build
	{
		recipe[] = {{"CinderBlocks",2},{"MortarBucket",2}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\cinder_half.p3d";
		previewPosition[] = {0.797638,1,0.341915};
		previewScale = 0.07;
		previewVector = 0;
	};
	class KitPlotPole : Build
	{
		recipe[] = {{"ItemCorrugatedLg",2}, {"CircuitParts",2} };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets\models\jammer.p3d";
		previewPosition[] = {0.801378,1,0.464834};
		previewScale = 0.055;
		previewVector = 0;
	};
	class KitSolarGen : Build
	{
		// TODO recipe		
		recipe[] = { { "ItemSolar", 1 }, { "ItemCables", 1 }, { "ItemBattery", 1 }, { "ItemCorrugatedLg", 2 }, { "CircuitParts", 2 } };
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Solar_Generator_Complete\Solar_generator.p3d";
		previewPosition[] = {0.804979,1,0.39189};
		previewScale = 0.11;
		previewVector = 0;
	}; 
	class SpacerB : Build
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};   	            
	/*                      Items                      */ 
	class ItemSafe : Item 
	{
		recipe[] = {{"Laserbatteries", 4}};
		previewScale = 0.2;
		previewVector = 1;
	  };
	class ItemLockbox : Item 
	{
		recipe[] = { {"Laserbatteries",2} };
		previewScale = 0.2;
		previewVector = 1;
	  };
	class Toolkit : Item
	{ 
		usedIn[] = {
				"srifle_GM6_F",
				"srifle_LRR_F",
				"m107_EPOCH",
				"MMG_01_hex_F",
				"LMG_Zafir_F",
				"m249_EPOCH",
				"M14_EPOCH",
				"srifle_DMR_01_F",
				"srifle_DMR_02_F",
				"srifle_DMR_03_F",
				"srifle_DMR_04_Tan_F",
				"srifle_DMR_05_blk_F",
				"m249_EPOCH",
				"Repair_EPOCH"
		};
		recipe[] = {{"Laserbatteries", 2}};    
			previewPosition[] = {0.8,1,0.25};
			previewScale = 0.75;
			previewVector = 2.8;
		displayName = "Toolkit";
		model = "\A3\weapons_f\items\Toolkit.p3d";
		descriptionShort = "Свойства: Починка транспорта до рабочего состояния."; 
	  };
	class Medikit : Item
	{ 
		usedIn[] = {"Defib_EPOCH"};       
		recipe[] = {{"Laserbatteries", 1}}; 
			previewPosition[] = {0.8,1,0.25};
			previewScale = 0.75;
			previewVector = 2.8;
		displayName = "Medikit";
		model = "\A3\weapons_f\items\Medikit.p3d";
		descriptionShort = "Свойства: Первая помощь соратнику."; 
	  }; // Weapons craft part + repair kit
	class B_Carryall_cbr : Item
	{
		recipe[] = {{"Medikit", 1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};		
		previewScale = 0.2;
		previewVector = 1;
	}; 	
	class B_Carryall_ocamo : Item
	{
		recipe[] = {{"Medikit", 1}, {"PaintCanYel",1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};		
		previewScale = 0.2;
		previewVector = 1;
	}; 	
	class B_Carryall_oucamo : Item
	{
		recipe[] = {{"Medikit", 1}, {"PaintCanTeal",1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};		
		previewScale = 0.2;
		previewVector = 1;
	}; 	
	class B_Carryall_mcamo : Item
	{
		recipe[] = {{"Medikit", 1}, {"PaintCanGrn",1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};		
		previewScale = 0.2;
		previewVector = 1;
	}; 	
	class B_Carryall_khk : Item
	{
		recipe[] = {{"Medikit", 1}, {"PaintCanBrn",1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};		
		previewScale = 0.2;
		previewVector = 1;
	}; 	
	class B_Carryall_oli : Item
	{
		recipe[] = {{"Medikit", 1}, {"PaintCanGrn",1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};		
		previewScale = 0.2;
		previewVector = 1;
	}; 
	class U_O_GhillieSuit : Item
	{
		recipe[] = {{"Medikit", 1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};			
		previewScale = 0.2;
		previewVector = 1;
	};		
	class U_ghillie1_uniform : Item
	{
		recipe[] = {{"Medikit", 1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};			
		previewScale = 0.2;
		previewVector = 1;
	};	
	class U_O_FullGhillie_ard : Item
	{
		recipe[] = {{"Medikit", 1}, {"ItemKiloHemp", 1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};			
		previewScale = 0.2;
		previewVector = 1;
	};	
	class U_O_FullGhillie_lsh : Item
	{
		recipe[] = {{"Medikit", 1}, {"ItemKiloHemp", 1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};			
		previewScale = 0.2;
		previewVector = 1;
	};	
	class U_O_FullGhillie_sard : Item
	{
		recipe[] = {{"Medikit", 1}, {"ItemKiloHemp", 1}};
		nearby[] = {{"Workbench", "", "workbench", {1,{"WorkBench_EPOCH"}}, 3, 1, 0, 1}};			
		previewScale = 0.2;
		previewVector = 1;
	};
	class SatchelCharge_Remote_Mag : Item
	{
		recipe[] = {{"CircuitParts",1}, {"EnergyPackLg",5}, {"jerrycan_epoch",1},{"ItemScraps",3}}; 
			previewPosition[] = {0.8,1,0.25};
			previewScale = 0.5;
			previewVector = 2.8;
			
		descriptionShort = "Свойства: Пластид с таймером и дистанционным управлением.";
	  };
	class APERSTripMine : Item
	{    
    recipe[] = {{"HandGrenade", 1}, {"ItemRope",1}}; 
		previewPosition[] = {0.8,1,0.25};
		previewScale = 0.15;
		previewVector = 2.8;
    descriptionShort = "Свойства: Ловушка со взрывчаткой.";     
  };
	class wolf_mask_epoch : Item
	{
		recipe[] = {{"Laserbatteries",1}};
		previewPosition[] = {0.8125,1,0.777};
		previewScale = 0.5;
	};
	class pkin_mask_epoch : Item
	{
		recipe[] = {{"Laserbatteries",1}};
		previewPosition[] = {0.8125,1,0.777};
		previewScale = 0.5;
	};	
	class clown_mask_epoch : Item
	{
		recipe[] = {{"Laserbatteries",1}};
		previewPosition[] = {0.8125,1,0.777};
		previewScale = 0.5;
	};
	class MeleeSword : Item
	{
    recipe[] = {{"Laserbatteries",1}};
    previewScale = 0.4; // Medium
    previewVector = 0.5;    	
  };    
	class FAK : Item
	{
    recipe[] = {{"Towelette", 2}};
    model = "\A3\Weapons_F\Items\FirstAidkit.p3d";
		previewPosition[] = {0.802419,1,0.433119};
		previewScale = 1.5;
    descriptionShort = "Свойства: Полное восстановление.";     
  };
	class MeleeMaul : Item
	{
		recipe[] = { { "ItemRock", 1 }, { "ItemStick", 2 }, { "ItemRope", 1 } };
		previewPosition[] = {0.798975,1,0.300388};
		previewScale = 0.3;
		previewVector = -1.8;
	};
	class CrudeHatchet : Item
	{
		recipe[] = { { "ItemRock", 1 }, { "ItemStick", 1 }, { "ItemRope", 1 } };
		previewPosition[] = {0.786139,1,0.328525};
		previewScale = 0.6;
	};
	class WoodClub : Item
	{
		recipe[] = { { "ItemStick", 2 } };
		previewPosition[] = {0.799633,1,0.237804};
		previewScale = 0.35;
		previewVector = 2.4;
	};
	class ItemCorrugated : Item
	{
		usedIn[] = {
          "KitShelf",
          "ItemCorrugatedLg",
          "bipod_01_F_blk",
          "bipod_01_F_mtp",
          "bipod_01_F_snd",
          "bipod_02_F_blk",
          "bipod_02_F_hex",
          "bipod_02_F_tan",
          "bipod_03_F_blk",
          "bipod_03_F_oli"
    };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { { "ItemScraps", 2 } };
		previewPosition[] = {0.791088,1,0.300004};
		previewScale = 0.2;
		previewVector = 1;
	};   	
	class ItemBarrelE  : Item
	{
		//usedIn[] = {};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = {{ "ItemCorrugatedLg", 2 }};
		previewPosition[] = {0.791088,1,0.300004};
		previewScale = 0.2;
		previewVector = 1;
	};    
	class VehicleRepairLg : Item
	{
		recipe[] = { "VehicleRepair", "ItemCorrugated" };
		previewPosition[] = {0.798742,1,0.317871};
		previewScale = 0.25;
		previewVector = 0.7;
    descriptionShort = "Свойства: Полная починка траспорта."; 
	};
	class SnakeMeat_EPOCH : Item
	{
		//usedIn[] = { "ItemCooler0" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "SnakeCarcass_EPOCH" };
		previewPosition[] = {0.803189,1,0.408752};
		previewScale = 6;
    descriptionShort = "Свойства: Сытость (+1200)."; 
	};
	class CookedRabbit_EPOCH : Item
	{
		//usedIn[] = { "ItemCooler1" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "RabbitCarcass_EPOCH" };
		previewPosition[] = {0.796141,1,0.340971};
		previewScale = 1.5;
    descriptionShort = "Свойства: Сытость (+1200)."; 
	};
	class CookedChicken_EPOCH : Item
	{
		//usedIn[] = { "ItemCooler2" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "ChickenCarcass_EPOCH" };
		previewPosition[] = {0.796141,1,0.340971};
		previewScale = 0.9;
    descriptionShort = "Свойства: Сытость (+2000)."; 
	};
	class CookedGoat_EPOCH : Item
	{
		//usedIn[] = { "ItemCooler3" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "GoatCarcass_EPOCH" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2;
    descriptionShort = "Свойства: Сытость (+3000)."; 
	};
	class CookedSheep_EPOCH : Item
	{
		//usedIn[] = { "ItemCooler4" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "SheepCarcass_EPOCH" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2.1;
    descriptionShort = "Свойства: Сытость (+3000)."; 
	};    
	class ItemTunaCooked : Item
	{
		usedIn[] = {};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "ItemTuna" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2;
	};
	class ItemSeaBassCooked : Item
	{
		usedIn[] = {};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "ItemSeaBass" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2;
	};
	class ItemTroutCooked : Item
	{
		usedIn[] = {};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "ItemTrout" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2;
	};
	class water_epoch : Item
	{
		usedIn[] = { "clean_water_epoch" };
		nearby[] = {{"Water source","","water",{0,{"barrelwater_f.p3d", "water_source_f.p3d", "pumpa.p3d", "misc_wellpump.p3d"}},3,1,0,0}};
		recipe[] = { "emptyjar_epoch" };
		previewPosition[] = {0.807346,1,0.43035};
		previewScale = 2.5;
    descriptionShort = "Свойства: Утоление жажды (+?)."; 
	};
	class clean_water_epoch : Item
	{
		//usedIn[] = { "EnergyPack" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { "water_epoch" };
		previewPosition[] = {0.807346,1,0.43035};
		previewScale = 2.5;
		displayName = "Clean Water";
    descriptionShort = "Свойства: Утоление жажды (+?)."; 
	};
	class SpacerI : Item
	{
		previewPosition[] = {0.796903,1,0.369781};
		previewScale = 0.01;
		descriptionFull = "";
		descriptionShort = "";
	};   
    /*                      Parts                         */   
	class CircuitParts : Part
	{
		usedIn[] = { 
                "EnergyPack", 
                "EnergyPackLg",
                "KitPlotPole",
                "optic_NVS",
                "optic_Nightstalker",
                "SatchelCharge_Remote_Mag"
        };
		previewPosition[] = {0.791044,1,0.256956};
		previewScale = 2;
		previewVector = 2.3;
	};
	class ItemDocument : Part
	{
    usedIn[] = {
			"srifle_GM6_F",
			"srifle_LRR_F",
			"m107_EPOCH",
			"MMG_01_hex_F",
			"LMG_Zafir_F",
			"m249_EPOCH",
			"M14_EPOCH",
			"srifle_DMR_01_F",
			"srifle_DMR_02_F",
			"srifle_DMR_03_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"m249_EPOCH",
            "optic_Arco",
            "optic_Hamr",
            "optic_Aco",
            "optic_ACO_grn",
            "optic_Holosight",
            "optic_SOS",
            "optic_MRCO",
            "optic_DMS",
            "optic_LRPS",
            "optic_NVS",
            "optic_Nightstalker",
            "optic_AMS",
            "optic_AMS_khk",
            "optic_AMS_snd",
            "optic_KHS_blk",
            "optic_KHS_hex",
            "optic_KHS_old",
            "optic_KHS_tan",
            "muzzle_snds_H",
            "muzzle_snds_L",
            "muzzle_snds_M",
            "muzzle_snds_B",
            "muzzle_snds_H_MG",
            "muzzle_snds_H_SW",
            "muzzle_snds_acp",
            "muzzle_snds_338_black",
            "muzzle_snds_338_green",
            "muzzle_snds_338_tan",
            "bipod_01_F_blk",
            "bipod_01_F_mtp",
            "bipod_01_F_snd",
            "bipod_02_F_blk",
            "bipod_02_F_hex",
            "bipod_02_F_tan",
            "bipod_03_F_blk",
            "bipod_03_F_oli",
            "Defib_EPOCH",
            "Repair_EPOCH"
        };
    displayName = "Schematic";
    recipe[] = {{"Laserbatteries", 1}}; 
    model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
		previewPosition[] = {0.802419,1,0.233119};
		previewScale = 1.0;
		previewVector = 1;
  };
	class acc_pointer_IR : Part
	{
    usedIn[] = {"optic_Nightstalker"};
		previewScale = 0.45;
		previewVector = -3.9;
    descriptionShort = "Свойства: Инфракрасное излучение (лазер).";     
  };
	class EnergyPack : Part
	{
		usedIn[] = { "EnergyPackLg" };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { { "CircuitParts", 1 }, { "ItemQuartz", 1 } };
    descriptionShort = "Свойства: Энергия (+100)."; 
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};
	class EnergyPackLg : Part
	{
		usedIn[] = {"optic_NVS",	"optic_Nightstalker", "SatchelCharge_Remote_Mag"};
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { { "EnergyPack", 3 }, { "CircuitParts", 1 } };
		descriptionShort = "Свойства: Энергия (+1000)."; 
		previewPosition[] = {0.8,1,0.29};
		previewScale = 1.75;
		previewVector = 2.8;
	};
	class PartOre : Part
	{
		usedIn[] = { "ItemScraps" };
		previewPosition[] = {0.799961,1,0.27};
		previewScale = 1.25;
	};
	class HandGrenade : Part
	{
    usedIn[] = { "APERSTripMine" };
		previewPosition[] = {0.799961,1,0.27};
		previewScale = 1.25;    
  };    
	class Pelt_EPOCH : Part
	{
		usedIn[] = { "KitTiPi" };
		previewPosition[] = {0.793741,1,0.274824};
		previewScale = 0.7;
		previewVector = 2.2;
	};
	class ItemRock : Part
	{
		usedIn[] = { "KitFirePlace" , "MeleeMaul", "CrudeHatchet" };
		previewPosition[] = {0.796998,1,0.35};
		previewScale = 1.3;
	};
	class ItemStick : Part
	{
		usedIn[] = { "WoodClub","MeleeMaul", "CrudeHatchet", "KitFirePlace" };
		recipe[] = { { "WoodLog_EPOCH", 1 } };
		previewPosition[] = {0.8,1,0.25};
		previewScale = 0.4;
		previewVector = 1;
	};
	class ItemPipe : Part
	{
		//usedIn[] = {""};
		recipe[] = { { "ItemScraps", 2 } };
		previewPosition[] = {0.8,1,0.25};
		previewScale = 0.4;
		previewVector = 1;
	};
	class ItemKiloHemp : Part
	{
		usedIn[] = { "ItemRope" };
		previewPosition[] = {0.796267,1,0.322762};
		previewScale = 0.9;
		previewVector = 1.4;
	};    
	class ItemRope : Part
	{
		usedIn[] = { "WoodClub", "MeleeMaul", "CrudeHatchet", "APERSTripMine" };
		recipe[] = { { "ItemKiloHemp", 1 } };
		previewPosition[] = {0.8,1,0.35};
		previewScale = 4;
	};
	class WoodLog_EPOCH : Part
	{
		usedIn[] = { "PartPlankPack", "ItemStick", "ItemPlywoodPack" };
		previewPosition[] = {0.800064,1,0.25};
		previewScale = 0.3;
	};
	class ItemPlywoodPack : Part
	{
		usedIn[] = {};
		recipe[] = {{"WoodLog_EPOCH",3}};
		previewPosition[] = {0.797837,1,0.288258};
		previewScale = 0.2;
		previewVector = 1;
		craftTime = 2;
	};
	class MortarBucket : Part
	{
		usedIn[] = {"KitFoundation","KitCinderWall", "KitHesco3"};
		previewPosition[] = {0.799442,1,0.426761};
		previewScale = 0.6;
		previewVector = 0;
	};
	class CinderBlocks : Part
	{
		usedIn[] = { "KitCinderWall" };
		previewPosition[] = {0.801866,1,0.35};
		previewScale = 0.2;
	};
	class ItemScraps : Part
	{
		usedIn[] = {
			   "5Rnd_127x108_Mag",
			   "7Rnd_408_Mag",
			   "150Rnd_93x64_Mag",
			   "150Rnd_762x54_Box",
			   "200Rnd_556x45_M249",
			   "20Rnd_762x51_Mag",
			   "10Rnd_762x54_Mag",
			   "10Rnd_338_Mag",
			   "10Rnd_127x54_Mag",
			   "10Rnd_93x64_DMR_05_Mag",
                "ItemCorrugated",
                "KitMetalTrap",
                "optic_Arco",
                "optic_Hamr",
                "optic_Aco",
                "optic_ACO_grn",
                "optic_Holosight",
                "optic_SOS",
                "optic_MRCO",
                "optic_DMS",
                "optic_LRPS",
                "optic_NVS",
                "optic_Nightstalker",
                "optic_AMS",
                "optic_AMS_khk",
                "optic_AMS_snd",
                "optic_KHS_blk",
                "optic_KHS_hex",
                "optic_KHS_old",
                "optic_KHS_tan",
                "muzzle_snds_338_black",
                "muzzle_snds_338_green",
                "muzzle_snds_338_tan",
                "muzzle_snds_B",
                "muzzle_snds_H",
                "muzzle_snds_H_MG",
                "muzzle_snds_H_SW",
                "muzzle_snds_L",
                "muzzle_snds_M",
                "muzzle_snds_acp",
                "SatchelCharge_Remote_Mag"
        };
		nearby[] = {{"Fire", "", "fire", {1,{"ALL"}}, 3, 1, 1, 0}};
		recipe[] = { { "PartOre", 2 } };
		previewPosition[] = {0.797144,1,0.309158};
		previewScale = 1;
		previewVector = 2.8;
	};	
 	class ItemMixOil : Part
	{
		usedIn[] = { "CSGAS" };
		previewPosition[] = {0.802419,1,0.433119};
		previewScale = 1.5;
	}; 
	class jerrycan_epoch : Part
	{
		recipe[] =  {{"ItemScraps", 2}};
		usedIn[] = { "CSGAS", "SatchelCharge_Remote_Mag"};
		previewPosition[] = {0.802443,1,0.254301};
		previewScale = 0.6;
		previewVector = 4.9;
	};
	class VehicleRepair : Part
	{
		usedIn[] = { "VehicleRepairLg" };
		previewPosition[] = {0.787659,1,0.30098};
		previewScale = 0.45;
		previewVector = 1.5;
    descriptionShort = "Свойства: Починка самого поврежденного элемента техники."; 
	};
	class SnakeCarcass_EPOCH : Part
	{
		usedIn[] = { "SnakeMeat_EPOCH" };
		previewPosition[] = {0.808621,1,0.238853};
		previewScale = 0.55;
		previewVector = 1.8;
    descriptionShort = "Свойства: Сытость (+300)."; 
	};
	class RabbitCarcass_EPOCH : Part
	{
		usedIn[] = { "CookedRabbit_EPOCH" };
		previewPosition[] = {0.796141,1,0.340971};
		previewScale = 1.5;
    descriptionShort = "Свойства: Сытость (+300)."; 
  };
	class ChickenCarcass_EPOCH : Part
	{
		usedIn[] = { "CookedChicken_EPOCH" };
		previewPosition[] = {0.796141,1,0.340971};
		previewScale = 0.9;
    descriptionShort = "Свойства: Сытость (+500)."; 
	};
	class ItemTuna : Part
	{
		usedIn[] = { "ItemTunaCooked" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
    descriptionShort = "Свойства: Сытость (+2500)."; 
	};
	class ItemSeaBass : Part
	{
		usedIn[] = { "ItemSeaBassCooked" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2.1;
    descriptionShort = "Свойства: Сытость (+500)."; 
	};
	class ItemTrout : Part
	{
		usedIn[] = { "ItemTroutCooked" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2.1;
    descriptionShort = "Свойства: Сытость (+300).";  
	};
 	class GoatCarcass_EPOCH : Part
	{
		usedIn[] = { "CookedGoat_EPOCH" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2.1;
    descriptionShort = "Свойства: Сытость (+500).";   
	};
	class SheepCarcass_EPOCH : Part
	{
		usedIn[] = { "CookedSheep_EPOCH" };
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.4;
		previewVector = 2.1;
    descriptionShort = "Свойства: Сытость (+500).";          
	};
	class emptyjar_epoch : Part
	{
		usedIn[] = { "water_epoch" };
		previewPosition[] = {0.807346,1,0.43035};     
	};
	class ItemSolar : Part
	{
		usedIn[] = { "KitSolarGen" };
		previewPosition[] = {0.802374,1,0.26};
		previewScale = 0.19;
		previewVector = 3.3;

	};
	class ItemCables : Part
	{
		usedIn[] = { "KitSolarGen" };
		previewPosition[] = {0.802374,1,0.26};
		previewScale = 0.3;
		previewVector = 2.8;
	};
	class ItemBattery : Part
	{
		usedIn[] = { "KitSolarGen" };
		previewPosition[] = {0.802374,1,0.276733};
		previewScale = 0.4;
	};
	class Towelette : Part
	{
   	usedIn[] = {"FAK"};
    model = "\x\addons\a3_epoch_assets\models\moist.p3d";
	previewPosition[] = {0.802419,1,0.433119};
	previewScale = 1.5;
    descriptionShort = "Свойства: Снятие грязи (-25).";      
    };
	class PaintCanClear : Part
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};
	class PaintCanBlk : Part
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};
	class PaintCanBlu : Part 
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanBrn : Part // + Black = Hex
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanGrn : Part // + Black = Camo 
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanOra : Part // + Yellow = Desert
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanPur : Part
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanRed : Part
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanTeal : Part
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
	class PaintCanYel : Part // + Green = Olive
	{
		previewPosition[] = {0.796141,1,0.27};
		previewScale = 0.2;
		previewVector = 2.1;
	};	
};
