#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "henlo" << std::endl;
}

Zombie::Zombie(std::string name) {
	std::cout << name << " henloo" << std::endl;
}

Zombie::~Zombie() {
    std::cout << this->_name << " deaaad bruh" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name) {
    this->_name = name;
}
