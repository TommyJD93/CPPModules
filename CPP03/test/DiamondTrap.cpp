#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name) {
	cout << "Crazy Diamond da!" << endl;
}

DiamondTrap::~DiamondTrap() {
	cout << "DORA DORA DORA" << endl;
}

std::string DiamondTrap::getName() {
	return (this->_name);
}

void DiamondTrap::displayStatus() : {
	ScavTrap::displayStatus();
}


void DiamondTrap::whoAmI(void) {
	//This member function will display both its name and its ClapTrap name.
}
