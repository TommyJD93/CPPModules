#include "DiamondTrap.hpp"

void DiamondTrap::setStats(){
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
}

std::string DiamondTrap::getName() {
    return (this->_name);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_name"), ScavTrap(name), FragTrap(name), _name(name) {
	cout << "Crazy Diamond da!" << endl;
}

DiamondTrap::DiamondTrap() : ScavTrap() {
    cout << "ops!" << endl;
    this->_name = "Josuke";
}

DiamondTrap::~DiamondTrap() {
	cout << "DORA DORA DORA" << endl;
}

void DiamondTrap::displayStatus() {
    cout << "name: " << this->_name << endl;
    cout << "hp: " << this->_hit_points << endl;
    cout << "energy points: " << this->_energy_points << endl;
    cout << "attack damage: " << this->_attack_damage << "(skill issue)" <<  endl;
}

void DiamondTrap::whoAmI(void) {
    cout << "Diamond name: " << this->_name << endl;
    cout << "ClapTrap name: " << ClapTrap::_name << endl;
}
