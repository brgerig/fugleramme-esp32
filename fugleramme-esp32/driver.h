#define BOARD_EE02 1
#define BOARD_EE04 2

#ifndef BOARD
  #define BOARD EE02
#endif

#if BOARD == BOARD_EE02
  #define BOARD_SCREEN_COMBO 510 // 13.3 inch six-color ePaper Screen（T133A01）
  #define USE_XIAO_EPAPER_DISPLAY_BOARD_EE02
  #define LOAD_GFXFF
#elif BOARD == BOARD_EE04
#endif
