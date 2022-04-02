#include "Replace.h"

Replace::~Replace()
{
	src_.close();
	dst_.close();
}

Replace::Replace(const std::string& filename,
				 const std::string& s1, const std::string& s2)
{
	filename_ = filename;
	dst_filename_ = filename_ + ".replace";
	s1_ = s1;
	s2_ = s2;
	if (s1_.empty() || s2_.empty())
	{
		std::cerr << "One of lines is empty" << std::endl;
		std::exit(1);
	}
	OpenFile();
	GetReplace();
}

void	Replace::OpenFile()
{
	src_.open(filename_.c_str(), std::ifstream::in);
	if (!src_.is_open())
	{
		std::cerr << "Couldn't open file for reading" << std::endl;
		std::exit(0);
	}
	dst_.open(dst_filename_.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!dst_.is_open())
	{
		std::cerr << "Couldn't open file for writing" << std::endl;
		std::exit(0);
	}
}

void	Replace::GetReplace()
{
	std::string	temp;
	std::size_t	found;

	while (!src_.eof())
	{
		std::getline(src_, temp);
		if (temp.empty())
			return ;
		found = temp.find(s1_);
		while (found != std::string::npos)
		{
			temp.erase(found, s1_.length());
			temp.insert(found, s2_);
			found = temp.find(s1_);
		}
		dst_ << temp << std::endl;
	}
}
