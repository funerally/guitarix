/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose, Steve Poskitt
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


#include <string>
#include <iostream>

#include <gtkmm.h>
#include "gx_digital_delay_st.h"
#include "widget.h"


#include <lv2.h>
#include <lv2/lv2plug.in/ns/extensions/ui/ui.h>

using namespace std;

class Gx_digital_delay_st_GUI
{
private:
  Glib::ustring plugskin;
  Glib::ustring addKnob;
  Glib::ustring plug_name;
  void set_knob(Glib::ustring knob);
  void set_skin();
  void set_plug_name(const char * plugin_uri);
  GtkWidget* make_gui();
public:

  Widget* widget;
  static void set_plug_name_static(Gx_digital_delay_st_GUI *self, const char * plugin_uri)
  {
    self->set_plug_name(plugin_uri);
  }
  static GtkWidget* make_gui_static(Gx_digital_delay_st_GUI *self)
  {
    return self->make_gui();
  }

  Gx_digital_delay_st_GUI () {};
  ~Gx_digital_delay_st_GUI () {};
} ;

void Gx_digital_delay_st_GUI::set_knob( Glib::ustring knob)
{
  addKnob =   " style 'gx_";
  addKnob +=  plug_name;
  addKnob +=   "_dark_skin_icons'\n"
               " { \n"
               "   stock['bigknob'] = {{'";
  addKnob +=  knob;
  addKnob +=  ".png'}}\n"
              "   stock['smallknob'] = {{'";
  addKnob +=  knob;
  addKnob +=  "-small.png'}}\n"
              "   stock['smallknobr'] = {{'";
  addKnob +=  knob;
  addKnob +=  "-middle.png'}}\n"
              "   stock['button_on'] = {{'"
              "echo-switch_on.png'}}\n"
              "   stock['button_off'] = {{'"
              "echo-switch_off.png'}}\n"
              " }\n"
              "widget '*.";
  addKnob +=  plug_name;
  addKnob +=  "' style 'gx_";
  addKnob +=  plug_name;
  addKnob +=  "_dark_skin_icons' \n"
              "class '*GxToggleImage' style'gx_"; 
  addKnob +=  plug_name;
  addKnob +=  "_dark_skin_icons' \n";
}

void Gx_digital_delay_st_GUI::set_skin()
{
  Glib::ustring toparse = "pixmap_path  ";
  toparse +=     " '";
  toparse +=        GX_LV2_STYLE_DIR;
  toparse +=     "/'\n";
  toparse +=     "style \"gx_";
  toparse +=     plug_name;
  toparse +=     "_dark-paintbox\"\n"
                 " { \n"
                 "GxPaintBox::skin-gradient = {\n"
                 "{ 65536, 983, 6983, 983, 65536 }, \n"
                 "{ 32768, 62768, 65536, 62768, 65536 }, \n"
                 "{ 0, 22760, 22760, 62760, 65536 }} \n"
                 " GxPaintBox::box-gradient = {\n"
                 "{ 0, 61, 61, 61, 62428 }, \n"
                 "{ 22768, 80, 83, 80, 42428 }, \n"
                 "{ 52428, 8, 8, 80, 32428 }, \n"
                 "{ 65536, 4, 4, 4, 52428 }} \n"
                 "    GxPaintBox::icon-set =11\n"
                 " }\n"
                 "\n"
                 "style 'gx_head_expander_box' \n"
                 " { \n"
                 "    fg[NORMAL] = '#15214C' \n"
                 "font_name = 'sans 7.5 bold' \n"
                 " }\n";
  toparse +=     addKnob;

  toparse +=     " widget '*.amplabel' style:highest 'gx_head_expander_box'\n"
  
                 "style 'gx_head_latency_box' \n"
                 " { \n"
                 "    fg[NORMAL] = '#15214C' \n"
                 "font_name = 'sans 7.5 ' \n"
                 " }\n";
  toparse +=     " widget '*.lalabel' style:highest 'gx_head_latency_box'\n"
  
                 "widget '*.";
  toparse +=     plug_name;
  toparse +=     "' style 'gx_";
  toparse +=     plug_name;
  toparse +=     "_dark-paintbox' ";
  toparse +=     " style 'gx_selector_";
  toparse +=     plug_name;
  toparse +=     "'\n"
                 " {\n"
                 " fg[NORMAL] = '#D8DEF5'\n"
                 " GtkRange::trough-border = 2\n"
                 " GtkRange::stepper-size = 8\n"
                 " GtkRange::stepper-spacing = 2\n"
                 " GxRegler::value-border = { 6, 6, 3, 3 }\n"
                 " font_name = 'sans 7.5'\n"
                 " xthickness = 10\n"
                 " ythickness = 1\n"
                 " }\n"
                 "widget '*.";
  toparse +=     plug_name;
  toparse +=     "' style:highest 'gx_selector_";
  toparse +=     plug_name;
  toparse +=     "'\n";
  toparse +=  "style 'gx_switch'\n"
              "{\n"
              "xthickness = 0\n"
              "ythickness = 0\n"
              "GtkButton::inner-border = {0, 0, 0, 0}\n"
              "GtkButton::default-border = {0, 0, 0, 0}\n"
              "GtkButton::focus-line-width = 0\n"
              "GtkButton::focus-padding = 0\n"
              "GtkButton::interior-focus = 0\n"
              "GtkButton::child-displacement-x = 0\n"
              "GtkButton::child-displacement-y = 0\n"
              " }\n"
              "widget '*.";
  toparse +=  plug_name;
  toparse +=  "' style:highest 'gx_switch'";
  toparse +=     "style 'gx_fastmeter'\n"
                 " {\n"
                 "   GxFastMeter::clr-bottom = '#003808'\n"
                 "   GxFastMeter::clr-middle = '#00ff00'\n"
                 "   GxFastMeter::clr-top    = '#ff0000'\n"
                 "   GxFastMeter::over       = '#ff0000'\n"
                 " }\n"
                 " class '*GxFastMeter' style:highest 'gx_fastmeter'\n";

  gtk_rc_parse_string (toparse.c_str());
}

