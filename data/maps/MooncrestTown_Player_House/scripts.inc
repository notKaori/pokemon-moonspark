MooncrestTown_Player_House_MapScripts::
# 2 "data/maps/MooncrestTown_Player_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MooncrestTown_Player_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MooncrestTown_Player_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MooncrestTown_Player_House/scripts.pory"
	map_script_2 VAR_MOONCREST_INTRO_STATE, 2, MooncrestTown_Player_House_On_Frame_Table
	.2byte 0


MooncrestTown_Player_House_On_Frame_Table::
# 8 "data/maps/MooncrestTown_Player_House/scripts.pory"
	lockall
# 9 "data/maps/MooncrestTown_Player_House/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 10 "data/maps/MooncrestTown_Player_House/scripts.pory"
	setflag B_FLAG_SLEEP_CLAUSE
# 11 "data/maps/MooncrestTown_Player_House/scripts.pory"
	playse SE_PIN
# 12 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 13 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmovement 0
# 14 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 15 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmovement 0
# 16 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, MooncrestTown_Player_House_On_Frame_Table_Movement_0
# 17 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmovement 0
# 18 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement LOCALID_PLAYER, MooncrestTown_Player_House_On_Frame_Table_Movement_1
# 19 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmovement 0
# 20 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_On_Frame_Table_Text_0
# 21 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
# 22 "data/maps/MooncrestTown_Player_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitfanfare
# 24 "data/maps/MooncrestTown_Player_House/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 25 "data/maps/MooncrestTown_Player_House/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 26 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_On_Frame_Table_Text_1
# 27 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
# 28 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, MooncrestTown_Player_House_On_Frame_Table_Movement_2
# 29 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmovement 0
# 30 "data/maps/MooncrestTown_Player_House/scripts.pory"
	setvar VAR_MOONCREST_INTRO_STATE, 7
# 31 "data/maps/MooncrestTown_Player_House/scripts.pory"
	releaseall
	return


MooncrestTown_Player_House_TalkToMom::
# 35 "data/maps/MooncrestTown_Player_House/scripts.pory"
	lockall
# 36 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, MooncrestTown_Player_House_TalkToMom_Movement_0
# 37 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmovement 0
# 38 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MooncrestTown_Player_House_TalkToMom_2
MooncrestTown_Player_House_TalkToMom_1:
# 45 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_unset FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Player_House_TalkToMom_5
# 49 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Player_House_TalkToMom_6
MooncrestTown_Player_House_TalkToMom_4:
# 53 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, MooncrestTown_Player_House_TalkToMom_Movement_1
# 54 "data/maps/MooncrestTown_Player_House/scripts.pory"
	releaseall
	return

MooncrestTown_Player_House_TalkToMom_2:
# 39 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_0, MSGBOX_YESNO
# 40 "data/maps/MooncrestTown_Player_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Player_House_TalkToMom_10
MooncrestTown_Player_House_TalkToMom_9:
# 43 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_1

MooncrestTown_Player_House_TalkToMom_5:
# 46 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_1
# 47 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_4

MooncrestTown_Player_House_TalkToMom_6:
# 50 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_2
# 51 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_4

MooncrestTown_Player_House_TalkToMom_10:
	goto MooncrestTown_Player_House_TalkToMom_9


# 16 "data/maps/MooncrestTown_Player_House/scripts.pory"
MooncrestTown_Player_House_On_Frame_Table_Movement_0:
# 16 "data/maps/MooncrestTown_Player_House/scripts.pory"
	walk_down
# 16 "data/maps/MooncrestTown_Player_House/scripts.pory"
	walk_down
# 16 "data/maps/MooncrestTown_Player_House/scripts.pory"
	walk_down
# 16 "data/maps/MooncrestTown_Player_House/scripts.pory"
	face_left
	step_end

# 18 "data/maps/MooncrestTown_Player_House/scripts.pory"
MooncrestTown_Player_House_On_Frame_Table_Movement_1:
# 18 "data/maps/MooncrestTown_Player_House/scripts.pory"
	face_right
	step_end

# 28 "data/maps/MooncrestTown_Player_House/scripts.pory"
MooncrestTown_Player_House_On_Frame_Table_Movement_2:
# 28 "data/maps/MooncrestTown_Player_House/scripts.pory"
	walk_up
# 28 "data/maps/MooncrestTown_Player_House/scripts.pory"
	walk_up
# 28 "data/maps/MooncrestTown_Player_House/scripts.pory"
	walk_up
# 28 "data/maps/MooncrestTown_Player_House/scripts.pory"
	face_left
	step_end

# 36 "data/maps/MooncrestTown_Player_House/scripts.pory"
MooncrestTown_Player_House_TalkToMom_Movement_0:
# 36 "data/maps/MooncrestTown_Player_House/scripts.pory"
	face_player
	step_end

# 53 "data/maps/MooncrestTown_Player_House/scripts.pory"
MooncrestTown_Player_House_TalkToMom_Movement_1:
# 53 "data/maps/MooncrestTown_Player_House/scripts.pory"
	face_left
	step_end

MooncrestTown_Player_House_On_Frame_Table_Text_0:
# 20 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Hey {PLAYER}, Brendan was looking for\n"
	.string "you. You should head over to his place.\l"
	.string "Before you go though, you should take\l"
	.string "these. I have a feeling you'll be\l"
	.string "needing them.$"

MooncrestTown_Player_House_On_Frame_Table_Text_1:
# 26 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Recieved the Running Shoes$"

MooncrestTown_Player_House_TalkToMom_Text_0:
# 39 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "You look a little tired. Would you like to\n"
	.string "take a quick rest?$"

MooncrestTown_Player_House_TalkToMom_Text_1:
# 46 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Have you gone to talk to Brendan yet?$"

MooncrestTown_Player_House_TalkToMom_Text_2:
# 50 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "I heard you beat Brendan in your first\n"
	.string "trainer battle. I'm so proud of you\l"
	.string "honey.$"
