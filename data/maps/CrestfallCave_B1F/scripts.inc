# 1 "data/maps/CrestfallCave_B1F/scripts.pory"

# 2 "data/maps/CrestfallCave_B1F/scripts.pory"
CrestfallCave_B1F_MapScripts::
# 3 "data/maps/CrestfallCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CrestfallCave_B1F_OnResume
# 4 "data/maps/CrestfallCave_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/CrestfallCave_B1F/scripts.pory"

# 6 "data/maps/CrestfallCave_B1F/scripts.pory"
CrestfallCave_B1F_OnResume:
# 7 "data/maps/CrestfallCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRESTFALL_CAVE_EARTH
# 8 "data/maps/CrestfallCave_B1F/scripts.pory"
	end
# 9 "data/maps/CrestfallCave_B1F/scripts.pory"

# 10 "data/maps/CrestfallCave_B1F/scripts.pory"
CrestfallCave_B1F_EventScript_FallThroughIce::
# 11 "data/maps/CrestfallCave_B1F/scripts.pory"
	lockall
# 12 "data/maps/CrestfallCave_B1F/scripts.pory"
	delay 20
# 13 "data/maps/CrestfallCave_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, CrestfallCave_B1F_Movement_FallThroughIce
# 14 "data/maps/CrestfallCave_B1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/CrestfallCave_B1F/scripts.pory"
	playse SE_FALL
# 16 "data/maps/CrestfallCave_B1F/scripts.pory"
	delay 60
# 17 "data/maps/CrestfallCave_B1F/scripts.pory"
	warphole MAP_CRESTFALL_CAVE_B2F
# 18 "data/maps/CrestfallCave_B1F/scripts.pory"
	waitstate
# 19 "data/maps/CrestfallCave_B1F/scripts.pory"
	end
# 20 "data/maps/CrestfallCave_B1F/scripts.pory"

# 21 "data/maps/CrestfallCave_B1F/scripts.pory"
	
# 22 "data/maps/CrestfallCave_B1F/scripts.pory"
CrestfallCave_B1F_Movement_FallThroughIce:
# 23 "data/maps/CrestfallCave_B1F/scripts.pory"
	set_invisible
# 24 "data/maps/CrestfallCave_B1F/scripts.pory"
	step_end

CrestfallCave_B1F_EventScript_Rival::
# 29 "data/maps/CrestfallCave_B1F/scripts.pory"
	lockall
# 30 "data/maps/CrestfallCave_B1F/scripts.pory"
	msgbox CrestfallCave_B1F_Text_BrendanCrestfallCavePokemon, MSGBOX_DEFAULT
# 31 "data/maps/CrestfallCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 32 "data/maps/CrestfallCave_B1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 33 "data/maps/CrestfallCave_B1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/CrestfallCave_B1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 35 "data/maps/CrestfallCave_B1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/CrestfallCave_B1F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 37 "data/maps/CrestfallCave_B1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/CrestfallCave_B1F/scripts.pory"
	msgbox CrestfallCave_B1F_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 39 "data/maps/CrestfallCave_B1F/scripts.pory"
	switch VAR_STARTER_MON
# 40 "data/maps/CrestfallCave_B1F/scripts.pory"
	case 0, CrestfallCave_B1F_EventScript_Rival_3
# 41 "data/maps/CrestfallCave_B1F/scripts.pory"
	case 1, CrestfallCave_B1F_EventScript_Rival_4
# 42 "data/maps/CrestfallCave_B1F/scripts.pory"
	case 2, CrestfallCave_B1F_EventScript_Rival_5
CrestfallCave_B1F_EventScript_Rival_1:
# 44 "data/maps/CrestfallCave_B1F/scripts.pory"
	releaseall
	return

CrestfallCave_B1F_EventScript_Rival_3:
# 40 "data/maps/CrestfallCave_B1F/scripts.pory"
	call CrestfallCave_B1F_EventScript_StartBrendanBattleTreecko
	goto CrestfallCave_B1F_EventScript_Rival_1

