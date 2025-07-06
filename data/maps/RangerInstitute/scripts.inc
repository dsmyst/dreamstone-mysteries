# 1 "data//maps/RangerInstitute/scripts.pory"

# 2 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_RAVINE, 14
# 3 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_RANGER1, 12
# 4 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_PACKAGE, 15
# 5 "data//maps/RangerInstitute/scripts.pory"

# 6 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_SC1, 21
# 7 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_SC2, 10
# 8 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_SC3, 11
# 9 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_RANGER2, 13
# 10 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_SCYTHER, 19
# 11 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_MASQ, 18

RangerInstitute_MapScripts::
# 15 "data//maps/RangerInstitute/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RangerInstitute_OnTransition
# 17 "data//maps/RangerInstitute/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RangerInstitute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RangerInstitute_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data//maps/RangerInstitute/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, RangerInstitute_OnFrame
	.2byte 0


RangerInstitute_OnTransition::
# 57 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 12
	goto_if_eq RangerInstitute_OnTransition_2
RangerInstitute_OnTransition_1:
	end

RangerInstitute_OnTransition_2:
# 58 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_SC1, 7, 28
# 59 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_SC2, 8, 28
# 60 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_SC3, 9, 29
# 61 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_RANGER2, 9, 28
# 62 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_SCYTHER, 10, 28
# 63 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_RANGER1, 8, 29
# 65 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_SC1, MOVEMENT_TYPE_FACE_UP
# 66 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_SC2, MOVEMENT_TYPE_FACE_UP
# 67 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_SC3, MOVEMENT_TYPE_FACE_UP
# 68 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_RANGER2, MOVEMENT_TYPE_FACE_UP
# 69 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_SCYTHER, MOVEMENT_TYPE_FACE_UP
# 70 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_RANGER1, MOVEMENT_TYPE_FACE_UP
# 72 "data//maps/RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_RAVINE, 8, 26
# 73 "data//maps/RangerInstitute/scripts.pory"
	setobjectmovementtype LOCALID_RAVINE, MOVEMENT_TYPE_FACE_DOWN
	goto RangerInstitute_OnTransition_1


RangerInstitute_OnFrame::
# 79 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 12
	goto_if_eq RangerInstitute_OnFrame_1
	return

RangerInstitute_OnFrame_1:
# 81 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 83 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_OnFrame_Text_1
# 85 "data//maps/RangerInstitute/scripts.pory"
	playse SE_APPLAUSE
# 86 "data//maps/RangerInstitute/scripts.pory"
	speakername NULL
# 87 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_OnFrame_Text_2
# 89 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_OnFrame_Text_3
# 91 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_OnFrame_Movement_0
# 92 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_OnFrame_Movement_1
# 93 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 94 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_OnFrame_Text_4
# 95 "data//maps/RangerInstitute/scripts.pory"
	removeitem ITEM_RANGER_CARD
# 96 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 97 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_OnFrame_Text_5
# 98 "data//maps/RangerInstitute/scripts.pory"
	release
# 99 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 100 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_OnFrame_Text_6
# 102 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 103 "data//maps/RangerInstitute/scripts.pory"
	additem ITEM_RANGER_CREST
# 104 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_OnFrame_Text_7
# 105 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 106 "data//maps/RangerInstitute/scripts.pory"
	release
# 108 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_OnFrame_Text_8
# 110 "data//maps/RangerInstitute/scripts.pory"
	completequest QUEST_POKEMON_RANGER
# 111 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 13
# 113 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_ApplicationPC::
# 127 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0
# 128 "data//maps/RangerInstitute/scripts.pory"
	release
# 130 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
# 135 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
# 154 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_5, MSGBOX_SIGN
# 155 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_ApplicationPC_2:
# 131 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1, MSGBOX_SIGN
	end

RangerInstitute_1F_ApplicationPC_5:
# 136 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 137 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_8
RangerInstitute_1F_ApplicationPC_7:
# 150 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_ApplicationPC_8:
# 138 "data//maps/RangerInstitute/scripts.pory"
	showmoneybox 0, 0
# 139 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 140 "data//maps/RangerInstitute/scripts.pory"
	hidemoneybox
# 141 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_11
	goto RangerInstitute_1F_ApplicationPC_7

RangerInstitute_1F_ApplicationPC_11:
# 142 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 143 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_7


RangerInstitute_1F_Interviewer::
# 161 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 162 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 164 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 177 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_2
RangerInstitute_1F_Interviewer_1:
# 180 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 165 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 166 "data//maps/RangerInstitute/scripts.pory"
	release
# 167 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 168 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 169 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_OnFrame_Movement_1
# 170 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 171 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 172 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
# 173 "data//maps/RangerInstitute/scripts.pory"
	release
# 174 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 184 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 185 "data//maps/RangerInstitute/scripts.pory"
	release
# 186 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 191 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 192 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ1_Text_0
# 193 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 194 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 197 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 201 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 198 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 199 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 207 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 208 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ2_Text_0
# 209 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 210 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 213 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 217 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 214 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 215 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 223 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 224 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ3_Text_0
# 225 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 226 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 229 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 233 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 230 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 231 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 239 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 240 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ4_Text_0
# 241 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 242 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 245 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 249 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 246 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 247 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 255 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 256 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ5_Text_0
# 257 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 258 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 261 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 265 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 262 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 263 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 270 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 271 "data//maps/RangerInstitute/scripts.pory"
	release
# 272 "data//maps/RangerInstitute/scripts.pory"
	delay 8
# 275 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewPass_Text_1
# 276 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 277 "data//maps/RangerInstitute/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 279 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_2
# 280 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 281 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
# 282 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_ACCEPTED
	return


RangerInstitute_1F_NPC1::
# 287 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 288 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 289 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 290 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 294 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 295 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 296 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 297 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 301 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 302 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 303 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 304 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC4::
# 308 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 309 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 310 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC4_Text_0
# 311 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 317 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0, MSGBOX_NPC
	end


RangerInstitute_1F_BlockerUpstairs::
# 351 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
# 356 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
# 361 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 352 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerUpstairs_5:
# 357 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	end


