class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_svt {
        name = "anrop_northern_fronts_jsrs_weapons_svt";
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
    
    class NORTH_SVT38 : Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_svt40_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };

    class NORTH_SVT40: NORTH_SVT38
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_svt40_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };

    class NORTH_AVT40: NORTH_SVT38
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_svt40_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_svt40_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };

    class NORTH_SVT40PU: NORTH_SVT38
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_svt40_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };
};
