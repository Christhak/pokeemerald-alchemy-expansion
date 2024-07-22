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

# 29 "data/maps/Descend/scripts.pory"

# 30 "data/maps/Descend/scripts.pory"

# 31 "data/maps/Descend/scripts.pory"
Route101_OnTransition1:
# 32 "data/maps/Descend/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 33 "data/maps/Descend/scripts.pory"
	end
# 34 "data/maps/Descend/scripts.pory"

# 35 "data/maps/Descend/scripts.pory"
Route101_OnFrame1:
# 36 "data/maps/Descend/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 37 "data/maps/Descend/scripts.pory"
	.2byte 0
# 38 "data/maps/Descend/scripts.pory"

# 39 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideMapNamePopup1::
# 40 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 42 "data/maps/Descend/scripts.pory"
	end
# 43 "data/maps/Descend/scripts.pory"

# 44 "data/maps/Descend/scripts.pory"
Route101_EventScript_StartBirchRescue1::
# 45 "data/maps/Descend/scripts.pory"
	lockall
# 46 "data/maps/Descend/scripts.pory"
	playbgm MUS_HELP, TRUE
# 47 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 48 "data/maps/Descend/scripts.pory"
	closemessage
# 49 "data/maps/Descend/scripts.pory"
	setobjectxy LOCALID_BIRCH, 7, 13     @0, 15
# 50 "data/maps/Descend/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 7, 14    @0, 16
# 51 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 52 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 53 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 54 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 55 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 56 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 57 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 58 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 60 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 61 "data/maps/Descend/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 62 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 63 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 64 "data/maps/Descend/scripts.pory"
	closemessage
# 65 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 66 "data/maps/Descend/scripts.pory"
	releaseall
# 67 "data/maps/Descend/scripts.pory"
	end
# 68 "data/maps/Descend/scripts.pory"

# 69 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitSouth1::
# 70 "data/maps/Descend/scripts.pory"
	lockall
# 71 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 72 "data/maps/Descend/scripts.pory"
	closemessage
# 73 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 74 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 75 "data/maps/Descend/scripts.pory"
	releaseall
# 76 "data/maps/Descend/scripts.pory"
	end
# 77 "data/maps/Descend/scripts.pory"

# 78 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitWest1::
# 79 "data/maps/Descend/scripts.pory"
	lockall
# 80 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 81 "data/maps/Descend/scripts.pory"
	closemessage
# 82 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 83 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 84 "data/maps/Descend/scripts.pory"
	releaseall
# 85 "data/maps/Descend/scripts.pory"
	end
# 86 "data/maps/Descend/scripts.pory"

# 87 "data/maps/Descend/scripts.pory"
Route101_EventScript_PreventExitNorth1::
# 88 "data/maps/Descend/scripts.pory"
	lockall
# 89 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 90 "data/maps/Descend/scripts.pory"
	closemessage
# 91 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 92 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 93 "data/maps/Descend/scripts.pory"
	releaseall
# 94 "data/maps/Descend/scripts.pory"
	end
# 95 "data/maps/Descend/scripts.pory"

# 96 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitSouth1:
# 97 "data/maps/Descend/scripts.pory"
	walk_up
# 98 "data/maps/Descend/scripts.pory"
	step_end
# 99 "data/maps/Descend/scripts.pory"

# 100 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitWest1:
# 101 "data/maps/Descend/scripts.pory"
	walk_right
# 102 "data/maps/Descend/scripts.pory"
	step_end
# 103 "data/maps/Descend/scripts.pory"

# 104 "data/maps/Descend/scripts.pory"
Route101_Movement_PreventExitNorth1:
# 105 "data/maps/Descend/scripts.pory"
	walk_down
# 106 "data/maps/Descend/scripts.pory"
	step_end
# 107 "data/maps/Descend/scripts.pory"

# 108 "data/maps/Descend/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles1:
# 109 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 110 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 111 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 112 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 113 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 114 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 115 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 116 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 117 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 118 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 119 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 120 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 121 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 122 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 123 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 124 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 125 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 126 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 127 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 128 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 129 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 130 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 131 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 132 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 133 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 134 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 135 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 136 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 137 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 138 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 139 "data/maps/Descend/scripts.pory"
	step_end
# 140 "data/maps/Descend/scripts.pory"

