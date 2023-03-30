#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : _fixed_point(0) {
    cout << "Fixed default construct called, initialized with value: 0" << endl;
}

//int constructor
Fixed::Fixed(int n) {

}

//float constructor
Fixed::Fixed(float n) {

}

//copy constructor
Fixed::Fixed(const Fixed& copy_fixed) {
    *this = copy_fixed;
    cout << "Fixed copy construct called" << endl;
}

//rumbling
Fixed::~Fixed() {
    cout << "Fixed deconstruct called" << endl;
}

void Fixed::operator=(const Fixed& new_fixed) {
    _fixed_point = new_fixed._fixed_point;
}
