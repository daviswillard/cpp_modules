#ifndef CONTACT_H
# define CONTACT_H

# ifndef PHONEBOOK_H
#  define PHONEBOOK_H

#  include <string>
#  include <iomanip>
#  include <iostream>

# endif

class Contact
{
private:
	int				index_;
	std::string		phone_number_;
	std::string		first_name_;
	std::string		last_name_;
	std::string		nickname_;
	std::string		darkest_secret_;
public:
	Contact();
	~Contact();
	void			SetNew();
	void			SearchInfo();
	void			PrintInfo();
};


#endif
