class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_tt33 {
        name = "anrop_northern_fronts_jsrs_weapons_tt33";
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

class CfgWeapons 
{
    class Pistol_Base_F;
    
    class NORTH_TT33 : Pistol_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_tt33_shot_soundset", "jsrs_ww2_pistol_reverb_soundset"};
            };
        };
    };
};
