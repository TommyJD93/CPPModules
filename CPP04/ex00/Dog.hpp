#ifndef CPPMODULES_DOG_HPP
#define CPPMODULES_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
private:
    std::string _type;
public:
    Dog();
    ~Dog();
//    std::string getType();
    void makeSound() const;
};


#endif //CPPMODULES_DOG_HPP
