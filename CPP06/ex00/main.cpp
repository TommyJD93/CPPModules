#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
        return (-1);

    ScalarConverter converter = ScalarConverter(argv[1]);

    converter.convert();
    std::cout << converter << std::endl;
    return (0);
}