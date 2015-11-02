
#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <stdint.h>
#include <stdbool.h>

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void* ugui_font_t;

typedef struct ugui_graphics_s * ugui_graphics_t;

ugui_graphics_t ugui_graphics_create(uint32_t w, uint32_t h, bool* buffer);

void ugui_graphics_destroy(ugui_graphics_t graphics);

void ugui_graphics_draw_rect(ugui_graphics_t graphics, ugui_rect_t rect);

void ugui_graphics_draw_text(ugui_graphics_t graphics, char* text, ugui_font_t font);

void ugui_graphics_clear(ugui_graphics_t graphics);

#ifdef __cplusplus
}
#endif

#endif