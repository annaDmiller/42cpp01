/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:28:47 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:28:48 by amelniko         ###   ########.fr       */
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
        Zombie(void);
        Zombie(std::string new_name);
        ~Zombie(void);

        void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
