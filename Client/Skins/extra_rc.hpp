# DT Demellion extra_rc.hpp
class ExtraRc {
	class ItemMap {
		class GearSkin {
			text = "Одеть клан скин";
			script = "execVM 'custom\extra_rc\gear_skin.sqf'";
		};
		class DegearSkin {
			text = "Снять клан скин";
			script = "execVM 'custom\extra_rc\degear_skin.sqf'";
		};
	};
};
