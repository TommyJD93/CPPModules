#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << this->_name << " is ready to fire! *corki noises*" << std::endl;
    setStats();
}

ScavTrap::ScavTrap() : ClapTrap("valve"){
    std::cout << "ScavTrap " << this->_name << " is ready to fire! *corki noises*" << std::endl;
    setStats();
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " went to mexico" << std::endl;
}

void ScavTrap::setStats(void)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

//std::string ScavTrap::getName(void) {
//    return (this->_name);
//}

void ScavTrap::attack(const std::string& target) {
    if (this->_energy_points <= 0) {
        std::cout << "ScavTrap " << this->_name << " ai chenot *punjabi mc starts playing*" << std::endl;
        return;
    }
    this->_energy_points--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper(mazzocchi) mode" << std::endl;
}
