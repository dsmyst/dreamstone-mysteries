MirrohBaseCamp_Houses_MapScripts::
	.byte 0


MirrohBaseCamp_Houses_Historian::
# 6 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 7 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MirrohBaseCamp_Houses_Historian_2
MirrohBaseCamp_Houses_Historian_1:
# 53 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_HISTORIAN, MirrohBaseCamp_Houses_Historian_5
# 77 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 78 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_7
# 79 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 80 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_4
# 81 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_8
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 86 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_ANCIENT_STONE
# 90 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_Historian_15
MirrohBaseCamp_Houses_Historian_14:
# 114 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 115 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_12
# 116 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 117 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 118 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 119 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_13
# 120 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 121 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 122 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 123 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_4
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 125 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 126 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_14
# 128 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCamp_Houses_Historian_24
# 137 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_16
# 139 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
MirrohBaseCamp_Houses_Historian_23:
# 142 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	completesubquest QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 143 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
	end

MirrohBaseCamp_Houses_Historian_2:
# 11 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, MirrohBaseCamp_Houses_Historian_8
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 15 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_1
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 19 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MirrohBaseCamp_Houses_Historian_18
MirrohBaseCamp_Houses_Historian_17:
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_1
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeobject 1
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 29 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 30 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_2
# 31 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 32 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 34 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 4, MirrohBaseCamp_Houses_Historian_Movement_2
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 24
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 4, MirrohBaseCamp_Houses_Historian_Movement_3
# 40 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeobject 4
# 43 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 44 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_CHAMPION_MARTHA
# 45 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_CHAMPION_MARTHA_SETUP
# 47 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_5:
# 54 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROH_GOT_OLD_BONE, MirrohBaseCamp_Houses_Historian_11
# 60 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCamp_Houses_Historian_20
# 70 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_6, MSGBOX_NPC
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_8:
	goto MirrohBaseCamp_Houses_Historian_1

MirrohBaseCamp_Houses_Historian_11:
# 55 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 56 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_3, MSGBOX_NPC
# 57 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_15:
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_5
# 92 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 93 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_9
# 96 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 97 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 98 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_ANCIENT_STONE
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_Historian_Text_10
# 101 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitfanfare
# 102 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 104 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_4
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 107 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 108 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_11
# 109 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 110 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 111 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
	goto MirrohBaseCamp_Houses_Historian_14

MirrohBaseCamp_Houses_Historian_18:
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Houses_Historian_Movement_0
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
	goto MirrohBaseCamp_Houses_Historian_17

MirrohBaseCamp_Houses_Historian_20:
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_4
# 62 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 63 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROH_GOT_OLD_BONE
# 64 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 65 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 67 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_24:
# 129 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_15
# 130 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 131 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 132 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROH_GOT_OLD_BONE
# 133 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 134 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 135 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
	goto MirrohBaseCamp_Houses_Historian_23


MirrohBaseCamp_Houndstone::
# 150 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 151 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houndstone_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballGuy::
# 163 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_2
MirrohBaseCamp_Houses_MasterballGuy_1:
# 167 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_5
MirrohBaseCamp_Houses_MasterballGuy_4:
# 199 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_8
MirrohBaseCamp_Houses_MasterballGuy_7:
# 217 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballGuy_2:
# 164 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_0
	goto MirrohBaseCamp_Houses_MasterballGuy_1

MirrohBaseCamp_Houses_MasterballGuy_5:
# 168 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_1, MSGBOX_NPC
# 170 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 171 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_11
# 175 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_OLD_GATEAU
# 176 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_14
# 180 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 181 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_17
# 187 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_CASTELIACONE
# 188 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 189 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_LAVA_COOKIE
# 191 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_5
# 192 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitfanfare
# 194 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_6, MSGBOX_NPC
# 195 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 196 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 2
	goto MirrohBaseCamp_Houses_MasterballGuy_4

