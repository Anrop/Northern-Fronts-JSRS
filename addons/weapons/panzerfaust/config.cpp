class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_panzerfaust {
        name = "anrop_northern_fronts_jsrs_weapons_panzerfaust";
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
    class Launcher_Base_F;
    
    class NORTH_fin_panzerfaust30 : Launcher_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_smaw_shot_soundset", "jsrs_warhead_reverb_soundset"};
            };
        };
    };
};
