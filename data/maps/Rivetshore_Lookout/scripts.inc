Rivetshore_Lookout_MapScripts::
# 2 "data//maps/Rivetshore_Lookout/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Rivetshore_Lookout_OnTransition
	.byte 0


Rivetshore_Lookout_OnTransition::
# 6 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_COMPLETE, Rivetshore_Lookout_OnTransition_2
# 8 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_SETUP, Rivetshore_Lookout_OnTransition_4
	return

Rivetshore_Lookout_OnTransition_2:
	end

Rivetshore_Lookout_OnTransition_4:
# 9 "data//maps/Rivetshore_Lookout/scripts.pory"
	setobjectxyperm 1, 11, 8
# 10 "data//maps/Rivetshore_Lookout/scripts.pory"
	setobjectxyperm 2, 10, 8
	end


Rivetshore_Lookout_Ravine_Battle_Trigger::
# 20 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_COMPLETE, Rivetshore_Lookout_Ravine_Battle_Trigger_2
# 22 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_SETUP, Rivetshore_Lookout_Ravine_Battle_Trigger_4
	return

Rivetshore_Lookout_Ravine_Battle_Trigger_2:
	end

Rivetshore_Lookout_Ravine_Battle_Trigger_4:
# 23 "data//maps/Rivetshore_Lookout/scripts.pory"
	setweather WEATHER_RAIN
# 24 "data//maps/Rivetshore_Lookout/scripts.pory"
	doweather
# 25 "data//maps/Rivetshore_Lookout/scripts.pory"
	delay 2
# 27 "data//maps/Rivetshore_Lookout/scripts.pory"
	special SpawnCameraObject
# 28 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_0
# 29 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_1
# 30 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 32 "data//maps/Rivetshore_Lookout/scripts.pory"
	msgbox_delay Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 34 "data//maps/Rivetshore_Lookout/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE1_A, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 36 "data//maps/Rivetshore_Lookout/scripts.pory"
	msgbox_delay Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 40 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_2
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement 1, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement 2, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3
# 43 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 45 "data//maps/Rivetshore_Lookout/scripts.pory"
	removeobject 1
# 46 "data//maps/Rivetshore_Lookout/scripts.pory"
	removeobject 2
# 48 "data//maps/Rivetshore_Lookout/scripts.pory"
	setflag FLAG_CHAMPION_RAVINE_COMPLETE
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	releaseall
	end


# 28 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_0:
# 28 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 28 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
	step_end

# 29 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_1:
# 29 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 29 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 29 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 29 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
	step_end

# 40 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_2:
# 40 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 40 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 40 "data//maps/Rivetshore_Lookout/scripts.pory"
	face_right
	step_end

# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3:
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
	step_end

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0:
# 32 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "Ravine$"

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1:
# 32 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "$"
