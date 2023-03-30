#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : _fixed_point(0) {
    cout << "Fixed default construct called, initialized with value: 0" << endl;
}

Fixed::Fixed(const Fixed& copy_fixed) {
    cout << "Fixed copy construct called" << endl;
    *this = copy_fixed;
}

Fixed::~Fixed() {
    cout << "Fixed deconstruct called" << endl;
}

Fixed& Fixed::operator=(const Fixed& new_fixed) {
	cout << "Fixed copy assignment operator called" << endl;
	_fixed_point = new_fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const num) {
	cout << "setRawBits member function called" << endl;
	this->_fixed_point = num;
}