RangerInstitute_1F_TriggerUpstairs::
# 366 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 368 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 369 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 370 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 371 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 372 "data//maps/RangerInstitute/scripts.pory"
	release
# 373 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 374 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 375 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 376 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 377 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 401 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 420 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 402 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 403 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 404 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 405 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 406 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 407 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 408 "data//maps/RangerInstitute/scripts.pory"
	release
# 411 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 412 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 413 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 415 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 425 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 443 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 426 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 427 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 428 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 429 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 430 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 431 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 432 "data//maps/RangerInstitute/scripts.pory"
	release
# 435 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 436 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 437 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 439 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 448 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 449 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 450 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 451 "data//maps/RangerInstitute/scripts.pory"
	release
# 452 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 453 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_1
# 454 "data//maps/RangerInstitute/scripts.pory"
	release
# 455 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 456 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 457 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 458 "data//maps/RangerInstitute/scripts.pory"
	release
# 459 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 460 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_3
# 461 "data//maps/RangerInstitute/scripts.pory"
	release
# 462 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 463 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 464 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 465 "data//maps/RangerInstitute/scripts.pory"
	release
# 466 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 467 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 468 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_5
# 469 "data//maps/RangerInstitute/scripts.pory"
	release
# 470 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 471 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 472 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 473 "data//maps/RangerInstitute/scripts.pory"
	release
# 474 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 475 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 476 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_7
# 477 "data//maps/RangerInstitute/scripts.pory"
	release
# 478 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 479 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 480 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 481 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 482 "data//maps/RangerInstitute/scripts.pory"
	release
# 483 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 484 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 485 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 486 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 487 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_9
# 488 "data//maps/RangerInstitute/scripts.pory"
	release
# 489 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 490 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 491 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_10
# 492 "data//maps/RangerInstitute/scripts.pory"
	release
# 493 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 494 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_11
# 495 "data//maps/RangerInstitute/scripts.pory"
	release
# 496 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 497 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 498 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 499 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_12
# 500 "data//maps/RangerInstitute/scripts.pory"
	release
# 501 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_13
# 502 "data//maps/RangerInstitute/scripts.pory"
	release
# 503 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 504 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_14
# 505 "data//maps/RangerInstitute/scripts.pory"
	release
# 506 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 507 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 508 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 509 "data//maps/RangerInstitute/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 510 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 511 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 512 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 513 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_2F_EventScript_Welcome_Text_15
# 514 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 532 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, RangerInstitute_Ravine_2
RangerInstitute_Ravine_1:
# 560 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 11
	goto_if_eq RangerInstitute_Ravine_5
# 614 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 10
	goto_if_eq RangerInstitute_Ravine_11
# 820 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Ravine_19
# 826 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 8
	goto_if_eq RangerInstitute_Ravine_30
# 837 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 838 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_29, MSGBOX_NPC
	end

RangerInstitute_Ravine_2:
# 534 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_CHAMPION_RAVINE_COMPLETE, RangerInstitute_Ravine_7
# 538 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_CHAMPION_GRETA_COMPLETE, RangerInstitute_Ravine_16
	goto RangerInstitute_Ravine_1

RangerInstitute_Ravine_5:
# 561 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 562 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 563 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 564 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_1, MSGBOX_YESNO
# 565 "data//maps/RangerInstitute/scripts.pory"
	release
# 566 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_Ravine_14
# 574 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 575 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 576 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 578 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 579 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_3
# 581 "data//maps/RangerInstitute/scripts.pory"
	special ChoosePartyMon
# 582 "data//maps/RangerInstitute/scripts.pory"
	waitstate
# 583 "data//maps/RangerInstitute/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 584 "data//maps/RangerInstitute/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 585 "data//maps/RangerInstitute/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 587 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, SPECIES_ZERAORA
	goto_if_eq RangerInstitute_Ravine_26
# 604 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_6, MSGBOX_NPC
# 605 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_7:
	goto RangerInstitute_Ravine_1

RangerInstitute_Ravine_11:
# 615 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 616 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 617 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 618 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_7, MSGBOX_YESNO
# 619 "data//maps/RangerInstitute/scripts.pory"
	release
# 620 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_Ravine_22
# 626 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 627 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_9
# 628 "data//maps/RangerInstitute/scripts.pory"
	release
# 629 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 633 "data//maps/RangerInstitute/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 635 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq RangerInstitute_Ravine_33
RangerInstitute_Ravine_32:
# 638 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq RangerInstitute_Ravine_36
RangerInstitute_Ravine_35:
# 641 "data//maps/RangerInstitute/scripts.pory"
	applymovement VAR_LAST_TALKED, RangerInstitute_Ravine_Movement_4
# 642 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 644 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_OnFrame_Movement_0
# 645 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 647 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 648 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_10
# 649 "data//maps/RangerInstitute/scripts.pory"
	release
# 650 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 653 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_5
# 654 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 655 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 656 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_11
# 657 "data//maps/RangerInstitute/scripts.pory"
	release
# 658 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 659 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 660 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 661 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 662 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_6
# 663 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 664 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 665 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_OnFrame_Movement_0
# 666 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 667 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 668 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_12
# 669 "data//maps/RangerInstitute/scripts.pory"
	release
# 671 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 672 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 673 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 674 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 675 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_13
# 676 "data//maps/RangerInstitute/scripts.pory"
	release
# 677 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 678 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_OnFrame_Movement_0
# 679 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 680 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 681 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_14
# 682 "data//maps/RangerInstitute/scripts.pory"
	release
# 683 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 684 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 685 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 686 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_15
# 687 "data//maps/RangerInstitute/scripts.pory"
	release
# 689 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 691 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_7
# 692 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 693 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_8
# 694 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 696 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 698 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_16
# 699 "data//maps/RangerInstitute/scripts.pory"
	release
# 700 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 702 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_16
# 703 "data//maps/RangerInstitute/scripts.pory"
	release
# 704 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 706 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_16
# 707 "data//maps/RangerInstitute/scripts.pory"
	release
