#ifndef REPLACE_H
# define REPLACE_H

# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>

class Replace
{
private:
	std::string		filename_;
	std::string		dst_filename_;
	std::string		s1_;
	std::string		s2_;
	std::ifstream	src_;
	std::ofstream	dst_;
	void 			OpenFile();
	void			GetReplace();
public:
	Replace(const std::string& filename,
			const std::string& s1, const std::string& s2);
	~Replace();
};

#endif