void Gx_digital_delay_st_GUI::set_plug_name( const char * plugin_uri)
{
  addKnob = "";

  if (strcmp("http://guitarix.sourceforge.net/plugins/gx_digital_delay_st_#_digital_delay_st_", plugin_uri) == 0)
    {
      plug_name = "GxDigitalDelay_st";
      set_knob("nk-knob");
    }
  else
    {
      plug_name = "_digital_delay_st_";
    }
}

GtkWidget* Gx_digital_delay_st_GUI::make_gui()
{
  // init the gxwmm library
  Gxw::init();
  set_skin();
  GtkWidget* container = gtk_vbox_new(FALSE, 2);
  widget = new Widget(plug_name);
  GtkWidget* cWidget = GTK_WIDGET(widget->gobj());
  gtk_container_add(GTK_CONTAINER(container), cWidget );

  return container;
}


static LV2UI_Handle instantiate(const struct _LV2UI_Descriptor * descriptor,
                                const char * plugin_uri,
                                const char * bundle_path,
                                LV2UI_Write_Function write_function,
                                LV2UI_Controller controller,
                                LV2UI_Widget * widget,
                                const LV2_Feature * const * features)
{
  Gx_digital_delay_st_GUI* self = new Gx_digital_delay_st_GUI();
  if (self == NULL) return NULL;
  self->set_plug_name_static(self, plugin_uri);
  *widget = (LV2UI_Widget)self->make_gui_static(self);
  self->widget->controller = controller;
  self->widget->write_function = write_function;
  return (LV2UI_Handle)self;
}

static void cleanup(LV2UI_Handle ui)
{
  Gx_digital_delay_st_GUI *pluginGui = static_cast<Gx_digital_delay_st_GUI*>(ui);
  delete pluginGui->widget;
  delete pluginGui;
}

static void port_event(LV2UI_Handle ui,
                       uint32_t port_index,
                       uint32_t buffer_size,
                       uint32_t format,
                       const void * buffer)
{
  Gx_digital_delay_st_GUI *self = static_cast<Gx_digital_delay_st_GUI*>(ui);
  self->widget->set_value_static( port_index, buffer_size, format, buffer, self->widget);
  return;
}

static LV2UI_Descriptor descriptors[] =
{
  {GXPLUGIN_UI_URI, instantiate, cleanup, port_event, NULL}
};

const LV2UI_Descriptor * lv2ui_descriptor(uint32_t index)
{
  //printf("lv2ui_descriptor(%u) called\n", (uint32_t)index);
  if (index >= sizeof(descriptors) / sizeof(descriptors[0]))
    {
      return NULL;
    }
  return descriptors + index;
}

