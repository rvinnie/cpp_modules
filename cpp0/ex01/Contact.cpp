#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string	Contact::getFirst(void) {
	return (this->_first);
}

std::string	Contact::getLast(void) {
	return (this->_last);
}

std::string	Contact::getNick(void) {
	return (this->_nick);
}

std::string	Contact::getNumber(void) {
	return (this->_number);
}

std::string	Contact::getSecret(void) {
	return (this->_secret);
}

void	Contact::printBorder(void) {
	std::cout << COLOR_CYAN;
	std::cout << std::setw(34) << std::setfill('-');
	std::cout << COLOR_RESET << std::endl;
}

void	Contact::addInfo(void) {
	printBorder();
	std::cout << COLOR_BRIGHT_GREEN << "Enter contact information" << COLOR_RESET << std::endl;
	std::string buff;
	std::cout << COLOR_CYAN << "First name:	" << COLOR_RESET;
	std::cin >> buff;
	this->_first = buff;
	std::cout << COLOR_CYAN << "Last name:	" << COLOR_RESET;
	std::cin >> buff;
	this->_last = buff;
	std::cout << COLOR_CYAN << "Nickname:	" << COLOR_RESET;
	std::cin >> buff;
	this->_nick = buff;
	std::cout << COLOR_CYAN << "Phone number:	" << COLOR_RESET;
	std::cin >> buff;
	this->_number = buff;
	std::cout << COLOR_CYAN << "Darkest secret:	" << COLOR_RESET;
	std::cin >> buff;
	this->_secret = buff;
	printBorder();
	std::cout << COLOR_BRIGHT_GREEN << "Сontact was added successfully"
				<< COLOR_RESET << std::endl;
	printBorder();
}