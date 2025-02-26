/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_replace.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:30:05 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:30:06 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_REPLACE_H
# define STR_REPLACE_H
# include <string>
# include <iostream>
# include <fstream>

int     check_open_file(std::string& filename);
void    run_the_program(std::string& filename, std::string& s1, std::string& s2);

#endif
