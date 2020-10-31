class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_smle {
        name = "anrop_northern_fronts_jsrs_weapons_smle";
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
    class NORTH_boltRifle_Base;
    
    class NORTH_nor_smle : NORTH_boltRifle_Base
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_leeenfield_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };
};
