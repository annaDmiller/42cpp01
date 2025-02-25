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
    typedef void(Harl::*classFuncs)();
    classFuncs functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int ind = 0; ind < 4; ind++)
    {
        if (level == lvls[ind])
        {
            (this->*functions[ind])();
            return ;
        }
    }
    std::cout << "[ Harl has nothing to say. ]" << std::endl;
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