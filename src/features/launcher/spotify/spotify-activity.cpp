#include "spotify-activity.hpp"
#include "../../activity-manager/include/activity-manager.hpp"
#include <iostream>
#include "../../commander/include/commander.hpp"

void SpotifyActivity::button_clicked_cb() { 
    // ActivityManager& am = ActivityManager::getInstance();
    // am.switchScreen("main_activity");
    // Commander& commander = Commander::getInstance().execute_command("spotify");
    std::system("spotify");

}

 SpotifyActivity::SpotifyActivity()
{
    builder = Gtk::Builder::create_from_file("../src/layout/activity_spotify.xml");
    builder->get_widget("screen", screen);
    
   builder->get_widget("button", button);
     if (button != nullptr) {
            button->signal_clicked().connect(sigc::mem_fun(*this, &SpotifyActivity::button_clicked_cb));
        }

}
