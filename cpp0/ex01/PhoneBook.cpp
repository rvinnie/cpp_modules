#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_num = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

int		PhoneBook::getNum(void) {
	return (this->_num);
}

Contact	PhoneBook::getContact(int num) {
	return (this->_contacts[num]);
}

void	PhoneBook::addContact(Contact contact) {
	this->_contacts[this->_num % 8] = contact;
	if (this->_num == 7)
		std::cout << COLOR_BRIGHT_RED
				<< "<<< The greenbook is full >>>"
				<< COLOR_RESET << std::endl;
	this->_num++;
	return;
}

void	PhoneBook::printGreeting(void) {
	printBorderOfTable(34, COLOR_CYAN);
	std::cout << COLOR_BRIGHT_GREEN
		<< "Hello! This is greenbook :)"
		<< COLOR_RESET << std::endl;
	printBorderOfTable(34, COLOR_CYAN);
	std::cout << COLOR_BRIGHT_GREEN
		<< "ADD	- to add a contact" << std::endl
		<< "SEARCH	- to display contacts" << std::endl
		<< "EXIT	- to quit"
		<< COLOR_RESET << std::endl;
	printBorderOfTable(34, COLOR_CYAN);
}

void	PhoneBook::printCompletion(void) {
	printBorderOfTable(34, COLOR_CYAN);
	std::cout << COLOR_BRIGHT_GREEN
		<< "It was a greenbook :)\nSee you!"
		<< std::endl << COLOR_RESET;
	printBorderOfTable(34, COLOR_CYAN);
}

void	PhoneBook::printHeaderOfTable(void) {
	printBorderOfTable(49, COLOR_CYAN);
	std::cout << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << "index" << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << "first name" << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << "last name" << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << "nickname" << CYAN_BORDER << std::endl;
	printBorderOfTable(49, COLOR_CYAN);
	std::cout << COLOR_RESET;
}

void	PhoneBook::printBorderOfTable(int size, std::string color) {
	std::cout << color;
	std::cout << std::setw(size) << std::setfill('-');
	std::cout << COLOR_RESET << std::endl;
}

void	PhoneBook::printRowTable(Contact contact, int index) {
	std::string first = contact.getFirst();
	std::string last = contact.getLast();
	std::string nick = contact.getNick();

	if (first.length() > 10)
		first.insert(9, ".").resize(10);
	if (last.length() > 10)
		last.insert(9, ".").resize(10);
	if (nick.length() > 10)
		nick.insert(9, ".").resize(10);
	std::cout << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << index << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << first << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << last << CYAN_BORDER
		<< std::setw(10) << std::setfill(' ') << nick << CYAN_BORDER << std::endl;
}

void	PhoneBook::_printFullInfo(int index) {
	Contact contact;

	contact = this->getContact(index);
	printBorderOfTable(49, COLOR_CYAN);
	std::cout << COLOR_CYAN
		<< "First name:	" << COLOR_RESET << contact.getFirst() << std::endl
		<< COLOR_CYAN << "Last name:	" << COLOR_RESET << contact.getLast() << std::endl
		<< COLOR_CYAN << "Nickname:	" << COLOR_RESET << contact.getNick() << std::endl
		<< COLOR_CYAN << "Phone number:	" << COLOR_RESET << contact.getNumber() << std::endl
		<< COLOR_CYAN << "Darkest secret:	" << COLOR_RESET << contact.getSecret()
		<< COLOR_RESET << std::endl;
	printBorderOfTable(49, COLOR_CYAN);
}

bool	isNumber(std::string str) {
	const char *newStr;

	newStr = str.c_str();
	for (long unsigned int i = 0; i < str.length(); i++) {
		if (!(newStr[i] >= '0' && newStr[i] <= '9'))
			return (false);
	}
	return (true);
}

void	PhoneBook::getFullInfo(void) {
	std::string	buff;
	int			index;
	int			mxIndex;

	std::cout << COLOR_BRIGHT_GREEN
		<< "To get full information about a contact,\nenter its index: "
		<< COLOR_RESET;
	std::cin >> buff;

	mxIndex = this->getNum() - 1;
	if (mxIndex > 7)
		mxIndex = 7;
	index = std::atoi(buff.c_str());
	if (!isNumber(buff) || index < 0 || index > mxIndex) {
		std::cout << COLOR_BRIGHT_RED << "<< Wrong index >>" << COLOR_RESET << std::endl;
		return ;
	}
	_printFullInfo(index);
}
