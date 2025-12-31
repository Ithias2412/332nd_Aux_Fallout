class CfgPatches
{
    class 332nd_Weapons_Launcher
    {
        units[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"A3_Weapons_F","AM_Firearms"};
        author = "Frankie";
        authors[] = {"Frankie"};
        weapons[] = {"332nd_Weapons_Launcher_Fatman","332nd_Weapons_Launcher_MissileLauncher","332nd_Weapons_Launcher_Bazooka",};
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
    class AM_launch_Fatman;
    class AM_launch_MissileLauncher;
    class AM_bazooka;
    class 332nd_Weapons_Launcher_Fatman: AM_launch_Fatman
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Fatman Launcher (332nd)";
        descriptionShort = "A portable rocket launcher used by the 332nd Fighter Group, capable of firing high-explosive rockets.";
        magazines[] =
        {
        };
    };
    class 332nd_Weapons_Launcher_MissileLauncher: AM_launch_MissileLauncher
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Missile Launcher (332nd)";
        descriptionShort = "A shoulder-fired missile launcher used by the 332nd Fighter Group, designed to engage armored targets.";
        magazines[] =
        {
        };
    };
    class 332nd_Weapons_Launcher_Bazooka: AM_bazooka
    {
        author = "Frankie";
        scope=2;
        scopeArsenal = 2;
        displayName = "Bazooka (332nd)";
        descriptionShort = "A classic bazooka used by the 332nd Fighter Group, effective against fortified positions and light armor.";
        magazines[] =
        {
        };
    };
};