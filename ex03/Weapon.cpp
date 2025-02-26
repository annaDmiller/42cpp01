/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:29:36 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:37 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
