#ifndef CPPMODULES_CAT_HPP
#define CPPMODULES_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    std::string _type;
    Brain* _brain;
public:
    Cat();
    ~Cat();
//    std::string getType();
    void makeSound() const;
    void setIdea(std::string idea, int idea_nb);
    std::string getIdea(int idea_nb);
 };

#endif //CPPMODULES_CAT_HPP
