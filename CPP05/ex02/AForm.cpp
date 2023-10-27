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

AForm &AForm::operator=(const AForm &copy)
{
    if (this == &copy)
        return (*this);
    _sign = copy._sign;
    return (*this);
}

AForm::AForm(const AForm &copy) : _name(copy._name), _sign(copy._sign), _req_grade_sign(copy._req_grade_sign), _req_grade_exec(copy._req_grade_exec)
{
}

AForm::~AForm() {
    std::cout << "AForm destructor called" << std::endl;
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

void AForm::permissionCheck(const Bureaucrat &bureaucrat) const {
    try {
        if (!this->_sign)
            throw FormNotSignedException();
        if (this->_req_grade_exec > bureaucrat.get_grade())
            throw FormGradeTooLowException();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}


