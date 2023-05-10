#ifndef CPPMODULES_WRONGANIMAL_HPP
#define CPPMODULES_WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
private:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    std::string getType() const;
    virtual void makeSound() const;
};


#endif //CPPMODULES_ANIMAL_HPP
