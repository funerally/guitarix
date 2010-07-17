// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GXWMM_PAINTBOX_H
#define _GXWMM_PAINTBOX_H


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

#include <gtkmm/box.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GxPaintBox GxPaintBox;
typedef struct _GxPaintBoxClass GxPaintBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gxw
{ class PaintBox_Class; } // namespace Gxw
namespace Gxw {


class PaintBox: public Gtk::Box {
	public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PaintBox CppObjectType;
  typedef PaintBox_Class CppClassType;
  typedef GxPaintBox BaseObjectType;
  typedef GxPaintBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~PaintBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class PaintBox_Class;
  static CppClassType paintbox_class_;

  // noncopyable
  PaintBox(const PaintBox&);
  PaintBox& operator=(const PaintBox&);

protected:
  explicit PaintBox(const Glib::ConstructParams& construct_params);
  explicit PaintBox(GxPaintBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GxPaintBox*       gobj()       { return reinterpret_cast<GxPaintBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GxPaintBox* gobj() const { return reinterpret_cast<GxPaintBox*>(gobject_); }


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
	PaintBox();
	#ifdef GLIBMM_PROPERTIES_ENABLED
/** Type of paint function for background.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_paint_func() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Type of paint function for background.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_paint_func() const;
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
   * @relates Gxw::PaintBox
   */
  Gxw::PaintBox* wrap(GxPaintBox* object, bool take_copy = false);
} //namespace Glib


#endif /* _GXWMM_PAINTBOX_H */

