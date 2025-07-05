# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 7
# 3 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTYOG, 12
# 4 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY1, 16
# 5 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY2, 17
# 6 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY3, 18
# 7 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_BERG, 10
# 8 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_TRAINER, 5
# 9 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_OLD_WOMAN, 21
# 10 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SHRINE, 20

GastreeCity_MapScripts::
# 14 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GastreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_VISITED_GASTREE_CITY
	return

GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data//maps/GastreeCity/scripts.pory"
	map_script_2 VAR_GASTREE_SKITTY_QUEST, 0, GastreeCity_EventScript_SkittyQuestStart
	.2byte 0


GastreeCity_OnTransition::
	return


GastreeCity_EventScript_KohlaBattle_Trigger::
# 30 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger_2
# 33 "data//maps/GastreeCity/scripts.pory"
	lockall
# 34 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 35 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 39 "data//maps/GastreeCity/scripts.pory"
	opendoor 23, 26
# 40 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 43 "data//maps/GastreeCity/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 23, 26
# 44 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 45 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 47 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 48 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 49 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 50 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 52 "data//maps/GastreeCity/scripts.pory"
	closedoor 23, 26
# 53 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 55 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 58 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 59 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 60 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 61 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 64 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_1
# 65 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 68 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 69 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 70 "data//maps/GastreeCity/scripts.pory"
	release
# 72 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2
# 73 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 76 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 77 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 79 "data//maps/GastreeCity/scripts.pory"
	fadedefaultbgm
# 80 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger_2:
	end


GastreeCity_NPC1::
# 97 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC3::
# 102 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC4::
# 107 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC5::
# 113 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0, MSGBOX_NPC
	end


GastreeCity_Mankey::
# 118 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 119 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC6::
# 125 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC7::
# 131 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0, MSGBOX_NPC
	end


GastreeCity_Shard_NPC::
# 138 "data//maps/GastreeCity/scripts.pory"
	lockall
# 139 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 141 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_NPC_2
# 176 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_7, MSGBOX_NPC
GastreeCity_Shard_NPC_1:
	end

GastreeCity_Shard_NPC_2:
# 142 "data//maps/GastreeCity/scripts.pory"
	compare VAR_STATUE_COUNT, 11
	goto_if_eq GastreeCity_Shard_NPC_6
# 148 "data//maps/GastreeCity/scripts.pory"
	compare VAR_STATUE_COUNT, 10
	goto_if_eq GastreeCity_Shard_NPC_8
# 173 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_6, MSGBOX_NPC
	goto GastreeCity_Shard_NPC_1

GastreeCity_Shard_NPC_6:
# 143 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_0
# 144 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_NPC_8:
# 149 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_1
# 150 "data//maps/GastreeCity/scripts.pory"
	release
# 152 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_2
# 154 "data//maps/GastreeCity/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 155 "data//maps/GastreeCity/scripts.pory"
	additem ITEM_HISTORIAN_MEDAL
# 156 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_3
# 157 "data//maps/GastreeCity/scripts.pory"
	waitfanfare
# 158 "data//maps/GastreeCity/scripts.pory"
	release
# 161 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_4
# 162 "data//maps/GastreeCity/scripts.pory"
	release
# 163 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 165 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_NPC_Text_5
# 167 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_ANCIENT_STATUES
# 169 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_STATUE_COUNT, 11
	goto GastreeCity_Shard_NPC_1


GastreeCity_Shard_Trigger::
# 182 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_Trigger_2
# 184 "data//maps/GastreeCity/scripts.pory"
	checkitem ITEM_RARE_SHARD
# 185 "data//maps/GastreeCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeCity_Shard_Trigger_5
# 187 "data//maps/GastreeCity/scripts.pory"
	lockall
# 188 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_0
# 189 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 190 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_1
# 191 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 193 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_0
# 194 "data//maps/GastreeCity/scripts.pory"
	release
# 195 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_0
# 196 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 197 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 198 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_1
# 199 "data//maps/GastreeCity/scripts.pory"
	release
# 200 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 201 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_2
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_3
# 203 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 206 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 207 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_4
# 208 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 209 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 211 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 213 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_5
# 214 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 215 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 216 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_2
# 217 "data//maps/GastreeCity/scripts.pory"
	release
