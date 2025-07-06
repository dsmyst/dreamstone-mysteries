Route5_MapScripts::
# 2 "data//maps/Route5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route5_OnTransition
	.byte 0


Route5_OnTransition::
# 6 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_COMPLETE, Route5_OnTransition_2
# 7 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_SETUP, Route5_OnTransition_4
	return

Route5_OnTransition_2:
	end

Route5_OnTransition_4:
# 8 "data//maps/Route5/scripts.pory"
	setobjectxyperm 18, 9, 8
# 9 "data//maps/Route5/scripts.pory"
	setobjectxyperm 19, 8, 8
	end


Route5_Lynch_Battle_Trigger::
# 15 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_COMPLETE, Route5_Lynch_Battle_Trigger_2
# 17 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_SETUP, Route5_Lynch_Battle_Trigger_4
	return

Route5_Lynch_Battle_Trigger_2:
	end

Route5_Lynch_Battle_Trigger_4:
# 18 "data//maps/Route5/scripts.pory"
	special SpawnCameraObject
# 19 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_Lynch_Battle_Trigger_Movement_0
# 20 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route5_Lynch_Battle_Trigger_Movement_0
# 21 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 22 "data//maps/Route5/scripts.pory"
	special RemoveCameraObject
# 24 "data//maps/Route5/scripts.pory"
	msgbox_delay Route5_Lynch_Battle_Trigger_Text_0, Route5_Lynch_Battle_Trigger_Text_1
# 26 "data//maps/Route5/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE1_A, Route5_Lynch_Battle_Trigger_Text_1
# 28 "data//maps/Route5/scripts.pory"
	msgbox_delay Route5_Lynch_Battle_Trigger_Text_0, Route5_Lynch_Battle_Trigger_Text_1
# 32 "data//maps/Route5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route5_Lynch_Battle_Trigger_Movement_1
# 33 "data//maps/Route5/scripts.pory"
	applymovement 18, Route5_Lynch_Battle_Trigger_Movement_2
# 34 "data//maps/Route5/scripts.pory"
	applymovement 19, Route5_Lynch_Battle_Trigger_Movement_3
# 35 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 37 "data//maps/Route5/scripts.pory"
	removeobject 18
# 38 "data//maps/Route5/scripts.pory"
	removeobject 19
# 45 "data//maps/Route5/scripts.pory"
	setflag FLAG_CHAMPION_LYNCH_COMPLETE
# 47 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_A::
# 53 "data//maps/Route5/scripts.pory"
	lockall
# 54 "data//maps/Route5/scripts.pory"
	faceplayer
# 55 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_A_Text_0
# 56 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_B::
# 61 "data//maps/Route5/scripts.pory"
	lockall
# 62 "data//maps/Route5/scripts.pory"
	faceplayer
# 63 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_B_Text_0
# 64 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_NPC_C::
# 69 "data//maps/Route5/scripts.pory"
	lockall
# 70 "data//maps/Route5/scripts.pory"
	faceplayer
# 71 "data//maps/Route5/scripts.pory"
	msgbox Route5_NPC_C_Text_0
# 72 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Berger::
# 81 "data//maps/Route5/scripts.pory"
	lockall
# 82 "data//maps/Route5/scripts.pory"
	speakername Route5_Berger_Text_0
# 83 "data//maps/Route5/scripts.pory"
	msgbox Route5_Berger_Text_1
# 84 "data//maps/Route5/scripts.pory"
	faceplayer
# 85 "data//maps/Route5/scripts.pory"
	speakername Route5_Berger_Text_0
# 86 "data//maps/Route5/scripts.pory"
	msgbox Route5_Berger_Text_2
# 87 "data//maps/Route5/scripts.pory"
	release
# 88 "data//maps/Route5/scripts.pory"
	applymovement 16, Route5_Berger_Movement_0
# 89 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 90 "data//maps/Route5/scripts.pory"
	releaseall
	end


Route5_Bergmite::
# 95 "data//maps/Route5/scripts.pory"
	playmoncry SPECIES_BERGMITE, CRY_MODE_NORMAL
# 96 "data//maps/Route5/scripts.pory"
	waitmoncry
# 97 "data//maps/Route5/scripts.pory"
	msgbox Route5_Bergmite_Text_0, MSGBOX_NPC
	end


Route5_Greta_Trigger0::
# 105 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger0_2
# 107 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 108 "data//maps/Route5/scripts.pory"
	lockall
# 109 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger0_Movement_0
# 110 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 112 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger0_2:
	end


Route5_Greta_Trigger1::
# 116 "data//maps/Route5/scripts.pory"
	goto_if_set FLAG_GRETA_ROUTE5, Route5_Greta_Trigger1_2
# 118 "data//maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 119 "data//maps/Route5/scripts.pory"
	lockall
# 120 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_Trigger1_Movement_0
# 121 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 123 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_Main
	return

Route5_Greta_Trigger1_2:
	end


Route5_Greta_Main::
# 128 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 129 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_Main_Text_1
# 130 "data//maps/Route5/scripts.pory"
	release
# 131 "data//maps/Route5/scripts.pory"
	delay 20
