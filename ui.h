// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.4
// Project name: test

#ifndef _TEST_UI_H
#define _TEST_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_events.h"
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Roller2;
extern lv_obj_t * ui_Slider2;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Checkbox2;
extern lv_obj_t * ui_Switch1;
void ui_event_Dropdown2(lv_event_t * e);
extern lv_obj_t * ui_Dropdown2;
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Chart1;
extern lv_obj_t * ui_Label3;
void ui_event_Dropdown3(lv_event_t * e);
extern lv_obj_t * ui_Dropdown3;
extern lv_obj_t * ui____initial_actions0;






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