# 218 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 219 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_6
# 220 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 221 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 222 "data//maps/GastreeCity/scripts.pory"
	playse SE_M_ROCK_THROW
# 223 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_3
# 224 "data//maps/GastreeCity/scripts.pory"
	release
# 225 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 227 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8004, 2
# 228 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8005, 2
# 229 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8006, 20
# 230 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_0x8007, 5
# 231 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SHRINE
# 232 "data//maps/GastreeCity/scripts.pory"
	special ShakeCamera
# 233 "data//maps/GastreeCity/scripts.pory"
	waitstate
# 234 "data//maps/GastreeCity/scripts.pory"
	release
# 236 "data//maps/GastreeCity/scripts.pory"
	delay 24
# 237 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_7
# 238 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_8
# 239 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_8
# 240 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 241 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 242 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_4
# 243 "data//maps/GastreeCity/scripts.pory"
	release
# 244 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 246 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_5
# 247 "data//maps/GastreeCity/scripts.pory"
	release
# 248 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 249 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_9
# 250 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 251 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 252 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_6
# 253 "data//maps/GastreeCity/scripts.pory"
	release
# 254 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 256 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_10
# 257 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 258 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 259 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 260 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_7
# 261 "data//maps/GastreeCity/scripts.pory"
	release
# 262 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 264 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_11
# 265 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 266 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_8
# 267 "data//maps/GastreeCity/scripts.pory"
	release
# 268 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 270 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_12
# 271 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 272 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 273 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_9
# 274 "data//maps/GastreeCity/scripts.pory"
	release
# 275 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_TRAINER, GastreeCity_Shard_Trigger_Movement_13
# 276 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_BERG, GastreeCity_Shard_Trigger_Movement_13
# 277 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 278 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_TRAINER
# 279 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_BERG
# 281 "data//maps/GastreeCity/scripts.pory"
	special SpawnCameraObject
# 282 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GastreeCity_Shard_Trigger_Movement_14
# 283 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 284 "data//maps/GastreeCity/scripts.pory"
	special RemoveCameraObject
# 286 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_2
# 287 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 288 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 289 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_10
# 290 "data//maps/GastreeCity/scripts.pory"
	release
# 291 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 292 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_Shard_Trigger_Movement_9
# 293 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_15
# 294 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 295 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 296 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_11
# 297 "data//maps/GastreeCity/scripts.pory"
	release
# 299 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, GastreeCity_Shard_Trigger_Movement_16
# 300 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 301 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 302 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_ARCHAEOLENS
# 304 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_Trigger_Text_12
# 305 "data//maps/GastreeCity/scripts.pory"
	release
# 307 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_SHRINE_QUEST
# 308 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_ANCIENT_STATUES
# 310 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_Shard_Trigger_2:
	end

GastreeCity_Shard_Trigger_5:
	end


GastreeCity_Shard_CantLeave_Trigger::
# 315 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_SHRINE_QUEST, GastreeCity_Shard_CantLeave_Trigger_2
# 316 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeCity_Shard_CantLeave_Trigger_4
	return

GastreeCity_Shard_CantLeave_Trigger_2:
	end

GastreeCity_Shard_CantLeave_Trigger_4:
# 317 "data//maps/GastreeCity/scripts.pory"
	lockall
# 318 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Shard_CantLeave_Trigger_Text_0
# 319 "data//maps/GastreeCity/scripts.pory"
	release
# 320 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 321 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 322 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC8::
# 333 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 334 "data//maps/GastreeCity/scripts.pory"
	applymovement 10, GastreeCity_NPC8_Movement_0
# 335 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 336 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 337 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 338 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
# 339 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_1
# 340 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 341 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Keckleon::
# 346 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 347 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 352 "data//maps/GastreeCity/scripts.pory"
	lockall
# 353 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 354 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 355 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 356 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 357 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 374 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 375 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 376 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 378 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 379 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 380 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 383 "data//maps/GastreeCity/scripts.pory"
	lockall
# 384 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 385 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 386 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 387 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 388 "data//maps/GastreeCity/scripts.pory"
	release
# 389 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 390 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 391 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 392 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_15
# 393 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 394 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 395 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_6
# 396 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 397 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 398 "data//maps/GastreeCity/scripts.pory"
	release
