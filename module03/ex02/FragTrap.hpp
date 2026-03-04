#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &rhs);
    virtual ~FragTrap();
    void attack(const std::string &target);
    void highFivesGuys(void);
};