MirrohBaseCamp_Houses_MasterballGuy_8:
# 200 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_7, MSGBOX_NPC
# 201 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8006, ITEM_MASTER_BALL
# 202 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	showitemdescription
# 203 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_8, MSGBOX_NPC
# 204 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	hideitemdescription
# 205 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_9
# 206 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 207 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 208 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 2, MirrohBaseCamp_Houses_Historian_Movement_4
# 209 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 210 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 211 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_10
# 212 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 215 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 1
	goto MirrohBaseCamp_Houses_MasterballGuy_7

MirrohBaseCamp_Houses_MasterballGuy_11:
# 172 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_2, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_14:
# 177 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_3, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_17:
# 182 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_4, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballFriend::
# 222 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 223 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 225 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_SKIP_BALL_CHANGER, MirrohBaseCamp_Houses_MasterballFriend_2
# 228 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_SKIP_BALL_CHANGER
# 229 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0
MirrohBaseCamp_Houses_MasterballFriend_1:
# 232 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_1, MSGBOX_YESNO
# 235 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_6
# 281 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_2
MirrohBaseCamp_Houses_MasterballFriend_5:
# 284 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_2:
	goto MirrohBaseCamp_Houses_MasterballFriend_1

MirrohBaseCamp_Houses_MasterballFriend_6:
# 236 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special ChoosePartyMon
# 237 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitstate
# 238 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_10
# 244 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_MasterballFriend_Text_3
# 246 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_4, ITEM_POKE_BALL
# 247 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_5, ITEM_GREAT_BALL
# 248 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_6, ITEM_ULTRA_BALL
# 249 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_7, ITEM_DIVE_BALL
# 250 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_8, ITEM_HEAL_BALL
# 251 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_9, ITEM_QUICK_BALL
# 252 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_10, ITEM_LUXURY_BALL
# 253 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_11, ITEM_DREAM_BALL
# 254 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 256 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_POKE_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_13
MirrohBaseCamp_Houses_MasterballFriend_12:
# 257 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_GREAT_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_16
MirrohBaseCamp_Houses_MasterballFriend_15:
# 258 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_ULTRA_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_19
MirrohBaseCamp_Houses_MasterballFriend_18:
# 259 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_DIVE_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_22
MirrohBaseCamp_Houses_MasterballFriend_21:
# 260 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_HEAL_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_25
MirrohBaseCamp_Houses_MasterballFriend_24:
# 261 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_QUICK_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_28
MirrohBaseCamp_Houses_MasterballFriend_27:
# 262 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_LUXURY_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_31
MirrohBaseCamp_Houses_MasterballFriend_30:
# 263 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_DREAM_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_34
MirrohBaseCamp_Houses_MasterballFriend_33:
# 266 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem VAR_0x8005
# 268 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_37
# 273 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem VAR_0x8005
# 274 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_13, MSGBOX_SIGN
# 275 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special SetMonPokeball
# 276 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_14
# 277 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 278 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 279 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_15
	goto MirrohBaseCamp_Houses_MasterballFriend_5

MirrohBaseCamp_Houses_MasterballFriend_10:
# 239 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_2
# 240 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_13:
# 256 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_POKE_BALL
# 256 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_12

MirrohBaseCamp_Houses_MasterballFriend_16:
# 257 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_GREAT_BALL
# 257 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREAT_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_15

MirrohBaseCamp_Houses_MasterballFriend_19:
# 258 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_ULTRA_BALL
# 258 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ULTRA_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_18

MirrohBaseCamp_Houses_MasterballFriend_22:
# 259 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DIVE_BALL
# 259 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DIVE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_21

MirrohBaseCamp_Houses_MasterballFriend_25:
# 260 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_HEAL_BALL
# 260 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_24

MirrohBaseCamp_Houses_MasterballFriend_28:
# 261 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_QUICK_BALL
# 261 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_QUICK_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_27

MirrohBaseCamp_Houses_MasterballFriend_31:
# 262 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_LUXURY_BALL
# 262 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LUXURY_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_30

MirrohBaseCamp_Houses_MasterballFriend_34:
# 263 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DREAM_BALL
# 263 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DREAM_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_33

