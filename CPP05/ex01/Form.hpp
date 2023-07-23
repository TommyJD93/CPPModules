#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string	_name;
    bool		_sign;
    const int	_req_grade_sign;
    const int	_req_grade_exec;

public:
    class FormGradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Form: GradeTooLowException");
        }
    };

    class FormGradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Form: GradeTooHighException");
        }
    };

    Form();
    Form(std::string name, const int req_grade_sign, const int req_grade_exec);
    ~Form();
    std::string get_name(void);
    bool get_sign(void);
    int get_grade_sign(void);
    int get_grade_exec(void);
    void beSigned(Bureaucrat &bureaucrat);
};

std::ostream& operator<<(std::ostream& out,Form &form);

#endif //CPPMODULES_FORM_HPP


