#include "Zombie.hpp"

int main(void)
{
    int         n;
    std::string name;
    Zombie      *horde;

	std::cout << "enter the horde size: ";
    while (!(std::cin >> n)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Error, not a number! Did the Operator enjoy this witticism?" << std::endl << "Try Again: ";
    }
	std::cout << "enter the horde name: ";
	std::cin >> name;
    horde = zombieHorde(n, name);
    for (int i = 0 ; i <= n; ++i)
        horde[i].announce();
    delete [] horde;
    return (0);
}