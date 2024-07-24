# 1 "data/maps/Descend/scripts.pory"

# 2 "data/maps/Descend/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Descend/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Descend/scripts.pory"

# 5 "data/maps/Descend/scripts.pory"

# 6 "data/maps/Descend/scripts.pory"
Descend_MapScripts::
# 7 "data/maps/Descend/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 8 "data/maps/Descend/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 9 "data/maps/Descend/scripts.pory"
	.byte 0
# 10 "data/maps/Descend/scripts.pory"

# 11 "data/maps/Descend/scripts.pory"
Descend_EventScript_SelfPathSign::
# 12 "data/maps/Descend/scripts.pory"
	msgbox Descend_Text_SelfPathSign, MSGBOX_SIGN
# 13 "data/maps/Descend/scripts.pory"
	end
# 14 "data/maps/Descend/scripts.pory"

# 15 "data/maps/Descend/scripts.pory"
	Descend_Text_SelfPathSign:
# 16 "data/maps/Descend/scripts.pory"
	.string "On the path of the Self.$"
# 17 "data/maps/Descend/scripts.pory"

# 18 "data/maps/Descend/scripts.pory"
Descend_EventScript_AllPathSign::
# 19 "data/maps/Descend/scripts.pory"
	msgbox Descend_Text_AllPathSign, MSGBOX_SIGN
# 20 "data/maps/Descend/scripts.pory"
	end
# 21 "data/maps/Descend/scripts.pory"

# 22 "data/maps/Descend/scripts.pory"
	Descend_Text_AllPathSign:
# 23 "data/maps/Descend/scripts.pory"
	.string "On the path of the All.$"
# 24 "data/maps/Descend/scripts.pory"

# 25 "data/maps/Descend/scripts.pory"
@	////////////////////////////////////////////////
# 26 "data/maps/Descend/scripts.pory"

# 27 "data/maps/Descend/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 28 "data/maps/Descend/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 29 "data/maps/Descend/scripts.pory"
	@ 2: Received National Dex
# 30 "data/maps/Descend/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 31 "data/maps/Descend/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 32 "data/maps/Descend/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 33 "data/maps/Descend/scripts.pory"
	@ 6: Chose Johto starter
# 34 "data/maps/Descend/scripts.pory"

# 35 "data/maps/Descend/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 36 "data/maps/Descend/scripts.pory"
	@ 1: Never occurs
# 37 "data/maps/Descend/scripts.pory"
	@ 2: Chose starter
# 38 "data/maps/Descend/scripts.pory"
	@ 3: Received starter in lab
# 39 "data/maps/Descend/scripts.pory"
	@ 4: Defeated rival on Route 103
# 40 "data/maps/Descend/scripts.pory"
	@ 5: Received pokedex
# 41 "data/maps/Descend/scripts.pory"

# 42 "data/maps/Descend/scripts.pory"
Descend_EventScript_FerrymanM::
# 43 "data/maps/Descend/scripts.pory"
	msgbox Ferryman_Text_WelcomeTraveler, MSGBOX_NPC
# 44 "data/maps/Descend/scripts.pory"
	end
# 45 "data/maps/Descend/scripts.pory"

# 46 "data/maps/Descend/scripts.pory"

# 47 "data/maps/Descend/scripts.pory"
Route101_OnTransition1:
# 48 "data/maps/Descend/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 49 "data/maps/Descend/scripts.pory"
	end
# 50 "data/maps/Descend/scripts.pory"

# 51 "data/maps/Descend/scripts.pory"
Route101_OnFrame1:
# 52 "data/maps/Descend/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 53 "data/maps/Descend/scripts.pory"
	.2byte 0
# 54 "data/maps/Descend/scripts.pory"

# 55 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideMapNamePopup1::
# 56 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 57 "data/maps/Descend/scripts.pory"
	end
# 58 "data/maps/Descend/scripts.pory"

# 59 "data/maps/Descend/scripts.pory"
Route101_EventScript_StartBirchRescue1::
# 60 "data/maps/Descend/scripts.pory"
	lockall
# 61 "data/maps/Descend/scripts.pory"
	playbgm MUS_HELP, TRUE
# 62 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 63 "data/maps/Descend/scripts.pory"
	closemessage
# 64 "data/maps/Descend/scripts.pory"
	setobjectxy LOCALID_BIRCH, 7, 13     @0, 15
# 65 "data/maps/Descend/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 7, 14    @0, 16
# 66 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 67 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 68 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 69 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 70 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 71 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 72 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 73 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 74 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 75 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 76 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 77 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 78 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 79 "data/maps/Descend/scripts.pory"
	closemessage
