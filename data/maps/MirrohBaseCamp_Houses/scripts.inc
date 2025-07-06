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
# 58 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_HISTORIAN, MirrohBaseCamp_Houses_Historian_5
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_7
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_4
# 86 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 87 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 88 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_8
# 90 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_ANCIENT_STONE
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_Historian_15
MirrohBaseCamp_Houses_Historian_14:
# 119 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 120 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_12
# 121 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 122 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 123 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_13
# 125 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 126 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 127 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 128 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_4
# 129 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 130 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 131 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_14
# 133 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCamp_Houses_Historian_23
# 142 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 143 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_16
# 144 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
MirrohBaseCamp_Houses_Historian_22:
# 147 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	completesubquest QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 148 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
	end

MirrohBaseCamp_Houses_Historian_2:
# 11 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_CHAMPION_MARTHA_COMPLETE, MirrohBaseCamp_Houses_Historian_8
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_CHAMPION_LYNCH_COMPLETE, MirrohBaseCamp_Houses_Historian_17
	goto MirrohBaseCamp_Houses_Historian_1

MirrohBaseCamp_Houses_Historian_5:
# 59 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROH_GOT_OLD_BONE, MirrohBaseCamp_Houses_Historian_11
# 65 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCamp_Houses_Historian_19
# 75 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_6, MSGBOX_NPC
# 77 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_8:
	goto MirrohBaseCamp_Houses_Historian_1

MirrohBaseCamp_Houses_Historian_11:
# 60 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_3, MSGBOX_NPC
# 62 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_15:
# 96 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_5
# 97 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 98 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_9
# 101 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 102 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_ANCIENT_STONE
# 104 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_Historian_Text_10
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitfanfare
# 107 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 108 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 109 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_4
# 110 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 111 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 112 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 113 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_11
# 114 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 115 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 116 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
	goto MirrohBaseCamp_Houses_Historian_14

MirrohBaseCamp_Houses_Historian_17:
# 15 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_1
# 17 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MirrohBaseCamp_Houses_Historian_27
MirrohBaseCamp_Houses_Historian_26:
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_1
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_EXIT
# 29 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeobject 1
# 30 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 31 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 32 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_2
# 33 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 34 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 4, MirrohBaseCamp_Houses_Historian_Movement_2
# 38 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 24
# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 4, MirrohBaseCamp_Houses_Historian_Movement_3
# 42 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 43 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeobject 4
# 44 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_EXIT
# 45 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitse
# 47 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
# 48 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_CHAMPION_MARTHA
# 49 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_CHAMPION_MARTHA_SETUP
# 51 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_19:
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_4
# 67 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 68 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROH_GOT_OLD_BONE
# 69 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 70 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_23:
# 134 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_15
# 135 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 136 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 137 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROH_GOT_OLD_BONE
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 139 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 140 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
	goto MirrohBaseCamp_Houses_Historian_22

MirrohBaseCamp_Houses_Historian_27:
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCamp_Houses_Historian_Movement_0
# 23 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
	goto MirrohBaseCamp_Houses_Historian_26


MirrohBaseCamp_Houndstone::
# 155 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 156 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houndstone_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballGuy::
# 168 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_2
MirrohBaseCamp_Houses_MasterballGuy_1:
# 172 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_5
MirrohBaseCamp_Houses_MasterballGuy_4:
# 204 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_8
MirrohBaseCamp_Houses_MasterballGuy_7:
# 222 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballGuy_2:
# 169 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_0
	goto MirrohBaseCamp_Houses_MasterballGuy_1

MirrohBaseCamp_Houses_MasterballGuy_5:
# 173 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_1, MSGBOX_NPC
# 175 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 176 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_11
# 180 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_OLD_GATEAU
# 181 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_14
# 185 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 186 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_17
# 192 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_CASTELIACONE
# 193 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 194 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_LAVA_COOKIE
# 196 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_5
# 197 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 198 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitfanfare
# 199 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_6, MSGBOX_NPC
# 200 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 201 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 2
	goto MirrohBaseCamp_Houses_MasterballGuy_4

MirrohBaseCamp_Houses_MasterballGuy_8:
# 205 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_7, MSGBOX_NPC
# 206 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8006, ITEM_MASTER_BALL
# 207 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	showitemdescription
# 208 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_8, MSGBOX_NPC
# 209 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	hideitemdescription
# 210 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_9
# 211 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 212 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 213 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 2, MirrohBaseCamp_Houses_Historian_Movement_4
# 214 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 215 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 216 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_10
# 217 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 220 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 1
	goto MirrohBaseCamp_Houses_MasterballGuy_7

