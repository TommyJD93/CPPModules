#ifndef CPPMODULES_WEAPON_HPP
#define CPPMODULES_WEAPON_HPP
#include <iostream>
using namespace std;

class Weapon {
private:
    std::string _type;
public:
    Weapon(std::string type);
    ~Weapon();
    void setType(std::string type);
    std::string getType(void);
};

#endif //CPPMODULES_WEAPON_HPP
