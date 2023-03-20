#ifndef CPPMODULES_PHONEBOOK_H
# define CPPMODULES_PHONEBOOK_H
# include <iostream>
# include <limits.h>
# include "contacts.h"

class phonebook
{
private:
	contact contact_list[8];

public:
	void	start(void);
	void	add(void);
	void	display(void);
};


#endif //CPPMODULES_PHONEBOOK_H
