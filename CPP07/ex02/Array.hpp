#ifndef CPPMODULES_ARRAY_HPP
#define CPPMODULES_ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
private:
    size_t _size;
    T *_array;
public:

    Array();
    Array(unsigned int n);
    ~Array();

    class ArrayOutOfBoundException : public std::exception {
    public:
        virtual const char *what() const throw {
            return ("ArrayOutOfBoundException");
        }
    };

    array operator= (const &rhs) {
        *this = rhs;
    }

    T& operator[](size_t index) {
        if (index >= _size)
            throw ArrayOutOfBoundException();
        return (_array[index]);
    };

    const T& operator[](size_t index) const {
        if (index >= _size)
            throw ArrayOutOfBoundException();
        return (_array[index]);
    };
    size_t size();
};
#endif //CPPMODULES_ARRAY_HPP
