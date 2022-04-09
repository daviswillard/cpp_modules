#include "Convert.h"

Convert::Convert():
argv_(nullptr), str_(nullptr), ch_(0), integer_(0), flott_(0.0f), dubble_(0.0)
{
	std::cout << "Default converter (useless) constructor called" << std::endl;
}

Convert::Convert(const char *argv):
argv_(argv), ch_(0), integer_(0), flott_(0.0f), dubble_(0.0)
{
	str_ = argv;
}

Convert::~Convert()
{
	std::cout << "Convert destructor was called" << std::endl;
}

Convert::Convert(const Convert &copy):
argv_(copy.argv_)
{
	std::cout << "Convert copy constructor was called" << std::endl;
	*this = copy;
}

Convert& Convert::operator=(const Convert& copy)
{
	if (this == &copy)
		return (*this);
	ch_ = copy.get_char();
	str_ = copy.get_str();
	integer_ = copy.get_int();
	dubble_ = copy.get_doub();
	flott_ = copy.get_flot();
	return (*this);
}

std::string	Convert::get_str() const
{
	return (str_);
}

int	Convert::get_int() const
{
	return (integer_);
}

double	Convert::get_doub() const
{
	return (dubble_);
}

float	Convert::get_flot() const
{
	return (flott_);
}

char	Convert::get_char() const
{
	return (ch_);
}

void	Convert::Converter()
{
	ConvertChar();
	ConvertInt();
	ConvertFloat();
	ConvertDouble();
}

void	Convert::ConvertChar()
{
	if (str_.length() == 1 && !isdigit(str_[0]))
		ch_ = static_cast<char>(str_[0]);
	else if (std::stoi(str_) >= 0 && std::stoi(str_) <= 127)
		ch_ = static_cast<char>(std::stoi(str_));
	else
		ch_ = -1;
}

void	Convert::ConvertInt()
{
	try
	{
		if (str_.length() == 1 && isdigit(str_[0]))
			integer_ = static_cast<int>(std::atoi(str_.c_str()));
		else
			integer_ = std::stoi(str_);
		int_s_ = true;
	}
	catch (...)
	{
		int_s_ = false;
	}
}

void Convert::ConvertFloat()
{
	try
	{
		if (str_.length() == 1 && !std::isdigit(str_[0]) &&
			std::isprint(str_[0]))
		{
			flott_ = static_cast<float>(str_[0]);
		}
		else
		{
			flott_ = static_cast<float>(std::stof(str_));
			flo_s_ = true;
		}
	}
	catch (...)
	{
		flo_s_ = false;
	}
}

void Convert::ConvertDouble()
{
	try
	{
		if (str_.length() == 1 && !std::isdigit(str_[0])
			&& std::isprint(str_[0]))
			dubble_ = static_cast<double>(str_[0]);
		else
		{
			dubble_ = static_cast<double>(std::stod(str_));
			dou_s_ = true;
		}
	}
	catch (...)
	{
		dou_s_ = false;
	}
}
