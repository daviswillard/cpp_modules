#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iomanip>
# include <iostream>
# include "Contact.h"

class PhoneBook
{
private:
	Contact	contacts_[8];
	int		index_;
public:
	PhoneBook();
	~PhoneBook();

	void	Add();
	void	Search(int count);
};


#endif
