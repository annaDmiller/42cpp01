/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:29:24 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:24 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
