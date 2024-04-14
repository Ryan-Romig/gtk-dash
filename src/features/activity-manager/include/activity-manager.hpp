#ifndef ACTIVITYMANAGER_HPP
#define ACTIVITYMANAGER_HPP

#include <gtkmm.h>

class ActivityManager {
public:
    static ActivityManager& getInstance()
    {
        static ActivityManager instance;
        return instance;
    }

    Gtk::Stack& getStack() { return stack; }
    // void addScreen(const std::string& name, Gtk::Box* screen) { stack.add(*screen, name); }
    void setDefaultScreen(const std::string& name) { stack.set_visible_child(name); }
    void addScreen(const Glib::ustring& name, Gtk::Widget& widget) { stack.add(widget, name); }
    void switchScreen(const std::string& name) { stack.set_visible_child(name); }
    void addStackToWindow(Gtk::Window& window) { window.add(stack); }

private:
    // Private constructor for singleton
    ActivityManager() { }
    Gtk::Stack stack;

    // Delete copy constructor and assignment operator
    ActivityManager(const ActivityManager&) = delete;
    void operator=(const ActivityManager&) = delete;
};

#endif // ACTIVITYMANAGER_HPP