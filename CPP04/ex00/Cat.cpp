#include "Cat.hpp"

Cat::Cat() : Animal("Pet"), _type("Cat") {
    cout << "Cat constructor called" << endl;
}

Cat::~Cat() {
}
