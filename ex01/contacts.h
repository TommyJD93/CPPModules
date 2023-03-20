#ifndef CPPMODULES_CONTACTS_H
# define CPPMODULES_CONTACTS_H
# include <iostream>

class contact
{
private:
	int			_index;
	std::string	_name;
	std::string	_surname;
	std::string	_nick;
	std::string	_darkest_secret;
	std::string	_phone_number;
public:
	std::string	read_data(std::string str);
	void		get_data(void);
	void		index(void);
	void		view(int i);
	void		index(int i);
	void		info(int i);

	//	set_index();
//	set_name();
//	set_surname();
//	set_nick();
};
#endif //CPPMODULES_CONTACTS_H
