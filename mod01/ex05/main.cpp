#include "Harl.h"

int main()
{
	Harl harl;

	std::cout << "DEBUG: ";
	harl.complain("DEBUG");
	std::cout << "INFO: ";
	harl.complain("INFO");
	std::cout << "WARNING: ";
	harl.complain("WARNING");
	std::cout << "ERROR: ";
	harl.complain("ERROR");
	std::cout << "GREETING: ";
	harl.complain("GREETING");
	return (0);
}