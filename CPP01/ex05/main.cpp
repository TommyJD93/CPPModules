#include "Harl.hpp"

int main(void)
{
    Harl Karen;

    Karen.complain("DEBUG");
    cout << "____________________" << endl;
    Karen.complain("INFO");
    cout << "____________________" << endl;
    Karen.complain("WARNING");
    cout << "____________________" << endl;
    Karen.complain("ERROR");
}