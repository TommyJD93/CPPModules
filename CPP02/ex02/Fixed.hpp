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
    Fixed& operator=(const Fixed& rhs);
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

public:
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    static const Fixed& max(const Fixed& lhs, const Fixed& rhs);
    static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
    Fixed& max(Fixed& lhs, Fixed& rhs);
    Fixed& min(Fixed& lhs, Fixed& rhs);

public:
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<( std::ostream& out, Fixed const& fixed);

#endif //CPPMODULES_FIXED_HPP
