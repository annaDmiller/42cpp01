#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "Check of HARLs' complains" << std::endl;
    std::cout << std::endl;

    harl.complain("DEBUG");
    std::cout << std::endl;

    harl.complain("INFO");
    std::cout << std::endl;

    harl.complain("WARNING");
    std::cout << std::endl;

    harl.complain("ERROR");
    std::cout << std::endl;

    harl.complain("debug");
    std::cout << std::endl;

    return (0);
}