# 708 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 710 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_1F_InterviewQ1_Movement_0
# 711 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 712 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 713 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_17
# 714 "data//maps/RangerInstitute/scripts.pory"
	release
# 715 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 717 "data//maps/RangerInstitute/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 718 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8004, 2
# 719 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8005, 2
# 720 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8006, 8
# 721 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8007, 5
# 722 "data//maps/RangerInstitute/scripts.pory"
	special ShakeCamera
# 723 "data//maps/RangerInstitute/scripts.pory"
	waitstate
# 725 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_2F_Trigger0_Movement_0
# 726 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 727 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 728 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_18
# 729 "data//maps/RangerInstitute/scripts.pory"
	release
# 731 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 732 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 733 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 735 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 736 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_19
# 737 "data//maps/RangerInstitute/scripts.pory"
	release
# 738 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 740 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_5
# 741 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 742 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 744 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_20
# 745 "data//maps/RangerInstitute/scripts.pory"
	release
# 746 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 748 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 749 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 750 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 752 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 753 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_21
# 754 "data//maps/RangerInstitute/scripts.pory"
	release
# 755 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 757 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_5
# 758 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 759 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 761 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_22
# 762 "data//maps/RangerInstitute/scripts.pory"
	release
# 763 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 765 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 766 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_23
# 767 "data//maps/RangerInstitute/scripts.pory"
	release
# 768 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 770 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_5
# 771 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 772 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 774 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_24
# 775 "data//maps/RangerInstitute/scripts.pory"
	release
# 776 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 778 "data//maps/RangerInstitute/scripts.pory"
	completesubquest QUEST_POKEMON_RANGER, SUB_QUEST_3
# 779 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 11
# 781 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_9
# 782 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 784 "data//maps/RangerInstitute/scripts.pory"
	special SpawnCameraObject
# 785 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RangerInstitute_Ravine_Movement_10
# 786 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 787 "data//maps/RangerInstitute/scripts.pory"
	special RemoveCameraObject
# 789 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_11
# 790 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 791 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 793 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_25
# 794 "data//maps/RangerInstitute/scripts.pory"
	release
# 795 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 797 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 798 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 799 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 801 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_26
# 802 "data//maps/RangerInstitute/scripts.pory"
	release
# 803 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 805 "data//maps/RangerInstitute/scripts.pory"
	special SpawnCameraObject
# 806 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RangerInstitute_Ravine_Movement_9
# 807 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 808 "data//maps/RangerInstitute/scripts.pory"
	special RemoveCameraObject
# 810 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 11
# 812 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_14:
# 567 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 568 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 569 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_2
# 570 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_16:
# 539 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 540 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 541 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 542 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0
# 543 "data//maps/RangerInstitute/scripts.pory"
	release
# 545 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_0
# 546 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_Ravine_Movement_1
# 547 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 549 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_RAVINE
# 550 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_HIDE_CHAMPION_RAVINE
# 551 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_CHAMPION_RAVINE_SETUP
# 553 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_19:
# 821 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 822 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_27, MSGBOX_NPC
	end

# 816 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_22:
# 621 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 622 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_8
# 623 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

# 610 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_26:
# 588 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 589 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 590 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 592 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 593 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_4, MSGBOX_YESNO
# 594 "data//maps/RangerInstitute/scripts.pory"
	release
# 596 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 597 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_OnFrame_Text_0
# 598 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_5
# 600 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 12
# 601 "data//maps/RangerInstitute/scripts.pory"
	warp MAP_RANGER_INSTITUTE, 9, 26
	end

RangerInstitute_Ravine_30:
# 827 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 828 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 829 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_OnFrame_Text_0, RangerInstitute_Ravine_Text_28
# 830 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 9
# 831 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_33:
# 636 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_2
	goto RangerInstitute_Ravine_32

RangerInstitute_Ravine_36:
# 639 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_3
	goto RangerInstitute_Ravine_35


RangerInstitute_2F_NPC_1::
# 843 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 844 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 846 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 13
	goto_if_eq RangerInstitute_2F_NPC_1_2
# 849 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_1
RangerInstitute_2F_NPC_1_1:
# 852 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_NPC_1_2:
# 847 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
	goto RangerInstitute_2F_NPC_1_1


RangerInstitute_2F_NPC_2::
# 856 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 857 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 859 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 13
	goto_if_eq RangerInstitute_2F_NPC_2_2
# 862 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_1
RangerInstitute_2F_NPC_2_1:
# 864 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_NPC_2_2:
# 860 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
	goto RangerInstitute_2F_NPC_2_1


RangerInstitute_2F_NPC_3::
# 868 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 869 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 871 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 13
	goto_if_eq RangerInstitute_2F_NPC_3_2
# 874 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_1
RangerInstitute_2F_NPC_3_1:
# 876 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_NPC_3_2:
# 872 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
	goto RangerInstitute_2F_NPC_3_1


RangerInstitute_2F_NPC_4::
# 880 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 881 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 882 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 13
	goto_if_eq RangerInstitute_2F_NPC_4_2
# 885 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_1
RangerInstitute_2F_NPC_4_1:
# 887 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_NPC_4_2:
# 883 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
	goto RangerInstitute_2F_NPC_4_1


RangerInstitute_2F_NPC_5::
# 891 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 892 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 894 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 11
	goto_if_lt RangerInstitute_2F_NPC_5_2
RangerInstitute_2F_NPC_5_1:
# 898 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 11
	goto_if_eq RangerInstitute_2F_NPC_5_5
RangerInstitute_2F_NPC_5_4:
# 902 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 13
	goto_if_eq RangerInstitute_2F_NPC_5_8
RangerInstitute_2F_NPC_5_7:
# 906 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_NPC_5_2:
# 895 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_5_Text_0
	goto RangerInstitute_2F_NPC_5_1

RangerInstitute_2F_NPC_5_5:
# 899 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_5_Text_1
	goto RangerInstitute_2F_NPC_5_4

RangerInstitute_2F_NPC_5_8:
# 903 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_5_Text_2
	goto RangerInstitute_2F_NPC_5_7