MirrohBaseCamp_Houses_MasterballFriend_37:
# 269 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_12
# 270 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end


# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_0:
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_up
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	face_down
	step_end

# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_1:
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_left
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_left
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_left
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_down
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_down
	step_end

# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_2:
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	jump_in_place_down
	step_end

# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_3:
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	jump_2_down
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	jump_2_down
	step_end

# 80 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_4:
# 80 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_5:
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_question_mark
	step_end

MirrohBaseCamp_Houses_Historian_Text_0:
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_Houses_Historian_Text_1:
# 15 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "So you've finally come.\p"
	.string "I'll see you in a cold, dark cave where\n"
	.string "water flows.$"

MirrohBaseCamp_Houses_Historian_Text_2:
# 30 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come Houndstone!\n"
	.string "We're going for a long walk.$"

MirrohBaseCamp_Houses_Historian_Text_3:
# 56 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello child. How are you?$"

MirrohBaseCamp_Houses_Historian_Text_4:
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I found it! Take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "As for me, I must get back to my\n"
	.string "reading...$"

MirrohBaseCamp_Houses_Historian_Text_6:
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "How strange...I'm sure I had a bone for\n"
	.string "Greavard somewhere...$"

MirrohBaseCamp_Houses_Historian_Text_7:
# 78 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Yes, child. Tell me. What's the story?\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_Historian_Text_8:
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I see...so this Team Somber wants to\n"
	.string "re-enter the past using the\l"
	.string "dreamstones? How interesting. To think\l"
	.string "we've reached an age where humankind\l"
	.string "can control a dreamstone...incredible,\l"
	.string "but terrifying at the same time.$"

MirrohBaseCamp_Houses_Historian_Text_9:
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You brought something back from there?\n"
	.string "Shall we take a look?$"

MirrohBaseCamp_Houses_Historian_Text_10:
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} gave Martha the Ancient\n"
	.string "Stone.$"

MirrohBaseCamp_Houses_Historian_Text_11:
# 108 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! What a find!\p"
	.string "This is a Mega Stone, {PLAYER}. It's to\n"
	.string "be used by a rare ancient Pokémon\l"
	.string "called Aerodactyl.\p"
	.string "An incredible piece of ancient history.\n"
	.string "You must treasure it!$"

MirrohBaseCamp_Houses_Historian_Text_12:
# 115 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You must have seen it yourself,\n"
	.string "{PLAYER}. To the best of our\l"
	.string "knowledge, Ancient Cormoria was a\l"
	.string "harsh, barren and dangerous continent,\l"
	.string "ravaged by fearsome Pokémon that\l"
	.string "fought each other. Today, all we have\l"
	.string "are the damaged fossilised remains of\l"
	.string "those Pokémon. By analysing the fossils\l"
	.string "and comparing, say, a bite mark on one\l"
	.string "fossil to another's teeth, we can\l"
	.string "identify different Pokémon.\p"
	.string "...\p"
	.string "But there was one fossil we found that\n"
	.string "was damaged in ways...in ways so\l"
	.string "horrific they...well...\p"
	.string "No Pokémon we knew of could give us an\n"
	.string "answer. What kind of monstrous being\l"
	.string "could do something like that?$"

MirrohBaseCamp_Houses_Historian_Text_13:
# 119 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "For a while this mystery - the mystery\n"
	.string "of the Ancient Terror - remained\l"
	.string "unsolved. But then, deep inside Mt.\l"
	.string "Mirroh, we found an ancient cave\l"
	.string "painting depicting a beast that\l"
	.string "matched no fossil we had uncovered...\l"
	.string "although which Pokémon it is, we don't\l"
	.string "know as of today.\p"
	.string "...\p"
	.string "There's still much to solve, {PLAYER}.\p"
	.string "If I were to hazard a guess, this Team\n"
	.string "Somber outfit might be looking to do\l"
	.string "something with this Ancient Terror,\l"
	.string "although what exactly, I can't say.$"

