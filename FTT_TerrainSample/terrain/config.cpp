class CfgPatches
{
	class FTT_Terrain
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces",
			"DZ_Surfaces_Bliss",
			"DZ_Surfaces_Sakhal",
			"DZ_Gear_Navigation",
			"FTT_CE"
		};
		author="Flynn";
		name="FTT_Terrain";
		url="https://discord.gg/WpjteWAnzt";
		worlds[]=
		{
			"FTT_Terrain"
		};
	};
};
// scenes for the mission in main menu
class CfgCharacterScenes
{
	class FTT_terrain
	{
		class loc1
		{
			target[]={1981.376953,5244.799805,10.776550};		// Position of character
			position[]={1982.099609,5239.10,3};					// Position of camera last value is height
			fov=1;												// Zoom of scene on character
			date[]={2023,1,1,11,22};
			overcast=0.15000001;
			rain=0;
			fog=0;
		};
	};
};
// mission for the main menu this path does not have to exist, the important is \intro.worldname
// Note: If using PBO Project you will actuallly need to create a folder \intro.worldname in your world pbo/data folder)
class CfgMissions
{
	class Cutscenes
	{
		class FTT_SampleMenu
		{
			directory = "FTT_TerrainSample\terrain\data\intro.FTT_Terrain";
		};
	};
};
class CfgWorlds
{
	class DefaultWorld{};
	class CAWorld: DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
				class Weather7;
				class Weather8;
			};
		};
	};
	class FTT_Terrain: CAWorld
	{
		description = "FTT_Terrain";								// name of the world
		longitude = 30.0;											// position on Earth (for sky simulation) positive is east
		latitude = -45.0;											// position on Earth (for sky simulation) positive is south
		worldName = "FTT_TerrainSample\terrain\FTT_Terrain.wrp";	    // link of wrp file (exported from Terrain Builder)
		ceFiles="FTT_TerrainSample\terrain\data_CE\ce";							// link of default central economy files for this terrain (game will look into this folder when you attempt to init CE in your mission)
		
		/*	class Navmesh
			{
				#include "cfgNavmesh.hpp"
			};
		*/
		//Or
		class Navmesh
		{
			//navmeshName = "FTT_Sample_Project\FTT_Sample_NavMesh\navmesh\navmesh.nm";
			navmeshName="\dz\Worlds\chernarusplus\navmesh\navmesh.nm";
			filterIsolatedIslandsOnLoad = true;
			visualiseOffset = 0.0;
			class GenParams
			{
				tileWidth = 50.0;
				
				cellSize1 = 0.25;
				cellSize2 = 0.1;
				cellSize3 = 0.1;
				
				filterIsolatedIslands = true;
				seedPosition[]={10240,0,10240};
				
				class Agent
				{
					diameter = 0.6;
					
					standHeight = 1.5;
					crouchHeight = 1.0;
					proneHeight = 0.5;
					
					maxStepHeight = 0.45;
					maxSlope = 60.0;
				};
				
				class Links
				{	
					class ZedJump387_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66ff0000;
					};
					class ZedJump388_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66dd5500;
					};
					class ZedJump387_110
					{
						jumpLength = 3.90;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66008000;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x660000ff;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"climb"};
						color = 0x669400d3;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump2";
						flags[] = {"jumpOver"};
						color = 0x66aaaaFF;
					};
					class Fence110_160deer 
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump3";
						flags[] = {"jumpOver"};
						color = 0x6624fff8;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
				};
			};
		};
		
		//Weather Class (You can change sky/clouds etc here
		class Weather: Weather
		{
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					overcast=0.13;
					lightingOvercast=0;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=1;
					godrayStrength=0.050000001;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather2: Weather2
				{
					overcast=0.30000001;
					lightingOvercast=0.15000001;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage10_JetStream_ch_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage01_ClearHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.64999998;
					godrayStrength=0.050000001;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather3: Weather3
				{
					overcast=0.41999999;
					lightingOvercast=0.34999999;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_clear_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage11_JetStream_ch_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0.80000001;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0.80000001;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.44999999;
					godrayStrength=0.1;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather4: Weather4
				{
					overcast=0.54000002;
					lightingOvercast=0.57999998;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_semicloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.30000001;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather5: Weather5
				{
					overcast=0.67000002;
					lightingOvercast=0.67000002;
					sky="#(argb,8,8,3)color(0.560784,0.572549,0.623529,1.0,CO)";
					skyR="DZ\data\data\sky_semicloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Cloud_Stage20_Altostratus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage01_Transparent_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Horizont_Stage02_FoggyHills_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0.30000001;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather6: Weather6
				{
					overcast=0.77999997;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR="DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage30_Nimbostratus_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather7: Weather7
				{
					overcast=0.86000001;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR="DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage30_Nimbostratus_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
				class Weather8: Weather8
				{
					overcast=1.01;
					lightingOvercast=1;
					sky="#(argb,8,8,3)color(0.141176,0.141176,0.141176,1.0,CO)";
					skyR="DZ\data\data\sky_mostlycloudy_lco.paa";
					farCloud="DZ\worlds\chernarusplus\data\Sky_Stage30_Stratocumulus_sky.paa";
					cloud="DZ\worlds\chernarusplus\data\Cloud_Stage31_Nimbostratus_sky.paa";
					cloudClip=0;
					horizon="DZ\worlds\chernarusplus\data\Cloud_Stage00_Transparent_sky.paa";
					horizonClip=0;
					alpha=0;
					bright=0;
					speed=0;
					size=0;
					height=0;
					through=0;
					godrayStrength=0;
					diffuse=0;
					cloudDiffuse=0;
					waves=0;
				};
			};
			class VolFog
			{
				CameraFog = 0.0;
				UseDynamic=1;
				Item1[] = {300.0,0.02,0.8,0.37,0.9};
				Item2[] = {1200.0,0.02,0.8,0.07,0.9};
			};
		};
		
		cutscenes[] = {"FTT_SampleMenu"};							// link of world and required cutscene for the main menu
		startTime = "14:20";										// default time
		startDate = "01/01/2023";									// default date
		centerPosition[]={20480,0,20480};							// for map init
		
		/*interpolateClutterColoring=1;		 If we should use interpolation of clutter coloring coef based on distance of clutter from camera. (0 = false, 1 = true)
		clutterColoringFarCoef=150;			Max coef for clutter coloring at far distance (must be >=1, large coef means we can colorize more)
		clutterColoringFarSpeed=100;		Speed of far clutter coloration (1 = linear, 2 = quadratic, etc.)
		clutterColoringFarStart=0;			 Distance (in m) when clutterColoringFarCoef when we start to interpolate to clutterColoringFarCoef		*/
		
		clutterGrid=5;												// was 3. Controls density of clutters (size of square where single clutter is present)
		clutterDist=80;												// How far clutter is visible
		fullDetailDist=20;											// Distance where ground detail texture is fully visible (begin fading out)
		noDetailDist=115;											// Where ground detail texture is no longer visible (end fading out)
		hazeDistCoef=0.77999997;									// Coefficient used to compute haze distance (haze distance = fogFar * hazeDistCoef), can be > 1. If the value is negative, then standard haze computation is used.
		hazeFogCoef=0.5;											// Fog value, that we want to have at haze distance (=distance computed using hazeDistCoef), 0 = full fog, 1 = no fog. If the value is negative, then standard haze computation is used
		// base height for volFog (see CAWorld Weather class)
		//volFogOffset = 0;
		class UsedTerrainMaterials
		{
			material0="DZ\surfaces\data\terrain\cp_grass.rvmat";
			material1="DZ\surfaces\data\terrain\cp_dirt.rvmat";
			material2="DZ\surfaces\data\terrain\cp_rock.rvmat";
			material3="DZ\surfaces\data\terrain\cp_conifer_common1.rvmat";
			material4="DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material5="DZ\surfaces\data\terrain\cp_gravel.rvmat";
			material6="DZ\surfaces_bliss\data\terrain\en_stones.rvmat";
			material7="DZ\surfaces_sakhal\data\terrain\sakhal_gravel.rvmat";
			material8="DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			//Add more as needed.
		};
		// mid-distance noise to prevent seeing bluriness of satelite texture at those distances
			// midDetailTexture = "";
		
		// normal map for shadowing of grass clutterDist
			//terrainNormalTexture = "FTT_TerrainSample\terrain\data\textures\map\FTT_Terrain_Global_nohq.paa";
		
		//New
		/*
			To get Terrain Builder/Buldozer to use this new Blending mode you have to edit P\bin\config.cpp and add the two parameters into DefaultWorld class
			Thanks "Geez"
			
			heightBlendingMode = true;
			bicubicMode = true;
		*/

		/*
			heightBlendingMode=1;
			bicubicMode=1;
		*/
		
		class OutsideTerrain
		{
			satellite="DZ\worlds\chernarusplus\data\outside_sat_co.paa";
			enableTerrainSynth=0;		// Outside map area do you want Water or Land 0 / 1
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture="DZ\surfaces\data\terrain\cp_grass_ca.paa";
				};
			};
		};
		// 2d map location names
		/*Can be instead included in HPP
		    class Names
			{
				#include "cfgNames.hpp"
			};
		*/
		class Names
		{
			// Example Names for In Game Map
			/*class Groom_Lake
			{
				name = "Groom Lake";
				position[] = {10242,15486};
				type="Capital";
			};
			class Papoose_Mountain
			{
				name = "Papoose Mountain";
				position[] = {6630,3168};
				type="Capital";
			};
			class Area_51
			{
				name = "Area 51";
				position[] = {9594,10347};
				type="Capital";
			};
			class Cockeyed_Ridge
			{
				name = "Cockeyed Ridge";
				position[] = {536,549};
				type="Capital";
			};
			class Mt_Wandell
			{
				name = "Mt Wandell";
				position[] = {14826,19212};
				type="Capital";
			};*/
		};
		//2D In Game Map Airfields
		/* Example
			ilsDirection[] = {-1.0,0.08,0.0};
			ilsTaxiOff[] = {3520.0,3610.0,4040.0,3610.0,4050.0,3600.0,4050.0,3580.0,4045.0,3575.0,4040.0,3572.0,3540.0,3572.0};
			ilsTaxiIn[] = {3540.0,3572.0,3388.0,3572.0,3382.0,3578.0,3382.0,3600.0,3400.0,3610.0};
		*/
		ilsPosition[]={0,0};
		ilsDirection[]={0,0,0};
		ilsTaxiIn[]={0,0};
		ilsTaxiOff[]={0,0};
		drawTaxiway = false;
		class SecondaryAirports	{}; //Others
		// 2d map grid
		landGrid=50;
		class Grid //: Grid - Update
		{
			offsetX=0;
			offsetY=8192;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100.0;
				stepY = 100.0;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000.0;
				stepY = 1000.0;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000.0;
				stepY = 10000.0;
			};
		};
		// 2D In Game map item params
		mapDisplayNameKey = "Tourist Map";
		mapDescriptionKey = "An illigal map of my custom map! Very few have laid eyes on this map and even fewer have survived traversing this hostile landscape!";
		mapTextureClosed = "dz\gear\navigation\data\map_chernarus_co.paa";
		mapTextureOpened = "dz\structures\signs\tourist\data\karta_co.paa";
		mapTextureLegend = "dz\structures\signs\tourist\data\karta_side_co.paa";
		userMapPath="FTT_TerrainSample\terrain\data\layers"; // Path To Terrain Generated Layers for in game map
		//userMapPath="dz\gear\navigation\data\usermap";
		minTreesInForestSquare = 10;	// for 2d map (also affects forest controller)
		minRocksInRockSquare = 5;		// for 2d map
		soundMapAttenCoef = 0.01;		// sound map params
		class SoundMapValues
		{
			treehard = 0.03;
			treesoft = 0.03;
			bushhard = 0.0;
			bushsoft = 0.0;
			forest = 1.0;
			house = 0.3;
			church = 0.5;
		};
		class Sounds
		{
			sounds[] = {};
		};
		class Ambient		// ambient life (flies, leaves,..)
		{
			class BigInsects
			{
				radius=20;
				cost="(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class BigInsectsAquatic
			{
				radius=20;
				cost="(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
				};
			};
			class SmallInsects
			{
				radius=3;
				cost="(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class NightInsects
			{
				radius=3;
				cost="(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class WindClutter
			{
				radius=10;
				cost="((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindGrass2
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindRock1
					{
						probability="0.4 * hills";
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
			class NoWindClutter
			{
				radius=15;
				cost=8;
				class Species
				{
					class FxWindPollen1
					{
						probability=1;
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
		};
		spaceObject="DZ\Data\data\milkyway.p3d";
		spaceObjectRotationPreOffset[]={0,0,0};
		spaceObjectRotationOffset[]={0,0,0};
		spaceTexture0="DZ\Data\data\milkyway_left_co.paa";
		spaceTexture1="DZ\Data\data\milkyway_right_co.paa";
		atmosphereObject="DZ\Data\data\atmosphere.p3d";
		atmosphereTexture="DZ\worlds\chernarusplus\data\Sky_Stage01_Clear_sky.paa";
		farCloudObject="DZ\Data\data\obloha.p3d";
		farCloudObjectRotationAxis[]={0,1,0};
		farCloudObjectRotationSpeed=3;
		cloudObject="DZ\Data\data\cloudObject.p3d";
		cloudObjectRotationAxis[]={0,1,0};
		cloudObjectRotationSpeed=9;
		horizonObject="DZ\Data\data\horizont.p3d";
		horizonObjectRotationAxis[]={0,1,0};
		horizonObjectRotationSpeed=0;
		/*class Subdivision
		{
			class Fractal
			{
				rougness=10;
				maxRoad=0.2;
				maxTrack=1;
				maxSlopeFactor=0.050000001;
			};
			class WhiteNoise
			{
				rougness=5;
				maxRoad=0.1;
				maxTrack=0.5;
				maxSlopeFactor=0.025;
			};
			minY=0;
			minSlope=0.02;
		};*/
	};
};
class CfgWorldList
{
	class FTT_Terrain
	{
	};
};