#include "Cat.hpp"

Cat::Cat() : Animal("Cat Pet"), _type("Cat") {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(){
}

//std::string Cat::getType() {
//    return (this->_type);
//}

void Cat::makeSound() const {
    std::cout << "meaw" << std::endl;
}