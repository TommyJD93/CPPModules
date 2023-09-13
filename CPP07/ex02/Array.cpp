#include "Array.hpp"

/**
 * Constructors and destructor
 */
template <typename T>
Array<T>::Array(): _array(new T[0]), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n) {
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
size_t Array<T>::size() {
    return (this->_size);
}
