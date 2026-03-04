/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:25:56 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/03 15:44:46 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10),
                                              _energyPoints(10), _attackDamage(0)
{
    std::cout << "Argument constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "operator assigned called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
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
    std::cout << "ClapTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already down. Extra damage ignored." << std::endl;
        return;
    }
    int dmg = static_cast<int>(amount);
    this->_hitPoints -= dmg;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount
              << " points of damage! (HP: " << this->_hitPoints << " )" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair: no hit points left." << std::endl;
        return;
    }
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair: no energy points left." << std::endl;
        return;
    }
    int amountToRepair = static_cast<int>(amount);
    this->_hitPoints += amountToRepair;
    this->_energyPoints -= 1;

    std::cout << "ClapTrap " << _name << " repairs itself for " << amountToRepair
              << " hit points! (HP: " << this->_hitPoints
              << ", EP: " << this->_energyPoints << " )" << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}

void ClapTrap::setAttackDamage(int dmg)
{
    this->_attackDamage = dmg;
}