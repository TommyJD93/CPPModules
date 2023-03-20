#include "phonebook.h"

int main(void) {
	std::string	buf;
	phonebook	book;

	buf = "";
	book.start();
	while (buf.compare("EXIT") && std::cin.good()) {
		std::cout << "Phonebook> " << std::flush;
		std::cin >> buf;
		if (buf.compare("ADD") == 0)
			book.add();
		if (buf.compare("SEARCH") == 0)
			book.display();
	}
	return (0);
}
