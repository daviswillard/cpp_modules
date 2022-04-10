#include "Base.h"

Base::~Base()
{
}

//static uint64_t	GetTime()
//{
//	_STRUCT_TIMEVAL	s_tv;
//
//	gettimeofday(&s_tv, nullptr);
//	return (s_tv.tv_usec);
//}
//
//static int GetRand()
//{
//	srand(GetTime());
//	return (rand() % 3);
//}

Base*	generate()
{
	Base*	ptr;
	int		dice;

	srand(time(nullptr));
	dice = rand() % 3;
	switch (dice)
	{
		case 0:
			ptr = new A();
			break;
		case 1:
			ptr = new B();
			break;
		case 2:
			ptr = new C();
			break;
			default:
				throw (0);
	}
	return (ptr);
}

void	identify(Base* ptr)
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "Object type: class A" << std::endl;
	if (dynamic_cast<B*>(ptr))
		std::cout << "Object type: class B" << std::endl;
	if (dynamic_cast<C*>(ptr))
		std::cout << "Object type: class C" << std::endl;
}

void	identify(Base& ref)
{
	try
	{
		Base &a = dynamic_cast<A &>(ref);
		std::cout << "Object type: class A" << std::endl;
	}
	catch (...) {}
	try
	{
		Base &b = dynamic_cast<B &>(ref);
		std::cout << "Object type: class B" << std::endl;
	}
	catch (...) {}
	try
	{
		Base &c = dynamic_cast<C &>(ref);
		std::cout << "Object type: class C" << std::endl;
	}
	catch (...) {}
}

