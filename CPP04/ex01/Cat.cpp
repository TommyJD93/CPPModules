#include "Cat.hpp"

Cat::Cat() : Animal("Cat Pet"), _type("Cat") {
    this->_brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

/*
Cat::Cat(std::string name) : Animal("Cat Pet"), _type(name) {
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}
*/

Cat::~Cat(){
}

void Cat::makeSound() const {
    std::cout << "meaw" << std::endl;
}

void Cat::setIdea(std::string idea, int idea_nb) {
    this->_brain->setIdea(idea, idea_nb);
}

std::string Cat::getIdea(int idea_nb) {
    return (this->_brain->getIdea(idea_nb));
}
