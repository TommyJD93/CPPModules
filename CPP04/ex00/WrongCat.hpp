#ifndef CPPMODULES_WRONGCAT_HPP
#define CPPMODULES_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
    std::string _type;
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
};


#endif //CPPMODULES_CAT_HPP
