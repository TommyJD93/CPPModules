#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << "Bureaucrat default constructor called, initialized with name \"default\" and grade 150" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat constructor called, initialized with name: "<< name << "; and grade: " << grade << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called for bureaucrat: " << this->_name << std::endl;
}

std::string Bureaucrat::get_name() const {
	return (this->_name);
}

int Bureaucrat::get_grade() const {
	return (this->_grade);
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat) {
	out << "[" << bureaucrat.get_name() << "] bureaucrat grade modified, new grade: " << bureaucrat.get_grade() << std::endl;
	return (out);
}

void Bureaucrat::decrement_grade(int variation_value) {
	if (this->get_grade() + variation_value > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->get_grade() + variation_value < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade += variation_value;
}
void Bureaucrat::increment_grade(int variation_value) {
	if (this->get_grade() - variation_value > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->get_grade() - variation_value < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= variation_value;
}

