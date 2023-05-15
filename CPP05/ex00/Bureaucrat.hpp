#ifndef CPPMODULES_BUREAUCRAT_HPP
#define CPPMODULES_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	const std::string _name;
	int _grade;
public:

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Bureaucrat: GradeTooLowException");
		}
	};

	class GradeTooHighException : public std::exception {
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

};
std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat);


#endif //CPPMODULES_BUREAUCRAT_HPP
