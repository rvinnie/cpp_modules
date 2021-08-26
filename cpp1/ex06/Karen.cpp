#include "Karen.hpp"

Karen::Karen(void) {};
Karen::~Karen(void) {};

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I just love it!"
		<< std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout
		<<  "I cannot believe adding extra bacon cost more money. You don’t put enough!"
		<< " If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout
		<< "I think I deserve to have some extra bacon for free."
		<< " I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void	Karen::wrong(void) {
	std::cout
		<< "[ Probably complaining about insignificant problems ]"
		<< std::endl;
}

void	Karen::complain(std::string level) {
	std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i = 0;

	while (i < 4 && level != lvls[i])
		i++;
	switch (i) {
		case 0:
			this->debug();
			std::cout << std::endl;
			[[fallthrough]];
		case 1:
			this->info();
			std::cout << std::endl;
			[[fallthrough]];
		case 2:
			this->warning();
			std::cout << std::endl;
			[[fallthrough]];
		case 3:
			this->error();
			std::cout << std::endl;
			break;
		default:
			this->wrong();
			std::cout << std::endl;
			break;
	}
}
