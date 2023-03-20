#include "phonebook.h"

void	phonebook::start(void) {
	std::cout << "/–––––––––––––––––––––––––––––––––\\" << std::endl;
	std::cout << "|        AWSOME PHONEBOOK         |" << std::endl;
	std::cout << "\\–––––––––––––––––––––––––––––––––/" << std::endl;
	std::cout << "/–––––––––––––USAGE–––––––––––––––\\" << std::endl;
	std::cout <<"|• ADD:    add a contact          |" << std::endl;
	std::cout <<"|• SEARCH: add a contact          |" << std::endl;
	std::cout <<"|• EXIT:   add a contact          |" << std::endl;
	std::cout << "\\–––––––––––––––––––––––––––––––––/" << std::endl;
}

void	phonebook::add(void) {
	static int	i;
	this->contact_list[i % 8].get_data();
	this->contact_list[i % 8].index(i % 8);
	i++;
}

void	phonebook::display(void) {
	int	i;

	i = 0;
	while (i < 8)
	{
		this->contact_list[i].view(i);
		i++;
	}
	std::cout << "enter the index of the contact: ";
	std::cin >> i;
	this->contact_list[i].info(i);
}

//void	phonebook::search(void) {
//
//}
