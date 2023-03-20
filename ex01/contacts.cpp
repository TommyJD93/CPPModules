#include "phonebook.h"

bool	valid_input(std::string str) {
	if (str.length() > 0)
		return (true);
	std::cout << "invalid input" << std::endl;
	return (false);
}

std::string	contact::read_data(std::string str) {
	std::string	buf;

	buf = "";
	do {
		std::cout << str;
		std::cin >> buf;
	} while(std::cin.bad() && !buf.empty());
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

void	contact::view(int i) {
	if (this->_name.empty() || this->_surname.empty() || this->_nick.empty())
		return;
	std::cout << "|" << "          " << i << std::flush;
	std::cout << "|" << "          " << this->_name << std::flush;
	std::cout << "|" << "          " << this->_surname << std::flush;
	std::cout << "|" << "          " << this->_nick << std::flush;
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
