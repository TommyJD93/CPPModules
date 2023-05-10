#include "Dog.hpp"

Dog::Dog() : Animal("Dog Pet"), _type("Dog") {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
}
//
//std::string Dog::getType() {
//    return (this->_type);
//}

void Dog::makeSound() const {
    std::cout << "woof" << std::endl;
}
