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
# 31 "data//maps/Rivetshore_Lookout/scripts.pory"
	special RemoveCameraObject
# 33 "data//maps/Rivetshore_Lookout/scripts.pory"
	msgbox_delay Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 35 "data//maps/Rivetshore_Lookout/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE1_A, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 37 "data//maps/Rivetshore_Lookout/scripts.pory"
	msgbox_delay Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_2
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement 1, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3
# 43 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement 2, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3
# 44 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 46 "data//maps/Rivetshore_Lookout/scripts.pory"
	removeobject 1
# 47 "data//maps/Rivetshore_Lookout/scripts.pory"
	removeobject 2
# 49 "data//maps/Rivetshore_Lookout/scripts.pory"
	special SpawnCameraObject
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_4
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 52 "data//maps/Rivetshore_Lookout/scripts.pory"
	special RemoveCameraObject
# 54 "data//maps/Rivetshore_Lookout/scripts.pory"
	setflag FLAG_CHAMPION_RAVINE_COMPLETE
# 56 "data//maps/Rivetshore_Lookout/scripts.pory"
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

# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_2:
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	face_right
	step_end

# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3:
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 42 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
	step_end

# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_4:
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
	step_end

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0:
# 33 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "Ravine$"

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1:
# 33 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "$"
