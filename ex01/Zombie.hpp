#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);
        Zombie(std::string new_name);
        ~Zombie(void);

        void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif