#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &initial_weapon) : _name(name), weapon(initial_weapon){
}

HumanA::~HumanA() {
}

void HumanA::setWeapon(Weapon new_weapon) {
    this->weapon = new_weapon;
}

void HumanA::attack() {
    cout << this->_name << " attacks with their " << this->weapon.getType() << endl;
}
