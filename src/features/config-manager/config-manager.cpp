#include "include/config-manager.hpp"

#include <iostream>
#include <string>

void ConfigManager::echo(const std::string command) {
    std::system(command.c_str());
}
