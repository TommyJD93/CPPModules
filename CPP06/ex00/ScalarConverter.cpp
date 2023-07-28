#include "ScalarConverter.hpp"
/**
 * Constructors
 */
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

/**
 * Print utils for Operator<<
 */
void ScalarConverter::printIntType(std::ostream &out) {
    if (!_intCheck) {
        out << "impossible conversion";
        return ;
    }
    out << this->_newIntType;
}

void ScalarConverter::printCharType(std::ostream &out) {
    if (!_charCheck) {
        out << "impossible conversion";
        return ;
    }
    out << this->_newCharType;
}

void ScalarConverter::printFloatType(std::ostream &out) {
    if (!_floatCheck) {
        out << "impossible conversion";
        return ;
    }
    out << this->_newFloatType;
}

void ScalarConverter::printDoubleType(std::ostream &out) {
    if (!_doubleCheck) {
        out << "impossible conversion";
        return ;
    }
    out << this->_newDoubleType;

}

/**
 * Operators
 */
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarConverter) {
    (void)scalarConverter;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const ScalarConverter &scalarConverter) {
    out << "[debug] warning silence" << scalarConverter.intType << std::endl;
    return (out);
}

/**
 * Conversion utils functions
 */
bool    ScalarConverter::_checkLimits(const char *value) {
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

int ScalarConverter::_getType(const char *val) {
    int i = 0;
    bool intType = true;
    bool nonNumeric = true;
    bool floatType = false;

    if (val[0] && val[1] == '\0' && (val[i] < '0' || val[i] > '9'))
        return (ScalarConverter::charType);
    if (val[i] == '-' || val[i] == '+')
        i++;
    while (val[i] && (val[i] >= '0' && val[i] <= '9')) {
        i++;
        nonNumeric = false;
    }
    if (val[i] == '.') {
        i++;
        intType = false;
        while (val[i] && (val[i] >= '0' && val[i] <= '9')) {
            i++;
            nonNumeric = false;
        }
    }
    if (val[i] == 'f') {
        i++;
        floatType = true;
    }
    if (val[i] || nonNumeric || (intType && floatType))
        return (ScalarConverter::nonScalarType);
    if (floatType)
        return (ScalarConverter::floatType);
    if (intType)
        return (ScalarConverter::intType);
    return (ScalarConverter::doubleType);
}

/**
 * Conversion functions
 */
void ScalarConverter::_fromInt(const char *input) {

    if ((strlen(input) == 10 && !strcmp(input, "2147483647"))
        || (strlen(input) == 11 && !strcmp(input, "-2147483648"))
        || (strlen(input) == 11 && !strcmp(input, "+2147483647"))) {
        _outOfRange = true;
        return;
    }
    _newIntType = atoi(input);
    _intCheck = true;

    /*char checks*/
    _charCheck = true;
    _newFloatType = static_cast<float>(_newIntType);
    _floatCheck = true;
    _newDoubleType = static_cast<float>(_newIntType);
    _doubleCheck = true;
}

void ScalarConverter::_fromChar(const char *input) {
    _newCharType = input[0];
    _charCheck = true;
    _newIntType = static_cast<int>(_newCharType);
    _intCheck = true;
    _newFloatType = static_cast<float>(_newCharType);
    _floatCheck = true;
    _newDoubleType = static_cast<double>(_newCharType);
    _doubleCheck = true;
}

void ScalarConverter::_fromFloat(const char *input) {
    if (!input[0])
        return;
    /*int conv*/
    _intCheck = true;
    /*char conv*/
    _charCheck = true;
    /*float conv*/
    _floatCheck = true;
    /*double conv*/
    _doubleCheck = true;
}

void ScalarConverter::_fromDouble(const char *input) {
    if (!input[0])
        return;
    /*int conv*/
    _intCheck = true;
    /*char conv*/
    _charCheck = true;
    /*float conv*/
    _floatCheck = true;
    /*double conv*/
    _doubleCheck = true;
}

void ScalarConverter::convert() {
    convFunction convert[4] = {&ScalarConverter::_fromChar, &ScalarConverter::_fromInt, &ScalarConverter::_fromFloat, &ScalarConverter::_fromDouble};

    _checkLimits(this->_input);
    int type = _getType(this->_input);
    try {
        if (type == ScalarConverter::nonScalarType)
            throw ConversionErrorExcpetion();
    } catch (const std::exception &exception) {
        std::cout << exception.what() << std::endl;
        exit(0);
    }
    std::cout << "[debug] type: " << type << std::endl;
    (this->*convert[type])(_input);
}