MirrohBaseCamp_Houses_Historian_Text_14:
# 126 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! Would you look at the time? I've\n"
	.string "rambled on for too long. Apologies,\l"
	.string "{PLAYER}. I hope this information\l"
	.string "helps you in your journey.\p"
	.string "You should go to Mt. Mirroh and see the\n"
	.string "cave painting for yourself.$"

MirrohBaseCamp_Houses_Historian_Text_15:
# 129 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Here - take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_16:
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now, I must do something about the\n"
	.string "Greavard playing by the market.\l"
	.string "Perhaps one could distract them with a\l"
	.string "bone or something...I'm sure I had one\l"
	.string "lying around...\p"
	.string "Why don't you visit the Gym here\n"
	.string "meanwhile? You may still get a badge\l"
	.string "before they close.$"

MirrohBaseCamp_Houndstone_Text_0:
# 151 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Houndstone is walking slowly.\n"
	.string "It's getting old now...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_0:
# 164 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello {PLAYER}!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_1:
# 168 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Did you get everything?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_2:
# 172 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Mirroh Cone!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_3:
# 177 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Apple Pie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_4:
# 182 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Lava Cookie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_5:
# 191 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Aha! We've got everything we need right\n"
	.string "here...\p"
	.string "...so first I need the crust of the pie...\n"
	.string "...mmm, delicious...\p"
	.string "...the ice cream is actually a binding\n"
	.string "agent...bound to my mouth...\p"
	.string "...and this cookie, you see, holds the\n"
	.string "shell...tasty shell...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_6:
# 194 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "And there we go! A brand-new Master\n"
	.string "Ball, just for you!\p"
	.string "No, I didn't pull it out of my pocket. Are\n"
	.string "you seeing things?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_7:
# 200 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A friend of Rue's?\p"
	.string "...\p"
	.string "So you're his new assistant. Nice to\n"
	.string "meet you, {PLAYER}!\p"
	.string "Rue and I go way back.\n"
	.string "While he entered academia, I became a\l"
	.string "Poké Ball craftsman instead!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_8:
# 203 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A few years ago, I finally perfected my\n"
	.string "opus magnum - the Master Ball!\p"
	.string "Looks beautiful, doesn't it?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_9:
# 205 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Since you're Rue's assistant and he's an\n"
	.string "old friend, how about I do you a favour?\p"
	.string "I can make you one...if you get me the\n"
	.string "right crafting components!\p"
	.string "Let's see...I'll need...\p"
	.string "...one Apple Pie...\p"
	.string "...one Lava Cookie...\p"
	.string "...and one Mirroh Cone!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_10:
# 211 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Of course these aren't for me!\n"
	.string "These are for the Master Ball!\p"
	.string "Are you accusing me of using you?\p"
	.string "...\p"
	.string "Ahem. I'll be waiting here!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_0:
# 229 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "This man here is the only person in all\n"
	.string "of Cormoria who can make a Master Ball.\l"
	.string "A master of the craft!\p"
	.string "I'm not like him, but I've got a couple\n"
	.string "of tricks up my sleeve too!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_1:
# 232 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I can change the Poké Balls of your\n"
	.string "Pokémon if you bring me the Poké Ball!\p"
	.string "Would you like me to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_2:
# 239 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come back any time!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_3:
# 244 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now which Poké Ball should I switch to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_4:
# 246 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Poké Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_5:
# 247 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Great Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_6:
# 248 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Ultra Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_7:
# 249 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dive Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_8:
# 250 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Heal Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_9:
# 251 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Quick Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_10:
# 252 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Luxury Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_11:
# 253 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dream Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_12:
# 269 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You don't have a {STR_VAR_1}.\p"
	.string "I can switch Poké Balls but I can't make\n"
	.string "them appear out of thin air!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_13:
# 274 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} handed a {STR_VAR_1}\n"
	.string "over to the craftsman.$"

MirrohBaseCamp_Houses_MasterballFriend_Text_14:
# 276 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballFriend_Text_15:
# 279 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...and done! Come back if you need me to\n"
	.string "do any more!$"
