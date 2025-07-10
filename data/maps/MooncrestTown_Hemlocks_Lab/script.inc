MooncrestTown_Hemlocks_Lab_MapScripts::
	.byte 0


MooncrestTown_Hemlocks_Lab_EventScript_Starter1::
# 4 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	lockall
# 5 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2
# 9 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_1, MSGBOX_YESNO
# 11 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5:
# 35 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1:
# 37 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	releaseall
	end

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_2:
# 6 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_6:
# 12 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	givemon SPECIES_OSHAWOTT, 5
# 13 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_8
# 21 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9
# 30 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	hidemonpic
# 31 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_8:
# 14 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2
# 16 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	removeobject 1
# 17 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_WATER_STARTER
# 18 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_SARTER_GIVEN
# 19 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_9:
# 22 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2
# 24 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	removeobject 1
# 25 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_WATER_STARTER
# 26 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_SARTER_GIVEN
# 27 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter1_5


MooncrestTown_Hemlocks_Lab_EventScript_Starter2::
# 42 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	lockall
# 43 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2
# 47 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 48 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_0, MSGBOX_YESNO
# 49 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5:
# 73 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1:
# 75 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	releaseall
	end

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_2:
# 44 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_6:
# 50 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	givemon SPECIES_TORCHIC, 5
# 51 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_8
# 59 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9
# 68 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	hidemonpic
# 69 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_8:
# 52 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1
# 54 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	removeobject 1
# 55 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_FIRE_STARTER
# 56 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_SARTER_GIVEN
# 57 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_9:
# 60 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1
# 62 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	removeobject 1
# 63 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_FIRE_STARTER
# 64 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_SARTER_GIVEN
# 65 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter2_5


MooncrestTown_Hemlocks_Lab_EventScript_Starter3::
# 80 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	lockall
# 81 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	goto_if_set FLAG_STARTER_GIVEN, MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2
# 85 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 86 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_0, MSGBOX_YESNO
# 87 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, YES
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_6
MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5:
# 111 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	waitmessage
MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1:
# 113 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	releaseall
	end

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_2:
# 82 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_1

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_6:
# 88 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	givemon SPECIES_SPRIGATITO, 5
# 89 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8
# 97 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9
# 106 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	hidemonpic
# 107 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_8:
# 90 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	playfanfare MUS_OBTAIN_ITEM
# 91 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1
# 92 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	removeobject 1
# 93 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_WATER_STARTER
# 94 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_SARTER_GIVEN
# 95 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call NicknamePartyMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_9:
# 98 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1
# 100 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	removeobject 1
# 101 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_WATER_STARTER
# 102 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	setflag FLAG_SARTER_GIVEN
# 103 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call NicknameBoxMon
	goto MooncrestTown_Hemlocks_Lab_EventScript_Starter3_5


NicknamePartyMon::
# 118 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 119 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	hidemonpic
# 120 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 121 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 122 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 127 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 128 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	hidemonpic
# 129 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 132 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 130 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknameBoxMon_1


MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_0:
# 6 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "You already got a Starter$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_1:
# 10 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Do you want to choose Oshawott?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_2:
# 15 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Received Oshawott$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter1_Text_3:
# 31 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "No More Room$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_0:
# 48 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Do you want to choose Torchic?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter2_Text_1:
# 53 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Received Torchic$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_0:
# 86 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Do you want to choose Sprigatito?$"

MooncrestTown_Hemlocks_Lab_EventScript_Starter3_Text_1:
# 91 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Received Sprigatito$"

NicknamePartyMon_Text_0:
# 118 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "Give it a nickname?$"

MooncrestTown_Hemlocks_Lab_NotChosen::
# 135 "data/maps/MooncrestTown_Hemlocks_Lab/script.pory"
	.string "You did not choose the pokemon$"
