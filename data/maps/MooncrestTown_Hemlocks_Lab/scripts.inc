MooncrestTown_Hemlocks_Lab_MapScripts::
# 2 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MooncrestTown_Hemlocks_Lab_Handle_Rival
# 3 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MooncrestTown_Hemlocks_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MooncrestTown_Hemlocks_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	map_script_2 VAR_HEMLOCK_LAB_STATE, 0, MooncrestTown_Hemlocks_Lab_MeetHemlock
# 5 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	map_script_2 VAR_HEMLOCK_LAB_STATE, 4, MooncrestTown_Hemlocks_Lab_GetPokedex
	.2byte 0


MooncrestTown_Hemlocks_Lab_GetPokedex::
# 9 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_0
# 11 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 12 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_1
# 13 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GetPokedex_Text_0
# 14 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 15 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	message MooncrestTown_Hemlocks_Lab_GetPokedex_Text_1
# 17 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitfanfare
# 18 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	closemessage
# 19 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 20 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 21 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 22 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 23 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 24 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	special EnableNationalPokedex
# 25 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GetPokedex_Text_2
# 26 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 27 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 5, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_2
# 28 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_3
# 29 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 30 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GetPokedex_Text_3
# 31 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 5, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_4
# 33 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 5
# 35 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 5
# 36 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_HEMLOCK_LAB_DEX, 1
# 37 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return


MooncrestTown_Hemlocks_Lab_Handle_Rival::
# 41 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_Handle_Rival_1
# 44 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, MooncrestTown_Hemlocks_Lab_Handle_Rival_2
# 48 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_AT_LAB
	return

MooncrestTown_Hemlocks_Lab_Handle_Rival_1:
# 42 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_AT_LAB
	return

MooncrestTown_Hemlocks_Lab_Handle_Rival_2:
# 45 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_AT_LAB
	return


MooncrestTown_Hemlocks_Lab_MeetHemlock::
# 53 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 9
# 54 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_MeetHemlock_1
	return

MooncrestTown_Hemlocks_Lab_MeetHemlock_1:
# 55 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 56 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playse SE_PIN
# 57 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 58 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 59 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 60 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 61 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_0
# 62 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_HemlocksLab_DeserveStarter
# 63 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 64 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 2
# 65 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_MET_HEMLOCK
# 66 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return


MooncrestTown_Hemlocks_Lab_TalkToHemlock::
# 71 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 72 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_TalkToHemlock_7
MooncrestTown_Hemlocks_Lab_TalkToHemlock_5:
# 75 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_TalkToHemlock_4
MooncrestTown_Hemlocks_Lab_TalkToHemlock_1:
# 78 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_TalkToHemlock_2:
# 73 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_Starter_Generation
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_3:
# 76 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GetPokedex
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_4:
# 75 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, MooncrestTown_Hemlocks_Lab_TalkToHemlock_3
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_7:
# 72 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_TalkToHemlock_2
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_5


MooncrestTown_Hemlocks_Lab_Starter_Generation::
# 82 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_0, MSGBOX_YESNO
# 83 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MooncrestTown_Hemlocks_Lab_Starter_Generation_2
# 118 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 9
# 119 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_12
MooncrestTown_Hemlocks_Lab_Starter_Generation_1:
# 121 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_13
	return

