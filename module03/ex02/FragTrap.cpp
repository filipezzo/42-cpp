#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap")
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap argument constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "Fragtrap copy assignment operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
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
    std::cout << "FragTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: High fivee ✋" << std::endl;
}