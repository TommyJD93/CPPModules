#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap enemy("el muestro");

	cout << "___________________" << endl;
	cout << "enemy name: " << enemy.getName() << endl;

	cout << "___________________" << endl;
    enemy.displayStatus();

	cout << "___________________" << endl;
    enemy.whoAmI();
    cout << "___________________" << endl;
//	npc.guardGate();
//
//	cout << "___________________" << endl;
//	npc.attack("Pentagon");

}
