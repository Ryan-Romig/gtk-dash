#include <gtkmm.h>

class SpotifyActivity {
public:
    SpotifyActivity();
    Gtk::Box* create() { return screen; }

private:
    Gtk::Box* screen = nullptr;
    Gtk::Button* button = nullptr;
    Glib::RefPtr<Gtk::Builder> builder;
    void button_clicked_cb();
};