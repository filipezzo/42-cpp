#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie()
{
    std::cout << this->_name << " is dead again" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
