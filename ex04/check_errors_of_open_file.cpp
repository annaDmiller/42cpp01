/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_of_open_file.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:29:54 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:29:54 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace.h"

int check_open_file(std::string& filename)
{
    std::ifstream file(filename.c_str());

    if (!file)
    {
        std::cout << "Error: impossible to open the passed file." << std::endl;
        return (1);
    }
    file.close();
    return (0);
}