RangerInstitute_Pokeball_One::
# 923 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 925 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Pokeball_One_2
# 952 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_3
RangerInstitute_Pokeball_One_1:
# 954 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Pokeball_One_2:
# 927 "data//maps/RangerInstitute/scripts.pory"
	showmonpic SPECIES_TAUROS_PALDEA_BLAZE, 10, 3
# 928 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 929 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_0, MSGBOX_YESNO
# 930 "data//maps/RangerInstitute/scripts.pory"
	release
# 931 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RangerInstitute_Pokeball_One_5
# 949 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
	goto RangerInstitute_Pokeball_One_1

RangerInstitute_Pokeball_One_5:
# 932 "data//maps/RangerInstitute/scripts.pory"
	removeobject 4
# 933 "data//maps/RangerInstitute/scripts.pory"
	givemon SPECIES_TAUROS_PALDEA_BLAZE, 45, ITEM_SITRUS_BERRY
# 934 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 936 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 937 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_Pokeball_One_Text_1
# 938 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 939 "data//maps/RangerInstitute/scripts.pory"
	release
# 940 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RangerInstitute_Pokeball_One_9
RangerInstitute_Pokeball_One_8:
# 944 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
# 945 "data//maps/RangerInstitute/scripts.pory"
	removeobject 1
# 946 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_SELECTED_MON_ONE
# 947 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 10
	goto RangerInstitute_Pokeball_One_1

RangerInstitute_Pokeball_One_9:
# 941 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_2
# 942 "data//maps/RangerInstitute/scripts.pory"
	release
	goto RangerInstitute_Pokeball_One_8


RangerInstitute_Pokeball_Two::
# 960 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 962 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Pokeball_Two_2
# 989 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_3
RangerInstitute_Pokeball_Two_1:
# 991 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Pokeball_Two_2:
# 964 "data//maps/RangerInstitute/scripts.pory"
	showmonpic SPECIES_KANGASKHAN, 10, 3
# 965 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 966 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Two_Text_0, MSGBOX_YESNO
# 967 "data//maps/RangerInstitute/scripts.pory"
	release
# 968 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RangerInstitute_Pokeball_Two_5
# 986 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
	goto RangerInstitute_Pokeball_Two_1

RangerInstitute_Pokeball_Two_5:
# 969 "data//maps/RangerInstitute/scripts.pory"
	removeobject 4
# 970 "data//maps/RangerInstitute/scripts.pory"
	givemon SPECIES_KANGASKHAN, 45, ITEM_SITRUS_BERRY
# 971 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 973 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 974 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_Pokeball_Two_Text_1
# 975 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 976 "data//maps/RangerInstitute/scripts.pory"
	release
# 977 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RangerInstitute_Pokeball_Two_9
RangerInstitute_Pokeball_Two_8:
# 981 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
# 982 "data//maps/RangerInstitute/scripts.pory"
	removeobject 2
# 983 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_SELECTED_MON_TWO
# 984 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 10
	goto RangerInstitute_Pokeball_Two_1

RangerInstitute_Pokeball_Two_9:
# 978 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Two_Text_2
# 979 "data//maps/RangerInstitute/scripts.pory"
	release
	goto RangerInstitute_Pokeball_Two_8


RangerInstitute_Pokeball_Three::
# 996 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 998 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Pokeball_Three_2
# 1024 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_3
RangerInstitute_Pokeball_Three_1:
# 1026 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Pokeball_Three_2:
# 1000 "data//maps/RangerInstitute/scripts.pory"
	showmonpic SPECIES_MANECTRIC, 10, 3
# 1001 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 1002 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Three_Text_0, MSGBOX_YESNO
# 1003 "data//maps/RangerInstitute/scripts.pory"
	release
# 1004 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RangerInstitute_Pokeball_Three_5
# 1021 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
	goto RangerInstitute_Pokeball_Three_1

RangerInstitute_Pokeball_Three_5:
# 1005 "data//maps/RangerInstitute/scripts.pory"
	removeobject 4
# 1006 "data//maps/RangerInstitute/scripts.pory"
	givemon SPECIES_MANECTRIC, 45, ITEM_SITRUS_BERRY
# 1007 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1008 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1009 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_Pokeball_Three_Text_1
# 1010 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 1011 "data//maps/RangerInstitute/scripts.pory"
	release
# 1012 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RangerInstitute_Pokeball_Three_9
RangerInstitute_Pokeball_Three_8:
# 1016 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
# 1017 "data//maps/RangerInstitute/scripts.pory"
	removeobject 3
# 1018 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_SELECTED_MON_THREE
# 1019 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 10
	goto RangerInstitute_Pokeball_Three_1

RangerInstitute_Pokeball_Three_9:
# 1013 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Three_Text_2
# 1014 "data//maps/RangerInstitute/scripts.pory"
	release
	goto RangerInstitute_Pokeball_Three_8


RangerInstitute_Mon_Bayleef::
# 1045 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 1048 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 1049 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 1050 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 1051 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 1052 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MAX_REVIVE
# 1053 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 1054 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
# 1055 "data//maps/RangerInstitute/scripts.pory"
	releaseall
RangerInstitute_Mon_Bayleef_1:
	end

RangerInstitute_Mon_Bayleef_2:
# 1046 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0, MSGBOX_NPC
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 1060 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 1061 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Surskit::
# 1065 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_MASQUERAIN, CRY_MODE_NORMAL
# 1066 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Surskit_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Scyther::
# 1070 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 1072 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 13
	goto_if_eq RangerInstitute_Mon_Scyther_2
# 1075 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Scyther_Text_1, MSGBOX_NPC
RangerInstitute_Mon_Scyther_1:
	end

RangerInstitute_Mon_Scyther_2:
# 1073 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Scyther_Text_0, MSGBOX_NPC
	goto RangerInstitute_Mon_Scyther_1


