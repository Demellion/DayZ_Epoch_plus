// Copyright Epoch Team
// Modified by Demellion Dismal
class CfgPricing
{
// Default taxes definitions: 0.5 (double), 1.5 (trio), 2.5 (quadro)

/*                        Not used                           */
	
	/*
	// Radios
	class EpochRadio0 {price = 2;};
	class EpochRadio1 {price = 4;};
	class EpochRadio2 {price = 6;};
	class EpochRadio3 {price = 8;};
	class EpochRadio4 {price = 10;};
	class EpochRadio5 {price = 12;};
	class EpochRadio6 {price = 14;};
	class EpochRadio7 {price = 16;};
	class EpochRadio8 {price = 18;};
	class EpochRadio9 {price = 20;};
	class ItemSilverBar {price = 50;};
	class PartOreSilver {price = 40;};
	class ItemDocumentMission {price = 1;};
	class optic_tws {price = 5;}; // cheats
	class optic_tws_mg {price = 5;}; // cheats
	class B_UavTerminal {price = 10;};
	class O_UavTerminal {price = 10;};    
	class ebike_epoch {price = 250;}; // cheat shit
	*/
/*                         Currency                          */
	//class Laserbatteries {price = 2000}; not sellable
	class PartOreGold {price = 75;};
	class PartOre {price = 25;}; 
	class ItemGoldBar {price = 100;};
	class ItemGoldBar10oz {price = 1000;};
	class ItemQuartz {price = 50;};
	class ItemGarnet {price = 100;};
	class ItemCitrine {price = 500;};
	class ItemAmethyst {price = 1000;};
	class ItemTopaz {price = 2000;};
	class ItemSapphire {price = 4000;};
	class ItemOnyx {price = 8000;};
	class ItemEmerald {price = 12000;};
	class ItemRuby {price = 20000;};
	class ItemJade {price = 24000;};
		
/*                        Weapons                          */
    // Epoch
	class ChainSaw {price = 500; tax= 0.5;};
	class speargun_epoch { price = 75; };
	class MeleeSword { price = 1000; tax = 5.5;};
	class Hatchet {price = 25;};
	class MultiGun {price = 100;};
	class MeleeSledge {price = 50;};
	class MeleeRod { price = 100;};
	class CrudeHatchet { price = 5;};
	class MeleeMaul { price = 10;};
	class WoodClub { price = 5;};
    // Pistols
	class hgun_ACPC2_F {price = 50;};
	class hgun_Rook40_F {price = 50;};
	class hgun_P07_F {price = 50;};
	class hgun_Pistol_heavy_01_F {price = 70;};
	class hgun_Pistol_heavy_02_F {price = 100;};
	class ruger_pistol_epoch {price = 40;};
	class 1911_pistol_epoch {price = 60;};
	class hgun_Pistol_Signal_F {price = 40;};
    //Trash
	class sr25_epoch { price = 200; tax = 0.5;};
	class l85a2_epoch { price = 250;  tax = 0.5; }; 
	class l85a2_pink_epoch { price = 50; tax = 0.5;};
	class l85a2_ugl_epoch { price = 350; tax = 0.5;};
	class arifle_Katiba_F {price = 150; tax = 0.5;};
	class arifle_Katiba_C_F {price = 150; tax = 0.5;};
	class arifle_Katiba_GL_F {price = 275; tax = 0.5;};
	class arifle_SDAR_F {price = 150; tax = 0.5;};
	class arifle_TRG21_F {price = 150; tax = 0.5;};
	class arifle_TRG20_F {price = 150; tax = 0.5;};
	class arifle_TRG21_GL_F {price = 175; tax = 0.5;};
	class SMG_01_F {price = 135; tax = 0.5;};
	class SMG_02_F {price = 135; tax = 0.5;};
	class hgun_PDW2000_F {price = 75; tax = 0.5;};
	class Rollins_F {price = 100; tax = 0.5;};
	//Medium
	class arifle_MXC_F {price = 450;  tax = 0.5;};
	class arifle_MX_F {price = 450; tax = 0.5;};
	class arifle_MX_GL_F {price = 575; tax = 0.5;};
	class arifle_MXM_F {price = 450; tax = 0.5;};
	class arifle_MXM_Black_F {price = 450; tax = 0.5;};
	class arifle_MX_GL_Black_F {price = 575; tax = 0.5;};
	class arifle_MX_Black_F {price = 450; tax = 0.5;};
	class arifle_MXC_Black_F {price = 450; tax = 0.5;};
	class arifle_Mk20_F {price = 450; tax = 0.5;};
	class arifle_Mk20C_F {price = 450; tax = 0.5;};
	class arifle_Mk20_GL_F {price = 575; tax = 0.5;};
	class arifle_Mk20_plain_F {price = 450; tax = 0.5;};
	class arifle_Mk20C_plain_F {price = 450; tax = 0.5;};
	class arifle_Mk20_GL_plain_F {price = 75; tax = 0.5;};
	class m4a3_EPOCH {price = 200; tax = 0.5;};
	class AKM_EPOCH {price = 200; tax = 0.5;};
	class m16_EPOCH {price = 300; tax = 0.5;};
	class m16Red_EPOCH {price = 325; tax = 0.5;};
	class M14_EPOCH {price = 525; tax = 0.5;};
	class M14Grn_EPOCH {price = 550; tax = 0.5;};
	
	//High
	class srifle_DMR_01_F {price = 750;  tax = 2.5;}; // Rahim 7.62 [Black]
	class srifle_EBR_F {price = 750; tax = 2.5;}; //  MK18 ABR 7.62 [Black]
	class srifle_GM6_F {price = 1500; tax = 2.5;}; // GM6 Lynx 12.7 [Black]
	class srifle_LRR_F {price = 1000; tax =2.5;}; // LRR M320 .408 [Black]
	class MMG_01_hex_F { price = 850;  tax = 2.5;}; // Navid 9.3 [Camo]
	class MMG_01_tan_F { price = 850;  tax = 2.5; }; // Navid 9.3 [Desert]
	class MMG_02_camo_F { price = 750;  tax = 2.5; }; // SPMG .338 [Camo]
	class MMG_02_black_F { price = 750;  tax = 2.5; }; // SPMG .338 [Black]
	class MMG_02_sand_F { price = 750;  tax = 2.5; }; // SPMG .338 [Desert]
	class LMG_Mk200_F {price = 850;  tax = 2.5;}; // Mk200 6.5 [Black]
	class arifle_MX_SW_F {price = 750;  tax = 2.5;}; // MX SW F 6.5  [Black]
	class LMG_Zafir_F {price = 750;  tax = 2.5;}; // Zafir 7.62
	class arifle_MX_SW_Black_F {price = 750;  tax = 2.5;}; // MX SW 6.5
	class m249_EPOCH {price = 800;  tax = 2.5;}; // [Black]
	class m249Tan_EPOCH {price = 800;  tax = 2.5;}; // [Desert]
	class m107Tan_EPOCH {price = 1250;  tax = 2.5;}; // [Desert]
	class m107_EPOCH {price = 1250;  tax = 2.5;}; // [Black]
	
