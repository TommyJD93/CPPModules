#include "Animal.hpp"

Animal::Animal() : _type("default") {
    std::cout << "animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
    std::cout << "animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal " << this->_type << " deconstruct called" << std::endl;
}

std::string Animal::getType() const {
    return (this->_type);
}

void Animal::makeSound() const {
    std::cout << "*generic animal sound*" << std::endl;
}