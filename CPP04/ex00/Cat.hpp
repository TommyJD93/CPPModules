#ifndef CPPMODULES_CAT_HPP
#define CPPMODULES_CAT_HPP
#include "Animal.hpp"

class Cat : Animal {
private:
    std::string _type;
public:
    Cat();
    ~Cat();
};


#endif //CPPMODULES_CAT_HPP
