#include "AForm.hpp"

AForm::AForm(): _name("default_form"), _sign(false), _req_grade_sign(1), _req_grade_exec(1) {
    std::cout << "Form default constructor called, initialized with values:" << std::endl;
    std::cout << "-name: " << _name << std::endl;
    std::cout << "-sing: " << _sign << std::endl;
    std::cout << "-req_grade_sign: " << _req_grade_sign << std::endl;
    std::cout << "-req_grade_exec: " << _req_grade_exec << std::endl;
}

AForm::AForm(std::string name, const int req_grade_sign, const int req_grade_exec): _name(name), _sign(false), _req_grade_sign(req_grade_sign), _req_grade_exec(req_grade_exec) {
    std::cout << "Form default constructor called, initialized with values:" << std::endl;
    std::cout << "-name: " << _name << std::endl;
    std::cout << "-sing: " << _sign << std::endl;
    std::cout << "-req_grade_sign: " << _req_grade_sign << std::endl;
    std::cout << "-req_grade_exec: " << _req_grade_exec << std::endl;
}

AForm::AForm(const AForm &AForm) {
    *this = AForm;
}

AForm::~AForm() {
    std::cout << "Form destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, AForm &Form) {
    out << "Form [" << Form.get_name() << "] info:" << std::endl;
    out << "\t-sign status: " << Form.get_sign() << std::endl;
    out << "\t-sign grade required: " << Form.get_grade_sign() << std::endl;
    out << "\t-form exec grade required: " << Form.get_grade_exec() << std::endl;
    return (out);
}

std::string AForm::get_name(void) {
    return(this->_name);
}

bool AForm::get_sign(void) {
    return(this->_sign);
}

int AForm::get_grade_sign(void) {
    return(this->_req_grade_sign);
}

int AForm::get_grade_exec(void) {
    return(this->_req_grade_exec);
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (this->_req_grade_sign < bureaucrat.get_grade())
        throw FormGradeTooLowException();
    else
        this->_sign = true;
}

void AForm::permissionCheck(const Bureaucrat &bureaucrat) {
    if (!this->get_sign())
        throw FormNotSignedException();
    if (this->get_grade_exec() > bureaucrat.get_grade())
        throw FormGradeTooLowException();
}


