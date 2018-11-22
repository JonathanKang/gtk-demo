#include <gtk/gtk.h>

#include "gd-window.h"

struct _GdWindow
{
    /* <private> */
    GtkWindow parent_instance;
};

G_DEFINE_TYPE (GdWindow, gd_window, GTK_TYPE_WINDOW)

static void
gd_window_init (GdWindow *window)
{
}

static void
gd_window_class_init (GdWindowClass *klass)
{
}

GtkWidget *
gd_window_new (GtkApplication *application)
{
    return g_object_new (GD_TYPE_WINDOW,
                         "application", application,
                         NULL);
}
