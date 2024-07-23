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

# 28 "data/maps/Descend/scripts.pory"
Descend_EventScript_FerrymanM::
# 29 "data/maps/Descend/scripts.pory"
	msgbox Ferryman_Text_WelcomeTraveler, MSGBOX_NPC
# 30 "data/maps/Descend/scripts.pory"
	end
# 31 "data/maps/Descend/scripts.pory"

# 32 "data/maps/Descend/scripts.pory"

# 33 "data/maps/Descend/scripts.pory"
Route101_OnTransition1:
# 34 "data/maps/Descend/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 35 "data/maps/Descend/scripts.pory"
	end
# 36 "data/maps/Descend/scripts.pory"

# 37 "data/maps/Descend/scripts.pory"
Route101_OnFrame1:
# 38 "data/maps/Descend/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 39 "data/maps/Descend/scripts.pory"
	.2byte 0
# 40 "data/maps/Descend/scripts.pory"

# 41 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideMapNamePopup1::
# 42 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 43 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 44 "data/maps/Descend/scripts.pory"
	end
# 45 "data/maps/Descend/scripts.pory"

# 46 "data/maps/Descend/scripts.pory"
Route101_EventScript_StartBirchRescue1::
# 47 "data/maps/Descend/scripts.pory"
	lockall
# 48 "data/maps/Descend/scripts.pory"
	playbgm MUS_HELP, TRUE
# 49 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 50 "data/maps/Descend/scripts.pory"
	closemessage
# 51 "data/maps/Descend/scripts.pory"
	setobjectxy LOCALID_BIRCH, 7, 13     @0, 15
# 52 "data/maps/Descend/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 7, 14    @0, 16
# 53 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 54 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 55 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 56 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 57 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 58 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 59 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 60 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 61 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 62 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 63 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 64 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 65 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 66 "data/maps/Descend/scripts.pory"
	closemessage
# 67 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 68 "data/maps/Descend/scripts.pory"
	releaseall
# 69 "data/maps/Descend/scripts.pory"
	end
# 70 "data/maps/Descend/scripts.pory"

# 71 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitSouth1::
# 72 "data/maps/Descend/scripts.pory"
	lockall
# 73 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 74 "data/maps/Descend/scripts.pory"
	closemessage
# 75 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 76 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 77 "data/maps/Descend/scripts.pory"
	releaseall
# 78 "data/maps/Descend/scripts.pory"
	end
# 79 "data/maps/Descend/scripts.pory"

# 80 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitWest1::
# 81 "data/maps/Descend/scripts.pory"
	lockall
# 82 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 83 "data/maps/Descend/scripts.pory"
	closemessage
# 84 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 85 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 86 "data/maps/Descend/scripts.pory"
	releaseall
# 87 "data/maps/Descend/scripts.pory"
	end
# 88 "data/maps/Descend/scripts.pory"

# 89 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitNorth1::
# 90 "data/maps/Descend/scripts.pory"
	lockall
# 91 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe1, MSGBOX_DEFAULT
# 92 "data/maps/Descend/scripts.pory"
	closemessage
# 93 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 94 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 95 "data/maps/Descend/scripts.pory"
	releaseall
# 96 "data/maps/Descend/scripts.pory"
	end
# 97 "data/maps/Descend/scripts.pory"

# 98 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitSouth1:
# 99 "data/maps/Descend/scripts.pory"
	walk_up
# 100 "data/maps/Descend/scripts.pory"
	step_end
# 101 "data/maps/Descend/scripts.pory"

# 102 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitWest1:
# 103 "data/maps/Descend/scripts.pory"
	walk_right
# 104 "data/maps/Descend/scripts.pory"
	step_end
# 105 "data/maps/Descend/scripts.pory"

# 106 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitNorth1:
# 107 "data/maps/Descend/scripts.pory"
	walk_down
# 108 "data/maps/Descend/scripts.pory"
	step_end
# 109 "data/maps/Descend/scripts.pory"

# 110 "data/maps/Descend/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles1:
# 111 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 112 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 113 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 114 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 115 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 116 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 117 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 118 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 119 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 120 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 121 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 122 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 123 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 124 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 125 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 126 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 127 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 128 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 129 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 130 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 131 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 132 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 133 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 134 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 135 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 136 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 137 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 138 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 139 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 140 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 141 "data/maps/Descend/scripts.pory"
	step_end
# 142 "data/maps/Descend/scripts.pory"

# 143 "data/maps/Descend/scripts.pory"
Route101_Movement_ZigzagoonChase11:
# 144 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 145 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 146 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 147 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 148 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 149 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 150 "data/maps/Descend/scripts.pory"
	step_end
