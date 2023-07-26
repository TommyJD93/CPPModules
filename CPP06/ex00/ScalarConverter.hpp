#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <cerrno>
# include <limits>
# include <cstring>

class ScalarConverter {
private:
    const char        *_input;

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
    int         _isLimitBool;
    std::string _limit;

    void        _intConversion(const char *val);
    void        _doubleConversion(const char *val);
    void        _floatConversion(const char *val);
    void        _charConversion(const char *val);

    bool        _isLimit(const char *val);
    int        _getType(const char *val);


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

    bool checkLimits(const char *value);

public:
    ScalarConverter(void);
    ScalarConverter(const ScalarConverter &scalarConverter);
//    ScalarConverter &operator=(const ScalarConverter &scalarConverter);
    ScalarConverter(const char *val);
    ~ScalarConverter();
    void convert();
};
typedef void (ScalarConverter::*convFunction)(const char *);
//std::ostream &operator<<(const std::ostream &out, const ScalarConverter &scalarConverter);

#endif //SCALARCONVERTER_HPP
