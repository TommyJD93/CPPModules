#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat b1("Bureaucrat1", 1);
    Bureaucrat b150("Bureaucrat150", 150);

    ShrubberyCreationForm s1("Shrubbery1");
    RobotomyRequestForm r1("Robotomy1");
    PresidentialPardonForm p1("Presidential1");

    s1.beSigned(b1);
    r1.beSigned(b1);
    p1.beSigned(b1);

    s1.execute(b1);
    r1.execute(b1);
    p1.execute(b1);
}