MooncrestTown_Hemlocks_Lab_Starter_Generation_2:
# 84 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	message MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_1
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	dynmultichoice 25, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_2, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_3, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_4, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_5, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_6, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_7, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_8, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_9, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_10
# 86 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 0, MooncrestTown_Hemlocks_Lab_Starter_Generation_7
# 90 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 1, MooncrestTown_Hemlocks_Lab_Starter_Generation_8
# 93 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 2, MooncrestTown_Hemlocks_Lab_Starter_Generation_9
# 96 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 3, MooncrestTown_Hemlocks_Lab_Starter_Generation_10
# 99 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 4, MooncrestTown_Hemlocks_Lab_Starter_Generation_11
# 102 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 5, MooncrestTown_Hemlocks_Lab_Starter_Generation_12
# 105 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 6, MooncrestTown_Hemlocks_Lab_Starter_Generation_13
# 108 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 7, MooncrestTown_Hemlocks_Lab_Starter_Generation_14
# 111 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 8, MooncrestTown_Hemlocks_Lab_Starter_Generation_15
MooncrestTown_Hemlocks_Lab_Starter_Generation_5:
# 115 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	closemessage
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_7:
# 88 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
# 89 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_2
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_8:
# 91 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
# 92 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_3
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_9:
# 94 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
# 95 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_4
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_10:
# 97 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 3
# 98 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_5
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_11:
# 100 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 4
# 101 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_6
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_12:
# 103 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 5
# 104 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_7
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_13:
# 106 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 6
# 107 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_11
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_14:
# 109 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 7
# 110 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_9
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5

MooncrestTown_Hemlocks_Lab_Starter_Generation_15:
# 112 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 8
# 113 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferstring STR_VAR_1, MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_10
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_5


MooncrestTown_Hemlocks_Lab_GiveStarter::
# 126 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 127 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GiveStarter_Text_0, MSGBOX_YESNO
# 128 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_GiveStarter_2
# 159 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 160 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
MooncrestTown_Hemlocks_Lab_GiveStarter_1:
# 162 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
	return

MooncrestTown_Hemlocks_Lab_GiveStarter_2:
# 129 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 130 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 5
# 131 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_GiveStarter_6
# 138 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_GiveStarter_7
# 146 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 147 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GiveStarter_Text_2
# 148 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	clearflag FLAG_WATER_STARTER
# 149 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	clearflag FLAG_FIRE_STARTER
# 150 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	clearflag FLAG_GRASS_STARTER
MooncrestTown_Hemlocks_Lab_GiveStarter_5:
# 156 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_PostSelection
	goto MooncrestTown_Hemlocks_Lab_GiveStarter_1

MooncrestTown_Hemlocks_Lab_GiveStarter_6:
# 132 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GiveStarter_Text_1
# 134 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject VAR_TEMP_0
# 135 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 3
# 136 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_GiveStarter_5

MooncrestTown_Hemlocks_Lab_GiveStarter_7:
# 139 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GiveStarter_Text_1
# 141 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject VAR_TEMP_0
# 142 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 3
# 143 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_GiveStarter_5


MooncrestTown_Hemlocks_Lab_PostSelection::
# 166 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_PostSelection_1
	return

MooncrestTown_Hemlocks_Lab_PostSelection_1:
# 167 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	switch VAR_STARTER_CHOICE
# 168 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 0, MooncrestTown_Hemlocks_Lab_PostSelection_4
# 174 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 1, MooncrestTown_Hemlocks_Lab_PostSelection_5
# 180 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 2, MooncrestTown_Hemlocks_Lab_PostSelection_6
	return

MooncrestTown_Hemlocks_Lab_PostSelection_4:
# 169 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_3
# 170 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 171 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveItems
# 172 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_PostSelection_Movement_0
# 173 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement
	return

MooncrestTown_Hemlocks_Lab_PostSelection_5:
# 175 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_PostSelection_Movement_1
# 176 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 177 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveItems
# 178 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_PostSelection_Movement_2
# 179 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement
	return

MooncrestTown_Hemlocks_Lab_PostSelection_6:
# 181 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_PostSelection_Movement_3
# 182 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 183 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveItems
# 184 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, MooncrestTown_Hemlocks_Lab_PostSelection_Movement_4
# 185 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement
	return


