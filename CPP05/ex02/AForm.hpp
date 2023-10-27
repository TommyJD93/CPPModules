#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
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

    class FormNotSignedException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Form: NotSignedException");
        }
    };

    class FormCouldNotOpenFileException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Form: CouldNotOpenFileException");
        }
    };

	AForm();
	AForm(std::string name, const int req_grade_sign, const int req_grade_exec);
    AForm& operator=(const AForm&);
    AForm(const AForm &AForm);
	virtual ~AForm();

    std::string get_name(void);
	bool get_sign(void);
    int get_grade_sign(void);
    int get_grade_exec(void);
    void beSigned(Bureaucrat &bureaucrat);

    void permissionCheck(const Bureaucrat &bureaucrat) const;
    virtual void execute(const Bureaucrat &bureaucrat) const = 0;
};

std::ostream& operator<<(std::ostream& out, AForm &form);

#endif //CPPMODULES_FORM_HPP