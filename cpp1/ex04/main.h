#ifndef MAIN_H
# define MAIN_H

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>

# define COLOR_RED	"\x1b[31m"
# define COLOR_RESET "\x1b[0m"

void	replace(std::string filename, std::string s1, std::string s2);
void	putError(std::string err);

#endif