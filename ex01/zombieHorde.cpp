#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombie_horde = new Zombie[N];
    for (int ind = 0; ind < N; ind++)
        new (&zombie_horde[ind]) Zombie(name);
    return (&(zombie_horde[0]));
}