	// Marksman (DLC Weapons) (02 - FNFAL, 05 - ASVAL)
	class srifle_DMR_02_F { price = 750; tax= 0.5;}; // Mar-10 .338 [Black]
	class srifle_DMR_02_camo_F { price = 750; tax= 0.75; }; // Mar-10 .338 [Green Camo]
	class srifle_DMR_02_sniper_F { price = 750; tax= 0.5; }; // Mar-10 .338 [Desert Camo]
	class srifle_DMR_03_F { price = 650; tax= 0.5; }; // Mk-1 EMR 7.62 [Black]
	class srifle_DMR_03_khaki_F { price = 650; tax= 0.5; }; // Mk-1 EMR 7.62 [Khaki]
	class srifle_DMR_03_tan_F { price = 650; tax= 0.5; }; // Mk-1 EMR 7.62 [Desert Camo]
	class srifle_DMR_03_multicam_F { price = 650; tax= 0.75; }; // Mk-1 EMR 7.62 [Multicamo]
	class srifle_DMR_03_woodland_F { price = 650; tax= 0.5; }; // Mk-1 EMR 7.62 [Forest Camo]
	class srifle_DMR_03_spotter_F { price = 650; tax= 0.5; };// Mk-1 EMR 7.62 [NULL]
	class srifle_DMR_04_Tan_F { price = 850; tax= 1.0; }; // ASP Kir-1 12.7 [Desert Camo]
	class srifle_DMR_05_blk_F  { price = 850; tax= 1.0; }; // ASP Kir-1 12.7 [Black]
	class srifle_DMR_05_hex_F {  price = 850; tax= 1.0;  }; // ASP Kir-1 12.7 [Hex]
	class srifle_DMR_05_tan_f {  price = 850; tax= 1.0;  }; // ASP Kir-1 12.7 [Desert Camo 2]
	class srifle_DMR_06_camo_F { price = 750; tax= 0.5; }; // Mk-14 Cyrus 7.62 [Camo]
	class srifle_DMR_06_olive_F { price = 750; tax= 0.5; }; // Mk-14 Cyrus 7.62 [Olive]
	
/*                          Ammo                            */
    // Epoch
	class spear_magazine { price = 5; tax = 1.0; };
    // Default
	class 20Rnd_762x51_Mag {price = 40; tax = 0.5;};
	class 5Rnd_127x108_Mag {price = 30; tax = 0.5;};
	class 5Rnd_127x108_APDS_Mag {price = 60; tax = 0.5;};
	class 7Rnd_408_Mag {price = 40; tax = 0.5;};
	class 10Rnd_762x54_Mag {price = 20; tax = 0.5;};
	class 10Rnd_338_Mag { price = 20; tax = 0.5; };
	class 130Rnd_338_Mag{ price = 20; tax = 0.5; };
	class 10Rnd_93x64_DMR_05_Mag { price = 20; tax = 0.5; };
	class 10Rnd_127x54_Mag { price = 20; tax = 0.5; };
	class 30Rnd_65x39_caseless_green {price = 30; tax = 0.5;};
	class 30Rnd_65x39_caseless_green_mag_Tracer {price = 40; tax = 0.5;};
	class 30Rnd_65x39_caseless_mag {price = 30; tax = 0.5;};
	class 30Rnd_65x39_caseless_mag_Tracer {price = 40; tax = 0.5;};
	class 20Rnd_556x45_UW_mag {price = 30; tax = 0.5;};
	class 30Rnd_556x45_Stanag {price = 30; tax = 0.5;};
	class 30Rnd_556x45_Stanag_Tracer_Red {price = 40; tax = 0.5;};
	class 30Rnd_556x45_Stanag_Tracer_Green {price = 40; tax = 0.5;};
	class 30Rnd_556x45_Stanag_Tracer_Yellow {price = 40; tax = 0.5;};
	class 30Rnd_45ACP_Mag_SMG_01 {price = 20; tax = 0.5;};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green {price = 30; tax = 0.5;};
	class 5Rnd_rollins_mag {price = 20; tax = 0.5;};
	class 30rnd_556_magazine{ price = 40; tax = 0.5; };
	class 20rnd_762_magazine{ price = 40; tax = 0.5; };
	class 30Rnd_762x39_Mag {price = 40; tax = 0.5;};
	class 200Rnd_556x45_M249 {price = 60; tax = 0.5;};
	class 200Rnd_65x39_cased_Box {price = 50; tax = 0.5;};
	class 100Rnd_65x39_caseless_mag {price = 30; tax = 0.5;};
	class 200Rnd_65x39_cased_Box_Tracer {price = 50; tax = 0.5;};
	class 100Rnd_65x39_caseless_mag_Tracer {price = 40; tax = 0.5;};
	class 150Rnd_762x51_Box {price = 40; tax = 0.5;};
	class 150Rnd_762x51_Box_Tracer {price = 50; tax = 0.5;};
	class 150Rnd_762x54_Box{ price = 40; tax = 0.5; };
	class 150Rnd_762x54_Box_Tracer{ price = 50; tax = 0.5; };
	class 150Rnd_93x64_Mag{ price = 60; tax = 0.5; };
	class 16Rnd_9x21_Mag {price = 20; tax = 0.5;};
	class 30Rnd_9x21_Mag {price = 30; tax = 0.5;};
	class 9Rnd_45ACP_Mag {price = 10; tax = 0.5;};
	class 11Rnd_45ACP_Mag {price = 10; tax = 0.5;};
	class 6Rnd_45ACP_Cylinder {price = 10; tax = 0.5;};
	class 10rnd_22X44_magazine {price = 20; tax = 0.5;};
	class 9rnd_45X88_magazine {price = 20; tax = 0.5;};
	class 6Rnd_GreenSignal_F {price = 10; tax = 0.5;};
	class 6Rnd_RedSignal_F {price = 10; tax = 0.5;};
    // Flares
	class 1Rnd_Smoke_Grenade_shell {price = 25;};
	class 1Rnd_SmokeRed_Grenade_shell {price = 25;};
	class 1Rnd_SmokeGreen_Grenade_shell {price = 25;};
	class 1Rnd_SmokeYellow_Grenade_shell {price = 25;};
	class 1Rnd_SmokePurple_Grenade_shell {price = 25;};
	class 1Rnd_SmokeBlue_Grenade_shell {price = 25;};
	class 1Rnd_SmokeOrange_Grenade_shell {price = 25;};
	class 3Rnd_HE_Grenade_shell {price = 150;};
	class 3Rnd_UGL_FlareWhite_F {price = 25;};
	class 3Rnd_UGL_FlareGreen_F {price = 25;};
	class 3Rnd_UGL_FlareRed_F {price = 25;};
	class 3Rnd_UGL_FlareYellow_F {price = 25;};
	class 3Rnd_UGL_FlareCIR_F {price = 25;};
	class 3Rnd_Smoke_Grenade_shell {price = 25;};
	class 3Rnd_SmokeRed_Grenade_shell {price = 25;};
	class 3Rnd_SmokeGreen_Grenade_shell {price = 25;};
	class 3Rnd_SmokeYellow_Grenade_shell {price = 25;};
	class 3Rnd_SmokePurple_Grenade_shell {price = 25;};
	class 3Rnd_SmokeBlue_Grenade_shell {price = 25;};
	class 3Rnd_SmokeOrange_Grenade_shell {price = 25;};
	class UGL_FlareWhite_F {price = 25;};
	class UGL_FlareGreen_F {price = 25;};
	class UGL_FlareRed_F {price = 25;};
	class UGL_FlareYellow_F {price = 25;};
	class UGL_FlareCIR_F {price = 25;};
	class SmokeShell {price = 20;};
	class SmokeShellYellow {price = 20;};
	class SmokeShellGreen {price = 20;};
	class SmokeShellRed {price = 20;};
	class SmokeShellPurple {price = 20;};
	class SmokeShellOrange {price = 20;};
	class SmokeShellBlue {price = 20;};
	class Chemlight_green {price = 1;};
	class Chemlight_red {price = 1;};
	class Chemlight_yellow {price = 1;};
	class Chemlight_blue {price = 1;};
    // Explosives
	class HandGrenade_Stone {price = 75;};
	class HandGrenade {price = 75;};
	class MiniGrenade {price = 75;};
	class DemoCharge_Remote_Mag {price = 400; tax = 1.0;};
	class SatchelCharge_Remote_Mag {price = 750; tax = 1.0;};
	class ATMine_Range_Mag {price = 500; tax = 1.0;};
	class ClaymoreDirectionalMine_Remote_Mag {price = 500; tax = 1.0;};
	class APERSMine_Range_Mag {price = 300; tax = 1.0;};
	class APERSBoundingMine_Range_Mag {price = 500; tax = 1.0;};
	class SLAMDirectionalMine_Wire_Mag {price = 400; tax = 1.0;};
	class APERSTripMine_Wire_Mag {price = 300; tax = 1.0;};
	
/*                        Equipment                        */

