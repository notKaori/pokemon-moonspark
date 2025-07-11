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
	map_script_2 VAR_HEMLOCK_LAB_STATE, 3, MooncrestTown_Hemlocks_Lab_GetPokedex
	.2byte 0


MooncrestTown_Hemlocks_Lab_GetPokedex::
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 11 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return


MooncrestTown_Hemlocks_Lab_Handle_Rival::
# 15 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_Handle_Rival_1
# 18 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, MooncrestTown_Hemlocks_Lab_Handle_Rival_2
# 22 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_AT_LAB
	return

MooncrestTown_Hemlocks_Lab_Handle_Rival_1:
# 16 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_AT_LAB
	return

MooncrestTown_Hemlocks_Lab_Handle_Rival_2:
# 19 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_HIDE_BRENDAN_AT_LAB
	return


MooncrestTown_Hemlocks_Lab_MeetHemlock::
# 27 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_MeetHemlock_1
	return

MooncrestTown_Hemlocks_Lab_MeetHemlock_1:
# 28 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 29 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playse SE_PIN
# 30 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 31 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 32 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 33 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmovement 0
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Hemlocks_Lab_MeetHemlock_Movement_0
# 35 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_HemlocksLab_DeserveStarter
# 36 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
# 37 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 2
# 38 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 9
# 39 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_MET_HEMLOCK
# 40 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return


MooncrestTown_Hemlocks_Lab_TalkToHemlock::
# 45 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 46 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_TalkToHemlock_7
MooncrestTown_Hemlocks_Lab_TalkToHemlock_5:
# 49 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_TalkToHemlock_4
MooncrestTown_Hemlocks_Lab_TalkToHemlock_1:
# 52 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_TalkToHemlock_2:
# 47 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_Starter_Generation
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_3:
# 50 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_Give_Dex
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_4:
# 49 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, MooncrestTown_Hemlocks_Lab_TalkToHemlock_3
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_7:
# 46 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_TalkToHemlock_2
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_5


MooncrestTown_Hemlocks_Lab_Starter_Generation::
# 56 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	message MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_0
# 57 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	dynmultichoice 25, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, 0
# 58 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 0, MooncrestTown_Hemlocks_Lab_Starter_Generation_3
# 60 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 1, MooncrestTown_Hemlocks_Lab_Starter_Generation_4
# 61 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 2, MooncrestTown_Hemlocks_Lab_Starter_Generation_5
# 62 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 3, MooncrestTown_Hemlocks_Lab_Starter_Generation_6
# 63 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 4, MooncrestTown_Hemlocks_Lab_Starter_Generation_7
# 64 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 5, MooncrestTown_Hemlocks_Lab_Starter_Generation_8
# 65 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 6, MooncrestTown_Hemlocks_Lab_Starter_Generation_9
# 66 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 7, MooncrestTown_Hemlocks_Lab_Starter_Generation_10
# 67 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	case 8, MooncrestTown_Hemlocks_Lab_Starter_Generation_11
MooncrestTown_Hemlocks_Lab_Starter_Generation_1:
# 69 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	closemessage
	return

MooncrestTown_Hemlocks_Lab_Starter_Generation_3:
# 59 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_4:
# 60 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_5:
# 61 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_6:
# 62 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 3
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_7:
# 63 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 4
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_8:
# 64 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 5
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_9:
# 65 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 6
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_10:
# 66 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 7
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1

MooncrestTown_Hemlocks_Lab_Starter_Generation_11:
# 67 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 8
	goto MooncrestTown_Hemlocks_Lab_Starter_Generation_1


MooncrestTown_Hemlocks_Lab_Give_Dex::
# 73 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_Give_Dex_Text_0, MSGBOX_NPC
	return


MooncrestTown_Hemlocks_Lab_EventScript_Starter1::
# 77 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 78 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2
# 82 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 83 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 84 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6
# 111 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 112 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5:
# 114 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1:
# 116 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2:
# 79 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6:
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 86 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 87 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9
# 96 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_10
# 106 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 107 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9:
# 88 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 89 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2
# 90 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 3
# 91 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_WATER_STARTER
# 92 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 94 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_10:
# 97 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2
# 99 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 3
# 100 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_WATER_STARTER
# 101 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 103 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5


MooncrestTown_Hemlocks_Lab_EventScript_Starter2::
# 120 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 121 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2
# 125 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 126 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_0, MSGBOX_YESNO
# 127 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6
# 155 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 156 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5:
# 158 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1:
# 160 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2:
# 122 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6:
# 128 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 129 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 130 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9
# 139 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_10
# 149 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 150 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9:
# 131 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1
# 133 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 2
# 134 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_FIRE_STARTER
# 135 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 137 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_10:
# 140 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1
# 142 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 2
# 143 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_FIRE_STARTER
# 144 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 146 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5


MooncrestTown_Hemlocks_Lab_EventScript_Starter3::
# 164 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 165 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2
# 169 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 170 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_0, MSGBOX_YESNO
# 171 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5
# 201 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 202 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
# 203 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1:
# 207 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2:
# 166 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5:
# 172 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 174 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8
# 184 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9
# 195 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 196 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
# 197 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8:
# 175 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1
# 177 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 1
# 178 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_GRASS_STARTER
# 179 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 180 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
# 182 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9:
# 185 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1
# 187 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 1
# 188 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_GRASS_STARTER
# 189 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 190 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
# 192 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1


NicknamePartyMon::
# 230 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 231 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 235 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
	return

NicknamePartyMon_2:
# 232 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 233 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 239 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 240 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 243 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 244 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 245 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
	return

NicknameBoxMon_2:
# 241 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknameBoxMon_1


# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
MooncrestTown_Hemlocks_Lab_MeetHemlock_Movement_0:
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_right
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
# 34 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	walk_up
	step_end

MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_0:
# 56 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Would you like to choose the generation\n"
	.string "of starter you get?$"

MooncrestTown_Hemlocks_Lab_Give_Dex_Text_0:
# 73 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Brendan told me you beat him pretty\n"
	.string "good. I always knew you would be a good\l"
	.string "trainier. I have another gift for you.\l"
	.string "$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0:
# 79 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You already got a Starter$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_1:
# 83 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2:
# 89 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received Oshawott$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3:
# 107 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "No More Room$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_0:
# 126 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1:
# 132 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received Fennekin$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_0:
# 170 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1:
# 176 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received Sprigatito$"

NicknamePartyMon_Text_0:
# 230 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Give it a nickname?$"

MooncrestTown_Hemlocks_Lab_NotChosen::
# 249 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You did not choose the pokemon$"

MooncrestTown_HemlocksLab_DeserveStarter::
# 253 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Ah, hello there {PLAYER}! I was\n"
	.string "talking to your mom and we think its\l"
	.string "about time you get your own pokemon.\l"
	.string "You can choose from one that's on the\l"
	.string "table, or let me know if you want\l"
	.string "different options$"

ReceivedStarter::
# 257 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "That's a great choice. I'm sure you two\n"
	.string "will get along swimmingly. Why don't you\l"
	.string "go see what Brendan is up to, I think he\l"
	.string "went to check on Crestfall Cave for me.$"
