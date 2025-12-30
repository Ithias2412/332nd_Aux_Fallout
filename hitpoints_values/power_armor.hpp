class HitPoints
{
	class HitFace
	{
		armor				=  1;			// "Healthpoints" of this hitpoint is armor value (of hitpoint) * armor value (coefficient of the total armor defined below for the whole object)
		material			= -1;			// damage material (-1 means "unused")
		name				= "face_hub"; 	// selection name from hit points LOD in object
		passThrough			= 0.1;			// coefficient defining how much damage will pass into total damage when this hit point is damaged
		radius				= 0.08;			// size of the hit point sphere, this is how it works: https://community.bistudio.com/wiki/Arma_3_Damage_Description
		explosionShielding	= 0.1;			// multiplier of explosive damage (parameter: explosive > 0 in ammunition type)
		minimalHit			= 0.01;			// minimal damage value that can be applied (based on armor value), damage below this threshold is ignored
											// example: total hit point armor = 2 and hitpoint class armor = 10 and minimalHit = 0.04
											// -> all damage below a hit value of 2*10*0.04 = 0.8 is ignored
	}
	class HitNeck: HitFace
	{
		armor				=  1;
		material			= -1;
		name				= "neck";
		passThrough			= 0.1;
		radius				= 0.1;
		explosionShielding	= 0.5;
		minimalHit			= 0.01;
	}
	class HitHead: HitNeck
	{
		armor				=  1;
		material			= -1;
		name				= "head";
		passThrough			= 0.1;
		radius				= 0.2;
		explosionShielding	= 0.5;
		minimalHit			= 0.01;
		depends				= "HitFace max HitNeck"; 	
		// depends returns the greater of HitFace and HitNeck.
		// for depends to work, HitHead must be inheriting from HitFace and HitNeck.
		// "max" is not the only operator you can use. + and * are confirmed working.
		// Other operators from the https://community.bistudio.com/wiki/Simple_Expression list may be usable as well.
	};
	class HitPelvis: HitHead
	{
		armor				=  14;
		material			= -1;
		name				= "pelvis";
		passThrough			= 0.5;
		radius				= 0.2;
		explosionShielding	= 1;
		visual				= "injury_body";
		minimalHit			= 0.01;
	};
	class HitAbdomen: HitPelvis
	{
		armor				=  14;
		material			= -1;
		name				= "spine1";
		passThrough			= 0.5;
		radius				= 0.15;
		explosionShielding	= 1;
		visual				= "injury_body";
		minimalHit			= 0.01;
	};
	class HitDiaphragm: HitAbdomen
	{
		armor				=  14;
		material			= -1;
		name				= "spine2";
		passThrough			= 0.5;
		radius				= 0.15;
		explosionShielding	= 6;
		visual				= "injury_body";
		minimalHit			= 0.01;
	}
	class HitChest: HitDiaphragm
	{
		armor				=  14;
		material			= -1;
		name				= "spine3";
		passThrough			= 0.5;
		radius				= 0.15;
		explosionShielding	= 6;
		visual				= "injury_body";
		minimalHit			= 0.01;
	};
	class HitBody: HitChest
	{
		armor				= 1000; // not supposed to take damage directly
		material			= -1;
		name				= "body";
		passThrough			= 0.5;
		radius				= 0.16;
		explosionShielding	= 6;
		visual				= "injury_body";
		minimalHit			= 0.01;
		depends				= "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; 
		// depends work only for hit points defined in inheritance chain
		// arbitrary example for different operator usage: = "(2* (HitPelvis + HitAbdomen) * HitDiaphragm) max HitChest";
	};
	class HitArms: HitBody
	{
		armor				=  14;
		material			= -1;
		name				= "arms";
		passThrough			= 0.5;
		radius				= 0.1;
		explosionShielding	= 1;
		visual				= "injury_hands";
		minimalHit			= 0.01;
	};
	class HitHands: HitArms
	{
		armor				=  12;
		material			= -1;
		name				= "hands";
		passThrough			= 0.5;
		radius				= 0.1;
		explosionShielding	= 1;
		visual				= "injury_hands";
		minimalHit			= 0.01;
		depends				= "HitArms";
	};
	class HitLegs: HitHands
	{
		armor				=  12;
		material			= -1;
		name				= "legs";
		passThrough			= 0.5;
		radius				= 0.12;
		explosionShielding	= 1;
		visual				= "injury_legs";
		minimalHit			= 0.01;
	};
	class Incapacitated: HitLegs
	{
		armor = 1000;
		material = -1;
		name = "body";
		passThrough = 1;
		radius = 0;
		explosionShielding = 1;
		visual = "";
		minimalHit = 0;
		depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
	};
	class HitLeftArm
	{
		armor               = 12;
		material            = -1;
		name 				= "hand_l";
		passThrough         = 0.8;
		radius              = 0.12;
		explosionShielding  = 1;
		visual              = "injury_hands";
		minimalHit          = 0.01;
		
	};
	class HitRightArm: HitLeftArm
	{
		name 				= "hand_r";
	};
	class HitLeftLeg
	{
		armor               = 12;
		material            = -1;
		name                = "leg_l";
		passThrough         = 0.8;
		radius              = 0.12;
		explosionShielding  = 1;
		visual              = "injury_legs";
		minimalHit          = 0.01;
	};
	class HitRightLeg: HitLeftLeg
	{
		name                = "leg_r";
	};
	class ACE_HDBracket 
	{
		armor = 1;
		depends = "HitHead";
		explosionShielding = 1;
		material = -1;
		minimalHit = 0;
		name = "head";
		passThrough = 0.1;
		radius = 0.9;
		visual = "";
	};
	armor				= 2;				// total hit points (meaning global "health") of the object.	
											// keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
	armorStructural		= 0.4;				// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
											// must be adjusted for each model to achieve consistent total damage results
	explosionShielding	= 0.04; 			// for consistent explosive damage after adjusting = ( armorStructural / 10 )
	minTotalDamageThreshold	= 0.001;		// minimalHit for total damage
	impactDamageMultiplier	= 0.5;			// multiplier for falling damage
};