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
	if (index_ && !(index_ % 8))
		index_ = 0;
	contacts_[index_].SetNew();
	index_++;
}

void	PhoneBook::Search()
{

}

void	PhoneBook::Exit()
{

}