# 91 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_OnFrame_Movement_0:
# 91 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 92 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_OnFrame_Movement_1:
# 92 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 167 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 167 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 167 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 167 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 167 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 167 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 167 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 191 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 191 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 369 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 369 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 369 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 373 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 373 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 375 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 375 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 403 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 403 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 405 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 405 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 411 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 411 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 411 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 412 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 436 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 436 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 448 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 448 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 455 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 455 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 462 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 462 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 462 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 462 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 462 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 466 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 466 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 466 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 478 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 478 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 478 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 497 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 497 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 497 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 498 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 498 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 545 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_0:
# 545 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 545 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 546 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_1:
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 546 "data//maps/RangerInstitute/scripts.pory"
	walk_right
	step_end

# 636 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_2:
# 636 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 636 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 636 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 636 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 636 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 636 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 639 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_3:
# 639 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 639 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 639 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 639 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 639 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 639 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 641 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_4:
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 641 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 641 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 653 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_5:
# 653 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_right
	step_end

# 662 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_6:
# 662 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 662 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 691 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_7:
# 691 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 691 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 693 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_8:
# 693 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 781 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_9:
# 781 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 781 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 781 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 781 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 785 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_10:
# 785 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 785 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 785 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 785 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 789 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_11:
# 789 "data//maps/RangerInstitute/scripts.pory"
	walk_right
	step_end

RangerInstitute_OnFrame_Text_0:
# 83 "data//maps/RangerInstitute/scripts.pory"
	.string "Ravine$"

RangerInstitute_OnFrame_Text_1:
# 83 "data//maps/RangerInstitute/scripts.pory"
	.string "My dear Pokémon Rangers! My trusted\n"
	.string "companions!\p"
	.string "What a great day it is! Welcome to our\n"
	.string "newest Pokémon Ranger - {PLAYER}!$"

RangerInstitute_OnFrame_Text_2:
# 87 "data//maps/RangerInstitute/scripts.pory"
	.string "Welcome {PLAYER}!\p"
	.string "I knew the kid could do it!\p"
	.string "Great to have you with us!$"

RangerInstitute_OnFrame_Text_3:
# 89 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} cleared the interview,\n"
	.string "trekked all the way up Mt. Mirroh to\l"
	.string "visit our facility, helped the\l"
	.string "scientists there, and came back here\l"
	.string "for the final mission.\p"
	.string "Perhaps it was luck. Fate. Destiny.\n"
	.string "Whatever you want to call it!\p"
	.string "{PLAYER} received one of the most\n"
	.string "challenging missions given to any\l"
	.string "Ranger - to capture a rare Pokémon\l"
	.string "that nobody has ever seen!\p"
	.string "And {PLAYER} did it!$"

RangerInstitute_OnFrame_Text_4:
# 94 "data//maps/RangerInstitute/scripts.pory"
	.string "Hand over your Ranger Card.$"

RangerInstitute_OnFrame_Text_5:
# 97 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} handed the Ranger Card over\n"
	.string "to Director Ravine.$"

RangerInstitute_OnFrame_Text_6:
# 100 "data//maps/RangerInstitute/scripts.pory"
	.string "For your tenacity, grit and unwavering\n"
	.string "resolve, I, Director Ravine, am proud to\l"
	.string "award you, {PLAYER}, with the official\l"
	.string "Pokémon Ranger Crest!$"

RangerInstitute_OnFrame_Text_7:
# 104 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} received the Ranger Crest!$"

RangerInstitute_OnFrame_Text_8:
# 108 "data//maps/RangerInstitute/scripts.pory"
	.string "Being a Pokémon Ranger means handling\n"
	.string "responsibility, {PLAYER}. People look\l"
	.string "up to us, ask us to solve the problems\l"
	.string "they can't handle...and we deliver.\p"
	.string "Every single time.\p"
	.string "Carry the emblem with pride, Ranger.\p"
	.string "It means the world to us, and now you're\n"
	.string "a part of our world.$"

RangerInstitute_1F_ApplicationPC_Text_0:
# 127 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Pokémon\n"
	.string "Ranger Application PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 131 "data//maps/RangerInstitute/scripts.pory"
	.string "ERROR: YOU ALREADY HAVE AN\n"
	.string "APPLICATION IN PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 136 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 139 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST ¥500.\n"
	.string "PROCEED WITH PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 142 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A piece of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_ApplicationPC_Text_5:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU HAVE ALREADY CLEARED THE\n"
	.string "INTERVIEW.$"

RangerInstitute_1F_Interviewer_Text_0:
# 165 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 172 "data//maps/RangerInstitute/scripts.pory"
	.string "This interview will consist of five\n"
	.string "questions. You are expected to answer\l"
	.string "all of them correctly. If even one\l"
	.string "question is wrong, you'll fail.\p"
	.string "Got it?\p"
	.string "Good, let's start.$"

RangerInstitute_1F_Interviewer_Text_2:
# 177 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty.\p"
	.string "We get so many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 184 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a\n"
	.string "decent candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 192 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against Dewpider?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 194 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 194 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 194 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 194 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 198 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Dewpider, a BUG and WATER\n"
	.string "type, is weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 208 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon does NOT\n"
	.string "have a normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 210 "data//maps/RangerInstitute/scripts.pory"
	.string "Toxel$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 210 "data//maps/RangerInstitute/scripts.pory"
	.string "Koffing$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 210 "data//maps/RangerInstitute/scripts.pory"
	.string "Absol$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 210 "data//maps/RangerInstitute/scripts.pory"
	.string "Cyndaquil$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 214 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Absol has no normal evolution,\n"
	.string "but it can Mega Evolve.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 224 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of the following is a GHOST\n"
	.string "type Pokémon?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 226 "data//maps/RangerInstitute/scripts.pory"
	.string "Dhelmise$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 226 "data//maps/RangerInstitute/scripts.pory"
	.string "Zigzagoon$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 226 "data//maps/RangerInstitute/scripts.pory"
	.string "Delphox$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 226 "data//maps/RangerInstitute/scripts.pory"
	.string "Ninetales$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 230 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Dhelmise is a GHOST and GRASS\n"
	.string "type Pokémon found underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 240 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use Black\n"
	.string "Augurite on a Scyther?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 242 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 242 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 242 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 242 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 246 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using Black Augurite evolves\n"
	.string "Scyther into Kleavor.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 256 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 258 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 258 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 258 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 262 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And that's the final question!\n"
	.string "This interview is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 270 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview. We're now proud\l"
	.string "to call you a Pokémon Ranger Recruit.\p"
	.string "Welcome to the Cormoria Pokémon\n"
	.string "Ranger Institute!$"

