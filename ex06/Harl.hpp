/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:30:45 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/26 13:30:46 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:
    Harl(void);
    ~Harl(void);

    enum Level
    {
        DEBUG = 0,
        INFO,
        WARNING,
        ERROR,
        UNKNOWN
    };
    void complain(std::string level);
};

#endif
