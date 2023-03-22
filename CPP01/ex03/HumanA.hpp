#ifndef CPPMODULES_HUMANA_HPP
#define CPPMODULES_HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
using namespace std;

class HumanA {
private:
    std::string _name;
    Weapon &weapon;
public:
    HumanA(std::string name, Weapon &initial_weapon);
    ~HumanA();
    void setWeapon(Weapon new_weapon);
    void attack();
};

#endif //CPPMODULES_HUMANA_HPP
