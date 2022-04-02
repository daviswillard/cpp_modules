#ifndef REPLACE_H
# define REPLACE_H

# include <string>
# include <fstream>

class Replace
{
private:
	std::string	filename_;
	std::string	s1_;
	std::string	s2_;
public:
	Replace(const std::string& filename,
			const std::string& s1, const std::string& s2);
	~Replace();
};


#endif
