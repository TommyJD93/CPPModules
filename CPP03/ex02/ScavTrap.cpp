#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    cout << "ScavTrap " << this->_name << " is ready to fire! *corki noises*" << endl;
    setStats();
}

ScavTrap::ScavTrap() : ClapTrap("valve"){
    cout << "ScavTrap " << this->_name << " is ready to fire! *corki noises*" << endl;
    setStats();
}

ScavTrap::~ScavTrap() {
    cout << "ScavTrap " << this->_name << " went to mexico" << endl;
}

void ScavTrap::setStats(void)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

std::string ScavTrap::getName(void) {
    return (this->_name);
}

void ScavTrap::attack(const std::string& target) {
    if (this->_energy_points <= 0) {
        cout << "ScavTrap " << this->_name << " ai chenot *punjabi mc starts playing*" << endl;
        return;
    }
    this->_energy_points--;
    cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << endl;
}

void ScavTrap::guardGate() {
    cout << "ScavTrap " << this->_name << " is now in Gate keeper(mazzocchi) mode" << endl;
}