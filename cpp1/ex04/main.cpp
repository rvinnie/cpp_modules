#include "main.h"

void	putError(std::string err) {
	std::cerr << COLOR_RED << "<< " << err << " >>" << COLOR_RESET << std::endl;
	std::exit(1);
}

int main(int argc, char *argv[]) {
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
		putError("Wrong number of arguments");
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
		putError("Argument is empty");
	replace(filename, s1, s2);
	return (0);
}