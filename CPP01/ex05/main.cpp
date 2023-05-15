#include "Harl.hpp"

int main(void)
{
    Harl Karen;

    Karen.complain("DEBUG");
    std::cout << "____________________" << std::endl;
    Karen.complain("INFO");
    std::cout << "____________________" << std::endl;
    Karen.complain("WARNING");
    std::cout << "____________________" << std::endl;
    Karen.complain("ERROR");
}