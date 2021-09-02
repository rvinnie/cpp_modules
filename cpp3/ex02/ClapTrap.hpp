#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define COLOR_GREEN "\x1b[32m"
# define COLOR_RESET "\x1b[0m"

# include <iostream>
# include <string>

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	virtual ~ClapTrap(void);
	ClapTrap(ClapTrap const & other);
	ClapTrap & operator=(ClapTrap const & other);
	std::string	getName(void) const;
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printHealth(void);

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_mxHP;
	unsigned int	_energy;
	unsigned int	_damage;

};


#endif