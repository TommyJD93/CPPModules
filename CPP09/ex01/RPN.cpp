#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string input): _input(input) {}

RPN::~RPN() {}

int RPN::add(int a1, int a2) {
    return (a1 + a2);
}

int RPN::sub(int a1, int a2) {
    return (a1 - a2);
}

int RPN::mul(int a1, int a2) {
    return (a1 * a2);
}

int RPN::div(int a1, int a2) {
    if (a2 == 0)
        throw NumDividedByZeroException();
    return (a1 / a2);
}

int RPN::opSelect(char c) {
    if (c == '+')
        return (0);
    else if (c == '-')
        return (1);
    else if (c == '*')
        return (2);
    else if (c == '/')
        return (3);
    return (-1);
}

int RPN::solve() {
    int i, select;
    opFunctions op[4] = {&RPN::add, &RPN::sub, &RPN::mul, &RPN::div};
    int a1, a2, res;

    i = -1;
    while (_input[++i]) {
        if (std::isspace(_input[i]))
            continue ;
        else if (std::isdigit(_input[i])) {
            _num.push_back(_input[i] - 48);
        } else if ((select = opSelect(_input[i])) >= 0
            && (select = opSelect(_input[i])) <= 4) {
            a1 =_num[0];
            _num.pop_front();
            a2 =_num[0];
            _num.pop_front();
            res = (this->*op[select])(a1, a2);
            _num.push_front(res);
        }
    }
    return (res);
}
