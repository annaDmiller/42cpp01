#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(void)
{
    int num_zombies = 4;
    std::string name_zombies = "Zzzombie";

    std::cout << "Launching zombieHorde function to create " << num_zombies << " zombies" << std::endl;
    Zombie* horde = zombieHorde(num_zombies, name_zombies);
    std::cout << "Leaving zombieHorde function" << std::endl;
    std::cout << std::endl;

    std::cout << "Launching announce member function on each zombie" << std::endl;
    for (int ind = 0; ind < num_zombies; ind++)
    {
        std::cout << "Zombie " << (ind + 1) << " is announced - ";
        horde[ind].announce();
    }
    std::cout << std::endl;

    std::cout << "Deleting horde of zombies" << std::endl;
    delete[] horde;
    horde = NULL;
    
    return (0);
}