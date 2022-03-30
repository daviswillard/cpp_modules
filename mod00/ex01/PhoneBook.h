#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"

class PhoneBook
{
private:
	Contact	contacts_[8];
	int		index_;
public:
	PhoneBook();
	~PhoneBook();

	Add();
	Search()
};


#endif
