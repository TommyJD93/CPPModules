#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : _fixed_point(0) {
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(int n) : _fixed_point(n << _fractional_bits) {
	cout << "Int constructor called" << endl;
	setRawBits(n << this->_fractional_bits);
}

Fixed::Fixed(float n) {
	cout << "Float constructor called" << endl;
	this->setRawBits((int)roundf(n * (1 << this->_fractional_bits)));
}

Fixed::Fixed(const Fixed& copy_fixed) {
    cout << "Copy construct called" << endl;
    *this = copy_fixed;
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed& new_fixed) {
	cout << "Copy assignment operator called" << endl;
	_fixed_point = new_fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const num) {
	this->_fixed_point = num;
}

float Fixed::toFloat() const {
	float to_float;

	to_float = (float)this->getRawBits() / (1 << this->_fractional_bits);
	return (to_float);
}

int Fixed::toInt() const {
	return (this->getRawBits() >> this->_fractional_bits);
}

std::ostream& operator<<( std::ostream& out, Fixed const& fixed) {
	out << fixed.toFloat();
	return (out);
}

