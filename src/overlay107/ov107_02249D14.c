#include "overlay107/ov107_02249D14.h"

#include <nitro.h>
#include <string.h>

#include "bg_window.h"
#include "unk_0200DA60.h"

typedef struct {
    const WindowTemplate *unk_00;
    u32 unk_04;
} UnkStruct_ov107_0224A218;

void ov107_02249D14(BgConfig *param0, Window *param1, u8 param2);
void ov107_02249D5C(Window *param0, u8 param1);
void ov107_02249D84(BgConfig *param0, Window *param1);
void ov107_02249DBC(Window *param0, int param1);

static const WindowTemplate Unk_ov107_0224A288[] = {
    { 0x1, 0x2, 0x1, 0x1D, 0x2, 0xD, 0x1 },
    { 0x1, 0x1A, 0x13, 0x4, 0x3, 0xD, 0x3B },
    { 0x1, 0x0, 0x4, 0x20, 0x2, 0xD, 0x47 },
    { 0x1, 0x0, 0x9, 0x20, 0x2, 0xD, 0x87 },
    { 0x0, 0x5, 0xA, 0x18, 0xE, 0xD, 0x1 },
    { 0x0, 0xC, 0x2, 0x13, 0xC, 0xD, 0x1 },
    { 0x0, 0x2, 0x13, 0x1B, 0x4, 0xC, 0x151 },
    { 0x0, 0x2, 0x13, 0x14, 0x4, 0xC, 0x1BD },
    { 0x0, 0x2, 0x13, 0x11, 0x4, 0xC, 0x20D },
    { 0x0, 0x17, 0xD, 0x8, 0xA, 0xD, 0x251 },
    { 0x0, 0x14, 0x7, 0xB, 0xA, 0xD, 0x2A1 },
    { 0x0, 0x16, 0x9, 0x9, 0x8, 0xD, 0x2A1 },
    { 0x0, 0x5, 0x10, 0x1B, 0x7, 0xC, 0x1BD },
    { 0x0, 0x18, 0xD, 0x7, 0x4, 0xD, 0x27A },
    { 0x0, 0x18, 0xB, 0x7, 0x6, 0xD, 0x296 },
    { 0x0, 0x1, 0x1, 0x8, 0x4, 0xD, 0x2C0 },
    { 0x0, 0x1, 0x7, 0xA, 0x2, 0xD, 0x2E0 },
    { 0x0, 0x1, 0xD, 0xB, 0x2, 0xD, 0x2F4 }
};

static const WindowTemplate Unk_ov107_0224A228[] = {
    { 0x1, 0x2, 0x1, 0x1D, 0x2, 0xD, 0x1 },
    { 0x1, 0x1A, 0x13, 0x4, 0x3, 0xD, 0x3B },
    { 0x1, 0x0, 0x4, 0x20, 0x2, 0xD, 0x47 },
    { 0x1, 0x0, 0x9, 0x20, 0x2, 0xD, 0x87 },
    { 0x0, 0x4, 0xA, 0x1A, 0xE, 0xD, 0x1 },
    { 0x0, 0x17, 0xF, 0x8, 0x8, 0xD, 0x1 },
    { 0x0, 0x16, 0x9, 0x9, 0x8, 0xD, 0x16D },
    { 0x0, 0x2, 0x13, 0x1B, 0x4, 0xC, 0x1B5 },
    { 0x0, 0x2, 0x13, 0x14, 0x4, 0xC, 0x221 },
    { 0x0, 0x2, 0x13, 0x11, 0x4, 0xC, 0x271 },
    { 0x0, 0x18, 0xD, 0x7, 0x4, 0xD, 0x2B5 },
    { 0x0, 0x18, 0xB, 0x7, 0x6, 0xD, 0x2D1 }
};

static const UnkStruct_ov107_0224A218 Unk_ov107_0224A218[2] = {
    { Unk_ov107_0224A288, 0x12 },
    { Unk_ov107_0224A228, 0xC }
};

void ov107_02249D14(BgConfig *param0, Window *param1, u8 param2)
{
    u8 v0;
    const WindowTemplate *v1 = Unk_ov107_0224A218[param2].unk_00;
    u32 v2 = Unk_ov107_0224A218[param2].unk_04;

    for (v0 = 0; v0 < v2; v0++) {
        sub_0201A8D4(param0, &param1[v0], &v1[v0]);
        BGL_FillWindow(&param1[v0], 0);
    }

    return;
}

void ov107_02249D5C(Window *param0, u8 param1)
{
    u16 v0;
    u32 v1 = Unk_ov107_0224A218[param1].unk_04;

    for (v0 = 0; v0 < v1; v0++) {
        BGL_DeleteWindow(&param0[v0]);
    }

    return;
}

void ov107_02249D84(BgConfig *param0, Window *param1)
{
    sub_0200DAA4(param0, sub_0201C290(param1), (1024 - 9), 11, 0, 100);
    Window_Show(param1, 1, (1024 - 9), 11);

    return;
}

void ov107_02249DBC(Window *param0, int param1)
{
    sub_0200DD0C(param0->bgConfig, sub_0201C290(param0), ((1024 - 9) - (18 + 12)), 10, param1, 100);
    BGL_FillWindow(param0, 15);
    sub_0200E060(param0, 1, ((1024 - 9) - (18 + 12)), 10);
    sub_0201A9A4(param0);

    return;
}
