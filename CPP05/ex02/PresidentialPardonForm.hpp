#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
private:
    const std::string _target;
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &pardonForm);
    PresidentialPardonForm(const std::string target);
    virtual ~PresidentialPardonForm();
    void execute(const Bureaucrat &bureaucrat) const;
    PresidentialPardonForm &operator=(const PresidentialPardonForm &pardonForm);
};


#endif //CPPMODULES_PRESIDENTIALPARDONFORM_HPP
