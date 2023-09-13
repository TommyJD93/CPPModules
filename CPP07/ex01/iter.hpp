#ifndef CPPMODULES_ITER_HPP
#define CPPMODULES_ITER_HPP
#include <iostream>

template <typename T>
void iter(T *ptr, T len, T*func()) {
    int i = 0;

    while (i < len) {
        func(ptr);
        i++;
        ptr++;
    }
}
#endif //CPPMODULES_ITER_HPP
