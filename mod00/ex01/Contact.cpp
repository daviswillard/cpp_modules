#include "Contact.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::SetNew(int index)
{
	using std::cout;
	using std::cin;
	using std::endl;

	index_ = index;
	cout << "Adding new contact\n\tType first name: ";
	std::getline(cin, first_name_);
	if (!first_name_.length())
	{
		cout << "Can't have empty fields. Exiting..." << endl;
		exit(0);
	}
	cout << "\tType last name: ";
	std::getline(cin, last_name_);
	if (!last_name_.length())
	{
		cout << "Can't have empty fields. Exiting..." << endl;
		exit(0);
	}
	cout << "\tType nickname: ";
	std::getline(cin, nickname_);
	if (!nickname_.length())
	{
		cout << "Can't have empty fields. Exiting..." << endl;
		exit(0);
	}
	cout << "\tType phone number: ";
	std::getline(cin, phone_number_);
	if (!phone_number_.length())
	{
		cout << "Can't have empty fields. Exiting..." << endl;
		exit(0);
	}
	cout << "\tType darkest secret: ";
	std::getline(cin, darkest_secret_);
	if (!darkest_secret_.length())
	{
		cout << "Can't have empty fields. Exiting..." << endl;
		exit(0);
	}
	cout << '\n';
}

void	Contact::SearchInfo()
{
	using std::cout;

	cout << std::setw(10) << index_ + 1 << '|';
	if (this->first_name_.length() > 10)
		cout << first_name_.substr(0, 9) << ".|";
	else
		cout << std::setw(10) << first_name_ << '|';
	if (this->last_name_.length() > 10)
		cout << last_name_.substr(0, 9) << ".|";
	else
		cout << std::setw(10) << last_name_ << '|';
	if (this->nickname_.length() > 10)
		cout << nickname_.substr(0, 9) << ".|";
	else
		cout << std::setw(10) << nickname_ << '|';
	cout << '\n';
}

void	Contact::PrintInfo()
{
	using std::cout;

	cout << "Printing contact information:\n";
	cout << first_name_ << '\n' << last_name_ << '\n' << nickname_ << '\n';
	cout << phone_number_ << '\n' << darkest_secret_ << '\n';
}