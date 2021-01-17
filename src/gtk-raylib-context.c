#include "gtk-raylib-context.h"

struct _GtkRaylibContext
{
  GtkGLArea parent_instance;

  // instance variables for subclass go here
};

G_DEFINE_TYPE(GtkRaylibContext, gtk_raylib_context, GTK_TYPE_RAYLIB_CONTEXT)

static void
gtk_raylib_context_init (MyAppWindow *window)
{
  // initialisation goes here
}

static void
gtk_raylib_context_class_init (MyAppWindowClass *class)
{
  // virtual function overrides go here
  // property and signal definitions go here
}

GtkRaylibContext*
gtk_raylib_context_new (void)
{
  return g_object_new (MY_APP_TYPE_WINDOW, NULL);
}