#ifndef CPPMODULES_HARL_HPP
#define CPPMODULES_HARL_HPP
#include <iostream>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*msg_type[4])(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif //CPPMODULES_HARL_HPP