	class ItemCompass {price = 25;};
	class ItemGPS {price = 50;};
	class ItemWatch {price = 20;};
	class Binocular {price = 25;};
	class NVG_EPOCH {price = 150; tax = 2.5;};
    class Rangefinder {price = 500;};  
	
/*                         Building                           */
    // Vaults
	class ItemLockbox {price = 1000; tax= 2.5;};
	class ItemSafe {price = 2000; tax= 2.5;};
	class KitTiPi {price = 100;};
	class KitShelf {price = 500;};
	// Building resources
	class PartPlankPack {price = 2;};
	class CinderBlocks {price = 200;};
	class MortarBucket {price = 150;};
	class ItemScraps {price = 50;}; // <- PartOre (x2)
	class ItemCorrugated {price = 100;}; // <- ItemScraps (x2) 
	class ItemCorrugatedLg {price = 300;}; // <- ItemCorrugated (x3)
	class KitSolarGen { price = 2000; };
	class KitCinderWall {price = 1000;}; // <- 4xBlocks, 2xBukkit    
	// Building parts
	//class KitStudWall {price = 10;};
	//class KitWoodFloor {price = 10;};
	//class KitWoodStairs {price = 10;};
	//class KitWoodTower {price = 10;};
	//class KitWoodRamp {price = 14;};
	//class KitSpikeTrap {price = 25;};
	//class KitMetalTrap {price = 25;};
	//class KitTankTrap {price = 325;}; // <- ItemCorrugatedLg (x1)
	//class KitHesco3 { price = 25; };
	//class KitWoodLadder { price = 10; };
	//class KitFirePlace {price = 4;};
	//class KitWorkbench { price = 10; };
	//class KitWoodFoundation { price = 20; };
	//class KitFoundation {price = 90;};
	//class KitPlotPole {price = 300;};

	
/*                        Materials                          */
    class acc_pointer_IR {price = 250; tax = 2.5;};
	class EnergyPack {price = 150; tax = 0.5;};
	class EnergyPackLg {price = 450; tax = 0.5;};
	class CircuitParts {price = 100; tax = 0.5;};
	class ItemKiloHemp {price = 100;};
	class VehicleRepair {price = 65; tax = 0.5;};
	class VehicleRepairLg {price = 125; tax = 0.5;};
	class ItemDocument {price = 150; tax = 2.5;};
	class ItemMixOil {price = 50; tax = 0.5;};
	class emptyjar_epoch {price = 25; tax = 0.5;};
	class jerrycan_epoch { price = 10; tax = 0.5;};
	class lighter_epoch { price = 50; tax = 0.5;};
	class WoodLog_EPOCH { price = 1; tax = 0.5;};
	class ItemRope { price = 5; tax = 0.5;};
	class ItemStick { price = 1; tax = 0.5;};
	class ItemRock { price = 1; tax = 0.5;};
	class ItemSolar { price = 500; };
	class ItemCables { price = 50; };
	class ItemBattery { price = 250;};

/*                          Misc                              */
	// Trash
	class ItemCoolerE {price = 10;};	
	class JackKit {price = 25;}; // Lifter
	class Plunger { price = 15;}; // WTF
	class honey_epoch {price = 5;};
	class Pelt_EPOCH {price = 75;}; // Leather
	class Venom_EPOCH {price = 50;};
	// Paint
	class PaintCanClear {price = 10;};
	class PaintCanBlk {price = 10;};
	class PaintCanBlu {price = 10;};
	class PaintCanBrn {price = 10;};
	class PaintCanGrn {price = 10;};
	class PaintCanOra {price = 10;};
	class PaintCanPur {price = 10;};
	class PaintCanRed {price = 10;};
	class PaintCanTeal {price = 10;};
	class PaintCanYel {price = 10;};
	// Medical
	class FAK {price = 100;};
	class Towelette {price = 25;};
	class HeatPack {price = 50;};
	class ColdPack {price = 50;};
	// Food
	class FoodBioMeat {price = 10; tax= 0.5;};
	class FoodMeeps {price = 250; tax= 0.5;};
	class FoodSnooter {price = 50; tax= 0.5;};
	class sardines_epoch {price = 25; tax= 0.5;};
	class meatballs_epoch {price = 25; tax= 0.5;};
	class scam_epoch {price = 10; tax= 0.5;};
	class TacticalBacon {price = 50; tax= 0.5;};
	class sweetcorn_epoch {price = 20; tax= 0.5;};
	class CookedSheep_EPOCH {price = 125; tax= 0.5;};
	class CookedGoat_EPOCH {price = 100; tax= 0.5;};
	class SnakeMeat_EPOCH {price = 200; tax= 0.5;};
	class CookedRabbit_EPOCH {price = 125; tax= 0.5;};
	class CookedChicken_EPOCH {price = 100; tax= 0.5;};
	class ItemTrout {price = 100; tax= 0.5;};
	class ItemSeaBass {price = 125; tax= 0.5;};
	class ItemTuna {price = 150; tax= 0.5;};
	// Drinks
	class FoodWalkNSons {price = 50; tax= 0.5;};
	class ItemSodaOrangeSherbet {price = 50;};
	class ItemSodaPurple {price = 25;};
	class ItemSodaMocha {price = 50; tax= 0.5;};
	class ItemSodaBurst {price = 40;};
	class ItemSodaRbull {price = 50;};
	class WhiskeyNoodle {price = 75;};
	
/*                       Backpacks                       */
	// Default
    //BAGS 1 
	class smallbackpack_red_epoch {price = 25; tax = 0.5;};
	class smallbackpack_green_epoch {price = 25; tax = 0.5;};
	class smallbackpack_teal_epoch {price = 25; tax = 0.5;};
	class smallbackpack_pink_epoch {price = 25; tax = 0.5;};
	//BAGS 2 
	class B_AssaultPack_cbr {price = 50; tax = 0.5;};
	class B_AssaultPack_dgtl {price = 50; tax = 0.5;};
	class B_AssaultPack_khk {price = 50; tax = 0.5;};
	class B_AssaultPack_mcamo {price = 50; tax = 0.5;};
	class B_AssaultPack_ocamo {price = 50; tax = 0.5;};
	class B_AssaultPack_rgr {price = 50; tax = 0.5;};
	class B_AssaultPack_sgg {price = 50; tax = 0.5;};	
	//BAGS 3 //
	class B_Kitbag_cbr {price = 100; tax = 0.5;};
	class B_Kitbag_mcamo {price = 100; tax = 0.5;};
	class B_Kitbag_rgr {price = 100; tax = 0.5;};
	class B_Kitbag_sgg {price = 100; tax = 0.5;};
	//BAGS 4 //
	class B_TacticalPack_blk {price = 200; tax = 0.5;};
	class B_TacticalPack_mcamo {price = 200; tax = 0.5;};
	class B_TacticalPack_ocamo {price = 200; tax = 0.5;};
	class B_TacticalPack_oli {price = 200; tax = 0.5;};
	class B_TacticalPack_rgr {price = 200; tax = 0.5;};
	//BAGS 5
	class B_FieldPack_blk {price = 80; tax = 0.5;};
	class B_FieldPack_cbr {price = 80; tax = 0.5;};
	class B_FieldPack_khk {price = 80; tax = 0.5;};
	class B_FieldPack_ocamo {price = 80; tax = 0.5;};
	class B_FieldPack_oli {price = 80; tax = 0.5;};
	class B_FieldPack_oucamo {price = 80; tax = 0.5;};
	//BAGS 6 //
    class B_Carryall_cbr {price = 300; tax = 0.5;};
	class B_Carryall_khk {price = 300; tax = 0.5;};
	class B_Carryall_mcamo {price = 300; tax = 0.5;};
	class B_Carryall_ocamo {price = 300; tax = 0.5;};
	class B_Carryall_oli {price = 300; tax = 0.5;};
	class B_Carryall_oucamo {price = 300; tax = 0.5;};

/*                     Weapon Mods                    */
    // Epoch
	class Heal_EPOCH {price = 300;};
	class Defib_EPOCH {price = 500;};
	class Repair_EPOCH {price = 200;};
	// Optics
	class optic_Arco {price = 150; tax = 2.5;}; // 2x HOLO Collimator (Green Dot)
	class optic_Hamr {price = 150; tax = 2.5;}; // 2x HOLO Collimator (Red Dot)
	class optic_Aco {price = 200; tax = 2.5;}; // 2x Advanced HOLO Collimator (Rifle Red Graph)
	class optic_ACO_grn {price = 200; tax = 2.5;}; // 2x Advanced HOLO Collimator (Rfile Green Graph)
	class optic_Aco_smg {price = 100; tax = 2.5;}; // 2x Advanced HOLO Collimator (SMG Red Graph)
	class optic_ACO_grn_smg {price = 100; tax = 2.5;}; // 2x Advanced HOLO Collimator (SMG Green Graph)
	class optic_Holosight {price = 200; tax = 2.5;}; // 2x Advanced HOLO Collimator (Rifle Red Graph)
	class optic_Holosight_smg {price = 100; tax = 2.5;}; // 2x Advanced HOLO Collimator (SMG Red Graph)
	class optic_SOS {price = 500; tax = 2.5;}; //10x-85x Sniper Optics (Mildots Analogue)
	class optic_MRCO {price = 300; tax = 2.5;}; // 2x Ballistic Sniper Optics (200-800 Range Dots)
	class optic_DMS {price = 400; tax = 2.5;}; // 4x Ballistic Marksman Optics (Optical Rangefinder)
	class optic_Yorris {price = 25; tax = 2.5;}; // 2x Zubr Optics ()
	class optic_MRD {price = 25; tax = 2.5;};  // 2x 4-Five Optics ()
	class optic_LRPS {price = 500; tax = 2.5;}; // 6x-25x Long Range Precision Scope (Mildots)
	class optic_NVS {price = 700; tax = 2.5;}; // 5x NVS Scope 
	class optic_Nightstalker {price = 1000; tax = 2.5;}; // 4x-10x Nightvision Mode Optics (Simple Sight)
	// DLC Optics
	class optic_AMS { price = 250; tax = 2.5; } // 3x-10x Advanced Marksman Scope (Wildcard Ballistics Marks) [Black]
	class optic_AMS_khk { price = 250; tax = 2.5; }; // 3x-10x Advanced Marksman Scope (Wildcard Ballistics Marks) [Khaki]
	class optic_AMS_snd { price = 250; tax = 2.5; }; // 3x-10x Advanced Marksman Scope (Wildcard Ballistics Marks) [Desert]
	class optic_KHS_blk { price = 400; tax = 2.5; }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Black]
	class optic_KHS_hex { price = 400; tax = 2.5; }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Hex]
	class optic_KHS_old { price = 400; tax = 2.5; }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Used]
	class optic_KHS_tan { price = 400; tax = 2.5; }; // 5x-10x Kahlia 3-dot pistol-style irons (300-1000) [Desert]
	// DLC bipods
	class bipod_01_F_snd { price = 100; tax = 2.5; }; // Bipod [Desert]
	class bipod_01_F_blk { price = 100; tax = 2.5; }; // Bipod [Black]
	class bipod_01_F_mtp { price = 100; tax = 2.5; }; // // Bipod []
	class bipod_02_F_blk { price = 100; tax = 2.5; }; // Bipod [Black]
	class bipod_02_F_tan { price = 100; tax = 2.5; }; // Bipod [Desert]
	class bipod_02_F_hex { price = 100; tax = 2.5; }; // Bipod [Hex]
	class bipod_03_F_blk { price = 100; tax = 2.5; }; // Bipod [Black]
	class bipod_03_F_oli { price = 100; tax = 2.5; }; // Bipod [Olive]
    // Silencers
	class muzzle_snds_H {price = 100;};
	class muzzle_snds_L {price = 100;};
	class muzzle_snds_M {price = 100;};
	class muzzle_snds_B {price = 100;};
	class muzzle_snds_H_MG {price = 100;};
	class muzzle_snds_acp {price = 100;};
	class muzzle_snds_338_black {price = 100;};
	class muzzle_snds_338_green {price = 100;};
	class muzzle_snds_338_sand {price = 100;};
	class muzzle_snds_93mmg {price = 100;};
	class muzzle_snds_93mmg_tan {price = 100;};
	class muzzle_sr25S_epoch {price = 100;};
	// Other
    class acc_flashlight {price = 25;};
	class Elcan_epoch { price = 150; tax = 2.5;};
	class Elcan_reflex_epoch { price = 150; tax = 2.5;};
	// class acc_pointer_IR {price = 250; tax = 2.5;}; ---> Crafting Materials

