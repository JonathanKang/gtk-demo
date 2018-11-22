#include <gtk/gtk.h>

#include "gd-application.h"
#include "gd-window.h"

struct _GdApplication
{
    /* <private> */
    GtkApplication parent_instance;
};

G_DEFINE_TYPE (GdApplication, gd_application, GTK_TYPE_APPLICATION)

static void
on_activate (GdApplication *application,
             gpointer user_data)
{
    GtkWidget *window;

    window = gd_window_new (GTK_APPLICATION (application));
    gtk_widget_show (window);
}

static void
gd_application_init (GdApplication *application)
{
    g_signal_connect (application, "activate",
                      G_CALLBACK (on_activate), NULL);
}

static void
gd_application_class_init (GdApplicationClass *klass)
{
}

GtkApplication *
gd_application_new ()
{
    return g_object_new (GD_TYPE_APPLICATION,
                         "application-id", "org.gtk.demo",
                         NULL);
}