MirrohBaseCamp_Houses_MasterballGuy_11:
# 177 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_2, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_14:
# 182 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_3, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_17:
# 187 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_4, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballFriend::
# 227 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 228 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 230 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_SKIP_BALL_CHANGER, MirrohBaseCamp_Houses_MasterballFriend_2
# 233 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_SKIP_BALL_CHANGER
# 234 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0
MirrohBaseCamp_Houses_MasterballFriend_1:
# 237 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_1, MSGBOX_YESNO
# 240 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_6
# 286 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_2
MirrohBaseCamp_Houses_MasterballFriend_5:
# 289 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_2:
	goto MirrohBaseCamp_Houses_MasterballFriend_1

MirrohBaseCamp_Houses_MasterballFriend_6:
# 241 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special ChoosePartyMon
# 242 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitstate
# 243 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_10
# 249 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_MasterballFriend_Text_3
# 251 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_4, ITEM_POKE_BALL
# 252 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_5, ITEM_GREAT_BALL
# 253 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_6, ITEM_ULTRA_BALL
# 254 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_7, ITEM_DIVE_BALL
# 255 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_8, ITEM_HEAL_BALL
# 256 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_9, ITEM_QUICK_BALL
# 257 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_10, ITEM_LUXURY_BALL
# 258 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_11, ITEM_DREAM_BALL
# 259 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 261 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_POKE_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_13
MirrohBaseCamp_Houses_MasterballFriend_12:
# 262 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_GREAT_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_16
MirrohBaseCamp_Houses_MasterballFriend_15:
# 263 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_ULTRA_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_19
MirrohBaseCamp_Houses_MasterballFriend_18:
# 264 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_DIVE_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_22
MirrohBaseCamp_Houses_MasterballFriend_21:
# 265 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_HEAL_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_25
MirrohBaseCamp_Houses_MasterballFriend_24:
# 266 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_QUICK_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_28
MirrohBaseCamp_Houses_MasterballFriend_27:
# 267 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_LUXURY_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_31
MirrohBaseCamp_Houses_MasterballFriend_30:
# 268 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_DREAM_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_34
MirrohBaseCamp_Houses_MasterballFriend_33:
# 271 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem VAR_0x8005
# 273 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_37
# 278 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem VAR_0x8005
# 279 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_13, MSGBOX_SIGN
# 280 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special SetMonPokeball
# 281 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_14
# 282 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 283 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 284 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_15
	goto MirrohBaseCamp_Houses_MasterballFriend_5

MirrohBaseCamp_Houses_MasterballFriend_10:
# 244 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_2
# 245 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_13:
# 261 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_POKE_BALL
# 261 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_12

MirrohBaseCamp_Houses_MasterballFriend_16:
# 262 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_GREAT_BALL
# 262 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREAT_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_15

MirrohBaseCamp_Houses_MasterballFriend_19:
# 263 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_ULTRA_BALL
# 263 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ULTRA_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_18

MirrohBaseCamp_Houses_MasterballFriend_22:
# 264 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DIVE_BALL
# 264 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DIVE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_21

MirrohBaseCamp_Houses_MasterballFriend_25:
# 265 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_HEAL_BALL
# 265 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_24

MirrohBaseCamp_Houses_MasterballFriend_28:
# 266 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_QUICK_BALL
# 266 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_QUICK_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_27

MirrohBaseCamp_Houses_MasterballFriend_31:
# 267 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_LUXURY_BALL
# 267 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LUXURY_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_30

MirrohBaseCamp_Houses_MasterballFriend_34:
# 268 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DREAM_BALL
# 268 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DREAM_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_33

MirrohBaseCamp_Houses_MasterballFriend_37:
# 274 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_12
# 275 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end


# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_0:
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_up
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	face_down
	step_end

# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_1:
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_left
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_left
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_left
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_down
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	walk_down
	step_end

# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_2:
# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	jump_in_place_down
	step_end

# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_3:
# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	jump_2_down
# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	jump_2_down
	step_end

# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_4:
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

# 96 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_5:
# 96 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_question_mark
	step_end

MirrohBaseCamp_Houses_Historian_Text_0:
# 15 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_Houses_Historian_Text_1:
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "So you've finally come.\p"
	.string "I'll see you in a cold, dark cave where\n"
	.string "water flows.$"

MirrohBaseCamp_Houses_Historian_Text_2:
# 32 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come Houndstone!\n"
	.string "We're going for a long walk.$"

MirrohBaseCamp_Houses_Historian_Text_3:
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello child. How are you?$"

MirrohBaseCamp_Houses_Historian_Text_4:
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I found it! Take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "As for me, I must get back to my\n"
	.string "reading...$"

MirrohBaseCamp_Houses_Historian_Text_6:
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "How strange...I'm sure I had a bone for\n"
	.string "Greavard somewhere...$"