CrestfallCave_B1F_EventScript_Rival_4:
# 41 "data/maps/CrestfallCave_B1F/scripts.pory"
	call CrestfallCave_B1F_EventScript_StartBrendanBattleTorchic
	goto CrestfallCave_B1F_EventScript_Rival_1

CrestfallCave_B1F_EventScript_Rival_5:
# 42 "data/maps/CrestfallCave_B1F/scripts.pory"
	call CrestfallCave_B1F_EventScript_StartBrendanBattleMudkip
	goto CrestfallCave_B1F_EventScript_Rival_1


CrestfallCave_B1F_EventScript_StartBrendanBattleTreecko::
# 49 "data/maps/CrestfallCave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_CRESTFALL_CAVE_B1F_TREECKO, CrestfallCave_B1F_Text_BrendanDefeated
# 50 "data/maps/CrestfallCave_B1F/scripts.pory"
	call CrestfallCave_B1F_EventScript_AfterBrendanBattle
	return


CrestfallCave_B1F_EventScript_StartBrendanBattleTorchic::
# 55 "data/maps/CrestfallCave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_CRESTFALL_CAVE_B1F_TORCHIC, CrestfallCave_B1F_Text_BrendanDefeated
# 56 "data/maps/CrestfallCave_B1F/scripts.pory"
	call CrestfallCave_B1F_EventScript_AfterBrendanBattle
	return


CrestfallCave_B1F_EventScript_StartBrendanBattleMudkip::
# 61 "data/maps/CrestfallCave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_CRESTFALL_CAVE_B1F_MUDKIP, CrestfallCave_B1F_Text_BrendanDefeated
# 62 "data/maps/CrestfallCave_B1F/scripts.pory"
	call CrestfallCave_B1F_EventScript_AfterBrendanBattle
	return


CrestfallCave_B1F_EventScript_AfterBrendanBattle::
# 66 "data/maps/CrestfallCave_B1F/scripts.pory"
	msgbox CrestfallCave_B1F_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	applymovement 1, CrestfallCave_B1F_EventScript_AfterBrendanBattle_Movement_0
# 68 "data/maps/CrestfallCave_B1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/CrestfallCave_B1F/scripts.pory"
	removeobject 1
# 70 "data/maps/CrestfallCave_B1F/scripts.pory"
	setvar VAR_HEMLOCK_LAB_STATE, 4
# 71 "data/maps/CrestfallCave_B1F/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_CRESTFALL_CAVE
# 72 "data/maps/CrestfallCave_B1F/scripts.pory"
	clearflag FLAG_HIDE_BRENDAN_AT_LAB
	return


# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
CrestfallCave_B1F_EventScript_AfterBrendanBattle_Movement_0:
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_right
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_right
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_right
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_right
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
# 67 "data/maps/CrestfallCave_B1F/scripts.pory"
	walk_down
	step_end

CrestfallCave_B1F_Text_BrendanDefeated::
# 75 "data/maps/CrestfallCave_B1F/scripts.pory"
	.string "You're better than I thought you'd be.$"

CrestfallCave_B1F_Text_BrendanTimeToHeadBack::
# 79 "data/maps/CrestfallCave_B1F/scripts.pory"
	.string "I can tell you're going to be a great\n"
	.string "trainer.\l"
	.string "Mom was talking about having another\l"
	.string "gift for you, why don't you meet me back\l"
	.string "at the Lab.$"

CrestfallCave_B1F_Text_BrendanCrestfallCavePokemon::
# 83 "data/maps/CrestfallCave_B1F/scripts.pory"
	.string "Interesting, so different Pokemon live\n"
	.string "on each floor...$"

CrestfallCave_B1F_Text_BrendanLetsBattle::
# 87 "data/maps/CrestfallCave_B1F/scripts.pory"
	.string "If you're here that means mom gave you\n"
	.string "a Pokemon, eh?\l"
	.string "Well why don't we gauge how good of a\l"
	.string "Trainer you are.$"
