ValleyTownPokecenter_MapScripts::
# 2 "data/maps/ValleyTownPokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ValleyTownPokecenter_OnTransition
# 3 "data/maps/ValleyTownPokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ValleyTownPokecenter_OnTransition::
# 7 "data/maps/ValleyTownPokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_VALLEY_TOWN_POKECENTER
	end


Pokecenter_Employee_Simple::
# 12 "data/maps/ValleyTownPokecenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/ValleyTownPokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/ValleyTownPokecenter/scripts.pory"
	waitmessage
# 15 "data/maps/ValleyTownPokecenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/ValleyTownPokecenter/scripts.pory"
	release
	end

