#ifndef CPPMODULES_DATA_HPP
#define CPPMODULES_DATA_HPP
#include <iostream>

class Data {
private:
    int _val;
public:
    Data(void);
    Data(int n);
    ~Data();

    int get_val(void);
};


#endif //CPPMODULES_DATA_HPP
