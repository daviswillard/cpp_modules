#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	index_ = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Add()
{
	Contact	temp;

	temp.SetNew();
	if (index_ && !(index_ % 8))
		index_ = 0;
	contacts_[index_] = temp;
	index_++;
}

void	PhoneBook::Search()
{

}

void	PhoneBook::Exit()
{

}
