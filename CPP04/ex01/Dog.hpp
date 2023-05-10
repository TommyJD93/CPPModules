#ifndef CPPMODULES_DOG_HPP
#define CPPMODULES_DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    std::string _type;
    Brain* _brain;
public:
    Dog();
    Dog(const Dog& rhs);
    ~Dog();
    void makeSound() const;
    void setIdea(std::string idea, int idea_nb);
    std::string getIdea(int idea_nb);
};

#endif //CPPMODULES_DOG_HPP
