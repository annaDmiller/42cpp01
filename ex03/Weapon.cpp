#include "Weapon.hpp"

Weapon::Weapon(std::string newType) : type(newType)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

const std::string&    Weapon::getType(void) const
{
    const std::string&    typeREF = type;
    return (typeREF);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
    return ;
}