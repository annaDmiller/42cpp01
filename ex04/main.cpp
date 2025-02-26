/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:29:58 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:59 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace.h"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: there must be 4 arguments for this program" << std::endl;
        return (1);
    }
    std::string arg1 = argv[1];
    std::string arg2 = argv[2];
    std::string arg3 = argv[3];
    
    std::string& filename = arg1; 
    std::string& s1 = arg2;
    std::string& s2 = arg3;

    if (check_open_file(filename))
        return (1);
    run_the_program(filename, s1, s2);
    return (0);
}
