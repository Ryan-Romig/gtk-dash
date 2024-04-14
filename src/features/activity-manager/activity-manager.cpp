// #include <gtkmm.h>

// class ActivityManager {
// public:
//     static ActivityManager& getInstance() {
//         static ActivityManager instance;
//         return instance;
//     }

//     Gtk::Stack& getStack() {
//         return stack;
//     }

//     void switchScreen(const std::string& name) {
//         stack.set_visible_child(name);
//     }

// private:
//     Gtk::Stack stack;

//     // Private constructor for singleton
//     ActivityManager() {}

//     // Delete copy constructor and assignment operator
//     ActivityManager(const ActivityManager&) = delete;
//     void operator=(const ActivityManager&) = delete;
// };