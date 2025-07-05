# 1 "data//maps/Rivetshore_RangerInstitute/scripts.pory"

# 2 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
    .set LOCALID_DAYCARE_MAN, 2
# 3 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
    .set LOCALID_DAYCARE_MON_0, 3
# 4 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
    .set LOCALID_DAYCARE_MON_1, 4

Rivetshore_RangerInstitute_MapScripts::
# 8 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Rivetshore_RangerInstitute_OnTransition
	.byte 0


Rivetshore_RangerInstitute_OnTransition::
# 13 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	call Rivetshore_RangerInstitute_TryMoveDayCareMan
# 15 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	setflag FLAG_TEMP_1
# 16 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 18 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	switch VAR_RESULT
# 20 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	case 2, Rivetshore_RangerInstitute_OnTransition_3
# 21 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	case 1, Rivetshore_RangerInstitute_OnTransition_4
Rivetshore_RangerInstitute_OnTransition_1:
	end

Rivetshore_RangerInstitute_OnTransition_3:
# 20 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	call Route117_EventScript_ShowDaycareMon1
	goto Rivetshore_RangerInstitute_OnTransition_1

Rivetshore_RangerInstitute_OnTransition_4:
# 21 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	call Route117_EventScript_ShowDaycareMon0
	goto Rivetshore_RangerInstitute_OnTransition_1


Rivetshore_RangerInstitute_TryMoveDayCareMan::
# 28 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 29 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 26, 12
	return


Rivetshore_RangerInstitute_DittoMan::
# 35 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	checkitem ITEM_RANGER_CREST
# 36 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rivetshore_RangerInstitute_DittoMan_1
	return

Rivetshore_RangerInstitute_DittoMan_1:
# 37 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	goto_if_unset FLAG_RIVETSHORE_RANGER_DITTO, Rivetshore_RangerInstitute_DittoMan_3
	return

Rivetshore_RangerInstitute_DittoMan_3:
# 38 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	givemon SPECIES_DITTO, 30
# 39 "data//maps/Rivetshore_RangerInstitute/scripts.pory"
	setflag FLAG_RIVETSHORE_RANGER_DITTO
	return

