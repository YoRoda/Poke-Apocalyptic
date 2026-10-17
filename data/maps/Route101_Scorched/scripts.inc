Route101_Scorched_MapScripts::
	.byte 0


Route101_Scorched_EventScript_Rift::
# 4 "data/maps/Route101_Scorched/scripts.pory"
	lockall
# 5 "data/maps/Route101_Scorched/scripts.pory"
	msgbox Route101_Scorched_EventScript_Rift_Text_0
# 6 "data/maps/Route101_Scorched/scripts.pory"
	setvar VAR_WORLD_STATE, 2
# 7 "data/maps/Route101_Scorched/scripts.pory"
	warpsilent MAP_ROUTE101_FLOODED, 6, 10
# 8 "data/maps/Route101_Scorched/scripts.pory"
	waitstate
# 9 "data/maps/Route101_Scorched/scripts.pory"
	releaseall
	return


Route101_Scorched_EventScript_Rift_Text_0:
# 5 "data/maps/Route101_Scorched/scripts.pory"
	.string "The rift shimmers...$"
