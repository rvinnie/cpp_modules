#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);

private:
	std::string _name;

};

#endif