MooncrestTown_Hemlocks_Lab_EventScript_Starter1::
# 192 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 193 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 194 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2
# 198 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_WATER_STARTER
# 199 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 200 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 201 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 0, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6
# 205 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 1, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_7
# 209 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 2, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_8
# 213 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 3, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9
# 217 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 4, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_10
# 221 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 5, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_11
# 225 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 6, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_12
# 229 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 7, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_13
# 233 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 8, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_14
# 237 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 9, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_15
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1:
# 243 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2:
# 195 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6:
# 202 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 203 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 204 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_7:
# 206 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 207 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 208 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_8:
# 210 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 211 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 212 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9:
# 214 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
# 215 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_PIPLUP
# 216 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_10:
# 218 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OSHAWOTT
# 219 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_OSHAWOTT
# 220 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_11:
# 222 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
# 223 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_FROAKIE
# 224 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_12:
# 226 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POPPLIO
# 227 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_POPPLIO
# 228 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_13:
# 230 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SOBBLE
# 231 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SOBBLE
# 232 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_14:
# 234 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QUAXLY
# 235 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_QUAXLY
# 236 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_15:
# 238 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OSHAWOTT
# 239 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_OSHAWOTT
# 240 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1


MooncrestTown_Hemlocks_Lab_EventScript_Starter2::
# 246 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 247 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 248 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2
# 252 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_FIRE_STARTER
# 253 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 254 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 255 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 0, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6
# 259 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 1, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_7
# 263 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 2, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_8
# 267 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 3, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9
# 271 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 4, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_10
# 275 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 5, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_11
# 279 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 6, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_12
# 283 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 7, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_13
# 287 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 8, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_14
# 291 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 9, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_15
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1:
# 297 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2:
# 249 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6:
# 256 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 257 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 258 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_7:
# 260 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 261 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 262 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_8:
# 264 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 265 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 266 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9:
# 268 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
# 269 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIMCHAR
# 270 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_10:
# 272 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TEPIG
# 273 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TEPIG
# 274 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_11:
# 276 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
# 277 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_FENNEKIN
# 278 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_12:
# 280 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
# 281 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_LITTEN
# 282 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_13:
# 284 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SCORBUNNY
# 285 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SCORBUNNY
# 286 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_14:
# 288 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FUECOCO
# 289 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_FUECOCO
# 290 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_15:
# 292 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
# 293 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_FENNEKIN
# 294 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1


MooncrestTown_Hemlocks_Lab_EventScript_Starter3::
# 301 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 302 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 303 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2
# 307 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_GRASS_STARTER
# 308 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 309 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 310 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 0, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_6
# 314 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 1, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_7
# 318 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 2, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8
# 322 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 3, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9
# 326 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 4, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_10
# 330 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 5, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_11
# 334 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 6, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_12
# 338 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 7, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_13
# 342 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 8, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_14
# 346 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 9, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_15
MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1:
# 352 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2:
# 304 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_6:
# 311 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 312 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 313 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_7:
# 315 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 316 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 317 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8:
# 319 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 320 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 321 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9:
# 323 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
# 324 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TURTWIG
# 325 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_10:
# 327 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNIVY
# 328 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SNIVY
# 329 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_11:
# 331 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
# 332 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHESPIN
# 333 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_12:
# 335 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROWLET
# 336 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_ROWLET
# 337 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_13:
# 339 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROOKEY
# 340 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_GROOKEY
# 341 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_14:
# 343 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPRIGATITO
# 344 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SPRIGATITO
# 345 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_15:
# 347 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPRIGATITO
# 348 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SPRIGATITO
# 349 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_GiveStarter
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1


DontLeave::
# 356 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 357 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, DontLeave_Movement_0
# 358 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox DontLeave_Text_0
# 359 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 360 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return


MooncrestTown_Hemlocks_Lab_GiveItems::
# 364 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_GiveItems_Text_0
# 365 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 366 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitfanfare
# 368 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	giveitem ITEM_REPEL, 150
# 369 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 150
	return


NicknamePartyMon::
# 373 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 374 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 378 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
	return

NicknamePartyMon_2:
# 375 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 376 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 382 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 383 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 386 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 387 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 388 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
	return

NicknameBoxMon_2:
# 384 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknameBoxMon_1


# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_0:
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
	step_end

# 12 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_1:
# 12 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 27 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_2:
# 27 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_in_place_right
	step_end

# 28 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_3:
# 28 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	face_left
	step_end

# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_GetPokedex_Movement_4:
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_down
	step_end

# 172 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_PostSelection_Movement_0:
# 172 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	face_down
	step_end

# 175 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_PostSelection_Movement_1:
# 175 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_left
	step_end

# 178 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_PostSelection_Movement_2:
# 178 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 178 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	face_down
	step_end

# 181 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_PostSelection_Movement_3:
# 181 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_left
# 181 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_left
	step_end

# 184 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_PostSelection_Movement_4:
# 184 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 184 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 184 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	face_down
	step_end

# 357 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
DontLeave_Movement_0:
# 357 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
	step_end

MooncrestTown_Hemlocks_Lab_GetPokedex_Text_0:
# 13 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Its time for you and Brendan to go out\n"
	.string "and see the world. I know you'll do great\l"
	.string "out there.\l"
	.string "Go, catch all the Pokemon you can and\l"
	.string "become Champion. Do your mom and I\l"
	.string "proud.$"

MooncrestTown_Hemlocks_Lab_GetPokedex_Text_1:
# 16 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "{PLAYER} received the Pokedex!$"

MooncrestTown_Hemlocks_Lab_GetPokedex_Text_2:
# 25 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "This little doodad will keep track of\n"
	.string "the pokemon you see and catch. Its an\l"
	.string "electronic encyclopedia for Pokemon\l"
	.string "knowledge.\l"
	.string "If you don't mind I'd like if you could\l"
	.string "collect as much data as possible and\l"
	.string "bring it back to me periodically. I'll\l"
	.string "give you rewards based on how much\l"
	.string "progress you make.\l"
	.string "Go get'em kiddo.$"

MooncrestTown_Hemlocks_Lab_GetPokedex_Text_3:
# 30 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "So now we both have a Pokedex. We've\n"
	.string "got a big adventure ahead of us\l"
	.string "{PLAYER}. I'm looking forward to\l"
	.string "seeing how much you progress along the\l"
	.string "way.\l"
	.string "You'll be seeing more of me$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_0:
# 82 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Would you like to choose the generation\n"
	.string "of starter you get?$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_1:
# 84 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Which would you like?$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_2:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Kanto$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_3:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Johto$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_4:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Hoenn$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_5:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Sinnoh$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_6:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Unova$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_7:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Kalos$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_8:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Alola$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_9:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Galar$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_10:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Paldea$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_11:
# 107 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Alolo$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_12:
# 119 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Default$"

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_13:
# 121 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Ok, you've selected {STR_VAR_1} for\n"
	.string "your starters.$"

MooncrestTown_Hemlocks_Lab_GiveStarter_Text_0:
# 127 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

MooncrestTown_Hemlocks_Lab_GiveStarter_Text_1:
# 133 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received {STR_VAR_1}$"

MooncrestTown_Hemlocks_Lab_GiveStarter_Text_2:
# 147 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "No More Room$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0:
# 195 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You already got a Starter$"

DontLeave_Text_0:
# 358 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You can't leave right now$"

MooncrestTown_Hemlocks_Lab_GiveItems_Text_0:
# 364 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You should take these as well. When I\n"
	.string "get less lazy they will be better but\l"
	.string "its what you get for now don't complain.$"

NicknamePartyMon_Text_0:
# 373 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Give it a nickname?$"

MooncrestTown_Hemlocks_Lab_NotChosen::
# 392 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You did not choose the {STR_VAR_1}$"

MooncrestTown_HemlocksLab_DeserveStarter::
# 396 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Ah, hello there {PLAYER}! I was\n"
	.string "talking to your mom and we think its\l"
	.string "about time you get your own pokemon.\l"
	.string "You can choose from one that's on the\l"
	.string "table, or let me know if you want\l"
	.string "different options$"

ReceivedStarter::
# 400 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "That's a great choice. I'm sure you two\n"
	.string "will get along swimmingly. Why don't you\l"
	.string "go see what Brendan is up to, I think he\l"
	.string "went to check on Crestfall Cave for me.$"
