#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
   // this->_name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon &new_weapon) {
    this->weapon = &new_weapon;
}

void HumanB::attack() {
    cout << this->_name << " attacks with their " << this->weapon->getType() << endl;
}
