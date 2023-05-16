#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : _fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n) : _fixed_point(n << _fractional_bits) {
    std::cout << "Int constructor called" << std::endl;
	setRawBits(n << this->_fractional_bits);
}

Fixed::Fixed(float n) {
    std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(n * (1 << this->_fractional_bits)));
}

Fixed::Fixed(const Fixed& copy_fixed) {
    std::cout << "Copy construct called" << std::endl;
    *this = copy_fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& new_fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
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

bool Fixed::operator>(const Fixed& new_fixed) const {
    return (this->_fixed_point > new_fixed._fixed_point);
}

bool Fixed::operator<(const Fixed& new_fixed) const {
    return (this->_fixed_point < new_fixed._fixed_point);
}

bool Fixed::operator>=(const Fixed& new_fixed) const {
    return (this->_fixed_point >= new_fixed._fixed_point);
}

bool Fixed::operator<=(const Fixed& new_fixed) const {
    return (this->_fixed_point <= new_fixed._fixed_point);
}

bool Fixed::operator==(const Fixed& new_fixed) const {
    return (this->_fixed_point == new_fixed._fixed_point);
}

bool Fixed::operator!=(const Fixed& new_fixed) const {
    return (this->_fixed_point != new_fixed._fixed_point);
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    Fixed tmp(*this);
    tmp.setRawBits(_fixed_point + rhs._fixed_point);
    return tmp;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    Fixed tmp(*this);
    tmp.setRawBits(_fixed_point - rhs._fixed_point);
    return tmp;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    Fixed tmp(*this);
    tmp.setRawBits((_fixed_point * rhs._fixed_point) >> _fractional_bits);
    return tmp;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    Fixed tmp(*this);
    tmp.setRawBits((_fixed_point << _fractional_bits) / rhs._fixed_point);
    return tmp;
}

Fixed& Fixed::operator++(void) {
    _fixed_point++;
    return *this;
}

Fixed& Fixed::operator--(void) {
    _fixed_point--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
    if (lhs > rhs) {
        return rhs;
    }
    return lhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
    if (lhs > rhs) {
        return lhs;
    }
    return rhs;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
    if (lhs > rhs) {
        return rhs;
    }
    return lhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
    if (lhs > rhs) {
        return lhs;
    }
    return rhs;
}

