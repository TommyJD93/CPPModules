#include "Dog.hpp"

Dog::Dog() : Animal("Dog Pet"), _type("Dog") {
    this->_brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

/*Dog::Dog(std::string name) : Animal("Dog Pet"), _type(name) {
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}*/

Dog::Dog(const Dog& rhs) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = rhs;
}

Dog::~Dog() {
}

void Dog::makeSound() const {
    std::cout << "woof" << std::endl;
}

void Dog::setIdea(std::string idea, int idea_nb) {
    this->_brain->setIdea(idea, idea_nb);
}

std::string Dog::getIdea(int idea_nb) {
    return (this->_brain->getIdea(idea_nb));
}
