#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    std::cout << "Creating Zombie on stack" << std::endl;
    std::cout << "Entering randomChump function" << std::endl;
    randomChump("StackZombie");
    std::cout << "Leaving randomChump function" << std::endl;

    std::cout << std::endl << "Creating Zombie on heap" << std::endl;
    std::cout << "Entering newZombie function" << std::endl;
    Zombie* heap_zombie = newZombie("HeapZombie");
    std::cout << "Using announce member function of Zombie class" << std::endl;
    heap_zombie->announce();
    std::cout << "Deleting the allocated memory by delete function" << std::endl;
    delete (heap_zombie);
    heap_zombie = NULL;

    return (0);
}