/*                          Gear                              */
	// Epoch Special
	class wolf_mask_epoch {price = 3000; tax = 5.5;};
	class pkin_mask_epoch {price = 3000; tax = 5.5;};
	class clown_mask_epoch {price = 5000; tax = 5.5;};
    // Uniforms
	class U_O_FullGhillie_lsh { price = 150; };
	class U_O_FullGhillie_sard { price = 150; };
	class U_O_FullGhillie_ard { price = 150; };
	class U_O_CombatUniform_ocamo {price = 50;};
	class U_O_GhillieSuit {price = 50;};
	class U_O_PilotCoveralls {price = 50;};
	class U_O_Wetsuit {price = 50;};
	class U_OG_Guerilla1_1 {price = 50;};
	class U_OG_Guerilla2_1 {price = 50;};
	class U_OG_Guerilla2_2 {price = 50;};
	class U_OG_Guerilla2_3 {price = 50;};
	class U_OG_Guerilla3_1 {price = 50;};
	class U_OG_Guerilla3_2 {price = 50;};
	class U_OG_leader {price = 50;};
	class U_C_Poloshirt_stripped {price = 40;};
	class U_C_Poloshirt_blue {price = 40;};
	class U_C_Poloshirt_burgundy {price = 40;};
	class U_C_Poloshirt_tricolour {price = 40;};
	class U_C_Poloshirt_salmon {price = 40;};
	class U_C_Poloshirt_redwhite {price = 40;};
	class U_C_Poor_1 {price = 50;};
	class U_C_WorkerCoveralls {price = 50;};
	class U_C_Journalist {price = 50;};
	class U_C_Scientist {price = 50;};
	class U_OrestesBody {price = 50;};
	class U_Wetsuit_uniform {price = 50;};
	class U_Wetsuit_White {price = 50;};
	class U_Wetsuit_Blue {price = 50;};
	class U_Wetsuit_Purp {price = 50;};
	class U_Wetsuit_Camo {price = 50;};
	class U_Camo_uniform {price = 50;};
	class U_ghillie1_uniform {price = 50;};
	class U_ghillie2_uniform {price = 50;};
	class U_ghillie3_uniform {price = 50;};
	class U_CamoBlue_uniform {price = 50;};
	class U_CamoBrn_uniform {price = 50;};
	class U_CamoRed_uniform {price = 50;};
	class U_C_Driver_1 {price = 50;};
	class U_C_Driver_2 {price = 50;};
	class U_C_Driver_3 {price = 50;};
	class U_C_Driver_4 {price = 50;};
	class U_C_Driver_1_black {price = 50;};
	class U_C_Driver_1_blue {price = 50;};
	class U_C_Driver_1_green {price = 50;};
	class U_C_Driver_1_red {price = 50;};
	class U_C_Driver_1_white {price = 50;};
	class U_C_Driver_1_yellow {price = 50;};
	class U_C_Driver_1_orange {price = 50;};
    // Vests
	class V_F0_EPOCH { price = 50; };
	class V_F1_EPOCH { price = 50; };
	class V_F2_EPOCH { price = 50; };
	class V_F3_EPOCH { price = 50; };
	class V_F4_EPOCH { price = 50; };
	class V_F5_EPOCH { price = 50; };
	class V_1_EPOCH {price = 50;};
	class V_2_EPOCH {price = 50;};
	class V_3_EPOCH {price = 50;};
	class V_4_EPOCH {price = 50;};
	class V_5_EPOCH {price = 50;};
	class V_6_EPOCH {price = 50;};
	class V_7_EPOCH {price = 50;};
	class V_8_EPOCH {price = 50;};
	class V_9_EPOCH {price = 50;};
	class V_10_EPOCH {price = 50;};
	class V_11_EPOCH {price = 50;};
	class V_12_EPOCH {price = 50;};
	class V_13_EPOCH {price = 50;};
	class V_14_EPOCH {price = 50;};
	class V_15_EPOCH {price = 50;};
	class V_16_EPOCH {price = 50;};
	class V_17_EPOCH {price = 50;};
	class V_18_EPOCH {price = 50;};
	class V_19_EPOCH {price = 50;};
	class V_20_EPOCH {price = 50;};
	class V_21_EPOCH {price = 50;};
	class V_22_EPOCH {price = 50;};
	class V_23_EPOCH {price = 50;};
	class V_24_EPOCH {price = 50;};
	class V_25_EPOCH {price = 50;};
	class V_26_EPOCH {price = 50;};
	class V_27_EPOCH {price = 50;};
	class V_28_EPOCH {price = 50;};
	class V_29_EPOCH {price = 50;};
	class V_30_EPOCH {price = 50;};
	class V_31_EPOCH {price = 50;};
	class V_32_EPOCH {price = 50;};
	class V_33_EPOCH {price = 50;};
	class V_34_EPOCH {price = 50;};
	class V_35_EPOCH {price = 50;};
	class V_36_EPOCH {price = 50;};
	class V_37_EPOCH {price = 50;};
	class V_38_EPOCH {price = 50;};
	class V_39_EPOCH {price = 50;};
	class V_40_EPOCH {price = 50;};
    // Helmets
	class H_1_EPOCH {price = 30;};
	class H_2_EPOCH {price = 30;};
	class H_3_EPOCH {price = 30;};
	class H_4_EPOCH {price = 30;};
	class H_5_EPOCH {price = 30;};
	class H_6_EPOCH {price = 30;};
	class H_7_EPOCH {price = 30;};
	class H_8_EPOCH {price = 30;};
	class H_9_EPOCH {price = 30;};
	class H_10_EPOCH {price = 30;};
	class H_11_EPOCH {price = 30;};
	class H_12_EPOCH {price = 30;};
	class H_13_EPOCH {price = 30;};
	class H_14_EPOCH {price = 30;};
	class H_15_EPOCH {price = 30;};
	class H_16_EPOCH {price = 30;};
	class H_17_EPOCH {price = 30;};
	class H_18_EPOCH {price = 30;};
	class H_19_EPOCH {price = 30;};
	class H_20_EPOCH {price = 30;};
	class H_21_EPOCH {price = 30;};
	class H_22_EPOCH {price = 30;};
	class H_23_EPOCH {price = 30;};
	class H_24_EPOCH {price = 30;};
	class H_25_EPOCH {price = 30;};
	class H_26_EPOCH {price = 30;};
	class H_27_EPOCH {price = 30;};
	class H_28_EPOCH {price = 30;};
	class H_29_EPOCH {price = 30;};
	class H_30_EPOCH {price = 30;};
	class H_31_EPOCH {price = 30;};
	class H_32_EPOCH {price = 30;};
	class H_33_EPOCH {price = 30;};
	class H_34_EPOCH {price = 30;};
	class H_35_EPOCH {price = 30;};
	class H_36_EPOCH {price = 30;};
	class H_37_EPOCH {price = 30;};
	class H_38_EPOCH {price = 30;};
	class H_39_EPOCH {price = 30;};
	class H_40_EPOCH {price = 30;};
	class H_41_EPOCH {price = 30;};
	class H_42_EPOCH {price = 30;};
	class H_43_EPOCH {price = 30;};
	class H_44_EPOCH {price = 30;};
	class H_45_EPOCH {price = 30;};
	class H_46_EPOCH {price = 30;};
	class H_47_EPOCH {price = 30;};
	class H_48_EPOCH {price = 30;};
	class H_49_EPOCH {price = 30;};
	class H_50_EPOCH {price = 30;};
	class H_51_EPOCH {price = 30;};
	class H_52_EPOCH {price = 30;};
	class H_53_EPOCH {price = 30;};
	class H_54_EPOCH {price = 30;};
	class H_55_EPOCH {price = 30;};
	class H_56_EPOCH {price = 30;};
	class H_57_EPOCH {price = 30;};
	class H_58_EPOCH {price = 30;};
	class H_59_EPOCH {price = 30;};
	class H_60_EPOCH {price = 30;};
	class H_61_EPOCH {price = 30;};
	class H_62_EPOCH {price = 30;};
	class H_63_EPOCH {price = 30;};
	class H_64_EPOCH {price = 30;};
	class H_65_EPOCH {price = 30;};
	class H_66_EPOCH {price = 30;};
	class H_67_EPOCH {price = 30;};
	class H_68_EPOCH {price = 30;};
	class H_69_EPOCH {price = 30;};
	class H_70_EPOCH {price = 30;};
	class H_71_EPOCH {price = 30;};
	class H_72_EPOCH {price = 30;};
	class H_73_EPOCH {price = 30;};
	class H_74_EPOCH {price = 30;};
	class H_75_EPOCH {price = 30;};
	class H_76_EPOCH {price = 30;};
	class H_77_EPOCH {price = 30;};
	class H_78_EPOCH {price = 30;};
	class H_79_EPOCH {price = 30;};
	class H_80_EPOCH {price = 30;};
	class H_81_EPOCH {price = 30;};
	class H_82_EPOCH {price = 30;};
	class H_83_EPOCH {price = 30;};
	class H_84_EPOCH {price = 30;};
	class H_85_EPOCH {price = 30;};
	class H_86_EPOCH {price = 30;};
	class H_87_EPOCH {price = 30;};
	class H_88_EPOCH {price = 30;};
	class H_89_EPOCH {price = 30;};
	class H_90_EPOCH {price = 30;};
	class H_91_EPOCH {price = 30;};
	class H_92_EPOCH {price = 30;};
	class H_93_EPOCH {price = 30;};
	class H_94_EPOCH {price = 50;};
	class H_95_EPOCH {price = 50;};
	class H_96_EPOCH {price = 50;};
	class H_97_EPOCH {price = 50;};
	class H_98_EPOCH {price = 50;};
	class H_99_EPOCH {price = 50;};
	class H_100_EPOCH {price = 50;};
	class H_101_EPOCH {price = 50;};
	class H_102_EPOCH {price = 50;};
	class H_103_EPOCH {price = 50;};
	class H_104_EPOCH {price = 30;};
    // Glasses
	class G_Diving {price = 50;};
	class G_Combat {price = 50;};
	class G_Tactical_Clear {price = 10;};
	class G_Shades_Black {price = 16;};
	class G_Shades_Blue {price = 28;};
	class G_Sport_Blackred {price = 35;};
	class G_Spectacles {price = 30;};
	class G_Spectacles_Tinted {price = 30;};
	class G_Lowprofile {price = 30;};
	class G_Shades_Green {price = 22;};
	class G_Shades_Red {price = 25;};
	class G_Squares {price = 15;};
	class G_Squares_Tinted {price = 25;};
	class G_Sport_BlackWhite {price = 16;};
	class G_Sport_Blackyellow {price = 15;};
	class G_Sport_Greenblack {price = 12;};
	class G_Sport_Checkered {price = 18;};
	class G_Sport_Red {price = 20;};
	class G_Tactical_Black {price = 15;};
