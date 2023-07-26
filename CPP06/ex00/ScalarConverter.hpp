#ifndef CPPMODULES_SCALARCONVERTER_HPP
#define CPPMODULES_SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>
# include <cerrno>
# include <limits>
# include <cstring>

class ScalarConverter {
private:
    char        *_input;

    int         _newIntType;
    char        _newCharType;
    float       _newFloatType;
    double      _newDoubleType;

    bool        _intCheck;
    bool        _floatCheck;
    bool        _charCheck;
    bool        _doubleCheck;

    bool        _charNotDisplayable;
    bool        _outOfRange;
    int			_isLimitBool;
    std::string _limit;

    void        _intConversion(const char *val);
    void        _doubleConversion(const char *val);
    void        _floatConversion(const char *val);
    void        _charConversion(const char *val);

    bool        _isLimit(const char *val);
    bool        _getType(const char *val);

    ScalarConverter();
    ScalarConverter(const ScalarConverter &scalarConverter);
    ScalarConverter &operator=(const ScalarConverter &scalarConverter);

    class ConversionErrorExcpetion : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("ScalarConverter: ConversionErrorException");
        }
    };

    void toInt(const char *input);
    void toChar(const char *input);
    void toFloat(const char *input);
    void toDouble(const char *input);

public:
    ScalarConverter(const char *val);
    ~ScalarConverter();
    void convert();
};
ScalarConverter &operator<<(const ScalarConverter &scalarConverter);

#endif //CPPMODULES_SCALARCONVERTER_HPP
