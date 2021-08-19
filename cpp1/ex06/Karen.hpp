#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>
class Karen {

public:
	Karen(void);
	~Karen(void);
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void wrong(void);

};

#endif