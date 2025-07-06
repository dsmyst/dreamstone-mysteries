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


Rivetshore_Lookout_SaveGame_Trigger::
# 18 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_COMPLETE, Rivetshore_Lookout_SaveGame_Trigger_2
# 20 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_SETUP, Rivetshore_Lookout_SaveGame_Trigger_4
	return

Rivetshore_Lookout_SaveGame_Trigger_2:
	end

Rivetshore_Lookout_SaveGame_Trigger_4:
# 21 "data//maps/Rivetshore_Lookout/scripts.pory"
	setvar VAR_TEMP_E, 1
# 22 "data//maps/Rivetshore_Lookout/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 23 "data//maps/Rivetshore_Lookout/scripts.pory"
	releaseall
	end


Rivetshore_Lookout_Ravine_Battle_Trigger::
# 30 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_COMPLETE, Rivetshore_Lookout_Ravine_Battle_Trigger_2
# 32 "data//maps/Rivetshore_Lookout/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_SETUP, Rivetshore_Lookout_Ravine_Battle_Trigger_4
	return

Rivetshore_Lookout_Ravine_Battle_Trigger_2:
	end

Rivetshore_Lookout_Ravine_Battle_Trigger_4:
# 33 "data//maps/Rivetshore_Lookout/scripts.pory"
	setweather WEATHER_RAIN
# 34 "data//maps/Rivetshore_Lookout/scripts.pory"
	doweather
# 35 "data//maps/Rivetshore_Lookout/scripts.pory"
	delay 2
# 37 "data//maps/Rivetshore_Lookout/scripts.pory"
	special SpawnCameraObject
# 38 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_0
# 39 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_1
# 40 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 41 "data//maps/Rivetshore_Lookout/scripts.pory"
	special RemoveCameraObject
# 43 "data//maps/Rivetshore_Lookout/scripts.pory"
	msgbox_delay Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1
# 45 "data//maps/Rivetshore_Lookout/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_RAVINE, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_2
# 47 "data//maps/Rivetshore_Lookout/scripts.pory"
	msgbox_delay Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0, Rivetshore_Lookout_Ravine_Battle_Trigger_Text_3
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_2
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement 1, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3
# 52 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement 2, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3
# 53 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 55 "data//maps/Rivetshore_Lookout/scripts.pory"
	removeobject 1
# 56 "data//maps/Rivetshore_Lookout/scripts.pory"
	removeobject 2
# 58 "data//maps/Rivetshore_Lookout/scripts.pory"
	special SpawnCameraObject
# 59 "data//maps/Rivetshore_Lookout/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_4
# 60 "data//maps/Rivetshore_Lookout/scripts.pory"
	waitmovement 0
# 61 "data//maps/Rivetshore_Lookout/scripts.pory"
	special RemoveCameraObject
# 63 "data//maps/Rivetshore_Lookout/scripts.pory"
	setflag FLAG_CHAMPION_RAVINE_COMPLETE
# 64 "data//maps/Rivetshore_Lookout/scripts.pory"
	clearflag FLAG_HIDE_CHAMPION_RAVINE
# 66 "data//maps/Rivetshore_Lookout/scripts.pory"
	releaseall
	end


# 38 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_0:
# 38 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 38 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
	step_end

# 39 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_1:
# 39 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 39 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 39 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
# 39 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_down
	step_end

# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_2:
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_left
# 50 "data//maps/Rivetshore_Lookout/scripts.pory"
	face_right
	step_end

# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_3:
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 51 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
	step_end

# 59 "data//maps/Rivetshore_Lookout/scripts.pory"
Rivetshore_Lookout_Ravine_Battle_Trigger_Movement_4:
# 59 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
# 59 "data//maps/Rivetshore_Lookout/scripts.pory"
	walk_up
	step_end

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_0:
# 43 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "Ravine$"

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_1:
# 43 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "Very good! You found me.\p"
	.string "The Fifth Cormoria Champion.\p"
	.string "Greta told me you dueled her and won.\n"
	.string "No small feat indeed! Greta's sly,\l"
	.string "tricky, and crafty. She won her title\l"
	.string "using every technique in the book!\p"
	.string "But my philosophy is different,\n"
	.string "{PLAYER}. I believe in the shared\l"
	.string "power between Pokemon and trainer.\p"
	.string "My Pokemon and I are Champions, yes,\n"
	.string "but we're so much more! We grew\l"
	.string "together, explored all of Cormoria\l"
	.string "together, built the Ranger Institute\l"
	.string "together...and when we leave, our legacy\l"
	.string "will remain for many an age!\p"
	.string "Come, {PLAYER}! You've set our blood\n"
	.string "on fire! We haven't felt like this since\l"
	.string "our battle with Lynch!\p"
	.string "Prove that my instincts are right!\n"
	.string "Prove that you can stand on the same\l"
	.string "stage as us!$"

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_2:
# 45 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "Hahaha! What a fight!$"

Rivetshore_Lookout_Ravine_Battle_Trigger_Text_3:
# 47 "data//maps/Rivetshore_Lookout/scripts.pory"
	.string "Oh my! That was exhilarating! How can I\n"
	.string "go back to the office after a fight like\l"
	.string "that, {PLAYER}? I think I'm going to\l"
	.string "take the day off...wander a little.\l"
	.string "Reminisce. You've brought something\l"
	.string "out in me and I can't quell it!$"
