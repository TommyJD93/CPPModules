#include "Harl.hpp"

int	main(int argc, char **argv)
{
    Harl	Harl;

    if (argc != 2)
    {
        std::cout << "Program arguments error" << std::endl;
        return (-1);
    }
    Harl.filter(argv[1]);
    return (0);
}