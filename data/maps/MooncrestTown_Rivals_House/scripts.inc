MooncrestTown_Rivals_House_MapScripts::
# 2 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MooncrestTown_Rivals_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MooncrestTown_Rivals_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	map_script_2 VAR_MOONCREST_HOUSES_STATE_RIVAL, 1, MooncrestTown_Rivals_House_EventScript_LookingForYou
	.2byte 0


MooncrestTown_Rivals_House_EventScript_LookingForYou::
# 8 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	lockall
# 9 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	playse SE_PIN
# 10 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 11 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 12 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 13 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 14 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 15 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 2, MooncrestTown_Rivals_House_EventScript_LookingForYou_Movement_0
# 16 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 17 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	msgbox MooncrestTown_Rivals_House_OhYoureTheNewNeighbor
# 18 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmessage
# 19 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 20 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	setvar VAR_MOONCREST_HOUSES_STATE_RIVAL, 2
# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 2, MooncrestTown_Rivals_House_EventScript_LookingForYou_Movement_1
# 22 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 23 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	releaseall
	return


MooncrestTown_Rivals_House_EventScript_TalkToMom::
# 28 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	lockall
# 29 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE, MooncrestTown_Rivals_House_EventScript_TalkToMom_2
# 33 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	msgbox MooncrestTown_Rivals_House_Hemlock_Looking
MooncrestTown_Rivals_House_EventScript_TalkToMom_1:
# 36 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	goto_if_unset FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE, MooncrestTown_Rivals_House_EventScript_TalkToMom_6
MooncrestTown_Rivals_House_EventScript_TalkToMom_5:
# 39 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	releaseall
	return

MooncrestTown_Rivals_House_EventScript_TalkToMom_2:
# 30 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	msgbox MooncrestTown_Rivals_House_Mom_Normal_Chatter
	goto MooncrestTown_Rivals_House_EventScript_TalkToMom_1

MooncrestTown_Rivals_House_EventScript_TalkToMom_6:
# 37 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	msgbox MooncrestTown_Rivals_House_Brendans_Room
	goto MooncrestTown_Rivals_House_EventScript_TalkToMom_5


MooncrestTown_Rivals_House_EventScript_TalkToBrendan::
# 43 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	lockall
# 44 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	playse SE_PIN
# 45 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 46 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 47 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 48 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 49 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	msgbox MooncrestTown_Rivals_House_Greeting_Brendan, MSGBOX_NPC
# 50 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MooncrestTown_Rivals_House_EventScript_TalkToBrendan_2
# 53 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq MooncrestTown_Rivals_House_EventScript_TalkToBrendan_3
# 56 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq MooncrestTown_Rivals_House_EventScript_TalkToBrendan_4
MooncrestTown_Rivals_House_EventScript_TalkToBrendan_1:
# 59 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	waitmovement 0
# 60 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	removeobject 1
# 61 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	playse SE_DOOR
# 62 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	setvar VAR_MOONCREST_HOUSES_STATE_RIVAL, 3
# 63 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	setvar VAR_MOONCREST_RIVAL_STATE, 3
# 64 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_CRESTFALL_CAVE
# 65 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	releaseall
	return

MooncrestTown_Rivals_House_EventScript_TalkToBrendan_2:
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 1, MooncrestTown_Rivals_House_EventScript_TalkToBrendan_Movement_0
	goto MooncrestTown_Rivals_House_EventScript_TalkToBrendan_1

MooncrestTown_Rivals_House_EventScript_TalkToBrendan_3:
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 1, MooncrestTown_Rivals_House_EventScript_TalkToBrendan_Movement_1
	goto MooncrestTown_Rivals_House_EventScript_TalkToBrendan_1

MooncrestTown_Rivals_House_EventScript_TalkToBrendan_4:
# 57 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	applymovement 1, MooncrestTown_Rivals_House_EventScript_TalkToBrendan_Movement_1
	goto MooncrestTown_Rivals_House_EventScript_TalkToBrendan_1


MooncrestTown_Rivals_House_EventScript_TalkToSister::
# 69 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	msgbox MooncrestTown_Rivals_House_Sister
	return


# 15 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
MooncrestTown_Rivals_House_EventScript_LookingForYou_Movement_0:
# 15 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 15 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 15 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 15 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_left
	step_end

# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
MooncrestTown_Rivals_House_EventScript_LookingForYou_Movement_1:
# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_right
# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_up
# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_up
# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_up
# 21 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	face_left
	step_end

# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
MooncrestTown_Rivals_House_EventScript_TalkToBrendan_Movement_0:
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_left
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_right
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_right
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_right
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 51 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
	step_end

# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
MooncrestTown_Rivals_House_EventScript_TalkToBrendan_Movement_1:
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_right
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_right
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
# 54 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	walk_down
	step_end

MooncrestTown_Rivals_House_OhYoureTheNewNeighbor::
# 72 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	.string "Oh, hello {PLAYER}. Brendan was\n"
	.string "looking for you. He should be in his room$"

MooncrestTown_Rivals_House_Hemlock_Looking::
# 76 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	.string "Brendan went off to explore Crestfall\n"
	.string "Cave, but my wife was looking for you\l"
	.string "too.$"

MooncrestTown_Rivals_House_Brendans_Room::
# 80 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	.string "Brendan is in his room$"

MooncrestTown_Rivals_House_Mom_Normal_Chatter::
# 84 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	.string "Its good to see you {PLAYER}. I hope\n"
	.string "you and Brendan are having a good time\l"
	.string "on your adventures$"

MooncrestTown_Rivals_House_Sister::
# 88 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	.string "I can't wait til I can get my own\n"
	.string "pokemon$"

MooncrestTown_Rivals_House_Greeting_Brendan::
# 92 "data/maps/MooncrestTown_Rivals_House/scripts.pory"
	.string "Oh! You surprised me. Sorry, I was just\n"
	.string "organizing my boxes. My mom is in her\l"
	.string "lab, she has a gift for you.\l"
	.string "… … … … … … … … …\p"
	.string "Oh, no my other mom, the Professor. I\n"
	.string "have some stuff to do so I'll see you\l"
	.string "later.\l"
	.string "Come meet me in Crestfall Cave after\l"
	.string "you talk to the Professor$"
