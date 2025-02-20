#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    
    public:
        HumanB(std::string newName);
        ~HumanB(void);

        void    attack(void) const;
        void    setWeapon(Weapon& newWeapon);
};

#endif