#include "main-activity.hpp"
#include "../../activity-manager/include/activity-manager.hpp"
#include <iostream>

void MainActivity::button_clicked_cb()
{
    ActivityManager::getInstance().switchScreen("spotify_activity");
}

 MainActivity::MainActivity()
{
    builder = Gtk::Builder::create_from_file("../src/layout/activity_main.xml");
    builder->get_widget("screen", screen);
    
    builder->get_widget("button", button);
     if (button != nullptr) {
            button->signal_clicked().connect(sigc::mem_fun(*this, &MainActivity::button_clicked_cb));
        }

}
