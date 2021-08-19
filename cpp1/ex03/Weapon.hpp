#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon {

public:
	Weapon(std::string const &type);
	Weapon(void);
	~Weapon(void);
	std::string const	&getType(void) const;
	void				setType(std::string const &type);

private:
	std::string _type;

};

#endif
