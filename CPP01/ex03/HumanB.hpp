#ifndef CPPMODULES_HUMANB_HPP
#define CPPMODULES_HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
using namespace std;

class HumanB {
private:
    std::string _name;
    Weapon *weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &new_weapon);
    void attack();
};

#endif //CPPMODULES_HUMANB_HPP
