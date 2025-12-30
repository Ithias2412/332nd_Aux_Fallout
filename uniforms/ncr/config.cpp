class CfgPatches
{
    class 332nd_NCR_Uniforms
    {
        name = "332nd NCR Uniforms";
        author = "Frankie | 332nd Aux Team";
        requiredVersion = 1.0;

        requiredAddons[] = {"A3_Weapons_F","A3_Characters_F","A3_Data_F","A3_Characters_F_Heads","A3_Characters_F_Bootcamp_Common","A3_Characters_F_Common","A3_Characters_F_EPB","A3_Characters_F_EPB_Heads","A3_Characters_F_Beta_INDEP","A3_Characters_F_Bootcamp","fallout_uniform_02"};
        units[] =
        {
        };

        weapons[] =
        {
        };
    };
};

class CfgWeapons
{
    class ItemCore;
    class Uniform_Base;
    class UniformItem: ItemCore
    {
        type = 801;
    };
    
    class 332nd_Uniform_NCR_Trooper_01: ItemCore
    {
        dlc = "332nd";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "[332nd] NCR Trooper Armor 01";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Trooper_01_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
        
    };
    class 332nd_Uniform_NCR_Trooper_02: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Trooper Armor 02";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Trooper_02_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_Trooper_03: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Trooper Armor 03";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Trooper_03_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_Trooper_Plain: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Trooper Plain Armor";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Trooper_Plain_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_Trooper_Medic: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Trooper Medic Armor";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Trooper_Medic_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    }
    class 332nd_Uniform_NCR_Trooper_AB: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Trooper AB Armor";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Trooper_AB_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_PowerArmor: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Power Armor";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_PowerArmor_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_Ranger_Fox: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] Ranger Fox Uniform";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Ranger_Fox_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_Ranger_Patrol: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Ranger Patrol Uniform";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Ranger_Patrol_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };
    class 332nd_Uniform_NCR_Ranger_Combat: 332nd_Uniform_NCR_Trooper_01
    {
        displayName = "[332nd] NCR Ranger Combat Uniform";
        author = "Frankie | 332nd Aux Team";
        class ItemInfo: UniformItem
        {
            uniformClass = "332nd_Uniform_NCR_Ranger_Combat_Veh";
            containerClass = "Supply50";
            mass = 40;
        };
    };

};

class CfgVehicles
{
    class armor_ncr_trooper_01_body;
    class armor_ncr_trooper_02_body;
    class armor_ncr_trooper_03_body;
    class armor_ncr_trooper_clothes_medic_body;
    class armor_ncr_trooper_airtrooper_body;
    class ncr_powerarmor_body;
    class combat_ranger_Fox_body;
    class armornvncrtrooper_plain_body;
    class nv_ranger_body;
    class combat_ranger_body;

    class 332nd_Uniform_NCR_Trooper_01_Veh: armor_ncr_trooper_01_body
    {
        displayName = "[332nd] NCR Trooper Armor 01 (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Trooper_01";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Trooper_Medic_Veh: armor_ncr_trooper_clothes_medic_body
    {
        displayName = "[332nd] NCR Trooper Medic Armor (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Trooper_Medic";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Trooper_02_Veh: armor_ncr_trooper_02_body
    {
        displayName = "[332nd] NCR Trooper Armor 02 (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Trooper_02";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Trooper_03_Veh: armor_ncr_trooper_03_body
    {
        displayName = "[332nd] NCR Trooper Armor 03 (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Trooper_03";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Trooper_Plain_Veh: armornvncrtrooper_plain_body
    {
        displayName = "[332nd] NCR Trooper Plain Armor (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Trooper_Plain";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Trooper_AB_Veh: armor_ncr_trooper_airtrooper_body
    {
        displayName = "[332nd] NCR Trooper AB Armor (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Trooper_AB";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_PowerArmor_Veh: ncr_powerarmor_body
    {
        displayName = "[332nd] NCR Power Armor (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_PowerArmor";
        #include "\332nd_Aux_Fallout\hitpoints_values\power_armor.hpp"
    }
    class 332nd_Uniform_NCR_Ranger_Fox_Veh: combat_ranger_Fox_body
    {
        displayName = "[332nd] Ranger Fox Uniform (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Ranger_Fox";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Ranger_Patrol_Veh: nv_ranger_body
    {
        displayName = "[332nd] NCR Ranger Patrol Uniform (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Ranger_Patrol";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };
    class 332nd_Uniform_NCR_Ranger_Combat_Veh: combat_ranger_body
    {
        displayName = "[332nd] NCR Ranger Combat Uniform (Vehicle)";
        author = "Frankie | 332nd Aux Team";
        scope = 1;
        uniformClass = "332nd_Uniform_NCR_Ranger_Combat";
        #include "\332nd_Aux_Fallout\hitpoints_values\med_armor.hpp"
    };

};
