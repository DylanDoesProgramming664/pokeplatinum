#include "macros/btlcmd.inc"

    .data

_000:
    CompareVarToValue OPCODE_EQU, BTLVAR_DEFENDER, BATTLER_NONE, _097
    CompareMonDataToValue OPCODE_NEQ, BTLSCR_DEFENDER, BATTLEMON_SPECIES, 492, _097
    CompareMonDataToValue OPCODE_EQU, BTLSCR_DEFENDER, BATTLEMON_FORM_NUM, 0, _097
    CompareMonDataToValue OPCODE_FLAG_SET, BTLSCR_DEFENDER, BATTLEMON_VOLATILE_STATUS, VOLATILE_CONDITION_SUBSTITUTE, _097
    CompareMonDataToValue OPCODE_NEQ, BTLSCR_DEFENDER, BATTLEMON_STATUS, MON_CONDITION_FREEZE, _097
    UpdateMonData OPCODE_SET, BTLSCR_DEFENDER, BATTLEMON_FORM_NUM, 0
    UpdateVar OPCODE_SET, BTLVAR_SCRIPT_TEMP, 0
    CompareMonDataToValue OPCODE_FLAG_SET, BTLSCR_DEFENDER, BATTLEMON_PERSONALITY, 1, _049
    LoadArchivedMonData SPECIES_SHAYMIN, BTLVAR_SCRIPT_TEMP, SPECIES_DATA_ABILITY_1
    GoTo _062

_049:
    LoadArchivedMonData SPECIES_SHAYMIN, BTLVAR_SCRIPT_TEMP, SPECIES_DATA_ABILITY_2
    CompareVarToValue OPCODE_NEQ, BTLVAR_SCRIPT_TEMP, 0, _062
    LoadArchivedMonData SPECIES_SHAYMIN, BTLVAR_SCRIPT_TEMP, SPECIES_DATA_ABILITY_1

_062:
    UpdateVar OPCODE_FLAG_ON, BTLVAR_BATTLE_CTX_STATUS_2, SYSCTL_RECALC_MON_STATS
    UpdateMonDataFromVar OPCODE_SET, BTLSCR_DEFENDER, BATTLEMON_ABILITY, BTLVAR_CALC_TEMP
    LoadArchivedMonData SPECIES_SHAYMIN, BTLVAR_SCRIPT_TEMP, SPECIES_DATA_TYPE_1
    UpdateMonDataFromVar OPCODE_SET, BTLSCR_DEFENDER, BATTLEMON_TYPE_1, BTLVAR_CALC_TEMP
    LoadArchivedMonData SPECIES_SHAYMIN, BTLVAR_SCRIPT_TEMP, SPECIES_DATA_TYPE_2
    UpdateMonDataFromVar OPCODE_SET, BTLSCR_DEFENDER, BATTLEMON_TYPE_2, BTLVAR_CALC_TEMP
    UpdateVarFromVar OPCODE_SET, BTLVAR_MSG_BATTLER_TEMP, BTLVAR_DEFENDER
    Call BATTLE_SUBSCRIPT_FORM_CHANGE
    RefreshMonData BTLSCR_DEFENDER

_097:
    End 
