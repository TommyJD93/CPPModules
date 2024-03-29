#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base *generate(void) {
    std::srand(time(0));
    int ran = std::rand() % 3;

    switch (ran)
    {
        case 1:
            return (new A);
        case 2:
            return (new B);
        default:
            return (new C);
    }
}

void    identify(Base *p) {
    if (dynamic_cast<A *> (p)!= NULL) {
        std::cout << "Type A" << std::endl;
    } else if (dynamic_cast<B *> (p) != NULL) {
        std::cout << "Type B" << std::endl;
    } else if (dynamic_cast<C *> (p) != NULL) {
        std::cout << "Type C" << std::endl;
    } else {
        std::cout << "How?" << std::endl;
    }
    return ;
}

void    identify(Base &p) {
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "type A" << std::endl;
    } catch (const std::exception &e) {}

    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "type B" << std::endl;
    } catch (const std::exception &e) {}

    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "type C" << std::endl;
    } catch (const std::exception &e) {}
}

int main() {
    Base *base;

    base = generate();
    std::cout << "ptr identifier: " << std::endl;
    identify(base);
    std::cout << "addr identifier: " << std::endl;
    identify(*base);

    delete base;
}
