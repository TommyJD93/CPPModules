#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 72, 45), _target("default") {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("Robotomy", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) {
    *this = robotomy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) {
    int random;

    this->permissionCheck(Bureaucrat);
    std::cout << "*drill noises*" << std::string;
    random = rand() % 2;
    if (random)
        std::cout << _target << "successfully robotomized" << std::endl;
    else
        std::cout << _target << "could not be romotomized" << std::endl;
}