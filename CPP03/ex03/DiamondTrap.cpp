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
	std::cout << "Crazy Diamond da!" << std::endl;
}

DiamondTrap::DiamondTrap() : ScavTrap() {
    std::cout << "ops!" << std::endl;
    this->_name = "Josuke";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DORA DORA DORA" << std::endl;
}

void DiamondTrap::displayStatus() {
    std::cout << "name: " << this->_name << std::endl;
    std::cout << "hp: " << this->_hit_points << std::endl;
    std::cout << "energy points: " << this->_energy_points << std::endl;
    std::cout << "attack damage: " << this->_attack_damage << "(skill issue)" <<  std::endl;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "Diamond name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
