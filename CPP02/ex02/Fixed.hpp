#ifndef CPPMODULES_FIXED_HPP
#define CPPMODULES_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
private:
    int _fixed_point;
    static const int _fractional_bits = 8;
public:
    Fixed();
    Fixed(const int n);
    Fixed(float n);
    Fixed(const Fixed& copy_fixed);
    ~Fixed();
public:
    Fixed& operator=(const Fixed& new_fixed);
    bool operator>(const Fixed& new_fixed);
    bool operator<(const Fixed& new_fixed);
    bool operator>=(const Fixed& new_fixed);
    bool operator<=(const Fixed& new_fixed);
    bool operator==(const Fixed& new_fixed);
    bool operator!=(const Fixed& new_fixed);
public:
    Fixed& operator+(const Fixed& new_fixed);
    Fixed& operator-(const Fixed& new_fixed);
    Fixed& operator*(const Fixed& new_fixed);
    Fixed& operator/(const Fixed& new_fixed);
public:
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<( std::ostream& out, Fixed const& fixed);

#endif //CPPMODULES_FIXED_HPP
