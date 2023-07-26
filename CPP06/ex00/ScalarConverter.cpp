#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter():
    _input("0"), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
    _newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
    _doubleCheck(false), _isLimitBool(false), _limit(""), _charNotDisplayable(false)
{
}

ScalarConverter::ScalarConverter(const char *val):
    _input(val), _newIntType(0), _newCharType(0), _newFloatType(0.0f),
    _newDoubleType(0.0), _intCheck(false), _floatCheck(false), _charCheck(false),
    _doubleCheck(false), _isLimitBool(false), _limit(""), _charNotDisplayable(false)
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
}

void ScalarConverter::toChar(const char *input) {
}

void ScalarConverter::toFloat(const char *input) {
}

void ScalarConverter::toDouble(const char *input) {
}

std::ostream &operator<<(std::ostream &out, const ScalarConverter &scalarConverter) {
    out << "char: " << scalarConverter._newCharType << std::endl;
    out << "int: " << scalarConverter._newIntType << std::endl;
    out << "float: " << scalarConverter._newFloatType << std::endl;
    out << "double: " << scalarConverter._newDoubleType << std::endl;
}

void ScalarConverter::convert() {
//    ScalarConverter convert[4] = {toInt(), toChar(), toFloat(), toDouble()};

    checkLimits(this->_input);
//    int type = get_type();

    toInt(_input);
    _intCheck = true;
    toChar(_input);
    _charCheck = true;
    toFloat(_input);
    _floatCheck = true;
    toDouble(_input);
    _doubleCheck = true;
}



