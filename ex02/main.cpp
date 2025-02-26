/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:28:57 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:00 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of string variable - " << &str << std::endl;
    std::cout << "Memory address held by stringPTR - " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF - " << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << "Value of string variable - " << str << std::endl;
    std::cout << "Value pointed to by stringPTR - " << *stringPTR << std::endl;
    std::cout << "Value pointer to by stringREF - " << stringREF << std::endl;

    return (0);
}
