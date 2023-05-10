#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(std::string idea, int idea_nb) {
    this->_ideas[idea_nb] = idea;
}

std::string Brain::getIdea(int idea_nb) {
    return (this->_ideas[idea_nb]);
}
