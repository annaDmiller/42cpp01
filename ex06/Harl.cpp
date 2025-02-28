/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:30:41 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:30:42 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    return ;
}

Harl::~Harl(void)
{
    return ;
}

void Harl::complain(std::string level)
{
    int lvl_code;

    std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (lvl_code = 0; lvl_code < 4; lvl_code++)
    {
        if (level == lvls[lvl_code])
            break ;
    }

    switch(lvl_code) {
        case DEBUG:
            this->debug();
            std::cout << std::endl;
            //Intentional fall-through
        case INFO:
            this->info();
            std::cout << std::endl;
            //Intentional fall-through
        case WARNING:
            this->warning();
            std::cout << std::endl;
            //Intentional fall-through
        case ERROR:
            this->error();
            break;
        default:
            std::cout << "[ Harl has nothing to say. ]" << std::endl;
    }
    
    return ;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "It is impossible to proceed further! You need to stop here!" << std::endl;
    return ;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Hey! I warn you: you will cause lots of troubles if you go on." << std::endl;
    return ;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "You have chosen the info level. If you choose another level, you will have another information printed on the screen.";
    std::cout << " The level is defined by string. Based on it, different member functions are called." << std::endl;
    return ;
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "You have passed \"DEBUG\" string to the complain function and the debug function is called." << std::endl;
    return ;
}
