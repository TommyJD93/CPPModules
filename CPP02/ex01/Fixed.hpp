#ifndef CPPMODULES_FIXED_HPP
#define CPPMODULES_FIXED_HPP
#include <iostream>
using namespace std;

class Fixed {
private:
    int _fixed_point;
    static const int _fractional_bits = 8;
public:
    Fixed();
    Fixed(int n);
    Fixed(float n);
    Fixed(const Fixed& copy_fixed);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    void operator=(const Fixed& new_fixed);
};


#endif //CPPMODULES_FIXED_HPP
