#include "phonebook.h"
#include <iomanip>

bool	valid_input(std::string str) {
	if (!str.empty() > 0)
		return (true);
	std::cout << "invalid input" << std::endl;
	return (false);
}

std::string	contact::read_data(std::string str) {
	std::string	buf;
	bool		valid;

	buf = "";
	valid = false;
	while (!valid)
	{
		std::cout << str;
		getline(std::cin, buf);
		if (valid_input(buf))
			valid = true;
	}
	return (buf);
}

void	contact::index(int i) {
	this->_index = i;
}

void	contact::info(int i)
{
	std::cout << "index: " << i << std::endl;
	std::cout << "First Name: "<< this->_name << std::endl;
	std::cout << "Last Name: "<< this->_surname << std::endl;
	std::cout << "Nick: "<< this->_nick << std::endl;
	std::cout << "Phone number: "<< this->_phone_number << std::endl;
	std::cout << "Darkest Secret: "<< this->_darkest_secret << std::endl;
}

std::string	contact::printlen(std::string str) {
	if (str.length() > 9)
		return str.substr(0, 9) + '.';
	return (str);
}

void	contact::view(int i) {
	if (this->_name.empty() || this->_surname.empty() || this->_nick.empty())
		return;
	std::cout << "|" << std::setw(10) << i << std::flush;
	std::cout << "|" << std::setw(10) << this->printlen(this->_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->printlen(this->_surname) << std::flush;
	std::cout << "|" << std::setw(10) << this->printlen(this->_nick) << std::flush;
	std::cout << "|" << std::endl;
}

void	contact::get_data(void) {
	std::cin.ignore();
	this->_name = this->read_data("enter the contact name: ");
	this->_surname = this->read_data("enter the contact last name: ");
	this->_nick = this->read_data("enter the contact nick: ");
	this->_phone_number = this->read_data("enter the contact number: ");
	this->_darkest_secret = this->read_data("enter the contact darkest secret: ");
}
