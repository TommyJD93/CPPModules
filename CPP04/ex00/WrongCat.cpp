#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat Pet"), _type("WrongCat") {
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
}

void WrongCat::makeSound() const {
    std::cout << "wrong meaw" << std::endl;
}