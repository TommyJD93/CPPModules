#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap " << this->_name << " is ready to fire! *corki noises*" << std::endl;
    setStats();
}

FragTrap::FragTrap() : ClapTrap("Bethesda"){
    std::cout << "FragTrap " << this->_name << " is ready to fire! *corki noises*" << std::endl;
    setStats();
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " went to mexico" << std::endl;
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
        std::cout << "FragTrap " << this->_name << " ai chenot *punjabi mc starts playing*" << std::endl;
        return;
    }
    this->_energy_points--;
    std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::string dio;
    std::cout  << this->_name << " want an high five :D" << std::endl;
    getline(std::cin, dio);
}
