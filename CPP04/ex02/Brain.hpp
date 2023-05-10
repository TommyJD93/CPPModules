#ifndef CPPMODULES_BRAIN_HPP
#define CPPMODULES_BRAIN_HPP
#include <iostream>
#include "Brain.hpp"

class Brain {
private:
    std::string _ideas[100];
public:
    Brain();
    ~Brain();
    void setIdea(std::string idea, int idea_nb);
    std::string getIdea(int idea_nb);
};

#endif //CPPMODULES_BRAIN_HPP