RangerInstitute_1F_InterviewPass_Text_1:
# 275 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} is now an official Pokémon\n"
	.string "Ranger Recruit!$"

RangerInstitute_1F_InterviewPass_Text_2:
# 279 "data//maps/RangerInstitute/scripts.pory"
	.string "Please head upstairs for your\n"
	.string "induction. All the best, Recruit!$"

RangerInstitute_1F_NPC1_Text_0:
# 289 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a Pokémon Ranger?\n"
	.string "It's really hard to get in...I don't\l"
	.string "know if I can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 296 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I want to become a Pokémon Ranger so\l"
	.string "bad! Their Pokémon are so cool!\p"
	.string "Tauros!\p"
	.string "Kangaskhan!\p"
	.string "...\p"
	.string "I don't know any others.$"

RangerInstitute_1F_NPC3_Text_0:
# 303 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_NPC4_Text_0:
# 310 "data//maps/RangerInstitute/scripts.pory"
	.string "You heard about the Mega Sharpedo in\n"
	.string "the Hoya River, right?\p"
	.string "We're tracking it on our scanners -\n"
	.string "it's headed straight to Pelluca City.\l"
	.string "I hope it doesn't cause any damage...$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 317 "data//maps/RangerInstitute/scripts.pory"
	.string "It's so hectic these days, what with\n"
	.string "the Mega Sharpedo and everything!$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 352 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 361 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit!\l"
	.string "So I'll be keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 407 "data//maps/RangerInstitute/scripts.pory"
	.string "Hey wait - oh, a new Ranger Recruit?\n"
	.string "Welcome to the Ranger Institute,\l"
	.string "recruit! It's been a while since someone\l"
	.string "passed our interview. You must be here\l"
	.string "for your induction.\p"
	.string "Follow me. I'll introduce you to Ravine,\n"
	.string "the Ranger Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 431 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 450 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 453 "data//maps/RangerInstitute/scripts.pory"
	.string "Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 457 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 460 "data//maps/RangerInstitute/scripts.pory"
	.string "...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 464 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 468 "data//maps/RangerInstitute/scripts.pory"
	.string "Yes! Yes! What is it?$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 472 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\p"
	.string "Director Ravine! Meet {PLAYER}, our\n"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 476 "data//maps/RangerInstitute/scripts.pory"
	.string "No I was most definitely not, how dare\n"
	.string "you? I was -ahem- deep in my research.\p"
	.string "...\p"
	.string "Now. Yes. Welcome to the Ranger\n"
	.string "Institute, {PLAYER}! Congratulations\l"
	.string "on clearing the interview. I'm so\l"
	.string "pleased to see our family grow. Do you\l"
	.string "know what we Pokémon Rangers do?$"

RangerInstitute_2F_EventScript_Welcome_Text_8:
# 481 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 487 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 491 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Bike and Ranger Card - the\n"
	.string "two emblems of a Pokémon Ranger in\l"
	.string "Cormoria! The Ranger Bike will allow you\l"
	.string "to speedily traverse all of Cormoria,\l"
	.string "and the Ranger Card lets everyone know\l"
	.string "you're a proper Pokémon Ranger!\p"
	.string "You can access the other Ranger\n"
	.string "Institutes with this.\p"
	.string "We have a branch up north by the Ivy\n"
	.string "River, and down south by the sea near\l"
	.string "Rivetshore City.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 494 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER}, do you know what we\n"
	.string "Pokémon Rangers are tasked with doing?\p"
	.string "No?\p"
	.string "Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 499 "data//maps/RangerInstitute/scripts.pory"
	.string "As Pokémon Rangers, our job is to\n"
	.string "protect nature and maintain harmony\l"
	.string "between people, Pokémon, and the\l"
	.string "environment. Whether it's rescuing\l"
	.string "Pokémon in danger, resolving conflicts,\l"
	.string "or stopping threats to the ecosystem,\l"
	.string "we're always out in the field, ensuring\l"
	.string "the wild stays safe and balanced. It's\l"
	.string "challenging work, but knowing we're\l"
	.string "making a difference for both Pokémon\l"
	.string "and the world around us makes it all\l"
	.string "worthwhile.$"

RangerInstitute_2F_EventScript_Welcome_Text_13:
# 501 "data//maps/RangerInstitute/scripts.pory"
	.string "But none of that for you just yet! You\n"
	.string "have to earn your stripes here. As a\l"
	.string "Ranger Recruit, you'll have to complete\l"
	.string "missions to advance your ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 504 "data//maps/RangerInstitute/scripts.pory"
	.string "Now, I have some important items that\n"
	.string "the Ranger Institute at Ivy River\l"
	.string "wants. Your first mission will be to\l"
	.string "deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 513 "data//maps/RangerInstitute/scripts.pory"
	.string "If you complete this mission, you'll\n"
	.string "rank up from Recruit to Candidate.\p"
	.string "The Ranger Institute at Ivy River is a\n"
	.string "little hard to find. You'll have to surf\l"
	.string "down from Winterlily Hollow and explore\l"
	.string "Lily Pond.\p"
	.string "Good training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 542 "data//maps/RangerInstitute/scripts.pory"
	.string "A special visitor! One that comes every\n"
	.string "four years.\p"
	.string "...\p"
	.string "After my duel with Greta four years ago,\n"
	.string "I knew this day would come.\p"
	.string "But not here, young Champion.\p"
	.string "Come find me in the southernmost point\n"
	.string "of Cormoria!$"

RangerInstitute_Ravine_Text_1:
# 564 "data//maps/RangerInstitute/scripts.pory"
	.string "Did you find the Pokémon?$"

