#include "Span.h"

Span::Span()
{
}

Span::Span(unsigned int n) : n_(n)
{
}

Span::Span(const Span &copy) : n_(copy.n_)
{
	if (!vec_.empty())
		vec_.clear();
	for (unsigned int i = 0; i < copy.vec_.size(); i++)
		vec_.push_back(copy.vec_[i]);
}

Span &Span::operator=(const Span &copy)
{
	if (!vec_.empty())
		vec_.clear();
	n_ = copy.n_;
	for (unsigned int i = 0; i < copy.vec_.size(); i++)
		vec_.push_back(copy.vec_[i]);
	return *this;
}

void Span::AddNumber(unsigned int num)
{
	if (vec_.size() >= n_)
		throw Span::OutOfBounds();
	vec_.push_back(num);
}

void Span::AddNumber(std::vector<int>::iterator begin,
					 std::vector<int>::iterator end)
{
	if (vec_.size() >= n_)
		throw OutOfBounds();
	vec_.insert(vec_.begin() + vec_.size(), begin, end);
}

unsigned int Span::ShortestSpan()
{
	unsigned int			size = this->vec_.size();
	unsigned int			shortest = std::labs(this->vec_[1] - this->vec_[0]);
	unsigned int			result;

	if (this->vec_.size() < 2)
		throw NotValidNumberOfNumbers();
	std::sort(this->vec_.begin(), this->vec_.end());
	for (unsigned int i = 1; i < size; i++)
	{
		result = std::labs(this->vec_[i] - this->vec_[i - 1]);
		if (result < shortest)
			shortest = result;
	}
	return (shortest);
}

unsigned int	Span::LongestSpan()
{
	unsigned int  it_max = *std::max_element(vec_.begin(), vec_.end());
	unsigned int  it_min = *std::min_element(vec_.begin(), vec_.end());

	if (vec_.size() < 2)
		throw NotValidNumberOfNumbers();
	return (it_max - it_min);
}

std::vector<int>	Span::get_vec() const
{
	return (vec_);
}

std::ostream &operator<<(std::ostream& out, const Span& b)
{
	std::vector<int>::const_iterator	it;
	for (it = b.get_vec().begin(); it != b.get_vec().end(); it++)
		out << *it << " ";
	return out;
}

const char*	Span::OutOfBounds::what() const throw()
{
	return "exception: not enough space";
}

const char*	Span::NotValidNumberOfNumbers::what() const throw()
{
	return "exception: not valid number of numbers";
}