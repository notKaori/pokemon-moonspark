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
	setflag FLAG_MET_HEMLOCK
# 39 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return


MooncrestTown_Hemlocks_Lab_TalkToHemlock::
# 44 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 45 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Hemlocks_Lab_TalkToHemlock_3
MooncrestTown_Hemlocks_Lab_TalkToHemlock_1:
# 48 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_TalkToHemlock_2:
# 46 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call MooncrestTown_Hemlocks_Lab_Starter_Generation
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1

MooncrestTown_Hemlocks_Lab_TalkToHemlock_3:
# 45 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, MooncrestTown_Hemlocks_Lab_TalkToHemlock_2
	goto MooncrestTown_Hemlocks_Lab_TalkToHemlock_1


MooncrestTown_Hemlocks_Lab_Starter_Generation::
# 52 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_Starter_Generation_Text_0, MSGBOX_YESNO
	return


MooncrestTown_Hemlocks_Lab_EventScript_Starter1::
# 56 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 57 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2
# 61 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 62 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 63 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6
# 90 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 91 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5:
# 93 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1:
# 95 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2:
# 58 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6:
# 64 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 65 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 66 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9
# 75 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_10
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 86 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9:
# 67 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2
# 69 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 3
# 70 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_WATER_STARTER
# 71 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 73 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_10:
# 76 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 77 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2
# 78 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 3
# 79 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_WATER_STARTER
# 80 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 82 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5


MooncrestTown_Hemlocks_Lab_EventScript_Starter2::
# 99 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 100 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2
# 104 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 105 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_0, MSGBOX_YESNO
# 106 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6
# 134 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 135 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5:
# 137 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1:
# 139 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2:
# 101 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6:
# 107 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 108 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 109 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9
# 118 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_10
# 128 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 129 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9:
# 110 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1
# 112 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 2
# 113 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_FIRE_STARTER
# 114 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 116 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_10:
# 119 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1
# 121 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 2
# 122 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_FIRE_STARTER
# 123 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 125 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5


MooncrestTown_Hemlocks_Lab_EventScript_Starter3::
# 143 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	lockall
# 144 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2
# 148 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 149 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_0, MSGBOX_YESNO
# 150 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5
# 180 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 181 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_NotChosen
# 182 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1:
# 186 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	releaseall
	return

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2:
# 145 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5:
# 151 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 152 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 153 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8
# 163 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9
# 174 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 175 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
# 176 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	waitmessage
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8:
# 154 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1
# 156 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 1
# 157 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_GRASS_STARTER
# 158 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 159 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
# 161 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9:
# 164 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1
# 166 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	removeobject 1
# 167 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setflag FLAG_GRASS_STARTER
# 168 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 169 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
# 171 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1


NicknamePartyMon::
# 209 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 210 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 214 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
	return

NicknamePartyMon_2:
# 211 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 212 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 218 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 219 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 222 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 223 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	hidemonpic
# 224 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	setvar VAR_MOONCREST_TOWN_STATE, 2
	return

NicknameBoxMon_2:
# 220 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
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
# 52 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Would you like to choose the generation\n"
	.string "of starter you get?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0:
# 58 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You already got a Starter$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_1:
# 62 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2:
# 68 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received Oshawott$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3:
# 86 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "No More Room$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_0:
# 105 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1:
# 111 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received Fennekin$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_0:
# 149 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1:
# 155 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Received Sprigatito$"

NicknamePartyMon_Text_0:
# 209 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Give it a nickname?$"

MooncrestTown_Hemlocks_Lab_NotChosen::
# 228 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "You did not choose the pokemon$"

MooncrestTown_HemlocksLab_DeserveStarter::
# 232 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "Ah, hello there {PLAYER}! I was\n"
	.string "talking to your mom and we think its\l"
	.string "about time you get your own pokemon.\l"
	.string "You can choose from one that's on the\l"
	.string "table, or let me know if you want\l"
	.string "different options$"

ReceivedStarter::
# 236 "data/maps/MooncrestTown_Hemlocks_Lab/scripts.pory"
	.string "That's a great choice. I'm sure you two\n"
	.string "will get along swimmingly. Why don't you\l"
	.string "go see what Brendan is up to, I think he\l"
	.string "went to check on Crestfall Cave for me.$"