RangerInstitute_Ravine_Text_2:
# 569 "data//maps/RangerInstitute/scripts.pory"
	.string "I've already told everyone that you'll\n"
	.string "clear the final mission with flying\l"
	.string "colours, so don't let me down!$"

RangerInstitute_Ravine_Text_3:
# 579 "data//maps/RangerInstitute/scripts.pory"
	.string "Really? Let me see!$"

RangerInstitute_Ravine_Text_4:
# 593 "data//maps/RangerInstitute/scripts.pory"
	.string "This is it! So this is the mythical\n"
	.string "Zeraora...\p"
	.string "{PLAYER}! You've done it! You've\n"
	.string "cleared the final mission!\p"
	.string "Do you know what that means?$"

RangerInstitute_Ravine_Text_5:
# 598 "data//maps/RangerInstitute/scripts.pory"
	.string "It's time...$"

RangerInstitute_Ravine_Text_6:
# 604 "data//maps/RangerInstitute/scripts.pory"
	.string "Wait a second...that doesn't fit the\n"
	.string "description of the rare Pokémon!\l"
	.string "You can't weasel your way out of this\l"
	.string "mission, {PLAYER}!$"

RangerInstitute_Ravine_Text_7:
# 618 "data//maps/RangerInstitute/scripts.pory"
	.string "How do you feel about your new Pokémon,\n"
	.string "{PLAYER}?\p"
	.string "Good?\p"
	.string "Haha! It's the first of many.\p"
	.string "You ready to become a fully-fledged\n"
	.string "Pokémon Ranger?$"

RangerInstitute_Ravine_Text_8:
# 622 "data//maps/RangerInstitute/scripts.pory"
	.string "Haha! Heard horror stories about the\n"
	.string "final mission, did you?\p"
	.string "Come back when you're ready!$"

RangerInstitute_Ravine_Text_9:
# 627 "data//maps/RangerInstitute/scripts.pory"
	.string "Haha! That's it - that's the Pokémon\n"
	.string "Ranger spirit within you, {PLAYER}!\l"
	.string "Come then, shall I brief you on your\l"
	.string "final mission?$"

RangerInstitute_Ravine_Text_10:
# 648 "data//maps/RangerInstitute/scripts.pory"
	.string "We've got one ready to go!\n"
	.string "Can you debrief {PLAYER}?$"

RangerInstitute_Ravine_Text_11:
# 656 "data//maps/RangerInstitute/scripts.pory"
	.string "Excellent! Right away, Director.$"

RangerInstitute_Ravine_Text_12:
# 668 "data//maps/RangerInstitute/scripts.pory"
	.string "Director, I must warn you - this is\n"
	.string "a rather...involved assignment.$"

RangerInstitute_Ravine_Text_13:
# 675 "data//maps/RangerInstitute/scripts.pory"
	.string "Hahaha! Doubting {PLAYER} will be\n"
	.string "your biggest mistake!\l"
	.string "{PLAYER}'s ready. Director's approval!\l"
	.string "This is the final mission before\l"
	.string "becoming a Cormoria Pokémon Ranger.\l"
	.string "It's got to be a tough one! Only the\l"
	.string "very best can become a Pokémon Ranger\l"
	.string "after all.$"

RangerInstitute_Ravine_Text_14:
# 681 "data//maps/RangerInstitute/scripts.pory"
	.string "Right...yes, well.$"

RangerInstitute_Ravine_Text_15:
# 686 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER}, was it?\p"
	.string "My job with the Ranger Institute is to\n"
	.string "research the existence of rare Pokémon\l"
	.string "only spoken of in myths. We believe\l"
	.string "there's one right here on Route 6!\p"
	.string "Based on reported sightings, we've come\n"
	.string "up with an artist recreation.\p"
	.string "Come and take a look.$"

RangerInstitute_Ravine_Text_16:
# 698 "data//maps/RangerInstitute/scripts.pory"
	.string "...$"

RangerInstitute_Ravine_Text_17:
# 713 "data//maps/RangerInstitute/scripts.pory"
	.string "That's strange...why isn't the drawing\n"
	.string "showing up on screen?$"

RangerInstitute_Ravine_Text_18:
# 728 "data//maps/RangerInstitute/scripts.pory"
	.string "The computer short-circuited!\n"
	.string "How bizarre...\p"
	.string "Director Ravine! This is precisely why\n"
	.string "I keep telling you that we need to\l"
	.string "upgrade our hardware!$"

RangerInstitute_Ravine_Text_19:
# 736 "data//maps/RangerInstitute/scripts.pory"
	.string "Nonsense! I've never even heard of\n"
	.string "such a request.$"

RangerInstitute_Ravine_Text_20:
# 744 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...Director, you can just admit that\n"
	.string "you were daydreaming.$"

RangerInstitute_Ravine_Text_21:
# 753 "data//maps/RangerInstitute/scripts.pory"
	.string "Such accusations!\p"
	.string "...ahem.\p"
	.string "Forget the computer. Listen to me\n"
	.string "carefully, {PLAYER}.\p"
	.string "What we know is that there is a yellow,\n"
	.string "catlike Pokémon somewhere on Route 6.$"

RangerInstitute_Ravine_Text_22:
# 761 "data//maps/RangerInstitute/scripts.pory"
	.string "Believe, not know.$"

RangerInstitute_Ravine_Text_23:
# 766 "data//maps/RangerInstitute/scripts.pory"
	.string "Yes, believe.\p"
	.string "Now for your last mission, {PLAYER},\n"
	.string "you are tasked with tracking down the\l"
	.string "whereabouts of this Pokémon!\p"
	.string "All we have is the description - it's\n"
	.string "yellow and catlike. Nothing else!\l"
	.string "This won't be easy, {PLAYER}. This will\l"
	.string "put all your skills to the test.\p"
	.string "But a true Pokémon Ranger doesn't back\n"
	.string "down in the face of a challenge!\p"
	.string "So buckle up, set off, and come back\n"
	.string "with an answer, one way or another.\p"
	.string "Now get going!$"

