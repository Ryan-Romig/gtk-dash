// #include "../../../../lib/activity/activity.hpp"
#include <gtkmm.h>

class Spotify : public Gtk::Widget {
public:
    Spotify(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refBuilder);

    static Gtk::Widget& create();

private:
    Glib::RefPtr<Gtk::Builder> m_refBuilder;
};