#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap enemy("el muestro");

	std::cout << "___________________" << std::endl;
	std::cout << "enemy name: " << enemy.getName() << std::endl;

	std::cout << "___________________" << std::endl;
    enemy.displayStatus();

	std::cout << "___________________" << std::endl;
    enemy.whoAmI();
    std::cout << "___________________" << std::endl;
}
