/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_program.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:30:01 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:30:02 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace.h"

static void input_line(std::ofstream& new_file, std::string& s1,
    std::string& s2, std::string& line);

void    run_the_program(std::string& filename, std::string& s1, std::string& s2)
{
    std::string line;
    std::string new_filename = filename + ".replace";

    std::ofstream new_file(new_filename.c_str());
    if (!new_file)
    {
        std::cout << "Error: impossible to create a new file with a required name." << std::endl;
        return ;
    }
    std::ifstream file(filename.c_str());
    
    while (getline(file, line))
    {
        input_line(new_file, s1, s2, line);
    }
    return ;
}

static void input_line(std::ofstream& new_file, std::string& s1,
            std::string& s2, std::string& line)
{
    size_t  ind_s2 = 0;
    size_t  ind = 0;
    size_t  length_s1 = s1.length();

    while (ind < line.length())
    {
        ind_s2 = line.find(s1, ind);
        if (ind_s2 == std::string::npos)
        {
            new_file << line.substr(ind);
            break ;
        }
        new_file << line.substr(ind, ind_s2 - ind);
        ind = ind_s2 + length_s1;
        new_file << s2;
    }
    new_file << '\n';
    return ;
}
