#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>

class Commander {
public:
    static Commander& getInstance()
    {
        static Commander instance;
        return instance;
    }

    void execute_command(const char* command)
    {
        std::thread commandThread(std::system, command);
        commandThread.detach();
    };

private:
    Commander() { }
    Commander(const Commander&) = delete;
    Commander& operator=(const Commander&) = delete;
};