/*                          Vehicle                           */
    // Armed
   	class B_MRAP_01_HMG_F  {price = 6000; tax = 3.5;}; // Hunter HMG
	class B_MRAP_01_gmg_F  {price = 6000; tax = 3.5;}; // Hunter GMG
    class I_MRAP_03_gmg_F {price = 6500; tax = 3.5;}; // Strider GMG
	class I_MRAP_03_hmg_F {price = 7000; tax = 3.5;}; // Strider HMG
	class B_G_Offroad_01_armed_EPOCH {price = 4000; tax = 3.5;}; // Armed Offroad	
	class I_Boat_Armed_01_minigun_F {price = 4000; tax = 3.5;};// M134 Boat
	class O_MRAP_02_gmg_F {price = 4500; tax = 3.5;};// Infrit GMG
	class O_MRAP_02_hmg_F {price = 4500; tax = 3.5;};// Infrit HMG
    // Land
	class O_MRAP_02_F {price = 3000; tax = 3.5;}; // Infrit
	class I_MRAP_03_EPOCH {price = 4000; tax = 3.5;}; // Strider
	class B_MRAP_01_EPOCH {price = 3500; tax = 3.5;}; // Hunter
	class O_Truck_03_covered_EPOCH {price = 1200; tax = 3.5;}; // Tempest
	class C_SUV_01_EPOCH {price = 600; tax = 3.5;}; // SUV
	class C_Van_01_fuel_white_F {price = 1000; tax = 3.5;}; // Refuel
	class O_Truck_02_covered_EPOCH {price = 3500; tax = 3.5;}; // Zamak Vehicle
	class O_Truck_02_transport_EPOCH {price = 3500; tax = 3.5;}; // Zamak Vehicle
	class O_Truck_02_box_EPOCH {price = 3500; tax = 3.5;}; // Zamak Vehicle
	class B_Truck_01_transport_EPOCH {price = 1200; tax = 3.5;}; // HEMTT
	class B_Truck_01_covered_EPOCH {price = 1200; tax = 3.5;}; // HEMTT
	class B_Truck_01_mover_EPOCH {price = 1200; tax = 3.5;}; // HEMTT
	class B_Truck_01_box_EPOCH {price = 1200; tax = 3.5;}; // HEMTT
	class C_Van_01_box_EPOCH {price = 400; tax = 3.5;}; // Van
	class C_Van_01_transport_EPOCH {price = 400; tax = 3.5;}; // Van
	class C_Offroad_01_EPOCH {price = 500; tax = 3.5;}; // Offroad
	class C_Quadbike_01_EPOCH {price = 250; tax = 3.5;}; // Quadro
	class C_Hatchback_01_EPOCH {price = 400; tax = 3.5;}; // Hatchback
	class C_Hatchback_02_EPOCH {price = 400; tax = 3.5;}; // Hatchback Sport
	class K01 {price = 300;}; // Karts
	class K02 {price = 300;}; // Karts
	class K03 {price = 300;}; // Karts
	class K04 {price = 300;}; // Karts
	class K05 {price = 300;}; // Karts
	class ebike_epoch {price = 500;};  // Cheat Bike
	// Air
	class Land_Pod_Heli_Transport_04_bench_F {price = 2800; tax = 3.5;}; // Chinnuk
	class Land_Pod_Heli_Transport_04_covered_F {price = 2800; tax = 3.5;}; // Chinnuk
	class Land_Pod_Heli_Transport_04_medevac_F {price = 2800; tax = 3.5;}; // Chinnuk
	class Land_Pod_Heli_Transport_04_box_F {price = 2800; tax = 3.5;}; // Chinnuk
	class Land_Pod_Heli_Transport_04_fuel_F {price = 2800; tax = 3.5;}; // Chinnuk
	class Land_Pod_Heli_Transport_04_repair_F {price = 2800; tax = 3.5;}; // Chinnuk
	class I_Heli_light_03_unarmed_EPOCH {price = 4800; tax = 3.5;}; // Unarmed Hellcat
	class B_Heli_Light_01_EPOCH {price = 2500;}; // MH-9 with Traps
	class c_Heli_Light_01_civil_epoch {price = 1800; tax = 3.5;}; // 900
	class O_Heli_Light_02_unarmed_EPOCH {price = 3800; tax = 3.5;}; // Kasatka
	class I_Heli_Transport_02_EPOCH {price = 3000; tax = 3.5;}; // Mohawk
	class O_Heli_Transport_04_EPOCH {price = 5000; tax = 3.5;}; //  Mi-290 Taru	
	class O_Heli_Transport_04_bench_EPOCH {price = 5200; tax = 3.5;}; //  Mi-290 Taru	
	class O_Heli_Transport_04_box_EPOCH {price = 5200; tax = 3.5;}; //  Mi-290 Taru	
	class O_Heli_Transport_04_covered_EPOCH {price = 6000; tax = 3.5;}; //  Mi-290 Taru	
	// Water
	class C_Rubberboat_EPOCH {price = 500; tax = 3.5;}; //  Boat
	class C_Rubberboat_02_EPOCH {price = 500; tax = 3.5;}; // Boat
	class C_Rubberboat_03_EPOCH {price = 500; tax = 3.5;}; // Boat
	class C_Rubberboat_04_EPOCH {price = 500; tax = 3.5;}; // Boat
	class C_Boat_Civil_01_EPOCH {price = 750; tax = 3.5;}; // Motorboat
	class C_Boat_Civil_01_police_EPOCH {price = 750; tax = 3.5;}; // Motorboat
	class C_Boat_Civil_01_rescue_EPOCH {price = 750; tax = 3.5;}; // Motorboat
	class B_SDV_01_EPOCH {price = 3000; tax = 3.5;}; // Submarine

};
////////////////////////////////////////////////////////////////////////////





