#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : _fixed_point(0) {
    cout << "Fixed default construct called, initialized with value: 0" << endl;
}

Fixed::Fixed(int n) : _fixed_point(n) {
    cout << "Fixed construct called, initialized with value: " << n << endl;
}

Fixed::Fixed(const Fixed& copy_fixed) : _fixed_point(copy_fixed._fixed_point) {
    cout << "Fixed copy construct called, initialized with value: " << this->_fixed_point << endl;
}

Fixed::~Fixed() {
    cout << "Fixed deconstruct called" << endl;
}

void Fixed::operator=(const Fixed& new_fixed) {
    _fixed_point = new_fixed._fixed_point;
}
