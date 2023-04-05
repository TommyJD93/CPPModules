#include "Animal.hpp"

Animal::Animal() : _type("default") {
    cout << "animal default constructor called" << endl;
}

Animal::Animal(std::string type) : _type(type) {
    cout << "animal constructor called" << endl;
}

Animal::~Animal() {
}

void Animal::makeSound() {
    cout << "woof" << endl;
}