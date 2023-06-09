// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.4
// Project name: test

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Roller2;
lv_obj_t * ui_Slider2;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Checkbox2;
lv_obj_t * ui_Switch1;
void ui_event_Dropdown2(lv_event_t * e);
lv_obj_t * ui_Dropdown2;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_Label3;
void ui_event_Dropdown3(lv_event_t * e);
lv_obj_t * ui_Dropdown3;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Dropdown2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
        _ui_dropdown_set_property(ui_Dropdown3, _UI_DROPDOWN_PROPERTY_SELECTED, 1);
    }
}
void ui_event_Dropdown3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
        _ui_dropdown_set_property(ui_Dropdown2, _UI_DROPDOWN_PROPERTY_SELECTED, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x747171), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 309);
    lv_obj_set_height(ui_Panel1, 223);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xF7FCF7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Panel1, lv_color_hex(0xDA1414), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Roller2 = lv_roller_create(ui_Screen1);
    lv_roller_set_options(ui_Roller2, "Option 1\nOption 2\nOption 3", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_Roller2, 100);
    lv_obj_set_width(ui_Roller2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Roller2, -90);
    lv_obj_set_y(ui_Roller2, 35);
    lv_obj_set_align(ui_Roller2, LV_ALIGN_CENTER);

    ui_Slider2 = lv_slider_create(ui_Screen1);
    lv_obj_set_width(ui_Slider2, 136);
    lv_obj_set_height(ui_Slider2, 10);
    lv_obj_set_x(ui_Slider2, 60);
    lv_obj_set_y(ui_Slider2, 67);
    lv_obj_set_align(ui_Slider2, LV_ALIGN_CENTER);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -6);
    lv_obj_set_y(ui_Label2, -89);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Test Panel");

    ui_Checkbox2 = lv_checkbox_create(ui_Screen1);
    lv_checkbox_set_text(ui_Checkbox2, "Testing");
    lv_obj_set_width(ui_Checkbox2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Checkbox2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Checkbox2, -87);
    lv_obj_set_y(ui_Checkbox2, -40);
    lv_obj_set_align(ui_Checkbox2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Switch1 = lv_switch_create(ui_Screen1);
    lv_obj_set_width(ui_Switch1, 50);
    lv_obj_set_height(ui_Switch1, 25);
    lv_obj_set_x(ui_Switch1, 13);
    lv_obj_set_y(ui_Switch1, 21);
    lv_obj_set_align(ui_Switch1, LV_ALIGN_CENTER);

    ui_Dropdown2 = lv_dropdown_create(ui_Screen1);
    lv_dropdown_set_options(ui_Dropdown2, "Screen 1\nScreen 2\n");
    lv_obj_set_width(ui_Dropdown2, 150);
    lv_obj_set_height(ui_Dropdown2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Dropdown2, 64);
    lv_obj_set_y(ui_Dropdown2, -44);
    lv_obj_set_align(ui_Dropdown2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    lv_obj_add_event_cb(ui_Dropdown2, ui_event_Dropdown2, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Chart1 = lv_chart_create(ui_Screen2);
    lv_obj_set_width(ui_Chart1, 200);
    lv_obj_set_height(ui_Chart1, 100);
    lv_obj_set_x(ui_Chart1, 6);
    lv_obj_set_y(ui_Chart1, 38);
    lv_obj_set_align(ui_Chart1, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart1, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, true, 50);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart1_series_1 = lv_chart_add_series(ui_Chart1, lv_color_hex(0x808080),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart1_series_1_array[] = { 100, 90, 80, 70, 60, 50, 40, 20, 0, -10 };
    lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);

    ui_Label3 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -1);
    lv_obj_set_y(ui_Label3, -83);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "TABEL CUAN FIGO");

    ui_Dropdown3 = lv_dropdown_create(ui_Screen2);
    lv_dropdown_set_options(ui_Dropdown3, "Screen 1\nScreen 2\n");
    lv_obj_set_width(ui_Dropdown3, 150);
    lv_obj_set_height(ui_Dropdown3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Dropdown3, 64);
    lv_obj_set_y(ui_Dropdown3, -44);
    lv_obj_set_align(ui_Dropdown3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    lv_obj_add_event_cb(ui_Dropdown3, ui_event_Dropdown3, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
