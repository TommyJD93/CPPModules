#ifndef CPPMODULES_DIAMONDTRAP_HPP
#define CPPMODULES_DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;
public:
    DiamondTrap(std::string name);
    DiamondTrap();
    ~DiamondTrap();
    void whoAmI();
public:
    std::string getName();
    void displayStatus();
    void setStats();

};

#endif //CPPMODULES_DIAMONDTRAP_HPP
