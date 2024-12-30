#include "unk_0205D8CC.h"

#include <nitro.h>
#include <string.h>

#include "bg_window.h"
#include "font.h"
#include "game_options.h"
#include "render_text.h"
#include "render_window.h"
#include "strbuf.h"
#include "text.h"

void FieldMessage_LoadTextPalettes(u32 palLocation, u32 resetPrinters)
{
    if (resetPrinters == TRUE) {
        Text_ResetAllPrinters();
    }

    Font_LoadTextPalette(palLocation, 13 * 32, HEAP_ID_FIELD);
    Font_LoadScreenIndicatorsPalette(palLocation, 12 * 32, HEAP_ID_FIELD);
}

void FieldMessage_AddWindow(BgConfig *param0, Window *param1, u32 param2)
{
    if (param2 == 3) {
        Window_Add(param0, param1, 3, 2, 19, 27, 4, 12, (((1024 - (18 + 12) - 9 - (32 * 8)) - (18 + 12 + 24)) - (27 * 4)));
    } else {
        Window_Add(param0, param1, 7, 2, 19, 27, 4, 12, (512 - (27 * 4)));
    }
}

void FieldMessage_DrawWindow(Window *param0, const Options *param1)
{
    LoadMessageBoxGraphics(param0->bgConfig, Window_GetBgLayer(param0), 1024 - (18 + 12), 10, Options_Frame(param1), 4);
    FieldMessaage_FillWindowTilemap(param0);
    Window_DrawMessageBoxWithScrollCursor(param0, 0, 1024 - (18 + 12), 10);
}

void FieldMessaage_FillWindowTilemap(Window *window)
{
    Window_FillTilemap(window, 15);
}

u8 FieldMessage_Print(Window *param0, Strbuf *param1, const Options *param2, u8 param3)
{
    u8 v0;

    RenderControlFlags_SetCanABSpeedUpPrint(param3);
    RenderControlFlags_SetAutoScrollFlags(0);
    RenderControlFlags_SetSpeedUpOnTouch(0);

    v0 = Text_AddPrinterWithParams(param0, FONT_MESSAGE, param1, 0, 0, Options_TextFrameDelay(param2), NULL);
    return v0;
}

u8 sub_0205D9CC(Window *param0, Strbuf *param1, int param2, int param3, u8 param4, int param5)
{
    RenderControlFlags_SetCanABSpeedUpPrint(param4);
    RenderControlFlags_SetAutoScrollFlags(param5);
    RenderControlFlags_SetSpeedUpOnTouch(0);

    return Text_AddPrinterWithParams(param0, param2, param1, 0, 0, param3, NULL);
}

u8 FieldMessage_FinishedPrinting(u8 param0)
{
    if (Text_IsPrinterActive(param0) == 0) {
        return 1;
    }

    return 0;
}

void sub_0205DA1C(BgConfig *param0, Window *param1, u16 param2, u16 param3)
{
    u16 v0, v1;

    if ((param2 == 0) || (param2 == 1)) {
        v0 = 9;
        v1 = 20;
    } else {
        v0 = 2;
        v1 = 27;
    }

    if (param3 == 3) {
        Window_Add(param0, param1, 3, v0, 19, v1, 4, 9, (((1024 - (18 + 12) - 9 - (32 * 8)) - (18 + 12 + 24)) - (27 * 4)));
    } else {
        Window_Add(param0, param1, 7, v0, 19, v1, 4, 9, (512 - (27 * 4)));
    }
}

void sub_0205DA80(Window *param0, u16 param1, u16 param2)
{
    LoadSignpostContentGraphics(param0->bgConfig, Window_GetBgLayer(param0), ((1024 - (18 + 12) - 9 - (32 * 8)) - (18 + 12 + 24)), 9, param1, param2, 4);
    Window_FillTilemap(param0, 15);
    Window_DrawSignpost(param0, 0, ((1024 - (18 + 12) - 9 - (32 * 8)) - (18 + 12 + 24)), 9, param1);
}
