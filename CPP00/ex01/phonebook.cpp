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
	int		i;
	bool	loop;

	i = 0;
	loop = true;
	std::cout   << "|--------------Contact Display--------------|\n"
				<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";
	while (i < 8)
	{
		this->contact_list[i].view(i);
		i++;
	}
	do {
		std::cout << "enter the index of the contact: ";
		std::cin >> i;
		if (!(i >= 0 && i <= 7))
			std::cout << "invalid input" << std::endl;
		else
			loop = false;
	} while	(loop);
	this->contact_list[i].info(i);
}
