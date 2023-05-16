#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : _fixed_point(0) {
    std::cout << "Fixed default construct called, initialized with value: 0" << std::endl;
}

Fixed::Fixed(const Fixed& copy_fixed) {
    std::cout << "Fixed copy construct called" << std::endl;
    *this = copy_fixed;
}

Fixed::~Fixed() {
    std::cout << "Fixed deconstruct called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& new_fixed) {
    std::cout << "Fixed copy assignment operator called" << std::endl;
	_fixed_point = new_fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const num) {
    std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = num;
}

