#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(ScavTrap const & other);
	ScavTrap & operator=(ScavTrap const & other);
	void	attack(std::string const & target);
	void	guardGate();
};

#endif