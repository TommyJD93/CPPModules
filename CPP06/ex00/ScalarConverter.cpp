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

void ScalarConverter::convert() {
    checkLimits(this->_input);

}



