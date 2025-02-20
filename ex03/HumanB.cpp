#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void    HumanB::setWeapon(Weapon& newWeapon)
{
    this->weapon = &newWeapon;
    return ;
}

void    HumanB::attack(void) const
{
    if (!this->weapon)
        std::cout << this->name << " doesn't have a weapon" << std::endl;
    else
        std::cout << this->name << " attacks with their " << (*this->weapon).getType() << std::endl;
    return ;
}