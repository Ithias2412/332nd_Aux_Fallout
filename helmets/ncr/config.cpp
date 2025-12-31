class CfgPatches
{
    class 332nd_NCR_Helmets
    {
        name = "332nd NCR Helmets";
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

class cfgWeapons
{
    class HeadgearItem;
    class ItemInfo;
	class ItemCore;
	class UniformItem;
	class HeadgearItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
    class 332nd_Helmet_NCR_green_beret: ItemCore
	{
		scope=2;
		displayName="332nd NCR Green Beret";
		picture="\Sterben_TOP\fallout_uniform_02\UI\NCR_green_beret.paa";
		model="\Sterben_TOP\fallout_uniform_02\NCR_green_beret_GO.p3d";
		author="332nd Aux Team";
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
            mass=10;
		    uniformModel="\Sterben_TOP\fallout_uniform_02\NCR_green_beret.p3d";
		    allowedSlots[]={801,901,701,605};
		    modelSides[]={0,1,2,3};
		};

    };
    class 332nd_Helmet_NCR_Black_beret: ItemCore
	{
		scope=2;
		displayName="332nd NCR Black Beret";
		picture="\Sterben_TOP\fallout_uniform_02\UI\NCR_green_beret.paa";
		model="\Sterben_TOP\fallout_uniform_02\NCR_Black_beret_GO.p3d";
		author="332nd Aux Team";
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
			mass=10;
			uniformModel="\Sterben_TOP\fallout_uniform_02\NCR_Black_beret.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,1,2,3};
		};
	};
    class 332nd_Helmet_NCR_Trooper: ItemCore
	{
		scope=2;
		displayName="332nd NCR Trooper Helmet";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		model="\Sterben_TOP\fallout_uniform_02\armor_ncr_trooper_helm_02_GO.p3d";
		author="332nd Aux Team";
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
			mass=10;
			uniformModel="\Sterben_TOP\fallout_uniform_02\armor_ncr_trooper_helm_02.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,1,2,3};
		};
	};
    class 332nd_Helmet_NCR_Medic: ItemCore
	{
		scope=2;
		displayName="332nd NCR Medic Helmet";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		model="\Sterben_TOP\fallout_uniform_02\armor_ncr_trooper_helm_Medic_GO.p3d";
		author="332nd Aux Team";
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
			mass=10;
			uniformModel="\Sterben_TOP\fallout_uniform_02\armor_ncr_trooper_helm_Medic.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,1,2,3};
		};
	};
    class 332nd_Helmet_NCR_Trooper_Googles: ItemCore
	{
		scope=2;
		displayName="332nd NCR Trooper Helmet [Goggles]";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		model="\Sterben_TOP\fallout_uniform_02\armor_ncr_trooper_helm_GO.p3d";
		author="332nd Aux Team";
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
			mass=10;
			uniformModel="\Sterben_TOP\fallout_uniform_02\armor_ncr_trooper_helm.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,1,2,3};
		};
	};
    class 332nd_Helmet_NCR_Shock_Trooper_HelmetV2: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd Shock Trooper M1 Helmet";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\ww2_CasqueM1.paa",
			"\NCR_Helmets_B\data\Gasmask1.paa",
			"\NCR_Helmets_B\data\DirtyGlassVisorNCR.paa",
			"\NCR_Helmets_B\data\legionhelmet02.paa"
		};
		model="\NCR_Helmets_B\shock_helmetV2";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\NCR_Helmets_B\shock_helmetV2";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Tanker_Helmet_AFO: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Tanker Helmet";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\Tanker\tanker_helmet_CO.paa",
			"\NCR_Helmets_B\data\Tanker\marcus_CO.paa",
			"\NCR_Helmets_B\data\Tanker\NCR_Logo_CO.paa"
		};
		model="\NCR_Helmets_B\TankerHelmet";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			uniformModel="\NCR_Helmets_B\TankerHelmet";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
    class 332nd_Helmet_NCR_Shock_Trooper_HelmetV2_Broken: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd Shock Trooper M1 Helmet (Broken Lens)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\ww2_CasqueM1.paa",
			"\NCR_Helmets_B\data\Gasmask1.paa",
			"\NCR_Helmets_B\data\GasmaskLenseNCRBroke2.paa",
			"\NCR_Helmets_B\data\legionhelmet02.paa"
		};
		model="\NCR_Helmets_B\shock_helmetV2_broken";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\NCR_Helmets_B\shock_helmetV2_broken";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Sniper_Helmet: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Sniper M70 Helmet (Ghilie)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\SurvivalistHelmet.paa",
			"\NCR_Helmets_B\data\nvhatpsychicnullifier.paa",
			"\NCR_Helmets_B\data\DesertGhilleStuff.paa"
		};
		model="\NCR_Helmets_B\helmet1";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\NCR_Helmets_B\helmet1";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Sniper_Helmet_2: 332nd_Helmet_NCR_Sniper_Helmet
	{
		displayName="332nd NCR Sniper M70 Helmet (Goggles+Mask)";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\trooperhelm.paa",
			"\NCR_Helmets_B\data\SurvivalistHelmet.paa",
			"\NCR_Helmets_B\data\Lense.paa",
			"\NCR_Helmets_B\data\SurvivalistHelmet.paa"
		};
		model="\NCR_Helmets_B\Helmet2";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\NCR_Helmets_B\Helmet2";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Sniper_Helmet_3: 332nd_Helmet_NCR_Sniper_Helmet
	{
		displayName="332nd NCR Sniper M70 Helmet (Goggles)";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\trooperhelm.paa",
			"\NCR_Helmets_B\data\SurvivalistHelmet.paa",
			"\NCR_Helmets_B\data\Lense.paa"
		};
		model="\NCR_Helmets_B\Helmet3";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			uniformModel="\NCR_Helmets_B\Helmet3";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_MP_Riot_Helmet: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Military Police M1 Riot Helmet (Visor Up)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\ww2_CasqueM1.paa",
			"\NCR_Helmets_B\data\MPpatch.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\vaultsecurityhelmetm.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa"
		};
		model="\NCR_Helmets_B\MP_Helmet";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6"
			};
			uniformModel="\NCR_Helmets_B\MP_Helmet";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_MP_Riot_Helmet_Down: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Military Police Riot M1 Helmet (Visor Down)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\ww2_CasqueM1.paa",
			"\NCR_Helmets_B\data\MPpatch.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\vaultsecurityhelmetm.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa"
		};
		model="\NCR_Helmets_B\MP_Helmet_Down";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\NCR_Helmets_B\MP_Helmet_Down";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6"
			};
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Mask_Helmet: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Infantry M1 Helmet (Facewrap)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\ww2_CasqueM1.paa",
			"\NCR_Helmets_B\data\NCRfacewrap.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa"
		};
		model="\NCR_Helmets_B\Infantry_mask_Helmet";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5"
			};
			uniformModel="\NCR_Helmets_B\Infantry_mask_Helmet";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_M1_Helmet: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Infantry M1 Helmet";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\ww2_CasqueM1.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_AddStuffv2.paa",
			"\NCR_Helmets_B\data\ww2_CasqueM1_Liner.paa"
		};
		model="\NCR_Helmets_B\M1_Helmet";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			uniformModel="\NCR_Helmets_B\M1_Helmet";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Soup_Helmet: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Infantry M1917 Helmet (Goggles)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\Helmet2.paa",
			"\NCR_Helmets_B\data\UsHelm2.paa",
			"\NCR_Helmets_B\data\Goggles2.paa",
			"\NCR_Helmets_B\data\Lense.paa",
			"\NCR_Helmets_B\data\NCR_Logo.paa"
		};
		model="\NCR_Helmets_B\Soup_Helmet";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			uniformModel="\NCR_Helmets_B\Soup_Helmet";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
	class 332nd_Helmet_NCR_Soup_Helmet_Burlap: ItemCore
	{
		author="332nd Aux Team";
		scope=2;
		weaponPoolAvailable=1;
		displayName="332nd NCR Infantry M1917 Helmet (Burlap)";
		picture="\Sterben_TOP\fallout_uniform_02\UI\armor_ncr_trooper_helm.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NCR_Helmets_B\data\UsHelm2.paa"
		};
		model="\NCR_Helmets_B\Soup_Helmet_Burlap";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="\NCR_Helmets_B\Soup_Helmet_Burlap";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 10;
					hitPointName="HitHead";
					passThrough=0.1;
				};	
			};
		};
	};
};