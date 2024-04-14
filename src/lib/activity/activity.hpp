// #ifndef ACTIVITY_HPP
// #define ACTIVITY_HPP
// #include <gtkmm.h>
// class Activity : public Gtk::Box {
// public:
//     virtual void loadContent() = 0; // Pure virtual function

// };

// // Your existing code here...

// #endif // ACTIVITY_HPP

#include <gtkmm.h>

class Activity : public Gtk::Box {
public:
    Activity(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refBuilder);

    static Activity* create();
    static void setBuilder();

private:
    Glib::RefPtr<Gtk::Builder> m_refBuilder;
};