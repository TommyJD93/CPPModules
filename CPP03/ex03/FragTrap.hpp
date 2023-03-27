#ifndef CPPMODULES_FRAGTRAP_HPP
#define CPPMODULES_FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
public:
    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    std::string getName();
    void setStats(void);
    void highFivesGuys(void);
    virtual void attack(const std::string& target);
};

#endif //CPPMODULES_FRAGTRAP_HPP
