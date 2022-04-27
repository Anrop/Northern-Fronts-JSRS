class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_smg {
        name = "anrop_northern_fronts_jsrs_weapons_smg";
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
    
    class NORTH_kp31Base : Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };

    class NORTH_kp31 : NORTH_kp31Base {};

    class NORTH_kp31_sjr : NORTH_kp31
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };

    class NORTH_PPD34 : Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };

    class NORTH_PPD34_38: NORTH_PPD34
    {
    };

    class NORTH_PPD40: NORTH_PPD34_38
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };

    class NORTH_ppsh41 : Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };
};
