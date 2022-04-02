#include "Replace.h"

Replace::~Replace()
{
}

Replace::Replace(const std::string& filename,
				 const std::string& s1, const std::string& s2)
{
	filename_ = filename;
	dst_filename_ = filename_ + ".replace";
	s1_ = s1;
	s2_ = s2;
	OpenFile();
	GetReplace();
}

void	Replace::OpenFile()
{
	src_.open(filename_, std::ifstream::in);
	if (!src_.is_open())
	{
		std::cout << "Couldn't open file for reading\n" << std::endl;
		std::exit(0);
	}
	dst_.open(dst_filename_, std::ofstream::out | std::ofstream::trunc);
	if (!dst_.is_open())
	{
		std::cout << "Couldn't open file for writing\n" << std::endl;
		std::exit(0);
	}
}

void	Replace::FoundOccurence(const std::string& str, const size_t pos)
{
	std::size_t	pos1;
	std::size_t	index;

	pos1 = pos;
	index = 0;
	std::cout << str << '\n';
	while (pos1 != std::string::npos)
	{
		dst_ << str.substr(index, pos1) << s2_;
//		std::cout << str << '\n';
		index = pos1 + s1_.length();
		pos1 = str.find(str, index);
	}
	if (index < str.length())
		dst_ << str.substr(index, str.length()) << '\n';
}

void	Replace::GetReplace()
{
	std::string	temp;
	std::size_t	pos;

	while (!src_.eof())
	{
		std::getline(src_, temp);
		pos = temp.find(s1_);
		if (pos == std::string::npos)
			dst_ << temp;
		else
			FoundOccurence(temp, pos);
	}
}
