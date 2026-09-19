void main()
{
	// economy init
	CreateHive();
	GetHive().InitOffline();
	
	// comment/remove the following 2 lines when not exporting (can cause further issues if you do this each time you start a mission!)
		//GetCEApi().ExportProxyData("2560 0 2560", 5120);	// standard map groups (buildings) export, terrain center and radius needs to be specified
		//GetCEApi().ExportClusterData();						// cluster-type map groups export (fruit trees etc.)
	
	// player creation
	/*vector spawnPos = "3372 0 3090";
	Entity playerEnt = GetGame().CreatePlayer(NULL, "SurvivorF_Eva", spawnPos, 0, "NONE");
	PlayerBase player = (PlayerBase) playerEnt;
	GetGame().SelectPlayer(NULL, player);*/
}