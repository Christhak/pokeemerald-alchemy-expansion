# 1 "data/maps/Descend/scripts.pory"

# 2 "data/maps/Descend/scripts.pory"

# 3 "data/maps/Descend/scripts.pory"
Descend_MapScripts::
# 4 "data/maps/Descend/scripts.pory"
	.byte 0
# 5 "data/maps/Descend/scripts.pory"

# 6 "data/maps/Descend/scripts.pory"
Descend_EventScript_SelfPathSign::
# 7 "data/maps/Descend/scripts.pory"
	msgbox Descend_Text_SelfPathSign, MSGBOX_SIGN
# 8 "data/maps/Descend/scripts.pory"
	end
# 9 "data/maps/Descend/scripts.pory"

# 10 "data/maps/Descend/scripts.pory"
	Descend_Text_SelfPathSign:
# 11 "data/maps/Descend/scripts.pory"
	.string "On the path of the Self.$"
# 12 "data/maps/Descend/scripts.pory"

# 13 "data/maps/Descend/scripts.pory"
Descend_EventScript_AllPathSign::
# 14 "data/maps/Descend/scripts.pory"
	msgbox Descend_Text_AllPathSign, MSGBOX_SIGN
# 15 "data/maps/Descend/scripts.pory"
	end
# 16 "data/maps/Descend/scripts.pory"

# 17 "data/maps/Descend/scripts.pory"
	Descend_Text_AllPathSign:
# 18 "data/maps/Descend/scripts.pory"
	.string "On the path of the All.$"
# 19 "data/maps/Descend/scripts.pory"

# 20 "data/maps/Descend/scripts.pory"
@	////////////////////////////////////////////////
# 21 "data/maps/Descend/scripts.pory"

# 22 "data/maps/Descend/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 23 "data/maps/Descend/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 24 "data/maps/Descend/scripts.pory"
	@ 2: Received National Dex
# 25 "data/maps/Descend/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 26 "data/maps/Descend/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 27 "data/maps/Descend/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 28 "data/maps/Descend/scripts.pory"
	@ 6: Chose Johto starter
# 29 "data/maps/Descend/scripts.pory"

# 30 "data/maps/Descend/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 31 "data/maps/Descend/scripts.pory"
	@ 1: Never occurs
# 32 "data/maps/Descend/scripts.pory"
	@ 2: Chose starter
# 33 "data/maps/Descend/scripts.pory"
	@ 3: Received starter in lab
# 34 "data/maps/Descend/scripts.pory"
	@ 4: Defeated rival on Route 103
# 35 "data/maps/Descend/scripts.pory"
	@ 5: Received pokedex
# 36 "data/maps/Descend/scripts.pory"

# 37 "data/maps/Descend/scripts.pory"
Descend_EventScript_FerrymanM::
# 38 "data/maps/Descend/scripts.pory"
	msgbox Ferryman_Text_WelcomeTraveler, MSGBOX_NPC
# 39 "data/maps/Descend/scripts.pory"
	end
# 40 "data/maps/Descend/scripts.pory"

# 41 "data/maps/Descend/scripts.pory"

# 42 "data/maps/Descend/scripts.pory"

# 43 "data/maps/Descend/scripts.pory"

# 44 "data/maps/Descend/scripts.pory"

# 45 "data/maps/Descend/scripts.pory"

# 46 "data/maps/Descend/scripts.pory"

# 47 "data/maps/Descend/scripts.pory"

# 48 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitNorth1::
# 49 "data/maps/Descend/scripts.pory"
	lockall
# 50 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 51 "data/maps/Descend/scripts.pory"
	closemessage
# 52 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 53 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 54 "data/maps/Descend/scripts.pory"
	releaseall
# 55 "data/maps/Descend/scripts.pory"
	end
# 56 "data/maps/Descend/scripts.pory"

# 57 "data/maps/Descend/scripts.pory"

# 58 "data/maps/Descend/scripts.pory"

# 59 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitNorth1:
# 60 "data/maps/Descend/scripts.pory"
	walk_down
# 61 "data/maps/Descend/scripts.pory"
	step_end
# 62 "data/maps/Descend/scripts.pory"

# 63 "data/maps/Descend/scripts.pory"

# 64 "data/maps/Descend/scripts.pory"

# 65 "data/maps/Descend/scripts.pory"
Route101_EventScript_BirchsBag1::
# 66 "data/maps/Descend/scripts.pory"
	lock
# 67 "data/maps/Descend/scripts.pory"
	faceplayer
# 68 "data/maps/Descend/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 69 "data/maps/Descend/scripts.pory"
	fadescreen FADE_TO_BLACK
# 70 "data/maps/Descend/scripts.pory"
	special ChooseStarter
# 71 "data/maps/Descend/scripts.pory"
	waitstate
# 72 "data/maps/Descend/scripts.pory"
	special HealPlayerParty
# 73 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 74 "data/maps/Descend/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 75 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 76 "data/maps/Descend/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 77 "data/maps/Descend/scripts.pory"
	setflag FLAG_BADGE02_GET
# 78 "data/maps/Descend/scripts.pory"
	warp MAP_DESCEND, 8, 14
# 79 "data/maps/Descend/scripts.pory"
	waitstate
# 80 "data/maps/Descend/scripts.pory"
	release
# 81 "data/maps/Descend/scripts.pory"
	end
# 82 "data/maps/Descend/scripts.pory"

# 83 "data/maps/Descend/scripts.pory"

# 84 "data/maps/Descend/scripts.pory"
Route101_Text_DontLeaveMe1:
# 85 "data/maps/Descend/scripts.pory"
	.string "That bag may contain something useful!\n"
# 86 "data/maps/Descend/scripts.pory"
	.string "Rummage it!$"
# 87 "data/maps/Descend/scripts.pory"

# 88 "data/maps/Descend/scripts.pory"
Ferryman_Text_WelcomeTraveler:
# 89 "data/maps/Descend/scripts.pory"
	.string "Ah, another soul ready for their journey.\n"
# 90 "data/maps/Descend/scripts.pory"
	.string "Beyond this cave, a new life awaits you.\p"
# 91 "data/maps/Descend/scripts.pory"
	.string "The paths you take will mold your destiny,\n"
# 92 "data/maps/Descend/scripts.pory"
	.string "so choose wisely and trust your guts.\p"
# 93 "data/maps/Descend/scripts.pory"
	.string "Embark on your afterlife.\n"
# 94 "data/maps/Descend/scripts.pory"
	.string "May you find what you seek...\p"
# 95 "data/maps/Descend/scripts.pory"
	.string "You have received Flash!$"
