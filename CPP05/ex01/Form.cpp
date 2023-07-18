#include "Form.hpp"

Form::Form(): _name("default_form"), _sing(false), _req_grade_sign(1), _req_grade_exec(1) {
	std::cout << "Form default constructor called, initialized with values:" << std::enld;
	std::cout << "-name: " << _name << std::endl;
	std::cout << "-sing: " << _sign << std::endl;
	std::cout << "-req_grade_sign: " << _req_grade_sign << std::endl;
	std::cout << "-req_grade_exec: " << _req_grade_exec << std::endl;
}

Form::Form(std::string name, const int req_grade_sign, const int req_grade_exec): _name(name), _sing(false), _req_grade_sign(req_grade_sign), _req_grade_exec(req_grade_exec) {
	std::cout << "Form default constructor called, initialized with values:" << std::enld;
	std::cout << "-name: " << _name << std::endl;
	std::cout << "-sing: " << _sign << std::endl;
	std::cout << "-req_grade_sign: " << _req_grade_sign << std::endl;
	std::cout << "-req_grade_exec: " << _req_grade_exec << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

std::string Form::get_name(void) {
	return(this->_name);
}

bool Form::get_sign(void) {
	return(this->_sign);
}

const int Form::get_grade_sign(void) {
	return(this->_req_grade_sign);
}

const int Form::get_grade_exec(void) {
	return(this->_req_grade_exec);
}
