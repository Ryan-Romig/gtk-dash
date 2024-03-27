#include "include/spotify.hpp"
#include <gtk/gtk.h>

namespace Spotify {
GtkWidget* window;

void init()
{
    // // Switch to a different glade GTK layout file
    // GtkBuilder* builder = gtk_builder_new();
    // gtk_builder_add_from_file(builder, "../layout/spotify/spotify.glade", NULL);
    // window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));

    // // Rest of the initialization code
    // gtk_widget_show_all(window);
}
}
