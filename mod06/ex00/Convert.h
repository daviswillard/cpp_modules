#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Convert
{
public:
	Convert();
	explicit Convert(const char *argv);
	~Convert();
	Convert(const Convert& copy);
	Convert& operator=(const Convert& copy);

	void		Converter();
	void		ConvertChar();
	void		ConvertInt();
	void		ConvertFloat();
	void		ConvertDouble();

	void		Print() const;
	void		PrintInt() const;
	void		PrintChar() const;
	void		PrintFloat() const;
	void		PrintDouble() const;

	std::string	get_str() const;
	char		get_char() const;
	int			get_int() const;
	double		get_doub() const;
	float		get_flot() const;
private:
	const char	*argv_;
	std::string	str_;
	char		ch_;
	int			integer_;
	bool		int_s_;
	float		flott_;
	bool		flo_s_;
	double		dubble_;
	bool		dou_s_;
};
