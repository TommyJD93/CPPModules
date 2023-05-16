#include "ClaprTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << this->_name << " is ready to fire! *corki noises*" << std::endl;
}

ClapTrap::ClapTrap() : _name("Valve"), _hit_points(10),  _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << "Default" << " is ready to fire! *corki noises*" << std::endl;
}

ClapTrap::~ClapTrap() {
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energy_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " I got no mana" << std::endl;
        return;
    }
    this->_energy_points--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->_name << " received " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " I got no mana" << std::endl;
        return;
    }
    this->_energy_points--;
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->_name << " healed " << amount << " hp" << std::endl;
}

int ClapTrap::getHitPoints(void) {
    return (this->_hit_points);
}

std::string ClapTrap::getName(void) {
    return (this->_name);
}

void ClapTrap::displayStatus(void)
{
    std::cout << "hp: " << this->_hit_points << std::endl;
    std::cout << "energy points: " << this->_energy_points << std::endl;
    std::cout << "attack damage: " << this->_attack_damage << "(skill issue)" << std::endl;
}
