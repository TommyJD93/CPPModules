#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string input): _input(input) {}

RPN::~RPN() {}

int RPN::solve() {
    int i;

    i = -1
    while (_input[++i]) {
        if (std::isspace(_input[i]))
            continue ;
        if (std::isdigit(_input[i]))
            _nums.push_front(atoi(_input[i]));
    }
}
