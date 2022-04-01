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
	contacts_[index_].SetNew(index_);
	index_++;
}

void	PhoneBook::Search(int count)
{
	using		std::cout;
	std::string	temp;

	for (int i = 0; i < count && i < 8; i++)
		contacts_[i].SearchInfo();
	cout << "Enter contact index: ";
	std::getline(std::cin, temp);
	if (std::atoi(temp.c_str()) < 1 || std::atoi(temp.c_str()) > count
		|| temp.length() > 1)
	{
		cout << "\nNonexistent or incorrect or empty index\n";
		return ;
	}
	contacts_[std::atoi(temp.c_str()) - 1].PrintInfo();
}
