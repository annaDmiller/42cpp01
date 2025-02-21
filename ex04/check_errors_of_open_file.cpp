#include "str_replace.h"

int check_open_file(std::string& filename)
{
    std::ifstream file(filename.c_str());

    if (!file)
    {
        std::cout << "Error: impossible to open the passed file." << std::endl;
        return (1);
    }
    file.close();
    return (0);
}