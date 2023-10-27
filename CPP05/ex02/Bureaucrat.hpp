#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string _name;
	int _grade;
public:

	class BureaucratGradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Bureaucrat: GradeTooLowException");
		}
	};

	class BureaucratGradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Bureaucrat: GradeTooHighException");
		}
	};

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	std::string get_name() const;
	int get_grade() const;

	void decrement_grade(int variation_value);
	void increment_grade(int variation_value);
    void singForm(AForm &Form);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat);

#endif //CPPMODULES_BUREAUCRAT_HPP
