class CfgPatches
{
    class 332nd_Weapons_Primary
    {
        units[] = {};
        requiredVersion = 1.62;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Characters_F",
			"AM_Anim",
			"A3_Weapons_F_Items",
			"A3_Weapons_F_Acc",
			"AM_Exp",
            "AM_Firearms",
		};
        author = "Frankie";
        authors[] = {"Frankie"};
        weapons[] = {
            "332nd_Weapons_Primary_RFL_ServiceRifle",
            "332nd_Weapons_Primary_RFL_Tommygun",
            "332nd_Weapons_Primary_RFL_HuntingShotgun",
            "332nd_Weapons_Primary_RFL_M1",
            "332nd_Weapons_Primary_RFL_M1_Carbine",
            "332nd_Weapons_Primary_RFL_M1_Carbine",
            "332nd_Weapons_Primary_RFL_9mmSMG",
            "332nd_Weapons_Primary_AR_BAR",
            "332nd_Weapons_Primary_AR_M60",
            "332nd_Weapons_Primary_AR_LMG",
            "332nd_Weapons_Primary_GRN_M79Thumper",
            "332nd_Weapons_Primary_MRK_AntiMatRifle",
            "332nd_Weapons_Primary_MRK_SniperRifle",
            "332nd_Weapons_Primary_MRK_Marksman",
            "332nd_Weapons_Primary_MRK_WA2000",
            };
    };
};
class Mode_FullAuto;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryFlashLightItem_Base_F;
class Mode_SemiAuto;
class Mode_Burst;
class SlotInfo;
class CfgWeapons
{
    class AM_serviceRifle;
    class AM_AntiMatRifle;
    class AM_Tommygun;
    class AM_SniperRifle;
    class AM_HuntingShotgun;
    class AM_M79_Thumper;
    class AM_BAR;
    class AM_M1;
    class AM_M60;
    class AM_M1_Carbine;
    class AM_WA2000;
    class AM_LMG;
    class AM_Marksman;
    class AM_9mmSMG;
    class 332nd_Weapons_Primary_RFL_ServiceRifle: AM_serviceRifle
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Service Rifle (332nd)";
        descriptionShort = "The standard issue rifle of the 332nd Fighter Group, chambered in .30-06 Springfield.";

    };
    class 332nd_Weapons_Primary_RFL_Tommygun: AM_Tommygun
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Tommy Gun (332nd)";
        descriptionShort = "A classic submachine gun used by the 332nd Fighter Group, chambered in .45 ACP.";

    };
    class 332nd_Weapons_Primary_RFL_HuntingShotgun: AM_HuntingShotgun
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Hunting Shotgun (332nd)";
        descriptionShort = "A reliable hunting shotgun used by the 332nd Fighter Group, chambered in 12 gauge.";

    };
    class 332nd_Weapons_Primary_RFL_M1: AM_M1
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "M1 Garand (332nd)";
        descriptionShort = "The M1 Garand rifle used by the 332nd Fighter Group, chambered in .30-06 Springfield.";

    };
    class 332nd_Weapons_Primary_RFL_M1_Carbine: AM_M1_Carbine
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "M1 Carbine (332nd)";
        descriptionShort = "The M1 Carbine used by the 332nd Fighter Group, chambered in .30 Carbine.";

    };
    class 332nd_Weapons_Primary_RFL_9mmSMG: AM_9mmSMG
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "9mm SMG (332nd)";
        descriptionShort = "A 9mm submachine gun used by the 332nd Fighter Group.";

    };
    class 332nd_Weapons_Primary_AR_BAR: AM_BAR
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "B.A.R. (332nd)";
        descriptionShort = "The Browning Automatic Rifle used by the 332nd Fighter Group, chambered in .30-06 Springfield.";
    };
    class 332nd_Weapons_Primary_AR_M60: AM_M60
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "M60 Machine Gun (332nd)";
        descriptionShort = "The M60 machine gun used by the 332nd Fighter Group, chambered in 7.62x51mm NATO.";
    };
    class 332nd_Weapons_Primary_AR_LMG: AM_LMG
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Light Machine Gun (332nd)";
        descriptionShort = "A light machine gun used by the 332nd Fighter Group, chambered in 5.56x45mm NATO.";
    };
    class 332nd_Weapons_Primary_GRN_M79Thumper: AM_M79_Thumper
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "M79 Thumper (332nd)";
        descriptionShort = "A single-shot grenade launcher used by the 332nd Fighter Group, capable of firing 40mm grenades.";

    };
    class 332nd_Weapons_Primary_MRK_AntiMatRifle: AM_AntiMatRifle
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Anti-Materiel Rifle (332nd)";
        descriptionShort = "A heavy anti-materiel rifle used by the 332nd Fighter Group, chambered in .50 BMG.";

    };
    class 332nd_Weapons_Primary_MRK_SniperRifle: AM_SniperRifle
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Sniper Rifle (332nd)";
        descriptionShort = "A precision sniper rifle used by the 332nd Fighter Group, chambered in .30-06 Springfield.";

    };
    class 332nd_Weapons_Primary_MRK_Marksman: AM_Marksman
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Marksman Rifle (332nd)";
        descriptionShort = "A designated marksman rifle used by the 332nd Fighter Group, chambered in 7.62x51mm NATO.";

    };
    class 332nd_Weapons_Primary_MRK_WA2000: AM_WA2000
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "WA2000 (332nd)";
        descriptionShort = "A semi-automatic sniper rifle used by the 332nd Fighter Group, chambered in .300 Winchester Magnum.";

    };
    
};