# 399 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_2
# 400 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 401 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 402 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_8
# 403 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 404 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 405 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_5
# 406 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 407 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 408 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 409 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 410 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 411 "data//maps/GastreeCity/scripts.pory"
	release
# 412 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 413 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 414 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 415 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 420 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 421 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 424 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 425 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 428 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 429 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 435 "data//maps/GastreeCity/scripts.pory"
	lockall
# 436 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 438 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 441 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 456 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 459 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 439 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 442 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 443 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 444 "data//maps/GastreeCity/scripts.pory"
	release
# 445 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 446 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 447 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 448 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_SPLASH
# 449 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 450 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_Shard_Trigger_Movement_9
# 451 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 452 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 453 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 454 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 464 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 465 "data//maps/GastreeCity/scripts.pory"
	release
# 466 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 467 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 468 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 469 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 470 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 471 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 475 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 476 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 479 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 480 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 483 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 484 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 489 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 490 "data//maps/GastreeCity/scripts.pory"
	release
# 491 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 492 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 493 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 494 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 495 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 496 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 499 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 500 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 503 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 504 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 507 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 508 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 514 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 515 "data//maps/GastreeCity/scripts.pory"
	release
# 516 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 517 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 518 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 519 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 520 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 521 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 524 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 525 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 528 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 529 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 532 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 535 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 537 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 542 "data//maps/GastreeCity/scripts.pory"
	lockall
# 543 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 544 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 545 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 546 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 552 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 553 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0, MSGBOX_NPC
	end


# 47 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 47 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 47 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 49 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1:
# 49 "data//maps/GastreeCity/scripts.pory"
	walk_down
	step_end

# 72 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2:
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 72 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 188 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_0:
# 188 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 190 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_1:
# 190 "data//maps/GastreeCity/scripts.pory"
	face_down
# 190 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 201 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_2:
# 201 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 202 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_3:
# 202 "data//maps/GastreeCity/scripts.pory"
	face_left
# 202 "data//maps/GastreeCity/scripts.pory"
	emote_question_mark
	step_end

# 207 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_4:
# 207 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 207 "data//maps/GastreeCity/scripts.pory"
	walk_left
	step_end

# 213 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_5:
# 213 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 219 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_6:
# 219 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 219 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 219 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 237 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_7:
# 237 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 237 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 238 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_8:
# 238 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 249 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_9:
# 249 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 256 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_10:
# 256 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_right
	step_end

# 264 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_11:
# 264 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
# 264 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_left
	step_end

# 270 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_12:
# 270 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_up
	step_end

# 275 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_13:
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 275 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 282 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_14:
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_right
	step_end

# 293 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_15:
# 293 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 299 "data//maps/GastreeCity/scripts.pory"
GastreeCity_Shard_Trigger_Movement_16:
# 299 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 299 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 299 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 334 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 334 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 334 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 339 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_1:
# 339 "data//maps/GastreeCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 390 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 390 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 408 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 408 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 408 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 408 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 414 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 414 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 414 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 414 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 468 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 468 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 468 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 493 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 493 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 493 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 518 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 518 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 518 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 58 "data//maps/GastreeCity/scripts.pory"
	.string "Kohla$"

GastreeCity_EventScript_KohlaBattle_Trigger_Text_1:
# 64 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 97 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "you have to be careful on Route 4!\l"
	.string "There's a dangerous Dewpider that\l"
	.string "attacks people.$"

GastreeCity_NPC3_Text_0:
# 102 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 107 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 113 "data//maps/GastreeCity/scripts.pory"
	.string "Inger, the Gym Leader, uses ROCK types.\n"
	.string "I should have an advantage with\l"
	.string "my FIGHTING-type Pokémon right?\p"
	.string "So then why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 119 "data//maps/GastreeCity/scripts.pory"
	.string "Mankey is getting angry at its\n"
	.string "trainer's cold feet!$"

GastreeCity_NPC6_Text_0:
# 125 "data//maps/GastreeCity/scripts.pory"
	.string "Before you head to the Ceram Base Camp,\n"
	.string "check out the Gastree Teahouse!\l"
	.string "You just haven't visited Gastree City\l"
	.string "without going there once.$"

