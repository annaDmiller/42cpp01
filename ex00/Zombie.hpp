/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:28:19 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:28:20 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string new_name);
        ~Zombie(void);

        void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
