#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShruberryForm", 1, 1), _file("Shruberry Form") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string file_name): AForm("ShruberryForm", 1, 1), _file(file_name) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Shrubbery) {
    *this = Shrubbery;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &Shrubbery) {
    (void)Shrubbery;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
    std::ostream file;

    permissionCheck(bureaucrat);
    file.open((this->_file));
    if (!file.good())
        throw FormCouldNotOpenFileException();
    file.close();
}