#include <iostream>
#include <string>

class Commander {
public:
    static Commander& getInstance() {
        static Commander instance;
        return instance;
    }

    void execute_command(const std::string command);

private:
    Commander() {}
    Commander(const Commander&) = delete;
    Commander& operator=(const Commander&) = delete;
};

