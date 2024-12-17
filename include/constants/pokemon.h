#ifndef POKEPLATINUM_CONSTANTS_POKEMON_H
#define POKEPLATINUM_CONSTANTS_POKEMON_H

#include "generated/pokemon_types.h" // PokemonType
#include "generated/species_data_params.h" // SpeciesDataParam

/**
 * @brief Pokemon Stats
 */
enum {
    STAT_HP = 0,
    STAT_ATTACK,
    STAT_DEFENSE,
    STAT_SPEED,
    STAT_SPECIAL_ATTACK,
    STAT_SPECIAL_DEFENSE,

    STAT_MAX
};

#define MAX_PARTY_SIZE      6
#define NUM_BOOSTABLE_STATS 8

#define MAX_IVS_SINGLE_STAT 31
#define MAX_EVS_SINGLE_STAT 255
#define MAX_EVS_ALL_STATS   510

#define MAX_CONTEST_STAT 255

#define MAX_POKEMON_SHEEN    255
#define MAX_POKEMON_MARKINGS 6
#define MAX_POKEMON_LEVEL    100
#define MAX_POKEMON_NAME_LEN 12

#define EVOLVE_FRIENDSHIP_THRESHOLD 220

/**
 * @brief Pokemon Data Parameters
 */
enum PokemonDataParam {
    MON_DATA_PERSONALITY,
    MON_DATA_IS_PARTY_DECRYPTED,
    MON_DATA_IS_BOX_DECRYPTED,
    MON_DATA_IS_DATA_INVALID,
    MON_DATA_CHECKSUM,
    MON_DATA_SPECIES,
    MON_DATA_HELD_ITEM,
    MON_DATA_OT_ID,
    MON_DATA_EXP,
    MON_DATA_FRIENDSHIP,
    MON_DATA_ABILITY,
    MON_DATA_MARKS,
    MON_DATA_LANGUAGE,
    MON_DATA_HP_EV,
    MON_DATA_ATK_EV,
    MON_DATA_DEF_EV,
    MON_DATA_SPEED_EV,
    MON_DATA_SPATK_EV,
    MON_DATA_SPDEF_EV,
    MON_DATA_COOL,
    MON_DATA_BEAUTY,
    MON_DATA_CUTE,
    MON_DATA_SMART,
    MON_DATA_TOUGH,
    MON_DATA_SHEEN,
    MON_DATA_SINNOH_CHAMP_RIBBON,
    MON_DATA_SINNOH_ABILITY_RIBBON,
    MON_DATA_SINNOH_GREAT_ABILITY_RIBBON,
    MON_DATA_SINNOH_DOUBLE_ABILITY_RIBBON,
    MON_DATA_SINNOH_MULTI_ABILITY_RIBBON,
    MON_DATA_SINNOH_PAIR_ABILITY_RIBBON,
    MON_DATA_SINNOH_WORLD_ABILITY_RIBBON,
    MON_DATA_SINNOH_ALERT_RIBBON,
    MON_DATA_SINNOH_SHOCK_RIBBON,
    MON_DATA_SINNOH_DOWNCAST_RIBBON,
    MON_DATA_SINNOH_CARELESS_RIBBON,
    MON_DATA_SINNOH_RELAX_RIBBON,
    MON_DATA_SINNOH_SNOOZE_RIBBON,
    MON_DATA_SINNOH_SMILE_RIBBON,
    MON_DATA_SINNOH_GORGEOUS_RIBBON,
    MON_DATA_SINNOH_ROYAL_RIBBON,
    MON_DATA_SINNOH_GORGEOUS_ROYAL_RIBBON,
    MON_DATA_SINNOH_FOOTPRINT_RIBBON,
    MON_DATA_SINNOH_RECORD_RIBBON,
    MON_DATA_SINNOH_HISTORY_RIBBON,
    MON_DATA_SINNOH_LEGEND_RIBBON,
    MON_DATA_SINNOH_RED_RIBBON,
    MON_DATA_SINNOH_GREEN_RIBBON,
    MON_DATA_SINNOH_BLUE_RIBBON,
    MON_DATA_SINNOH_FESTIVAL_RIBBON,
    MON_DATA_SINNOH_CARNIVAL_RIBBON,
    MON_DATA_SINNOH_CLASSIC_RIBBON,
    MON_DATA_SINNOH_PREMIER_RIBBON,
    MON_DATA_SINNOH_RIBBON_DUMMY,
    MON_DATA_MOVE1,
    MON_DATA_MOVE2,
    MON_DATA_MOVE3,
    MON_DATA_MOVE4,
    MON_DATA_MOVE1_CUR_PP,
    MON_DATA_MOVE2_CUR_PP,
    MON_DATA_MOVE3_CUR_PP,
    MON_DATA_MOVE4_CUR_PP,
    MON_DATA_MOVE1_PP_UPS,
    MON_DATA_MOVE2_PP_UPS,
    MON_DATA_MOVE3_PP_UPS,
    MON_DATA_MOVE4_PP_UPS,
    MON_DATA_MOVE1_MAX_PP,
    MON_DATA_MOVE2_MAX_PP,
    MON_DATA_MOVE3_MAX_PP,
    MON_DATA_MOVE4_MAX_PP,
    MON_DATA_HP_IV,
    MON_DATA_ATK_IV,
    MON_DATA_DEF_IV,
    MON_DATA_SPEED_IV,
    MON_DATA_SPATK_IV,
    MON_DATA_SPDEF_IV,
    MON_DATA_IS_EGG,
    MON_DATA_HAS_NICKNAME,
    MON_DATA_HOENN_COOL_RIBBON,
    MON_DATA_HOENN_COOL_RIBBON_SUPER,
    MON_DATA_HOENN_COOL_RIBBON_HYPER,
    MON_DATA_HOENN_COOL_RIBBON_MASTER,
    MON_DATA_HOENN_BEAUTY_RIBBON,
    MON_DATA_HOENN_BEAUTY_RIBBON_SUPER,
    MON_DATA_HOENN_BEAUTY_RIBBON_HYPER,
    MON_DATA_HOENN_BEAUTY_RIBBON_MASTER,
    MON_DATA_HOENN_CUTE_RIBBON,
    MON_DATA_HOENN_CUTE_RIBBON_SUPER,
    MON_DATA_HOENN_CUTE_RIBBON_HYPER,
    MON_DATA_HOENN_CUTE_RIBBON_MASTER,
    MON_DATA_HOENN_SMART_RIBBON,
    MON_DATA_HOENN_SMART_RIBBON_SUPER,
    MON_DATA_HOENN_SMART_RIBBON_HYPER,
    MON_DATA_HOENN_SMART_RIBBON_MASTER,
    MON_DATA_HOENN_TOUGH_RIBBON,
    MON_DATA_HOENN_TOUGH_RIBBON_SUPER,
    MON_DATA_HOENN_TOUGH_RIBBON_HYPER,
    MON_DATA_HOENN_TOUGH_RIBBON_MASTER,
    MON_DATA_HOENN_CHAMPION_RIBBON,
    MON_DATA_HOENN_WINNING_RIBBON,
    MON_DATA_HOENN_VICTORY_RIBBON,
    MON_DATA_HOENN_ARTIST_RIBBON,
    MON_DATA_HOENN_EFFORT_RIBBON,
    MON_DATA_HOENN_MARINE_RIBBON,
    MON_DATA_HOENN_LAND_RIBBON,
    MON_DATA_HOENN_SKY_RIBBON,
    MON_DATA_HOENN_COUNTRY_RIBBON,
    MON_DATA_HOENN_NATIONAL_RIBBON,
    MON_DATA_HOENN_EARTH_RIBBON,
    MON_DATA_HOENN_WORLD_RIBBON,
    MON_DATA_FATEFUL_ENCOUNTER,
    MON_DATA_GENDER,
    MON_DATA_FORM,
    MON_DATA_DUMMY_B_1,
    MON_DATA_DUMMY_B_2,
    MON_DATA_FATEFUL_MET_LOCATION,
    MON_DATA_FATEFUL_HATCH_LOCATION,
    MON_DATA_NICKNAME,
    MON_DATA_NICKNAME_AND_FLAG,
    MON_DATA_NICKNAME_STRBUF,
    MON_DATA_NICKNAME_STRBUF_AND_FLAG,
    MON_DATA_MET_GAME_REGION_CODE,
    MON_DATA_MET_GAME,
    MON_DATA_SINNOH_SUPER_COOL_RIBBON,
    MON_DATA_SINNOH_SUPER_COOL_RIBBON_GREAT,
    MON_DATA_SINNOH_SUPER_COOL_RIBBON_ULTRA,
    MON_DATA_SINNOH_SUPER_COOL_RIBBON_MASTER,
    MON_DATA_SINNOH_SUPER_BEAUTY_RIBBON,
    MON_DATA_SINNOH_SUPER_BEAUTY_RIBBON_GREAT,
    MON_DATA_SINNOH_SUPER_BEAUTY_RIBBON_ULTRA,
    MON_DATA_SINNOH_SUPER_BEAUTY_RIBBON_MASTER,
    MON_DATA_SINNOH_SUPER_CUTE_RIBBON,
    MON_DATA_SINNOH_SUPER_CUTE_RIBBON_GREAT,
    MON_DATA_SINNOH_SUPER_CUTE_RIBBON_ULTRA,
    MON_DATA_SINNOH_SUPER_CUTE_RIBBON_MASTER,
    MON_DATA_SINNOH_SUPER_SMART_RIBBON,
    MON_DATA_SINNOH_SUPER_SMART_RIBBON_GREAT,
    MON_DATA_SINNOH_SUPER_SMART_RIBBON_ULTRA,
    MON_DATA_SINNOH_SUPER_SMART_RIBBON_MASTER,
    MON_DATA_SINNOH_SUPER_TOUGH_RIBBON,
    MON_DATA_SINNOH_SUPER_TOUGH_RIBBON_GREAT,
    MON_DATA_SINNOH_SUPER_TOUGH_RIBBON_ULTRA,
    MON_DATA_SINNOH_SUPER_TOUGH_RIBBON_MASTER,
    MON_DATA_CONTEST_RIBBON_DUMMY,
    MON_DATA_OTNAME,
    MON_DATA_OTNAME_STRBUF,
    MON_DATA_MET_YEAR,
    MON_DATA_MET_MONTH,
    MON_DATA_MET_DAY,
    MON_DATA_HATCH_YEAR,
    MON_DATA_HATCH_MONTH,
    MON_DATA_HATCH_DAY,
    MON_DATA_MET_LOCATION,
    MON_DATA_HATCH_LOCATION,
    MON_DATA_POKERUS,
    MON_DATA_POKEBALL,
    MON_DATA_MET_LEVEL,
    MON_DATA_OT_GENDER,
    MON_DATA_MET_TERRAIN,
    MON_DATA_DUMMY_D_1,
    MON_DATA_STATUS_CONDITION,
    MON_DATA_LEVEL,
    MON_DATA_MAIL_ID,
    MON_DATA_CURRENT_HP,
    MON_DATA_MAX_HP,
    MON_DATA_ATK,
    MON_DATA_DEF,
    MON_DATA_SPEED,
    MON_DATA_SP_ATK,
    MON_DATA_SP_DEF,
    MON_DATA_170,
    MON_DATA_171,
    MON_DATA_SPECIES_EXISTS, //!< possible data sanity check
    MON_DATA_EGG_EXISTS,
    MON_DATA_SPECIES_EGG,
    MON_DATA_COMBINED_IVS,
    MON_DATA_NIDORAN_HAS_NICKNAME,
    MON_DATA_TYPE_1,
    MON_DATA_TYPE_2,
    MON_DATA_SPECIES_NAME,
};

#endif // POKEPLATINUM_CONSTANTS_POKEMON_H
