class CfgPatches {
    class anrop_northern_fronts_jsrs_weapons_mosin {
        name = "anrop_northern_fronts_jsrs_weapons_mosing";
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
    
    class NORTH_fin_m39 : NORTH_boltRifle_Base
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_m39_optics : NORTH_fin_m39
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_m91 : NORTH_fin_m39
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_m27rv : NORTH_fin_m39
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_M27 : NORTH_fin_m39
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_m27_optics : NORTH_fin_m27
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_M28 : NORTH_fin_m27
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_M9130 : NORTH_fin_m39
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_sov_M9130 : NORTH_fin_M9130
    {
    };

    class NORTH_sov_m9130_PU: NORTH_sov_m9130
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };

    class NORTH_fin_M28_30 : NORTH_fin_m27
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_mosin_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };
};
