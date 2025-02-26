/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:30:48 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:30:51 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Please, enter an arguement to launch the program." << std::endl;
        return (1);
    }
    Harl harl;

    std::string level = argv[1];
    harl.complain(argv[1]);
    return (0);
}
