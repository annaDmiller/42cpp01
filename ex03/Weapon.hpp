/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:29:42 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:43 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon(std::string newType);
        ~Weapon(void);

        const std::string& getType(void) const;
        void    setType(std::string newType);
};

#endif
