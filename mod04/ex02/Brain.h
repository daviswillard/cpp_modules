#pragma once

#include <string>

class Brain
{
public:
	Brain();
	explicit Brain(const std::string& idea);
	~Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);

	void			ShareThoughts() const;
	std::string*	get_ideas() const;
	void			set_ideas(const std::string& idea);
private:
	std::string		*ideas_;
};