# 80 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 81 "data/maps/Descend/scripts.pory"
	releaseall
# 82 "data/maps/Descend/scripts.pory"
	end
# 83 "data/maps/Descend/scripts.pory"

# 84 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitSouth1::
# 85 "data/maps/Descend/scripts.pory"
	lockall
# 86 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 87 "data/maps/Descend/scripts.pory"
	closemessage
# 88 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 89 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 90 "data/maps/Descend/scripts.pory"
	releaseall
# 91 "data/maps/Descend/scripts.pory"
	end
# 92 "data/maps/Descend/scripts.pory"

# 93 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitWest1::
# 94 "data/maps/Descend/scripts.pory"
	lockall
# 95 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 96 "data/maps/Descend/scripts.pory"
	closemessage
# 97 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 98 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 99 "data/maps/Descend/scripts.pory"
	releaseall
# 100 "data/maps/Descend/scripts.pory"
	end
# 101 "data/maps/Descend/scripts.pory"

# 102 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitNorth1::
# 103 "data/maps/Descend/scripts.pory"
	lockall
# 104 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 105 "data/maps/Descend/scripts.pory"
	closemessage
# 106 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 107 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 108 "data/maps/Descend/scripts.pory"
	releaseall
# 109 "data/maps/Descend/scripts.pory"
	end
# 110 "data/maps/Descend/scripts.pory"

# 111 "data/maps/Descend/scripts.pory"

# 112 "data/maps/Descend/scripts.pory"

# 113 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitNorth1:
# 114 "data/maps/Descend/scripts.pory"
	walk_down
# 115 "data/maps/Descend/scripts.pory"
	step_end
# 116 "data/maps/Descend/scripts.pory"

# 117 "data/maps/Descend/scripts.pory"

# 118 "data/maps/Descend/scripts.pory"

# 119 "data/maps/Descend/scripts.pory"
Route101_EventScript_BirchsBag1::
# 120 "data/maps/Descend/scripts.pory"
	lock
# 121 "data/maps/Descend/scripts.pory"
	faceplayer
# 122 "data/maps/Descend/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 123 "data/maps/Descend/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 124 "data/maps/Descend/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/Descend/scripts.pory"
	special ChooseStarter
# 126 "data/maps/Descend/scripts.pory"
	waitstate
# 127 "data/maps/Descend/scripts.pory"
	special HealPlayerParty
# 128 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 129 "data/maps/Descend/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 130 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 131 "data/maps/Descend/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 132 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 133 "data/maps/Descend/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 134 "data/maps/Descend/scripts.pory"
	checkplayergender
# 135 "data/maps/Descend/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 136 "data/maps/Descend/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 137 "data/maps/Descend/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 138 "data/maps/Descend/scripts.pory"
	setflag FLAG_BADGE02_GET
# 139 "data/maps/Descend/scripts.pory"
	warp MAP_DESCEND, 8, 14
# 140 "data/maps/Descend/scripts.pory"
	waitstate
# 141 "data/maps/Descend/scripts.pory"
	release
# 142 "data/maps/Descend/scripts.pory"
	end
# 143 "data/maps/Descend/scripts.pory"

# 144 "data/maps/Descend/scripts.pory"

# 145 "data/maps/Descend/scripts.pory"
Route101_Text_DontLeaveMe1:
# 146 "data/maps/Descend/scripts.pory"
	.string "That bag may contain something useful!\n"
# 147 "data/maps/Descend/scripts.pory"
	.string "Rummage it!$"
# 148 "data/maps/Descend/scripts.pory"

# 149 "data/maps/Descend/scripts.pory"
Ferryman_Text_WelcomeTraveler:
# 150 "data/maps/Descend/scripts.pory"
	.string "Ah, another soul ready for their journey.\n"
# 151 "data/maps/Descend/scripts.pory"
	.string "Beyond this cave, a new life awaits you.\p"
# 152 "data/maps/Descend/scripts.pory"
	.string "The paths you take will mold your destiny,\n"
# 153 "data/maps/Descend/scripts.pory"
	.string "so choose wisely and trust your guts.\p"
# 154 "data/maps/Descend/scripts.pory"
	.string "Embark on your afterlife.\n"
# 155 "data/maps/Descend/scripts.pory"
	.string "May you find what you seek...\p"
# 156 "data/maps/Descend/scripts.pory"
	.string "You have received Flash!$"
