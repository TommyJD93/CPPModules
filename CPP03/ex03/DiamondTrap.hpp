#ifndef CPPMODULES_DIAMONDTRAP_HPP
#define CPPMODULES_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap{
private:
	std::string _name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void whoAmI();
};


#endif //CPPMODULES_DIAMONDTRAP_HPP
