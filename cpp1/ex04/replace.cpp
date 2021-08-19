#include "main.h"

std::string readFile(std::string filename) {
    std::ifstream ifs(filename);
    std::stringstream ss;
    if (!ifs.is_open())
		putError("File does not open");
	ss << ifs.rdbuf();
	ifs.close();
    return ss.str();
}

void	replace(std::string filename, std::string s1, std::string s2) {
	std::string		buff = readFile(filename);
	std::string		sub;
	std::size_t		start = 0;
	std::size_t		end = -1;
	std::ofstream	ofs("out.replace");

	if (!ofs.is_open())
		putError("File does not open");
	while (end != buff.rfind(s1)) {
		end = buff.find(s1, end + 1);
		sub = buff.substr(start, end - start);
		ofs << sub << s2;
		start += sub.length() + s1.length();
	}
	sub = buff.substr(start, end - start);
	ofs << sub;
	ofs.close();
}