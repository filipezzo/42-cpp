#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap")
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap argument constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{

    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " can't attack: no hit points left." << std::endl;
        return;
    }

    if (this->_energyPoints <= 0)
    {
        std::cout << this->_name << " can't attack: no energy points left." << std::endl;
        return;
    }

    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name
              << " is now in Gate keeper mode!" << std::endl;
}