#include "FragTrap.hpp"

// _name(name), _energy_points(10), _hit_points(10), _attack_damage(10)
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    cout << "FragTrap " << this->_name << " is ready to fire! *corki noises*" << endl;
    setStats();
}

FragTrap::FragTrap() : ClapTrap("Bethesda"){
    cout << "FragTrap " << this->_name << " is ready to fire! *corki noises*" << endl;
    setStats();
}

FragTrap::~FragTrap() {
    cout << "FragTrap " << this->_name << " went to mexico" << endl;
}

void FragTrap::setStats(void)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

std::string FragTrap::getName(void) {
    return (this->_name);
}

void FragTrap::attack(const std::string& target) {
    if (this->_energy_points <= 0) {
        cout << "FragTrap " << this->_name << " ai chenot *punjabi mc starts playing*" << endl;
        return;
    }
    this->_energy_points--;
    cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << endl;
}

void FragTrap::highFivesGuys() {
    std::string dio;
    cout  << this->_name << " want an high five :D" << endl;
    getline(std::cin, dio);
}