# 151 "data/maps/Descend/scripts.pory"

# 152 "data/maps/Descend/scripts.pory"
@ Leftover data? This command is unused.
# 153 "data/maps/Descend/scripts.pory"
	step_end
# 154 "data/maps/Descend/scripts.pory"

# 155 "data/maps/Descend/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch1:
# 156 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 157 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 158 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 159 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 160 "data/maps/Descend/scripts.pory"
	step_end
# 161 "data/maps/Descend/scripts.pory"

# 162 "data/maps/Descend/scripts.pory"
Route101_Movement_EnterScene1:
# 163 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 164 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 165 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 166 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 167 "data/maps/Descend/scripts.pory"
	walk_in_place_faster_left
# 168 "data/maps/Descend/scripts.pory"
	step_end
# 169 "data/maps/Descend/scripts.pory"

# 170 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchRunInCircles1:
# 171 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 172 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 173 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 174 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 175 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 176 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 177 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 178 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 179 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 180 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 181 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 182 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 183 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 184 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 185 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 186 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 187 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 188 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 189 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 190 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 191 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 192 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 193 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 194 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 195 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 196 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 197 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 198 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 199 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 200 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 201 "data/maps/Descend/scripts.pory"
	step_end
# 202 "data/maps/Descend/scripts.pory"

# 203 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchRunAway11:
# 204 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 205 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 206 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 207 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 208 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 209 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 210 "data/maps/Descend/scripts.pory"
	step_end
# 211 "data/maps/Descend/scripts.pory"

# 212 "data/maps/Descend/scripts.pory"
@ Leftover data? This command is unused.
# 213 "data/maps/Descend/scripts.pory"
	step_end
# 214 "data/maps/Descend/scripts.pory"

# 215 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchFaceZigzagoon1:
# 216 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 217 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 218 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 219 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 220 "data/maps/Descend/scripts.pory"
	step_end
# 221 "data/maps/Descend/scripts.pory"

# 222 "data/maps/Descend/scripts.pory"
Route101_Movement_Unused11:
# 223 "data/maps/Descend/scripts.pory"
	walk_up
# 224 "data/maps/Descend/scripts.pory"
	walk_up
# 225 "data/maps/Descend/scripts.pory"
	step_end
# 226 "data/maps/Descend/scripts.pory"

# 227 "data/maps/Descend/scripts.pory"
Route101_Movement_Unused21:
# 228 "data/maps/Descend/scripts.pory"
	walk_up
# 229 "data/maps/Descend/scripts.pory"
	walk_left
# 230 "data/maps/Descend/scripts.pory"
	walk_up
# 231 "data/maps/Descend/scripts.pory"
	step_end
# 232 "data/maps/Descend/scripts.pory"

# 233 "data/maps/Descend/scripts.pory"
Route101_EventScript_Youngster1::
# 234 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 235 "data/maps/Descend/scripts.pory"
	end
# 236 "data/maps/Descend/scripts.pory"

# 237 "data/maps/Descend/scripts.pory"
Route101_EventScript_Boy1::
# 238 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 239 "data/maps/Descend/scripts.pory"
	end
# 240 "data/maps/Descend/scripts.pory"

# 241 "data/maps/Descend/scripts.pory"
Route101_EventScript_RouteSign1::
# 242 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 243 "data/maps/Descend/scripts.pory"
	end
# 244 "data/maps/Descend/scripts.pory"

# 245 "data/maps/Descend/scripts.pory"
Route101_EventScript_BirchsBag1::
# 246 "data/maps/Descend/scripts.pory"
	lock
# 247 "data/maps/Descend/scripts.pory"
	faceplayer
# 248 "data/maps/Descend/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 249 "data/maps/Descend/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 250 "data/maps/Descend/scripts.pory"
	fadescreen FADE_TO_BLACK
# 251 "data/maps/Descend/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 252 "data/maps/Descend/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 253 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 254 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 255 "data/maps/Descend/scripts.pory"
	special ChooseStarter
# 256 "data/maps/Descend/scripts.pory"
	waitstate
# 257 "data/maps/Descend/scripts.pory"
	special HealPlayerParty
# 258 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 259 "data/maps/Descend/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 260 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 261 "data/maps/Descend/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 262 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 263 "data/maps/Descend/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 264 "data/maps/Descend/scripts.pory"
	checkplayergender
# 265 "data/maps/Descend/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 266 "data/maps/Descend/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 267 "data/maps/Descend/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 268 "data/maps/Descend/scripts.pory"
	setflag FLAG_BADGE02_GET
