#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::~Zombie()
{
    std::cout << this->_name << " is dead again" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setZombieName(const std::string name)
{
    this->_name = name;
}