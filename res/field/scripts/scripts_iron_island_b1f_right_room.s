#include "macros/scrcmd.inc"

    .data

    ScriptEntry _000A
    ScriptEntry _000E
    ScriptEntryEnd

_000A:
    ScrCmd_25B
    End

_000E:
    ScrCmd_25C
    End

    .byte 0
    .byte 0