GastreeCity_NPC7_Text_0:
# 131 "data//maps/GastreeCity/scripts.pory"
	.string "When I get my first Pokémon, I want it\n"
	.string "to be Poltchageist!$"

GastreeCity_Shard_NPC_Text_0:
# 143 "data//maps/GastreeCity/scripts.pory"
	.string "To be honest, I still haven't processed\n"
	.string "the loss of this statue...$"

GastreeCity_Shard_NPC_Text_1:
# 149 "data//maps/GastreeCity/scripts.pory"
	.string "Have you scanned all the statues?\p"
	.string "Yes?$"

GastreeCity_Shard_NPC_Text_2:
# 152 "data//maps/GastreeCity/scripts.pory"
	.string "Let me see your Archaeolens...\p"
	.string "Oh my! That's all ten statues!\n"
	.string "I can't believe I'm seeing all of them\l"
	.string "like this...how I wish I could see them\n"
	.string "in real life!\p"
	.string "Thank you {PLAYER}. You've done both\n"
	.string "me and the historical community a\l"
	.string "wonderful service.\p"
	.string "Please accept this as a token of my\n"
	.string "appreciation.$"

GastreeCity_Shard_NPC_Text_3:
# 156 "data//maps/GastreeCity/scripts.pory"
	.string "{PLAYER} received the Historian\n"
	.string "Medal!$"

GastreeCity_Shard_NPC_Text_4:
# 161 "data//maps/GastreeCity/scripts.pory"
	.string "The Cormoria Historical Society awards\n"
	.string "these to people who have made special\l"
	.string "contributions to the field!\p"
	.string "It's a great honour, {PLAYER}.\n"
	.string "You should be proud!$"

GastreeCity_Shard_NPC_Text_5:
# 165 "data//maps/GastreeCity/scripts.pory"
	.string "You work with Professor Tenebris,\n"
	.string "correct? So you would be interested\l"
	.string "in Pokemon psychology, I suppose.\l"
	.string "Whether you proceed down the path of\l"
	.string "history is up to you, but if you do...\l"
	.string "I hope this serves you well!$"

GastreeCity_Shard_NPC_Text_6:
# 173 "data//maps/GastreeCity/scripts.pory"
	.string "Take your time child. I'll be waiting.$"

GastreeCity_Shard_NPC_Text_7:
# 176 "data//maps/GastreeCity/scripts.pory"
	.string "Come to admire this statue, have you?\p"
	.string "I'm researching the origins of these\n"
	.string "ancient statues. They're a vital legacy\l"
	.string "of Cormoria's past.$"

GastreeCity_Shard_Trigger_Text_0:
# 193 "data//maps/GastreeCity/scripts.pory"
	.string "Child! Is that a Rare Shard you have?\p"
	.string "My my...come here, quickly!$"

GastreeCity_Shard_Trigger_Text_1:
# 198 "data//maps/GastreeCity/scripts.pory"
	.string "I'm an archaeologist researching\n"
	.string "these ancient statues.\p"
	.string "Did you know that all Pokémon have\n"
	.string "innate Individual Values for each of\l"
	.string "their stats? Pokémon Professors will\l"
	.string "grade them from E- to S.\p"
	.string "Normally, there's no way to change them.\p"
	.string "But a Rare Shard when held in the\n"
	.string "prescence of an ancient statue like\l"
	.string "this one can maximise one of your\l"
	.string "Pokémon's Individual Values!\p"
	.string "A fascinating phenomenon!\n"
	.string "Why don't you try it now?$"

GastreeCity_Shard_Trigger_Text_2:
# 216 "data//maps/GastreeCity/scripts.pory"
	.string "C'mon Bergmite! Use Rock Slide!$"

GastreeCity_Shard_Trigger_Text_3:
# 223 "data//maps/GastreeCity/scripts.pory"
	.string "keee!!!$"

GastreeCity_Shard_Trigger_Text_4:
# 242 "data//maps/GastreeCity/scripts.pory"
	.string "Argh, you idiot boy!\n"
	.string "What have you done?\p"
	.string "You and your Bergmite have destroyed\n"
	.string "the ancient statue!$"