# 141 "data/maps/Descend/scripts.pory"
Route101_Movement_ZigzagoonChase11:
# 142 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 143 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 144 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 145 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 146 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 147 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 148 "data/maps/Descend/scripts.pory"
	step_end
# 149 "data/maps/Descend/scripts.pory"

# 150 "data/maps/Descend/scripts.pory"
@ Leftover data? This command is unused.
# 151 "data/maps/Descend/scripts.pory"
	step_end
# 152 "data/maps/Descend/scripts.pory"

# 153 "data/maps/Descend/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch1:
# 154 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 155 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 156 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 157 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_left
# 158 "data/maps/Descend/scripts.pory"
	step_end
# 159 "data/maps/Descend/scripts.pory"

# 160 "data/maps/Descend/scripts.pory"
Route101_Movement_EnterScene1:
# 161 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 162 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 163 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 164 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 165 "data/maps/Descend/scripts.pory"
	walk_in_place_faster_left
# 166 "data/maps/Descend/scripts.pory"
	step_end
# 167 "data/maps/Descend/scripts.pory"

# 168 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchRunInCircles1:
# 169 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 170 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 171 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 172 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 173 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 174 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 175 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 176 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 177 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 178 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 179 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 180 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 181 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 182 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 183 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 184 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 185 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 186 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 187 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 188 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 189 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 190 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 191 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 192 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 193 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 194 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 195 "data/maps/Descend/scripts.pory"
	walk_fast_down
# 196 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 197 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 198 "data/maps/Descend/scripts.pory"
	walk_fast_left
# 199 "data/maps/Descend/scripts.pory"
	step_end
# 200 "data/maps/Descend/scripts.pory"

# 201 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchRunAway11:
# 202 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 203 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 204 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 205 "data/maps/Descend/scripts.pory"
	walk_fast_right
# 206 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 207 "data/maps/Descend/scripts.pory"
	walk_fast_up
# 208 "data/maps/Descend/scripts.pory"
	step_end
# 209 "data/maps/Descend/scripts.pory"

# 210 "data/maps/Descend/scripts.pory"
@ Leftover data? This command is unused.
# 211 "data/maps/Descend/scripts.pory"
	step_end
# 212 "data/maps/Descend/scripts.pory"

# 213 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchFaceZigzagoon1:
# 214 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 215 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 216 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 217 "data/maps/Descend/scripts.pory"
	walk_in_place_fast_right
# 218 "data/maps/Descend/scripts.pory"
	step_end
# 219 "data/maps/Descend/scripts.pory"

# 220 "data/maps/Descend/scripts.pory"
Route101_Movement_Unused11:
# 221 "data/maps/Descend/scripts.pory"
	walk_up
# 222 "data/maps/Descend/scripts.pory"
	walk_up
# 223 "data/maps/Descend/scripts.pory"
	step_end
# 224 "data/maps/Descend/scripts.pory"

# 225 "data/maps/Descend/scripts.pory"
Route101_Movement_Unused21:
# 226 "data/maps/Descend/scripts.pory"
	walk_up
# 227 "data/maps/Descend/scripts.pory"
	walk_left
# 228 "data/maps/Descend/scripts.pory"
	walk_up
# 229 "data/maps/Descend/scripts.pory"
	step_end
# 230 "data/maps/Descend/scripts.pory"

# 231 "data/maps/Descend/scripts.pory"
Route101_EventScript_Youngster1::
# 232 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 233 "data/maps/Descend/scripts.pory"
	end
# 234 "data/maps/Descend/scripts.pory"

# 235 "data/maps/Descend/scripts.pory"
Route101_EventScript_Boy1::
# 236 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 237 "data/maps/Descend/scripts.pory"
	end
# 238 "data/maps/Descend/scripts.pory"

# 239 "data/maps/Descend/scripts.pory"
Route101_EventScript_RouteSign1::
# 240 "data/maps/Descend/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 241 "data/maps/Descend/scripts.pory"
	end
# 242 "data/maps/Descend/scripts.pory"

# 243 "data/maps/Descend/scripts.pory"
Route101_EventScript_BirchsBag1::
# 244 "data/maps/Descend/scripts.pory"
	lock
# 245 "data/maps/Descend/scripts.pory"
	faceplayer
# 246 "data/maps/Descend/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 247 "data/maps/Descend/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 248 "data/maps/Descend/scripts.pory"
	fadescreen FADE_TO_BLACK
