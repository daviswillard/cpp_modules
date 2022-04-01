#include "Replace.h"

Replace::~Replace()
{
}

Replace::Replace(const std::string& filename,
				 const std::string& s1, const std::string& s2)
{
	filename_ = filename + ".replace";
	s1_ = s1;
	s2_ = s2;
}
