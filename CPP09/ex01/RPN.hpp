#ifndef CPPMODULES_RPN_HPP
#define CPPMODULES_RPN_HPP
#include <iostream>
#include <map>
#include <fstream>

class InvalidInputException : public std::exception {
public:
    virtual const char *what() const throw() {
        return ("RPN: InvalidInputException");
    }
};

class RPN {
private:
    std::deque <int>    _nums;
    std::string         _input;
public:
    RPN(void);
    RPN(std::string input);
    ~RPN(void);

    int solve();

};


#endif //CPPMODULES_RPN_HPP
