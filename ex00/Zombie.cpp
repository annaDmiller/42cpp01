#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string new_name) : name(new_name)
{
    std::cout << "Creating zombie " << this->name << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "Deleting zombie " << this->name << std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}