GastreeCity_Shard_Trigger_Text_5:
# 246 "data//maps/GastreeCity/scripts.pory"
	.string "Oh no! I'm so sorry!\n"
	.string "I really didn't mean to - I promise!$"

GastreeCity_Shard_Trigger_Text_6:
# 252 "data//maps/GastreeCity/scripts.pory"
	.string "Bergmite! We gotta say sorry!$"

GastreeCity_Shard_Trigger_Text_7:
# 260 "data//maps/GastreeCity/scripts.pory"
	.string "keee...$"

GastreeCity_Shard_Trigger_Text_8:
# 266 "data//maps/GastreeCity/scripts.pory"
	.string "You think a sorry will suffice!\n"
	.string "You blithering idiot!$"

GastreeCity_Shard_Trigger_Text_9:
# 273 "data//maps/GastreeCity/scripts.pory"
	.string "Yikes, she's getting too worked up.\n"
	.string "Bergmite - let's go!$"

GastreeCity_Shard_Trigger_Text_10:
# 289 "data//maps/GastreeCity/scripts.pory"
	.string "Such a loss to culture and history...$"

GastreeCity_Shard_Trigger_Text_11:
# 296 "data//maps/GastreeCity/scripts.pory"
	.string "I can't let this happen any more.\n"
	.string "We must preserve these statues.\p"
	.string "I'm now too old to go around Cormoria,\n"
	.string "but you, my dear, are young and able!\l"
	.string "You must help me preserve the statues!\p"
	.string "Take this.$"

GastreeCity_Shard_Trigger_Text_12:
# 304 "data//maps/GastreeCity/scripts.pory"
	.string "This is an Archaeolens. It scans and\n"
	.string "records ancient historical artifacts.\p"
	.string "Now that this statue is destroyed,\n"
	.string "there are ten statues left.\p"
	.string "Scan all the statues around Cormoria\n"
	.string "and come back to me.\p"
	.string "A task of vital importance!\n"
	.string "I won't take no for an answer!$"

GastreeCity_Shard_CantLeave_Trigger_Text_0:
# 318 "data//maps/GastreeCity/scripts.pory"
	.string "I should use the Rare Shard Leader\n"
	.string "Inger gave me!$"

GastreeCity_NPC8_Text_0:
# 333 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Bergmite some\n"
	.string "new moves so that we can go and\l"
	.string "explore Route 4 together!\p"
	.string "C'mon Bergmite! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 338 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Bergmite is fired up too!$"

GastreeCity_NPC_Keckleon_Text_0:
# 347 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Bergmite is trying hard to match its\n"
	.string "trainers energy. Go Bergmite!$"

GastreeCity_NPC9_Text_0:
# 354 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 355 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 355 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 355 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 355 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 356 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need\l"
	.string "at least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 387 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 397 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 410 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her and bring her back!$"

GastreeCity_NPC2_Text_0:
# 439 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a\l"
	.string "Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 443 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 446 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 447 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 449 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it.\n"
	.string "All I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least\l"
	.string "one Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 456 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 464 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 471 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 496 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again.\n"
	.string "It's too slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 514 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 521 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 545 "data//maps/GastreeCity/scripts.pory"
	.string "Skee!!$"

GastreeCity_Poltchageist_Text_0:
# 553 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking Revival Herbs\n"
	.string "for the teahouse!$"

GastreeCity_KohlaIntro1::
# 83 "data//maps/GastreeCity/scripts.pory"
	.string "Well well, look who thought it was\n"
	.string "fashionable to be late! I'm way ahead\l"
	.string "of you, chum! I've already beaten\l"
	.string "Inger and got the King Badge. And I\l"
	.string "don't mind dishing out a second serving!$"

GastreeCity_KohlaIntro2::
# 86 "data//maps/GastreeCity/scripts.pory"
	.string "This is payback for one-upping me in\n"
	.string "front of the detectives!$"

GastreeCity_KohlaPostBattle::
# 89 "data//maps/GastreeCity/scripts.pory"
	.string "You may have won, but I'll get the\n"
	.string "dreamstone first! I heard that some\l"
	.string "group called Team Somber is also after\l"
	.string "the dreamstone. I'm going to head north\l"
	.string "towards the Ceram Base Camp. Don't come\l"
	.string "after me - I don't need your help.\p"
	.string "Over and out, chum!$"
