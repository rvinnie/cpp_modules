#include "main.h"
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	add(PhoneBook *phonebook) {
	Contact contact;
	contact.addInfo();
	phonebook->addContact(contact);
}

void	search(PhoneBook *phonebook) {
	int amount = phonebook->getNum();
	if (amount > 8)
		amount = 8;
	if (phonebook->getNum() == 0) {
		std::cout << COLOR_BRIGHT_RED
				<< "<<< The greenbook is empty >>>"
				<< COLOR_RESET << std::endl;
		return ;
	}
	phonebook->printHeaderOfTable();
	for (int x = 0; x < amount; x++)
		phonebook->printRowTable(phonebook->getContact(x), x);
	phonebook->printBorderOfTable(49, COLOR_CYAN);
	phonebook->getFullInfo();
}

int main(void) {
	PhoneBook phonebook;
	std::string	buff;
	bool loop = true;

	phonebook.printGreeting();
	while (loop)
	{
		std::cout << COLOR_CYAN << ">> " << COLOR_RESET;
		std::cin >> buff;
		if (buff == std::string("EXIT"))
			loop = false;
		else if (buff == std::string("ADD"))
			add(&phonebook);
		else if (buff == std::string("SEARCH"))
			search(&phonebook);
	}
	phonebook.printCompletion();
	return (0);
}