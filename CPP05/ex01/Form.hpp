#ifndef CPPMODULES_FORM_HPP
# define CPPMODULES_FORM_HPP

#include <iostream>

class Form {
private:
	std::string	_name;
	bool		_sing;
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
	const int get_grade_sign(void);
	const int get_grade_exec(void)
};

std::ostream& operator<<(std::ostream& out,Form const& bureaucrat);

#endif //CPPMODULES_FORM_HPP
