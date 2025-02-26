/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:29:13 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:14 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string newName, Weapon& newWeapon) : name(newName), weapon(newWeapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << (this->weapon).getType() << std::endl;
    return ;
}
