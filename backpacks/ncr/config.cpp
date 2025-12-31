class CfgPatches 
{
	class 332nd_NCR_Backpacks 
	{
        name = "332nd NCR Backpacks";
		author = "332nd Aux Team";
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
    class Bag_Base;
	class ContainerSupply;
    class am_backpack_big_brn_ncr;
    class Backpack_01;
    class rucksack_ammoasst_rucksack_bag_brn_ncr;
    class rucksack_small_ammoasst_rucksack_bag_brn_ncr;
    class rucksack_milrad_rucksack_bag_brn_ncr;
    class rucksack_milrad_small_rucksack_bag_brn_ncr;
    class rucksack_at_rucksack_bag_brn_ncr;
    class rucksack_breacher_rucksack_bag_brn_ncr;
    class rucksack_engineer_rucksack_bag_brn_ncr;
    class rucksack_medic_rucksack_bag_brn_fak_ncr;
    class minigunbackpack;
    class 25mm_grndlnchr_backpack;

    class 332nd_Backpack_NCR_Big: am_backpack_big_brn_ncr
	{
		scope = 2;
		displayName = "[332nd] Backpack (MRK/GRN)";
		author = "332nd Aux Team";
		maximumLoad=150;
		mass=40;
    };
    class 332nd_Backpack_NCR_Medium: Backpack_01
    {
        scope = 2;
        displayName = "[332nd] Backpack (Rifleman)";
        author = "332nd Aux Team";
		maximumLoad=100;
		mass=40;
    };
    class 332nd_Backpack_NCR_Ammo: rucksack_ammoasst_rucksack_bag_brn_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (Ammo Bearer)";
        author = "332nd Aux Team";
		maximumLoad=320;
		mass=40;
    };
    class 332nd_Backpack_NCR_Ammo_AR: rucksack_small_ammoasst_rucksack_bag_brn_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (AR)";
        author = "332nd Aux Team";
		maximumLoad=200;
		mass=40;
    };
    class 332nd_Backpack_NCR_RTO: rucksack_milrad_rucksack_bag_brn_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (RTO)";
        author = "332nd Aux Team";
		maximumLoad=258;
		mass=40;
        tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
    };
    class 332nd_Backpack_NCR_RTO_NCO: rucksack_milrad_small_rucksack_bag_brn_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (NCO Radio)";
        author = "332nd Aux Team";
		maximumLoad=150;
		mass=40;
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=300000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
    };
    class 332nd_Backpack_NCR_AT: rucksack_at_rucksack_bag_brn_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (AT)";
        author = "332nd Aux Team";
		maximumLoad=200;
		mass=40;
    };
    class 332nd_Backpack_NCR_Breacher: rucksack_breacher_rucksack_bag_brn_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (Breacher)";
        author = "332nd Aux Team";
        maximumLoad=160;
        mass=26;
    };
    class 332nd_Backpack_NCR_Engineer: rucksack_engineer_rucksack_bag_brn_ncr
    {
        scope = 2;
        ace_fortify_fortifyTool = 1;
        displayName = "[332nd] Backpack (Engineer)";
        author = "332nd Aux Team";
		maximumLoad=320;
		mass=40;
    };
    class 332nd_Backpack_NCR_Medic: rucksack_medic_rucksack_bag_brn_fak_ncr
    {
        scope = 2;
        displayName = "[332nd] Backpack (Medic)";
        author = "332nd Aux Team";
		maximumLoad=321;
		mass=40;
    };
    class 332nd_Backpack_NCR_Minigun: minigunbackpack
    {
        scope = 2;
        displayName = "[332nd] Backpack (AR-Minigun)";
        author = "332nd Aux Team";
        maximumLoad=200;
		mass=40;
    };
    class 332nd_Backpack_NCR_25mm: 25mm_grndlnchr_backpack
    {
        scope = 2;
        displayName = "[332nd] Backpack (25mm Grenade Launcher)";
        author = "332nd Aux Team";
        maximumLoad=200;
        mass=40;
    };
};