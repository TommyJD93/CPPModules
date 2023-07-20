#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
    Form 		f("BFF", 10, 4);
    Bureaucrat	bob("Bob", 11);

    std::cout << f << std::endl;
    std::cout << bob << std::endl;

    bob.singForm(f);
    bob.increment_grade(1);
    bob.singForm(f);

    std::cout << std::endl << f << std::endl;
    return (0);
}