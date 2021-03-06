RGB: macro
    rept _NARG / 3
        dw palred (\1) + palgreen (\2) + palblue (\3)
        shift 3
    endr
endm

palred   EQUS "(1 << 0) *"
palgreen EQUS "(1 << 5) *"
palblue  EQUS "(1 << 10) *"

palettes EQUS "* PALETTE_SIZE"
palette  EQUS "+ PALETTE_SIZE *"
color    EQUS "+ PAL_COLOR_SIZE *"

tiles EQUS "* $10"