# 132 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 133 "data//maps/Route5/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 134 "data//maps/Route5/scripts.pory"
	release
# 135 "data//maps/Route5/scripts.pory"
	delay 20
# 137 "data//maps/Route5/scripts.pory"
	goto Route5_Greta_ShowItemsForSale
	return


Route5_Greta_GottaGo::
# 143 "data//maps/Route5/scripts.pory"
	release
# 144 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_0
# 145 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 146 "data//maps/Route5/scripts.pory"
	speakername Route5_Greta_Main_Text_0
# 147 "data//maps/Route5/scripts.pory"
	msgbox Route5_Greta_GottaGo_Text_0
# 148 "data//maps/Route5/scripts.pory"
	release
# 149 "data//maps/Route5/scripts.pory"
	applymovement 7, Route5_Greta_GottaGo_Movement_1
# 150 "data//maps/Route5/scripts.pory"
	waitmovement 0
# 151 "data//maps/Route5/scripts.pory"
	removeobject 7
# 152 "data//maps/Route5/scripts.pory"
	setflag FLAG_GRETA_ROUTE5
# 153 "data//maps/Route5/scripts.pory"
	fadedefaultbgm
# 155 "data//maps/Route5/scripts.pory"
	releaseall
	end


# 19 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_0:
# 19 "data//maps/Route5/scripts.pory"
	walk_up
	step_end

# 32 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_1:
# 32 "data//maps/Route5/scripts.pory"
	walk_down
# 32 "data//maps/Route5/scripts.pory"
	walk_down
# 32 "data//maps/Route5/scripts.pory"
	walk_left
# 32 "data//maps/Route5/scripts.pory"
	walk_left
# 32 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 33 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_2:
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_right
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
# 33 "data//maps/Route5/scripts.pory"
	walk_down
	step_end

# 34 "data//maps/Route5/scripts.pory"
Route5_Lynch_Battle_Trigger_Movement_3:
# 34 "data//maps/Route5/scripts.pory"
	walk_right
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_right
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
# 34 "data//maps/Route5/scripts.pory"
	walk_down
	step_end

# 88 "data//maps/Route5/scripts.pory"
Route5_Berger_Movement_0:
# 88 "data//maps/Route5/scripts.pory"
	face_down
	step_end

# 109 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger0_Movement_0:
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_right
# 109 "data//maps/Route5/scripts.pory"
	walk_up
# 109 "data//maps/Route5/scripts.pory"
	face_right
	step_end

# 120 "data//maps/Route5/scripts.pory"
Route5_Greta_Trigger1_Movement_0:
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
# 120 "data//maps/Route5/scripts.pory"
	walk_right
	step_end

# 144 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_0:
# 144 "data//maps/Route5/scripts.pory"
	emote_exclamation_mark
	step_end

# 149 "data//maps/Route5/scripts.pory"
Route5_Greta_GottaGo_Movement_1:
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
# 149 "data//maps/Route5/scripts.pory"
	walk_left
	step_end

Route5_Lynch_Battle_Trigger_Text_0:
# 24 "data//maps/Route5/scripts.pory"
	.string "Lynch$"

Route5_Lynch_Battle_Trigger_Text_1:
# 24 "data//maps/Route5/scripts.pory"
	.string "$"

Route5_NPC_A_Text_0:
# 55 "data//maps/Route5/scripts.pory"
	.string "My head is spinning because of the fog\n"
	.string "in Vilethorn Woods! I need some rest.$"

Route5_NPC_B_Text_0:
# 63 "data//maps/Route5/scripts.pory"
	.string "I saw a rough-looking fellow in a dark\n"
	.string "outfit run past me. What's going on?$"

Route5_NPC_C_Text_0:
# 71 "data//maps/Route5/scripts.pory"
	.string "I wish they'd clear those boulders in\n"
	.string "Vilethorn Woods! It's blocking the\l"
	.string "path back to Galecrest City.$"

Route5_Berger_Text_0:
# 82 "data//maps/Route5/scripts.pory"
	.string "Berger$"

Route5_Berger_Text_1:
# 83 "data//maps/Route5/scripts.pory"
	.string "C'mon Bergmite! What's the matter?\n"
	.string "Don't be so scared of Vilethorn Woods!$"

Route5_Berger_Text_2:
# 86 "data//maps/Route5/scripts.pory"
	.string "We're trying to reach Silversun City\n"
	.string "but Bergmite's being a scaredy-cat!$"

Route5_Bergmite_Text_0:
# 97 "data//maps/Route5/scripts.pory"
	.string "Bergmite is shivering!$"

Route5_Greta_Main_Text_0:
# 128 "data//maps/Route5/scripts.pory"
	.string "Greta$"

Route5_Greta_Main_Text_1:
# 129 "data//maps/Route5/scripts.pory"
	.string "It's you! The wandering saviour from Mt.\n"
	.string "Ceram. How wonderful! A new customer.$"

Route5_Greta_GottaGo_Text_0:
# 147 "data//maps/Route5/scripts.pory"
	.string "Would you look at the time! I've gotta\n"
	.string "go places. See you around, {PLAYER}!$"
