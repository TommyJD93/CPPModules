#ifndef CPPMODULES_ROBOTOMYREQUESTFORM_HPP
#define CPPMODULES_ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm: public AForm {
private:
    const std::string _target;
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm &robotomy);
    RobotomyRequestForm(const std::string target);
    virtual ~RobotomyRequestForm();
    void execute(const Bureaucrat &bureaucrat) const;
    RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomy);
};

#endif //CPPMODULES_ROBOTOMYREQUESTFORM_HPP
