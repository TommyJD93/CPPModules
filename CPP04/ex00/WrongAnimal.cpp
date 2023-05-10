#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal " << this->_type << " deconstruct called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->_type);
}

void WrongAnimal::makeSound() const {
    std::cout << "*generic WrongAnimal sound*" << std::endl;
}