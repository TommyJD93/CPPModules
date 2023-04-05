#ifndef CPPMODULES_ANIMAL_HPP
#define CPPMODULES_ANIMAL_HPP
#include <iostream>
using namespace std;

class Animal {
private:
    std::string _type;
public:
    Animal();
    ~Animal();
    void makeSound();
};


#endif //CPPMODULES_ANIMAL_HPP