# 269 "data/maps/Descend/scripts.pory"
	warp MAP_DESCEND, 8, 14
# 270 "data/maps/Descend/scripts.pory"
	waitstate
# 271 "data/maps/Descend/scripts.pory"
	release
# 272 "data/maps/Descend/scripts.pory"
	end
# 273 "data/maps/Descend/scripts.pory"

# 274 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideMayInBedroom1::
# 275 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 276 "data/maps/Descend/scripts.pory"
	return
# 277 "data/maps/Descend/scripts.pory"

# 278 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideBrendanInBedroom1::
# 279 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 280 "data/maps/Descend/scripts.pory"
	return
# 281 "data/maps/Descend/scripts.pory"

# 282 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchApproachPlayer1:
# 283 "data/maps/Descend/scripts.pory"
	walk_right
# 284 "data/maps/Descend/scripts.pory"
	step_end
# 285 "data/maps/Descend/scripts.pory"

# 286 "data/maps/Descend/scripts.pory"
Route101_Text_HelpMe1:
# 287 "data/maps/Descend/scripts.pory"
	.string "H-help me!$"
# 288 "data/maps/Descend/scripts.pory"

# 289 "data/maps/Descend/scripts.pory"
Route101_Text_PleaseHelp1:
# 290 "data/maps/Descend/scripts.pory"
	.string "Hello! You over there!\n"
# 291 "data/maps/Descend/scripts.pory"
	.string "Please! Help!\p"
# 292 "data/maps/Descend/scripts.pory"
	.string "In my BAG!\n"
# 293 "data/maps/Descend/scripts.pory"
	.string "There's a POKé BALL!$"
# 294 "data/maps/Descend/scripts.pory"

# 295 "data/maps/Descend/scripts.pory"
Route101_Text_DontLeaveMe1:
# 296 "data/maps/Descend/scripts.pory"
	.string "That bag may contain something useful!\n"
# 297 "data/maps/Descend/scripts.pory"
	.string "Rummage it!$"
# 298 "data/maps/Descend/scripts.pory"

# 299 "data/maps/Descend/scripts.pory"
Route101_Text_YouSavedMe1:
# 300 "data/maps/Descend/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 301 "data/maps/Descend/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 302 "data/maps/Descend/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 303 "data/maps/Descend/scripts.pory"
	.string "You saved me.\n"
# 304 "data/maps/Descend/scripts.pory"
	.string "Thanks a lot!\p"
# 305 "data/maps/Descend/scripts.pory"
	.string "Oh?\p"
# 306 "data/maps/Descend/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 307 "data/maps/Descend/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 308 "data/maps/Descend/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 309 "data/maps/Descend/scripts.pory"

# 310 "data/maps/Descend/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter1:
# 311 "data/maps/Descend/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 312 "data/maps/Descend/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 313 "data/maps/Descend/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 314 "data/maps/Descend/scripts.pory"
	.string "TOWN right close by.$"
# 315 "data/maps/Descend/scripts.pory"

# 316 "data/maps/Descend/scripts.pory"
Route101_Text_WildPokemonInTallGrass1:
# 317 "data/maps/Descend/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 318 "data/maps/Descend/scripts.pory"
	.string "tall grass.\p"
# 319 "data/maps/Descend/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 320 "data/maps/Descend/scripts.pory"
	.string "to go into the tall grass and search.$"
# 321 "data/maps/Descend/scripts.pory"

# 322 "data/maps/Descend/scripts.pory"
Route101_Text_RouteSign1:
# 323 "data/maps/Descend/scripts.pory"
	.string "ROUTE 101\n"
# 324 "data/maps/Descend/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
# 325 "data/maps/Descend/scripts.pory"

# 326 "data/maps/Descend/scripts.pory"
Ferryman_Text_WelcomeTraveler:
# 327 "data/maps/Descend/scripts.pory"
	.string "Ah, another soul ready for their journey.\n"
# 328 "data/maps/Descend/scripts.pory"
	.string "Beyond this cave, a new life awaits you.\p"
# 329 "data/maps/Descend/scripts.pory"
	.string "The paths you take will define your destiny,\n"
# 330 "data/maps/Descend/scripts.pory"
	.string "so choose wisely and trust your instincts.\p"
# 331 "data/maps/Descend/scripts.pory"
	.string "Embark on afterlife and embrace the unknown.\n"
# 332 "data/maps/Descend/scripts.pory"
	.string "May you find what you seek...\p"
# 333 "data/maps/Descend/scripts.pory"
	.string "You have received Flash!$"