# 249 "data/maps/Descend/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 250 "data/maps/Descend/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 251 "data/maps/Descend/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 252 "data/maps/Descend/scripts.pory"
	waitmovement 0
# 253 "data/maps/Descend/scripts.pory"
	special ChooseStarter
# 254 "data/maps/Descend/scripts.pory"
	waitstate
# 255 "data/maps/Descend/scripts.pory"
	special HealPlayerParty
# 256 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 257 "data/maps/Descend/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 258 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 259 "data/maps/Descend/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 260 "data/maps/Descend/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 261 "data/maps/Descend/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 262 "data/maps/Descend/scripts.pory"
	checkplayergender
# 263 "data/maps/Descend/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 264 "data/maps/Descend/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 265 "data/maps/Descend/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 266 "data/maps/Descend/scripts.pory"
	waitstate
# 267 "data/maps/Descend/scripts.pory"
	release
# 268 "data/maps/Descend/scripts.pory"
	end
# 269 "data/maps/Descend/scripts.pory"

# 270 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideMayInBedroom1::
# 271 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 272 "data/maps/Descend/scripts.pory"
	return
# 273 "data/maps/Descend/scripts.pory"

# 274 "data/maps/Descend/scripts.pory"
Route101_EventScript_HideBrendanInBedroom1::
# 275 "data/maps/Descend/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 276 "data/maps/Descend/scripts.pory"
	return
# 277 "data/maps/Descend/scripts.pory"

# 278 "data/maps/Descend/scripts.pory"
Route101_Movement_BirchApproachPlayer1:
# 279 "data/maps/Descend/scripts.pory"
	walk_right
# 280 "data/maps/Descend/scripts.pory"
	step_end
# 281 "data/maps/Descend/scripts.pory"

# 282 "data/maps/Descend/scripts.pory"
Route101_Text_HelpMe1:
# 283 "data/maps/Descend/scripts.pory"
	.string "H-help me!$"
# 284 "data/maps/Descend/scripts.pory"

# 285 "data/maps/Descend/scripts.pory"
Route101_Text_PleaseHelp1:
# 286 "data/maps/Descend/scripts.pory"
	.string "Hello! You over there!\n"
# 287 "data/maps/Descend/scripts.pory"
	.string "Please! Help!\p"
# 288 "data/maps/Descend/scripts.pory"
	.string "In my BAG!\n"
# 289 "data/maps/Descend/scripts.pory"
	.string "There's a POKé BALL!$"
# 290 "data/maps/Descend/scripts.pory"

# 291 "data/maps/Descend/scripts.pory"
Route101_Text_DontLeaveMe1:
# 292 "data/maps/Descend/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 293 "data/maps/Descend/scripts.pory"
	.string "Don't leave me like this!$"
# 294 "data/maps/Descend/scripts.pory"

# 295 "data/maps/Descend/scripts.pory"
Route101_Text_YouSavedMe1:
# 296 "data/maps/Descend/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 297 "data/maps/Descend/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 298 "data/maps/Descend/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 299 "data/maps/Descend/scripts.pory"
	.string "You saved me.\n"
# 300 "data/maps/Descend/scripts.pory"
	.string "Thanks a lot!\p"
# 301 "data/maps/Descend/scripts.pory"
	.string "Oh?\p"
# 302 "data/maps/Descend/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 303 "data/maps/Descend/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 304 "data/maps/Descend/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 305 "data/maps/Descend/scripts.pory"

# 306 "data/maps/Descend/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter1:
# 307 "data/maps/Descend/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 308 "data/maps/Descend/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 309 "data/maps/Descend/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 310 "data/maps/Descend/scripts.pory"
	.string "TOWN right close by.$"
# 311 "data/maps/Descend/scripts.pory"

# 312 "data/maps/Descend/scripts.pory"
Route101_Text_WildPokemonInTallGrass1:
# 313 "data/maps/Descend/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 314 "data/maps/Descend/scripts.pory"
	.string "tall grass.\p"
# 315 "data/maps/Descend/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 316 "data/maps/Descend/scripts.pory"
	.string "to go into the tall grass and search.$"
# 317 "data/maps/Descend/scripts.pory"

# 318 "data/maps/Descend/scripts.pory"
Route101_Text_RouteSign1:
# 319 "data/maps/Descend/scripts.pory"
	.string "ROUTE 101\n"
# 320 "data/maps/Descend/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
