#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include "main.h"

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		getNum(void);
	Contact	getContact(int num);
	void	addContact(Contact contact);
	void	printGreeting(void);
	void	printCompletion(void);
	void	printRowTable(Contact contact, int index);
	void	printBorderOfTable(int size, std::string color);
	void	printHeaderOfTable(void);
	void	getFullInfo(void);

private:
	Contact	_contacts[8];
	int		_num;
	void	_printFullInfo(int index);

};

#endif