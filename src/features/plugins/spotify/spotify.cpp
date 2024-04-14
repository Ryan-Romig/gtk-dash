#include "include/spotify.hpp"
#include <gtk/gtk.h>
#include <iostream>
#include <gtkmm.h>


// namespace Spotify {
// GtkWidget* window;

// void init()
// {
//     // Switch to a different glade GTK layout file
//     GtkBuilder* builder = gtk_builder_new();
//     gtk_builder_add_from_file(builder, "../layout/spotify/spotify.glade", NULL);
//     window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));

//     // Rest of the initialization code
//     gtk_widget_show_all(window);
// }
// }

// Spotify::Spotify() { loadContent(); }

// void Spotify::loadContent()
// {
//     try {
//         auto builder = Gtk::Builder::create_from_file("../layout/spotify/spotify.glade");

//         Gtk::Button* button;
//         builder->get_widget("button", button);
//         if(button) {
//             pack_start(*button);
//         }
//     } catch(const Glib::FileError& ex) {
//         std::cerr << "FileError: " << ex.what() << std::endl;
//     } catch(const Glib::MarkupError& ex) {
//         std::cerr << "MarkupError: " << ex.what() << std::endl;
//     } catch(const Gtk::BuilderError& ex) {
//         std::cerr << "BuilderError: " << ex.what() << std::endl;
//     }
// }
// // }


#include "../../activity-manager/include/activity-manager.hpp"

// MainActivity::MainActivity(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refBuilder)
//     : Gtk::Box(cobject)
//     , m_refBuilder(refBuilder)
// {
//     // You can access other widgets from the Glade file here if needed
// }
void button_clicked_cb()
{
    // Add your button click logic here
    ActivityManager::getInstance().switchScreen("spotify_activity");
}

Gtk::Widget& Spotify::create()
{
    GtkWidget* button;
    GtkBuilder* builder;
    GtkWidget* box;
    builder = gtk_builder_new();
    // this path is relative to the build folder
    gtk_builder_add_from_file(builder, "../src/layout/activity_spotify.xml", NULL);
    button = GTK_WIDGET(gtk_builder_get_object(builder, "button"));

    g_signal_connect(button, "clicked", G_CALLBACK(button_clicked_cb), NULL);

    box = GTK_WIDGET(gtk_builder_get_object(builder, "screen"));
    Gtk::Widget& boxRef = *reinterpret_cast<Gtk::Widget*>(box);
    return boxRef;
    // // auto refBuilder = Gtk::Builder::create_from_file("../src/layout/activity_main.xml");
    // // Gtk::Button* button = nullptr;
    // // refBuilder->get_widget("button", button);
    // // if (!button)
    // //     throw std::runtime_error("No \"button\" object in glade file.");
    // // button->signal_clicked().connect(sigc::mem_fun(*this, &on_button_clicked));

    // MainActivity* widget = nullptr;
    // refBuilder->get_widget_derived("screen", widget);
    // if (!widget)
    //     throw std::runtime_error("No \"main_activity_box\" object in glade file.");
    // return widget;
}