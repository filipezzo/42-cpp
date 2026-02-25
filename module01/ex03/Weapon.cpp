#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() const
{
    return this->_type;
}

void Weapon::setType(const std::string &type)
{
    if (type.empty())
        return;
    this->_type = type;
}