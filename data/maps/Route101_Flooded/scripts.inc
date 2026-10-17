Route101_Flooded_MapScripts::
	.byte 0


Route101_Flooded_EventScript_Rift::
# 4 "data/maps/Route101_Flooded/scripts.pory"
	lockall
# 5 "data/maps/Route101_Flooded/scripts.pory"
	msgbox Route101_Flooded_EventScript_Rift_Text_0
# 6 "data/maps/Route101_Flooded/scripts.pory"
	setvar VAR_WORLD_STATE, 1
# 7 "data/maps/Route101_Flooded/scripts.pory"
	warpsilent MAP_ROUTE101_SCORCHED, 6, 10
# 8 "data/maps/Route101_Flooded/scripts.pory"
	waitstate
# 9 "data/maps/Route101_Flooded/scripts.pory"
	releaseall
	return


Route101_Flooded_EventScript_Rift_Text_0:
# 5 "data/maps/Route101_Flooded/scripts.pory"
	.string "The rift shimmers...$"
