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
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_On_Frame_Table_4
MooncrestTown_On_Frame_Table_3:
# 12 "data/maps/MooncrestTown/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, MooncrestTown_On_Frame_Table_2
	return

MooncrestTown_On_Frame_Table_1:
# 10 "data/maps/MooncrestTown/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 3
	return

MooncrestTown_On_Frame_Table_2:
# 13 "data/maps/MooncrestTown/scripts.pory"
	setvar VAR_HEMLOCK_LAB_DEX, 1
	return

MooncrestTown_On_Frame_Table_4:
# 9 "data/maps/MooncrestTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, MooncrestTown_On_Frame_Table_1
	goto MooncrestTown_On_Frame_Table_3


MooncrestTown_OnTransition::
# 18 "data/maps/MooncrestTown/scripts.pory"
	setflag FLAG_VISITED_MOONCREST_TOWN
# 19 "data/maps/MooncrestTown/scripts.pory"
	random 8
# 20 "data/maps/MooncrestTown/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/MooncrestTown/scripts.pory"
	case 1, MooncrestTown_OnTransition_2
# 22 "data/maps/MooncrestTown/scripts.pory"
	case 2, MooncrestTown_OnTransition_3
# 23 "data/maps/MooncrestTown/scripts.pory"
	case 3, MooncrestTown_OnTransition_4
# 24 "data/maps/MooncrestTown/scripts.pory"
	case 4, MooncrestTown_OnTransition_5
# 25 "data/maps/MooncrestTown/scripts.pory"
	case 5, MooncrestTown_OnTransition_6
# 26 "data/maps/MooncrestTown/scripts.pory"
	case 6, MooncrestTown_OnTransition_7
# 27 "data/maps/MooncrestTown/scripts.pory"
	case 7, MooncrestTown_OnTransition_8
# 28 "data/maps/MooncrestTown/scripts.pory"
	case 8, MooncrestTown_OnTransition_9
	return

MooncrestTown_OnTransition_2:
# 21 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_RAIN
	return

MooncrestTown_OnTransition_3:
# 22 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_4:
# 23 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_5:
# 24 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_6:
# 25 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_7:
# 26 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_8:
# 27 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return

MooncrestTown_OnTransition_9:
# 28 "data/maps/MooncrestTown/scripts.pory"
	setweather WEATHER_NONE
	return


MooncrestTown_Stay_Safe::
# 33 "data/maps/MooncrestTown/scripts.pory"
	compare VAR_HEMLOCK_LAB_STATE, 3
	goto_if_lt MooncrestTown_Stay_Safe_1
	return

MooncrestTown_Stay_Safe_1:
# 34 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 35 "data/maps/MooncrestTown/scripts.pory"
	playse SE_PIN
# 36 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 37 "data/maps/MooncrestTown/scripts.pory"
	waitmovement 0
# 38 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 39 "data/maps/MooncrestTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/MooncrestTown/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Stay_Safe_Movement_0
# 41 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, MooncrestTown_Stay_Safe_Movement_1
# 42 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_Stay_Safe_Text_0
# 43 "data/maps/MooncrestTown/scripts.pory"
	waitmessage
# 44 "data/maps/MooncrestTown/scripts.pory"
	applymovement 1, MooncrestTown_Stay_Safe_Movement_2
# 45 "data/maps/MooncrestTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_RivalHouseSign::
# 51 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 52 "data/maps/MooncrestTown/scripts.pory"
	checkplayergender
# 53 "data/maps/MooncrestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MooncrestTown_RivalHouseSign_2
# 56 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_RivalHouseSign_Text_1
MooncrestTown_RivalHouseSign_1:
# 58 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return

MooncrestTown_RivalHouseSign_2:
# 54 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_RivalHouseSign_Text_0
	goto MooncrestTown_RivalHouseSign_1


MooncrestTown_PlayerHouseSign::
# 62 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 63 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_PlayerHouseSign_Text_0
# 64 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_HemlocksLabSign::
# 68 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 69 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_HemlocksLabSign_Text_0
# 70 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_CrestfallCaveSign::
# 74 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 75 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_CrestfallCaveSign_Text_0
# 76 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


MooncrestTown_TownSign::
# 80 "data/maps/MooncrestTown/scripts.pory"
	lockall
# 81 "data/maps/MooncrestTown/scripts.pory"
	msgbox MooncrestTown_TownSign_Text_0
# 82 "data/maps/MooncrestTown/scripts.pory"
	releaseall
	return


# 40 "data/maps/MooncrestTown/scripts.pory"
MooncrestTown_Stay_Safe_Movement_0:
# 40 "data/maps/MooncrestTown/scripts.pory"
	lock_facing_direction
# 40 "data/maps/MooncrestTown/scripts.pory"
	walk_down
# 40 "data/maps/MooncrestTown/scripts.pory"
	unlock_facing_direction
	step_end

# 41 "data/maps/MooncrestTown/scripts.pory"
MooncrestTown_Stay_Safe_Movement_1:
# 41 "data/maps/MooncrestTown/scripts.pory"
	walk_right
# 41 "data/maps/MooncrestTown/scripts.pory"
	face_down
	step_end

# 44 "data/maps/MooncrestTown/scripts.pory"
MooncrestTown_Stay_Safe_Movement_2:
# 44 "data/maps/MooncrestTown/scripts.pory"
	walk_left
# 44 "data/maps/MooncrestTown/scripts.pory"
	face_down
	step_end

MooncrestTown_Stay_Safe_Text_0:
# 42 "data/maps/MooncrestTown/scripts.pory"
	.string "This cave is really unsafe if you don't\n"
	.string "have a pokemon.$"

MooncrestTown_RivalHouseSign_Text_0:
# 54 "data/maps/MooncrestTown/scripts.pory"
	.string "It's May's house.$"

MooncrestTown_RivalHouseSign_Text_1:
# 56 "data/maps/MooncrestTown/scripts.pory"
	.string "It's Brendan's house.$"

MooncrestTown_PlayerHouseSign_Text_0:
# 63 "data/maps/MooncrestTown/scripts.pory"
	.string "You should recognize your own home...$"

MooncrestTown_HemlocksLabSign_Text_0:
# 69 "data/maps/MooncrestTown/scripts.pory"
	.string "It's Hemlock's Lab$"

MooncrestTown_CrestfallCaveSign_Text_0:
# 75 "data/maps/MooncrestTown/scripts.pory"
	.string "Crestfall Cave. Rumor has it that\n"
	.string "there's rare Pokemon to be found in the\l"
	.string "elaborate caves inside$"

MooncrestTown_TownSign_Text_0:
# 81 "data/maps/MooncrestTown/scripts.pory"
	.string "Mooncrest Town, your home.$"
