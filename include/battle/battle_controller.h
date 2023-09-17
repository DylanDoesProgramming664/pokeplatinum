#ifndef POKEPLATINUM_BATTLE_CONTROLLER_H
#define POKEPLATINUM_BATTLE_CONTROLLER_H

#include "struct_decls/battle_system.h"
#include "battle/battle_context.h"

enum BattleControlSequence {
    BATTLE_CONTROL_GET_BATTLE_MON = 0,
    BATTLE_CONTROL_START_ENCOUNTER,
    BATTLE_CONTROL_TRAINER_MESSAGE,
    BATTLE_CONTROL_SHOW_BATTLE_MON,
    BATTLE_CONTROL_INIT_COMMAND_SELECTION,
    BATTLE_CONTROL_COMMAND_SELECTION_INPUT,
    BATTLE_CONTROL_CALC_TURN_ORDER,
    BATTLE_CONTROL_CHECK_PRE_MOVE_ACTIONS,
    BATTLE_CONTROL_BRANCH_ACTIONS,
    BATTLE_CONTROL_CHECK_FIELD_CONDITIONS,
    BATTLE_CONTROL_CHECK_MON_CONDITIONS,
    BATTLE_CONTROL_CHECK_SIDE_CONDITIONS,
    BATTLE_CONTROL_TURN_END,

    BATTLE_CONTROL_FIGHT,
    BATTLE_CONTROL_ITEM,
    BATTLE_CONTROL_PARTY,
    BATTLE_CONTROL_RUN,

    BATTLE_CONTROL_SAFARI_BALL,
    BATTLE_CONTROL_SAFARI_BAIT,
    BATTLE_CONTROL_SAFARI_ROCK,
    BATTLE_CONTROL_SAFARI_WAIT,

    BATTLE_CONTROL_EXEC_SCRIPT,
    BATTLE_CONTROL_BEFORE_MOVE,
    BATTLE_CONTROL_TRY_MOVE,
    BATTLE_CONTROL_PRIMARY_EFFECT,
    BATTLE_CONTROL_MOVE_FAILED,

    BATTLE_CONTROL_CHECK_FAINTED = 33,

    BATTLE_CONTROL_UPDATE_MOVE_BUFFERS = 38,
    BATTLE_CONTROL_MOVE_END,
    BATTLE_CONTROL_AFTER_SWITCH,
    BATTLE_CONTROL_RESULT,

    BATTLE_CONTROL_FIGHT_END = 43,
    BATTLE_CONTROL_END_WAIT,
};

void *BattleContext_New(BattleSystem *battleSys);
int BattleController_Main(BattleSystem *battleSys, BattleContext *battleCtx);
void BattleContext_Free(BattleContext *battleCtx);
void BattleController_CheckMoveHitEffect(BattleSystem *battleSys, BattleContext *battleCtx, int attacker, int defender, int move);

#endif // POKEPLATINUM_BATTLE_CONTROLLER_H
