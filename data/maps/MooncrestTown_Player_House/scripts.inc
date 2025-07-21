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
# 56 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_unset FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Player_House_TalkToMom_5
# 60 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Player_House_TalkToMom_7
MooncrestTown_Player_House_TalkToMom_4:
# 64 "data/maps/MooncrestTown_Player_House/scripts.pory"
	applymovement 1, MooncrestTown_Player_House_TalkToMom_Movement_1
# 65 "data/maps/MooncrestTown_Player_House/scripts.pory"
	releaseall
	return

MooncrestTown_Player_House_TalkToMom_2:
# 39 "data/maps/MooncrestTown_Player_House/scripts.pory"
	compare FLAG_ADVENTURE_STARTED, TRUE
	goto_if_eq MooncrestTown_Player_House_TalkToMom_13
MooncrestTown_Player_House_TalkToMom_11:
# 44 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_1, MSGBOX_YESNO
# 45 "data/maps/MooncrestTown_Player_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Player_House_TalkToMom_16
# 52 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_3
	goto MooncrestTown_Player_House_TalkToMom_1

MooncrestTown_Player_House_TalkToMom_5:
# 57 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_4
# 58 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_4

MooncrestTown_Player_House_TalkToMom_6:
# 61 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_5
# 62 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_4

MooncrestTown_Player_House_TalkToMom_7:
# 60 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, MooncrestTown_Player_House_TalkToMom_6
	goto MooncrestTown_Player_House_TalkToMom_4

MooncrestTown_Player_House_TalkToMom_12:
# 40 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_0
# 41 "data/maps/MooncrestTown_Player_House/scripts.pory"
	setflag FLAG_TALKED_TO_MOM
# 42 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_11

MooncrestTown_Player_House_TalkToMom_13:
# 39 "data/maps/MooncrestTown_Player_House/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_MOM, MooncrestTown_Player_House_TalkToMom_12
	goto MooncrestTown_Player_House_TalkToMom_11

MooncrestTown_Player_House_TalkToMom_16:
# 46 "data/maps/MooncrestTown_Player_House/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 47 "data/maps/MooncrestTown_Player_House/scripts.pory"
	special HealPlayerParty
# 48 "data/maps/MooncrestTown_Player_House/scripts.pory"
	msgbox MooncrestTown_Player_House_TalkToMom_Text_2
# 49 "data/maps/MooncrestTown_Player_House/scripts.pory"
	waitmessage
	goto MooncrestTown_Player_House_TalkToMom_1


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

# 64 "data/maps/MooncrestTown_Player_House/scripts.pory"
MooncrestTown_Player_House_TalkToMom_Movement_1:
# 64 "data/maps/MooncrestTown_Player_House/scripts.pory"
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
# 40 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Look at you, my little {PLAYER}....\n"
	.string "All grown up and fully equipped to go\l"
	.string "take on the world. I'm so proud of you.$"

MooncrestTown_Player_House_TalkToMom_Text_1:
# 44 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "You look a little tired. Would you like to\n"
	.string "take a quick rest?$"

MooncrestTown_Player_House_TalkToMom_Text_2:
# 48 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Don't stay gone too long, you hear?$"

MooncrestTown_Player_House_TalkToMom_Text_3:
# 52 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Come back home and show me all your new\n"
	.string "Pokemon sometimes, I'd love to see them\l"
	.string "all.$"

MooncrestTown_Player_House_TalkToMom_Text_4:
# 57 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "Have you gone to talk to Brendan yet?$"

MooncrestTown_Player_House_TalkToMom_Text_5:
# 61 "data/maps/MooncrestTown_Player_House/scripts.pory"
	.string "I heard you beat Brendan in your first\n"
	.string "trainer battle. I'm so proud of you\l"
	.string "honey. I heard the Professor had\l"
	.string "something for you.$"
