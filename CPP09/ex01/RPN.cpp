#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string input): _input(input) {}

RPN::~RPN() {}

int RPN::opSelect(char c) {
    if (c == '+')
        return (0);
    else if (c == '-')
        return (1);
    else if (c == '-')
        return (2);
    else if (c == '-')
        return (3);
    return (-1);
}

int RPN::solve() {
    int i, select;
//    opFunctions op[4] = {&RPN::add, &RPN::sub, &RPN::mul, &RPN::div};
//    int a1, a2;
    std::cout << "solve: add (0), sub(1), mult(2), div(3)" << std::endl;
    i = -1;
    while (_input[++i]) {
        if (std::isspace(_input[i]))
            continue ;
        else if (std::isdigit(_input[i])) {
            _num.push_back(_input[i] - 48);
            std::cout << "pushed: " << _input[i] - 48 << " into stack" << std::endl;
        }else if ((select = opSelect(_input[i])) >= 0
            && (select = opSelect(_input[i])) <= 4) {
            std::cout << "solve: op found, select val: " << select << std::endl;
        }
    }
    return (1);
}
