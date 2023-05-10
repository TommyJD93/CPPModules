#ifndef CPPMODULES_CAT_HPP
#define CPPMODULES_CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
private:
    std::string _type;
public:
    Cat();
    ~Cat();
//    std::string getType();
    void makeSound() const;
 };


#endif //CPPMODULES_CAT_HPP
