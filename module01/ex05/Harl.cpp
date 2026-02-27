#include "Harl.hpp"
#include <iostream>

Harl::Harl() {};
Harl::~Harl() {};

void Harl::debug(void)
{
    std::cout << "[DEGUB]\nTomioka is hungry!  he must eat more to get in shape to fight an uppermoon!\n";
}

void Harl::info(void)
{
    std::cout << "[INFO]\nTomioka is the 3 strongest hashira in the history!\n";
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\nTomioka is almost dead after the fight against akaza!\n";
}

void Harl::error(void)
{
    std::cerr << "[ERROR]\nThere is no way... rengoku is not stronger than tomioka!\n";
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    void (Harl::*actions[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*actions[i])();
            return;
        }
    }
    std::cout << "Nothing to complain about\n";
}