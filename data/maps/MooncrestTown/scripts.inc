MooncrestTown_MapScripts::
# 2 "data/maps/MooncrestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MooncrestTown_OnTransition
# 3 "data/maps/MooncrestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MooncrestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MooncrestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/MooncrestTown/scripts.pory"
	map_script_2 VAR_HEMLOCK_LAB_STATE, 2, MooncrestTown_On_Frame_Table
	.2byte 0


MooncrestTown_On_Frame_Table::
# 9 "data/maps/MooncrestTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_On_Frame_Table_1
	return

MooncrestTown_On_Frame_Table_1:
# 10 "data/maps/MooncrestTown/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 3
	return


MooncrestTown_OnTransition::
# 15 "data/maps/MooncrestTown/scripts.pory"
	setflag FLAG_VISITED_MOONCREST_TOWN
# 16 "data/maps/MooncrestTown/scripts.pory"
	random 8
# 17 "data/maps/MooncrestTown/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/MooncrestTown/scripts.pory"
	case 1, MooncrestTown_OnTransition_2
# 19 "data/maps/MooncrestTown/scripts.pory"
	case 2, MooncrestTown_OnTransition_3
# 20 "data/maps/MooncrestTown/scripts.pory"
	case 3, MooncrestTown_OnTransition_4
# 21 "data/maps/MooncrestTown/scripts.pory"
	case 4, MooncrestTown_OnTransition_5
# 22 "data/maps/MooncrestTown/scripts.pory"
	case 5, MooncrestTown_OnTransition_6
# 23 "data/maps/MooncrestTown/scripts.pory"
	case 6, MooncrestTown_OnTransition_7
# 24 "data/maps/MooncrestTown/scripts.pory"
	case 7, MooncrestTown_OnTransition_8
# 25 "data/maps/MooncrestTown/scripts.pory"
	case 8, MooncrestTown_OnTransition_9
	return

MooncrestTown_OnTransition_2:
# 18 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_RAIN
	return

MooncrestTown_OnTransition_3:
# 19 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_4:
# 20 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_5:
# 21 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_6:
# 22 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_7:
# 23 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_8:
# 24 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_9:
# 25 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return


MooncrestTown_Stay_Safe::
# 30 "data/maps/MooncrestTown/scripts.pory"
	compare VAR_HEMLOCK_LAB_STATE, 3
	goto_if_lt MooncrestTown_Stay_Safe_1
	return

MooncrestTown_Stay_Safe_1:
# 31 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 32 "data/maps/MooncrestTown/scripts.pory"
	playse SE_PIN
# 33 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 34 "data/maps/MooncrestTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 36 "data/maps/MooncrestTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/MooncrestTown/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Stay_Safe_Movement_0
# 38 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, MooncrestTown_Stay_Safe_Movement_1
# 39 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_Stay_Safe_Text_0
# 40 "data/maps/MooncrestTown/scripts.pory"
	waitmessage
# 41 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, MooncrestTown_Stay_Safe_Movement_2
# 42 "data/maps/MooncrestTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_RivalHouseSign::
# 48 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 49 "data/maps/MooncrestTown/scripts.pory"
	checkplayergender
# 50 "data/maps/MooncrestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MooncrestTown_RivalHouseSign_2
# 53 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_RivalHouseSign_Text_1
MooncrestTown_RivalHouseSign_1:
# 55 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return

MooncrestTown_RivalHouseSign_2:
# 51 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_RivalHouseSign_Text_0
	goto MooncrestTown_RivalHouseSign_1


MooncrestTown_PlayerHouseSign::
# 59 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 60 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_PlayerHouseSign_Text_0
# 61 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_HemlocksLabSign::
# 65 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 66 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_HemlocksLabSign_Text_0
# 67 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_CrestfallCaveSign::
# 71 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 72 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_CrestfallCaveSign_Text_0
# 73 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_TownSign::
# 77 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 78 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_TownSign_Text_0
# 79 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


# 37 "data/maps/MooncrestTown/scripts.pory"
MooncrestTown_Stay_Safe_Movement_0:
# 37 "data/maps/MooncrestTown/scripts.pory"
	lock_facing_direction
# 37 "data/maps/MooncrestTown/scripts.pory"
	walk_down
# 37 "data/maps/MooncrestTown/scripts.pory"
	unlock_facing_direction
	step_end

# 38 "data/maps/MooncrestTown/scripts.pory"
MooncrestTown_Stay_Safe_Movement_1:
# 38 "data/maps/MooncrestTown/scripts.pory"
	walk_right
# 38 "data/maps/MooncrestTown/scripts.pory"
	face_down
	step_end

# 41 "data/maps/MooncrestTown/scripts.pory"
MooncrestTown_Stay_Safe_Movement_2:
# 41 "data/maps/MooncrestTown/scripts.pory"
	walk_left
# 41 "data/maps/MooncrestTown/scripts.pory"
	face_down
	step_end

MooncrestTown_Stay_Safe_Text_0:
# 39 "data/maps/MooncrestTown/scripts.pory"
	.string "This cave is really unsafe if you don't\n"
	.string "have a pokemon.$"

MooncrestTown_RivalHouseSign_Text_0:
# 51 "data/maps/MooncrestTown/scripts.pory"
	.string "It's May's house.$"

MooncrestTown_RivalHouseSign_Text_1:
# 53 "data/maps/MooncrestTown/scripts.pory"
	.string "It's Brendan's house.$"

MooncrestTown_PlayerHouseSign_Text_0:
# 60 "data/maps/MooncrestTown/scripts.pory"
	.string "You should recognize your own home...$"

MooncrestTown_HemlocksLabSign_Text_0:
# 66 "data/maps/MooncrestTown/scripts.pory"
	.string "It's Hemlock's Lab$"

MooncrestTown_CrestfallCaveSign_Text_0:
# 72 "data/maps/MooncrestTown/scripts.pory"
	.string "Crestfall Cave. Rumor has it that\n"
	.string "there's rare Pokemon to be found in the\l"
	.string "elaborate caves inside$"

MooncrestTown_TownSign_Text_0:
# 78 "data/maps/MooncrestTown/scripts.pory"
	.string "Mooncrest Town, your home.$"
