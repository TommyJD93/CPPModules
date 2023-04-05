#include "Dog.hpp"
Dog::Dog() : Animal("Pet"), _type("Dog") {
    cout << "Dog constructor called" << endl;
}

Dog::~Dog() {
}