MirrohBaseCamp_Houses_Historian_Text_7:
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Yes, child. Tell me. What's the story?\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_Historian_Text_8:
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I see...so this Team Somber wants to\n"
	.string "re-enter the past using the\l"
	.string "dreamstones? How interesting. To think\l"
	.string "we've reached an age where humankind\l"
	.string "can control a dreamstone...incredible,\l"
	.string "but terrifying at the same time.$"

MirrohBaseCamp_Houses_Historian_Text_9:
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You brought something back from there?\n"
	.string "Shall we take a look?$"

MirrohBaseCamp_Houses_Historian_Text_10:
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} gave Martha the Ancient\n"
	.string "Stone.$"

MirrohBaseCamp_Houses_Historian_Text_11:
# 113 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! What a find!\p"
	.string "This is a Mega Stone, {PLAYER}. It's to\n"
	.string "be used by a rare ancient Pokémon\l"
	.string "called Aerodactyl.\p"
	.string "An incredible piece of ancient history.\n"
	.string "You must treasure it!$"

MirrohBaseCamp_Houses_Historian_Text_12:
# 120 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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
# 131 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! Would you look at the time? I've\n"
	.string "rambled on for too long. Apologies,\l"
	.string "{PLAYER}. I hope this information\l"
	.string "helps you in your journey.\p"
	.string "You should go to Mt. Mirroh and see the\n"
	.string "cave painting for yourself.$"

MirrohBaseCamp_Houses_Historian_Text_15:
# 134 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Here - take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_16:
# 143 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now, I must do something about the\n"
	.string "Greavard playing by the market.\l"
	.string "Perhaps one could distract them with a\l"
	.string "bone or something...I'm sure I had one\l"
	.string "lying around...\p"
	.string "Why don't you visit the Gym here\n"
	.string "meanwhile? You may still get a badge\l"
	.string "before they close.$"

MirrohBaseCamp_Houndstone_Text_0:
# 156 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Houndstone is walking slowly.\n"
	.string "It's getting old now...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_0:
# 169 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello {PLAYER}!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_1:
# 173 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Did you get everything?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_2:
# 177 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Mirroh Cone!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_3:
# 182 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Apple Pie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_4:
# 187 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Lava Cookie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_5:
# 196 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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
# 199 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "And there we go! A brand-new Master\n"
	.string "Ball, just for you!\p"
	.string "No, I didn't pull it out of my pocket. Are\n"
	.string "you seeing things?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_7:
# 205 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A friend of Rue's?\p"
	.string "...\p"
	.string "So you're his new assistant. Nice to\n"
	.string "meet you, {PLAYER}!\p"
	.string "Rue and I go way back.\n"
	.string "While he entered academia, I became a\l"
	.string "Poké Ball craftsman instead!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_8:
# 208 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A few years ago, I finally perfected my\n"
	.string "opus magnum - the Master Ball!\p"
	.string "Looks beautiful, doesn't it?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_9:
# 210 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Since you're Rue's assistant and he's an\n"
	.string "old friend, how about I do you a favour?\p"
	.string "I can make you one...if you get me the\n"
	.string "right crafting components!\p"
	.string "Let's see...I'll need...\p"
	.string "...one Apple Pie...\p"
	.string "...one Lava Cookie...\p"
	.string "...and one Mirroh Cone!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_10:
# 216 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Of course these aren't for me!\n"
	.string "These are for the Master Ball!\p"
	.string "Are you accusing me of using you?\p"
	.string "...\p"
	.string "Ahem. I'll be waiting here!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_0:
# 234 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "This man here is the only person in all\n"
	.string "of Cormoria who can make a Master Ball.\l"
	.string "A master of the craft!\p"
	.string "I'm not like him, but I've got a couple\n"
	.string "of tricks up my sleeve too!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_1:
# 237 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I can change the Poké Balls of your\n"
	.string "Pokémon if you bring me the Poké Ball!\p"
	.string "Would you like me to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_2:
# 244 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come back any time!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_3:
# 249 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now which Poké Ball should I switch to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_4:
# 251 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Poké Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_5:
# 252 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Great Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_6:
# 253 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Ultra Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_7:
# 254 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dive Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_8:
# 255 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Heal Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_9:
# 256 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Quick Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_10:
# 257 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Luxury Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_11:
# 258 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dream Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_12:
# 274 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You don't have a {STR_VAR_1}.\p"
	.string "I can switch Poké Balls but I can't make\n"
	.string "them appear out of thin air!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_13:
# 279 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} handed a {STR_VAR_1}\n"
	.string "over to the craftsman.$"

MirrohBaseCamp_Houses_MasterballFriend_Text_14:
# 281 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballFriend_Text_15:
# 284 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...and done! Come back if you need me to\n"
	.string "do any more!$"
