#ifndef CPPMODULES_SCAVTRAP_HPP
#define CPPMODULES_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    std::string getName();
    void setStats(void);
    void guardGate();
    virtual void attack(const std::string& target);
};

#endif //CPPMODULES_SCAVTRAP_HPP
