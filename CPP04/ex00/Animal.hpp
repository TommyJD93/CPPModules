#ifndef CPPMODULES_ANIMAL_HPP
#define CPPMODULES_ANIMAL_HPP
#include <iostream>

class Animal {
private:
    std::string _type;
public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
};


#endif //CPPMODULES_ANIMAL_HPP
