#ifndef CONTACT_H
# define CONTACT_H

# include "main.h"

class Contact {

public:
	Contact(void);
	~Contact(void);
	void		addInfo(void);
	std::string	getFirst(void);
	std::string	getLast(void);
	std::string	getNick(void);
	std::string	getNumber(void);
	std::string	getSecret(void);
	void		printBorder(void);

private:
	std::string _first;
	std::string _last;
	std::string _nick;
	std::string _number;
	std::string _secret;

};


#endif