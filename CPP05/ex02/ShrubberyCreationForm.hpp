#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm: public AForm{
private:
    const std::string _file;
public:
    ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery);
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string file_name);
    virtual ~ShrubberyCreationForm();

    void execute(const Bureaucrat &bureaucrat) const;
    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &shrubbery);
};

#endif //SHRUBBERYCREATIONFORM_HPP
