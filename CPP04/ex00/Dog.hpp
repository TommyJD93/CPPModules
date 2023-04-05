#ifndef CPPMODULES_DOG_HPP
#define CPPMODULES_DOG_HPP
#include "Animal.hpp"

class Dog : Animal {
private:
    std::string _type;
public:
    Dog();
    ~Dog();

};


#endif //CPPMODULES_DOG_HPP
