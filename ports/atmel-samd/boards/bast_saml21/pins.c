#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PA22) },

};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
