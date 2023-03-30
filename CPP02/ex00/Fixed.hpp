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
    Fixed(const Fixed& copy_fixed);
    ~Fixed();
	Fixed& operator=(const Fixed& new_fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);

};


#endif //CPPMODULES_FIXED_HPP
