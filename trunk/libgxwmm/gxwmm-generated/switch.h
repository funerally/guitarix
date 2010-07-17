// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GXWMM_SWITCH_H
#define _GXWMM_SWITCH_H


#include <glibmm.h>

/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <gtkmm/togglebutton.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GxSwitch GxSwitch;
typedef struct _GxSwitchClass GxSwitchClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gxw
{ class Switch_Class; } // namespace Gxw
namespace Gxw {


class Switch: public Gtk::ToggleButton {
	public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Switch CppObjectType;
  typedef Switch_Class CppClassType;
  typedef GxSwitch BaseObjectType;
  typedef GxSwitchClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Switch();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Switch_Class;
  static CppClassType switch_class_;

  // noncopyable
  Switch(const Switch&);
  Switch& operator=(const Switch&);

protected:
  explicit Switch(const Glib::ConstructParams& construct_params);
  explicit Switch(GxSwitch* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GxSwitch*       gobj()       { return reinterpret_cast<GxSwitch*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GxSwitch* gobj() const { return reinterpret_cast<GxSwitch*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

	public:
	Switch();
	#ifdef GLIBMM_PROPERTIES_ENABLED
/** Base name of the image
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_base_name() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Base name of the image
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_base_name() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

	#ifdef GLIBMM_PROPERTIES_ENABLED
/** GtkLabel for caption.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gtk::Label> property_label() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** GtkLabel for caption.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gtk::Label> property_label() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} // namespace Gxw


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gxw::Switch
   */
  Gxw::Switch* wrap(GxSwitch* object, bool take_copy = false);
} //namespace Glib


#endif /* _GXWMM_SWITCH_H */

