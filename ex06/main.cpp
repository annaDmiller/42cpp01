#include "Harl.hpp"

int main(int argc, std::string *argv)
{
    if (argc != 2)
    {
        std::cout << "Please, enter an arguement to launch the program." << std::endl;
        return (1);
    }
    Harl harl;

    harl.complain(argv[1]);
    return (0);
}