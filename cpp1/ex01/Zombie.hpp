#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {

public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void);

private:
	std::string _name;

};

#endif
