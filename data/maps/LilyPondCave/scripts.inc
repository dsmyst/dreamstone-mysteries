LilyPondCave_MapScripts::
# 2 "data//maps/LilyPondCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilyPondCave_OnTransition
	.byte 0


LilyPondCave_OnTransition::
# 6 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_OnTransition_2
# 8 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_OnTransition_4
	return

LilyPondCave_OnTransition_2:
	end

LilyPondCave_OnTransition_4:
# 9 "data//maps/LilyPondCave/scripts.pory"
	setobjectxyperm 8, 13, 29
# 10 "data//maps/LilyPondCave/scripts.pory"
	setobjectxyperm 9, 12, 29
	end


LilyPondCave_Martha_Battle_Trigger0::
# 16 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_Martha_Battle_Trigger0_2
# 18 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_Martha_Battle_Trigger0_4
	return

LilyPondCave_Martha_Battle_Trigger0_2:
	end

LilyPondCave_Martha_Battle_Trigger0_4:
# 19 "data//maps/LilyPondCave/scripts.pory"
	special SpawnCameraObject
# 20 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPondCave_Martha_Battle_Trigger0_Movement_0
# 21 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LilyPondCave_Martha_Battle_Trigger0_Movement_1
# 22 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 23 "data//maps/LilyPondCave/scripts.pory"
	special RemoveCameraObject
# 25 "data//maps/LilyPondCave/scripts.pory"
	goto LilyPondCave_Martha_Battle
	return


LilyPondCave_Martha_Battle_Trigger1::
# 29 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_Martha_Battle_Trigger1_2
# 31 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_Martha_Battle_Trigger1_4
	return

LilyPondCave_Martha_Battle_Trigger1_2:
	end

LilyPondCave_Martha_Battle_Trigger1_4:
# 32 "data//maps/LilyPondCave/scripts.pory"
	special SpawnCameraObject
# 33 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPondCave_Martha_Battle_Trigger1_Movement_0
# 34 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LilyPondCave_Martha_Battle_Trigger0_Movement_1
# 35 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 36 "data//maps/LilyPondCave/scripts.pory"
	special RemoveCameraObject
# 38 "data//maps/LilyPondCave/scripts.pory"
	goto LilyPondCave_Martha_Battle
	return


LilyPondCave_Martha_Battle_Trigger2::
# 42 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, LilyPondCave_Martha_Battle_Trigger2_2
# 44 "data//maps/LilyPondCave/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_SETUP, LilyPondCave_Martha_Battle_Trigger2_4
	return

LilyPondCave_Martha_Battle_Trigger2_2:
	end

LilyPondCave_Martha_Battle_Trigger2_4:
# 45 "data//maps/LilyPondCave/scripts.pory"
	special SpawnCameraObject
# 46 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilyPondCave_Martha_Battle_Trigger2_Movement_0
# 47 "data//maps/LilyPondCave/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LilyPondCave_Martha_Battle_Trigger0_Movement_1
# 48 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 49 "data//maps/LilyPondCave/scripts.pory"
	special RemoveCameraObject
# 51 "data//maps/LilyPondCave/scripts.pory"
	goto LilyPondCave_Martha_Battle
	return


LilyPondCave_Martha_Battle::
# 59 "data//maps/LilyPondCave/scripts.pory"
	msgbox_delay LilyPondCave_Martha_Battle_Text_0, LilyPondCave_Martha_Battle_Text_1
# 61 "data//maps/LilyPondCave/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE1_A, LilyPondCave_Martha_Battle_Text_1
# 63 "data//maps/LilyPondCave/scripts.pory"
	msgbox_delay LilyPondCave_Martha_Battle_Text_0, LilyPondCave_Martha_Battle_Text_1
# 65 "data//maps/LilyPondCave/scripts.pory"
	applymovement 8, LilyPondCave_Martha_Battle_Movement_0
# 66 "data//maps/LilyPondCave/scripts.pory"
	applymovement 9, LilyPondCave_Martha_Battle_Movement_1
# 67 "data//maps/LilyPondCave/scripts.pory"
	waitmovement 0
# 69 "data//maps/LilyPondCave/scripts.pory"
	removeobject 8
# 70 "data//maps/LilyPondCave/scripts.pory"
	removeobject 9
# 72 "data//maps/LilyPondCave/scripts.pory"
	playse SE_EXIT
# 73 "data//maps/LilyPondCave/scripts.pory"
	waitse
# 75 "data//maps/LilyPondCave/scripts.pory"
	setflag FLAG_CHAMPION_MARTHA_COMPLETE
# 77 "data//maps/LilyPondCave/scripts.pory"
	releaseall
	end


# 20 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger0_Movement_0:
# 20 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 20 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 20 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 20 "data//maps/LilyPondCave/scripts.pory"
	face_up
	step_end

# 21 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger0_Movement_1:
# 21 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 21 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 21 "data//maps/LilyPondCave/scripts.pory"
	walk_up
	step_end

# 33 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger1_Movement_0:
# 33 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 33 "data//maps/LilyPondCave/scripts.pory"
	walk_up
	step_end

# 46 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Trigger2_Movement_0:
# 46 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 46 "data//maps/LilyPondCave/scripts.pory"
	walk_up
# 46 "data//maps/LilyPondCave/scripts.pory"
	walk_left
# 46 "data//maps/LilyPondCave/scripts.pory"
	face_up
	step_end

# 65 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Movement_0:
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_left
# 65 "data//maps/LilyPondCave/scripts.pory"
	walk_down
	step_end

# 66 "data//maps/LilyPondCave/scripts.pory"
LilyPondCave_Martha_Battle_Movement_1:
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_right
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_left
# 66 "data//maps/LilyPondCave/scripts.pory"
	walk_down
	step_end

LilyPondCave_Martha_Battle_Text_0:
# 59 "data//maps/LilyPondCave/scripts.pory"
	.string "Martha$"

LilyPondCave_Martha_Battle_Text_1:
# 59 "data//maps/LilyPondCave/scripts.pory"
	.string "$"