RangerInstitute_Ravine_Text_24:
# 774 "data//maps/RangerInstitute/scripts.pory"
	.string "Good luck, {PLAYER}!$"

RangerInstitute_Ravine_Text_25:
# 793 "data//maps/RangerInstitute/scripts.pory"
	.string "But seriously, why would there be an\n"
	.string "electrical overcharge here?\l"
	.string "Director, I don't think this was an\l"
	.string "accident...$"

RangerInstitute_Ravine_Text_26:
# 801 "data//maps/RangerInstitute/scripts.pory"
	.string "Shh! {PLAYER} will overhear us!\n"
	.string "It's already an important mission -\l"
	.string "let's not add any more tension!$"

RangerInstitute_Ravine_Text_27:
# 822 "data//maps/RangerInstitute/scripts.pory"
	.string "Don't be shy - pick a Pokémon!\n"
	.string "It's your reward for ranking up.$"

RangerInstitute_Ravine_Text_28:
# 829 "data//maps/RangerInstitute/scripts.pory"
	.string "My newest Associate arrives!\n"
	.string "How does it feel, being just one more\l"
	.string "step away from being a fully-fledged\l"
	.string "Ranger?\p"
	.string "As an Associate, you are entitled to\n"
	.string "one of our very rare Ranger-exclusive\l"
	.string "Pokémon! See the table down there? Any\l"
	.string "of those Pokémon is yours! But choose\l"
	.string "carefully - you can only pick one.\p"
	.string "Talk to me once you've chosen one.$"

RangerInstitute_Ravine_Text_29:
# 838 "data//maps/RangerInstitute/scripts.pory"
	.string "How's my newest member doing?$"

RangerInstitute_2F_NPC_1_Text_0:
# 847 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}!$"

RangerInstitute_2F_NPC_1_Text_1:
# 849 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 860 "data//maps/RangerInstitute/scripts.pory"
	.string "Welcome to the team!$"

RangerInstitute_2F_NPC_2_Text_1:
# 862 "data//maps/RangerInstitute/scripts.pory"
	.string "Wanna see what I'm working on?\p"
	.string "I'm analysing the weather patterns in\n"
	.string "Cormoria. I stay on the lookout for any\l"
	.string "unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 872 "data//maps/RangerInstitute/scripts.pory"
	.string "Once a Ranger, always a Ranger!$"

RangerInstitute_2F_NPC_3_Text_1:
# 874 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty.\n"
	.string "I miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 883 "data//maps/RangerInstitute/scripts.pory"
	.string "It feels like just yesterday that I\n"
	.string "introduced you to Director\l"
	.string "Ravine...sniff...$"

RangerInstitute_2F_NPC_4_Text_1:
# 885 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_2F_NPC_5_Text_0:
# 895 "data//maps/RangerInstitute/scripts.pory"
	.string "Wanna see what I'm working on?\p"
	.string "I'm researching the existence of a\n"
	.string "Mythical Pokémon right here in Route 6!\l"
	.string "We've sent two Rangers out to search\l"
	.string "for it, but they've had no luck.$"

RangerInstitute_2F_NPC_5_Text_1:
# 899 "data//maps/RangerInstitute/scripts.pory"
	.string "Any luck, {PLAYER}? Remember - it's\n"
	.string "a yellow, catlike Pokémon.$"

RangerInstitute_2F_NPC_5_Text_2:
# 903 "data//maps/RangerInstitute/scripts.pory"
	.string "You've done it!$"

RangerInstitute_Pokeball_One_Text_0:
# 929 "data//maps/RangerInstitute/scripts.pory"
	.string "Do you want to choose the\n"
	.string "fiery Tauros?$"

RangerInstitute_Pokeball_One_Text_1:
# 937 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Institute has gifted you\n"
	.string "a Tauros!$"

RangerInstitute_Pokeball_One_Text_2:
# 941 "data//maps/RangerInstitute/scripts.pory"
	.string "Tauros was sent to your PC.$"

RangerInstitute_Pokeball_One_Text_3:
# 952 "data//maps/RangerInstitute/scripts.pory"
	.string "One of the Institute's Pokémon.\n"
	.string "Better not touch it!$"

RangerInstitute_Pokeball_Two_Text_0:
# 966 "data//maps/RangerInstitute/scripts.pory"
	.string "Do you want to choose the\n"
	.string "dominating Kangaskhan?$"

RangerInstitute_Pokeball_Two_Text_1:
# 974 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Institute has gifted you\n"
	.string "a Kangaskhan!$"

RangerInstitute_Pokeball_Two_Text_2:
# 978 "data//maps/RangerInstitute/scripts.pory"
	.string "Kangaskhan was sent to your PC.$"

RangerInstitute_Pokeball_Three_Text_0:
# 1002 "data//maps/RangerInstitute/scripts.pory"
	.string "Do you want to choose the\n"
	.string "proud Manectric?$"

RangerInstitute_Pokeball_Three_Text_1:
# 1009 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Institute has gifted you\n"
	.string "a Manectric!$"

RangerInstitute_Pokeball_Three_Text_2:
# 1013 "data//maps/RangerInstitute/scripts.pory"
	.string "Manectric was sent to your PC.$"

RangerInstitute_Mon_Bayleef_Text_0:
# 1046 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 1051 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 1054 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks Bayleef!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 1061 "data//maps/RangerInstitute/scripts.pory"
	.string "Palpitoad grunts and waddles around.\n"
	.string "It seems upset...$"

RangerInstitute_Mon_Surskit_Text_0:
# 1066 "data//maps/RangerInstitute/scripts.pory"
	.string "Masquerain wants to be in the water!$"

RangerInstitute_Mon_Scyther_Text_0:
# 1073 "data//maps/RangerInstitute/scripts.pory"
	.string "Scyther beams at you!$"

RangerInstitute_Mon_Scyther_Text_1:
# 1075 "data//maps/RangerInstitute/scripts.pory"
	.string "Scyther looks bummed out!\p"
	.string "It probably wants to be out on the\n"
	.string "field, just like its trainer.$"
