#include "Span.hpp"

int main() {
    Span sp(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(1);
    sp.addNumber(7);
    sp.addNumber(200);
    sp.addNumber(0);
    sp.addNumber(18);
    sp.addNumber(21);
    sp.addNumber(102);
    sp.addNumber(9999);
    sp.addNumber(15);
    sp.addNumber(13);
    sp.addNumber(7);
    sp.addNumber(1119);
    sp.addNumber(12);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
