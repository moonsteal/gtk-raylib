#ifndef _gtk_raylib_context_h_
#define _gtk_raylib_context_h_

G_BEGIN_DECLS

#define GTK_TYPE_RAYLIB_CONTEXT (gtk_raylib_context_get_type ())
G_DECLARE_FINAL_TYPE(
  GtkRaylibContext,
  gtk_raylib_context,
  GTK, RAYLIB_CONTEXT,
  GtkGLArea
)

GtkRaylibContext* gtk_raylib_context_new(void);

G_END_DECLS

#endif /* _my_app_window_h_ */