#ifndef STR_REPLACE_H
# define STR_REPLACE_H
# include <string>
# include <iostream>
# include <fstream>

int     check_open_file(std::string& filename);
void    run_the_program(std::string& filename, std::string& s1, std::string& s2);

#endif