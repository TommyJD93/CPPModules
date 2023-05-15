#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	std::cout << "creating a new zombie, name: " << name << std::endl;
    return (new Zombie(name));
}
