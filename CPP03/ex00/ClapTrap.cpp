#include "ClaprTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    this->_name = name;
    this->_energy_points = 10;
    this->_hit_points = 10;
    this->_attack_damage = 0;
}

ClapTrap::~ClapTrap() {

}

void ClapTrap::attack(const std::string& target) {
    if (this->_energy_points <= 0) {
        cout << "ClapTrap " << this->_name << " I got no mana" << endl;
        return;
    }
    this->_energy_points--;
    cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hit_points -= amount;
    cout << "ClapTrap " << this->_name << " received " << amount << " points of damage!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy_points <= 0) {
        cout << "ClapTrap " << this->_name << " I got no mana" << endl;
        return;
    }
    this->_energy_points--;
    this->_hit_points += amount;
    cout << "ClapTrap " << this->_name << " healed " << amount << " hp" << endl;
}

int ClapTrap::getHitPoints(void) {
    return (this->_hit_points);
}

std::string ClapTrap::getName(void) {
    return (this->_name);
}

void ClapTrap::displayStatus(void)
{
    cout << "hp: " << this->_hit_points << endl;
    cout << "energy points: " << this->_energy_points << endl;
    cout << "attack damage: " << this->_attack_damage << "(skill issue)" <<  endl;
}
