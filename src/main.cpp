#include "features/commander/include/commander.hpp"
#include <gtk/gtk.h>

GtkWidget* window;
GtkWidget* button;
GtkBuilder* builder;
void button_clicked_cb()
{
    Commander& commander = Commander::getInstance();
    commander.execute_command("");
    // commander.execute_command("echo Hello, World!");
}
int main(int argc, char* argv[])
{
    gtk_init(&argc, &argv);
    builder = gtk_builder_new();
    // this path is relative to the build folder
    gtk_builder_add_from_file(builder, "../src/layout/main.xml", NULL);
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    button = GTK_WIDGET(gtk_builder_get_object(builder, "button"));

    g_signal_connect(button, "clicked", G_CALLBACK(button_clicked_cb), NULL);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}