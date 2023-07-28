#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShruberryForm", 245, 137), _file("Shruberry Form") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string file_name): AForm("ShruberryForm", 245, 137), _file(file_name) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Shrubbery) {
    *this = Shrubbery;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm &operator=(const ShrubberyCreationForm &Shrubbery) {
    (void)Shrubbery;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
    std::ostream file;

    permissionCheck(bureaucrat);
    file.open((this->_file));
    if (!file.good())
        throw FormCouldNotOpenFileException();
    file << "              v .   ._, |_  .," << std::endl;
    file << "       \'-._\\/  .  \\ /    |/_" << std::endl;
    file << "           \\\\  _\\, y | \\//" << std::endl;
    file << "     _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
    file << "       \'7-,--.\'._||  / / ," << std::endl;
    file << "       /\'     \'-.\'./ / |/_.\'" << std::endl;
    file << "                 |    |//" << std::endl;
    file << "                 |_    /   " << _target << std::endl;
    file << "                 |-   |" << std::endl;
    file << "                 |   =|" << std::endl;
    file << "                 |    |" << std::endl;
    file << "----------------/ ,  . \\--------._" << std::endl;
    file.close();
}