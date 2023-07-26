#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void):
    _input("0"), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
    _newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
    _doubleCheck(false), _charNotDisplayable(false), _isLimitBool(false), _limit("")
{
}

ScalarConverter::ScalarConverter(const char *val):
    _input(val), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
    _newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
    _doubleCheck(false), _charNotDisplayable(false), _isLimitBool(false), _limit("")
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarConverter) {
    *this = scalarConverter;
}

ScalarConverter::~ScalarConverter() {

}

bool    ScalarConverter::checkLimits(const char *value) {
    const std::string cases[4] = {"inf", "+inf", "-inf", "nan"};

    for (int i = 0; i < 4; i++) {
        if (value == cases[i] || value == (cases[i] + "f")) {
            _isLimitBool = true;
            _limit = cases[i];
            if (i == 1)
                _limit = cases[0];
            _floatCheck = true;
            _doubleCheck = true;
            return (true);
        }
    }
    return (false);
}

void ScalarConverter::toInt(const char *input) {
    std::cout << input << std::endl;
    return;
}

void ScalarConverter::toChar(const char *input) {
    std::cout << input << std::endl;
    return;
}

void ScalarConverter::toFloat(const char *input) {
    std::cout << input << std::endl;
    return;
}

void ScalarConverter::toDouble(const char *input) {
    std::cout << input << std::endl;
    return;
}

//std::ostream &operator<<(std::ostream &out, const ScalarConverter &scalarConverter) {
//    out << "char: " << scalarConverter._newCharType << std::endl;
//    out << "int: " << scalarConverter._newIntType << std::endl;
//    out << "float: " << scalarConverter._newFloatType << std::endl;
//    out << "double: " << scalarConverter._newDoubleType << std::endl;
//}


int ScalarConverter::_getType(const char *val) {
    int i = 0;
//    bool intType = true;
//    bool nonNumeric = true;
//    bool floatType = false;

    if (val[0] && val[1] == '\0' && (val[i] < '0' || val[i] > '9')) {
        std::cout << "caga" << std::endl;
        return (ScalarConverter::_newCharType);
    }
    return (ScalarConverter::_newIntType);
}

void ScalarConverter::convert() {
    convFunction convert[4] = {&ScalarConverter::toInt, &ScalarConverter::toChar, &ScalarConverter::toFloat, &ScalarConverter::toDouble};

    checkLimits(this->_input);
    int type = _getType(this->_input);
    std::cout << "type: " << type << std::endl;
    (void)convert[0];
}



