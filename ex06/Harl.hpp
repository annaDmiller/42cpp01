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