/*
allowedVehiclesList[] = {
    {"C_Offroad_01_EPOCH",8},
    {"C_Quadbike_01_EPOCH",8},
    {"C_Hatchback_01_EPOCH",10},
    {"C_Hatchback_02_EPOCH",10},
    {"C_SUV_01_EPOCH",5},
    {"C_Rubberboat_EPOCH",5},
    {"C_Rubberboat_02_EPOCH",5},
    {"C_Rubberboat_03_EPOCH",5},
    {"C_Rubberboat_04_EPOCH",5},
    {"C_Van_01_box_EPOCH",8},
    {"C_Van_01_transport_EPOCH",9},
    {"C_Boat_Civil_01_EPOCH",5},
    {"C_Boat_Civil_01_police_EPOCH",5},
    {"C_Boat_Civil_01_rescue_EPOCH",5},
    {"B_Heli_Light_01_EPOCH",2},
    {"B_SDV_01_EPOCH",2},
    {"B_MRAP_01_EPOCH",5},
    {"O_MRAP_02_F",5}, // добавлено ифрит
    {"I_MRAP_03_F",5}, // добавлено страйдер
    {"I_MBT_03_cannon_F",2}, // добавлено танки
    {"B_MBT_01_cannon_F",2}, // добавлено танки
    {"0_MBT_02_cannon_F",2}, // добавлено танки
    {"B_APC_Tracked_01_AA_F",4}, // добавлено боевые машины пехоты
    {"B_APC_Tracked_01_rcws_F",4}, // добавлено боевые машины пехоты
    {"I_APC_Tracked_03_mlrs_F",4}, // добавлено боевые машины пехоты
    {"B_APC_Wheled_01_cannon_F",4}, // добавлено боевые машины пехоты
    {"O_APC_Wheled_02_rcws_F",4}, // добавлено боевые машины пехоты
    {"B_MRAP_01_gmg_F",3}, // добавлено охотник гранотомет
    {"B_MRAP_01_hmg_F",3}, // добавлено охотник пулемет
    {"O_MRAP_02_gmg_F",3}, // добавлено ифрит гранатомет
    {"O_MRAP_02_hmg_F",3}, // добавлено ифрит пулемет
    {"I_G_Offroad_01_F",5}, // добавлено внедорожник
    {"I_G_Offroad_01_armed_F",5}, // добавлено внедорожник пулемет
    {"B_G_Offroad_01_armed_F",5}, // добавлено внедорожник пулемет
    {"O_G_Offroad_01_armed_F",5}, // добавлено внедорожник пулемет (белый)
    {"I_MRAP_03_gmg_F",5}, // добавлено страйдер гранотомет
    {"I_MRAP_03_hmg_F",5}, // добавлено страйдер пулемет
    {"O_Truck_03_ammo_F",10}, // добавлено грузовик с боезапасом
    {"B_Truck_01_transport_EPOCH",1},
    {"B_Truck_01_covered_EPOCH",2},
    {"B_Truck_01_mover_EPOCH",1},
    {"B_Truck_01_box_EPOCH",1},
    {"O_Truck_02_covered_EPOCH",2},
    {"O_Truck_02_transport_EPOCH",1},
    {"O_Truck_03_covered_EPOCH",1},
    {"O_Truck_02_box_EPOCH",1},
    {"I_Heli_light_03_unarmed_EPOCH",1},
    {"O_Heli_Light_02_unarmed_EPOCH",1},
    {"I_Heli_Transport_02_EPOCH",1},
    {"O_Heli_Transport_04_EPOCH",1},
    {"O_Heli_Transport_04_bench_EPOCH",1},
    {"O_Heli_Transport_04_box_EPOCH",1},
    {"O_Heli_Transport_04_covered_EPOCH",1},
    {"B_Heli_Transport_03_unarmed_EPOCH",1},
    {"O_Heli_Light_02_F",1}, // добавлено вертолет
    {"B_Heli_Transport_01_F",1}, // добавлено вертолет
    {"jetski_epoch",7},
    {"K01",2},
    {"K02",2},
    {"K03",2},
    {"K04",2},
    {"B_Quadbike_01_F",2}, // Quadro
    {"O_Quadbike_01_FC_Quadbike_01_F",2}, // Quadro
    {"I_Quadbike_01_F",2}, // Quadro
    {"I_G_Quadbike_01_F",2}, // Quadro
    {"B_G_Quadbike_01_F",2}, // Quadro
    {"O_G_Quadbike_01_F",2}, // Quadro
    {"ebike_epoch",7},
    {"mosquito_epoch",7}
};
*/
