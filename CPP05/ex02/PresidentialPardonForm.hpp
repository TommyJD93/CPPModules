#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"


class PresidentialPardonForm: public AForm {
private:
    const std::string _target;
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &pardonForm);
public:
    PresidentialPardonForm(const std::string target);
    virtual ~PresidentialPardonForm();
    void execute(const Bureaucrat &bureaucrat);
};

PresidentialPardonForm &operator=(const PresidentialPardonForm &pardonForm);

#endif //CPPMODULES_PRESIDENTIALPARDONFORM_HPP
