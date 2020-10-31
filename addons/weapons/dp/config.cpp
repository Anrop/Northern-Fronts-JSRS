class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_dp {
        name = "anrop_northern_fronts_jsrs_weapons_dp";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"NORTH_weapons_cfg", "jsrs_soundmod_complete_edition"};
        addonRootClass = "NORTH_weapons_cfg";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class NORTH_dp27 : Rifle_Base_F
    {
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_dp28_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
