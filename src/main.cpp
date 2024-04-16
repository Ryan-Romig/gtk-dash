#include "features/activity-manager/include/activity-manager.hpp"
#include "features/launcher/main/main-activity.hpp"
#include "features/launcher/spotify/spotify-activity.hpp"
#include <gtkmm.h>
#include <iostream>

int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.rromig.gdash");
    // create the main window
    Gtk::Window window;
    window.set_title("GDash");
    window.set_default_size(1024, 768);
    window.set_position(Gtk::WIN_POS_CENTER);
    window.set_border_width(10);
    window.set_resizable(true);

    MainActivity mainActivity;
    Gtk::Box* box = mainActivity.create();
    SpotifyActivity spotifyActivity;
    Gtk::Box* box2 = spotifyActivity.create();

    ActivityManager& am = ActivityManager::getInstance();
    am.addScreen("main_activity", *box);
    am.addScreen("spotify_activity", *box2);
    am.setDefaultScreen("main_activity");
    am.addStackToWindow(window);

    
    window.show_all();

    // run the application
    return app->run(window);
}