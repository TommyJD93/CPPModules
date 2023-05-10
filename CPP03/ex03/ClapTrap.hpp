#ifndef CPPMODULES_CLAPRTRAP_HPP
#define CPPMODULES_CLAPRTRAP_HPP
#include <iostream>
#include <cstring>

class ClapTrap {
protected:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
public:
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getHitPoints(void);
    std::string getName(void);
    void displayStatus(void);
};

#endif //CPPMODULES_CLAPRTRAP_HPP
