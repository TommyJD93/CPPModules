#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <cerrno>
# include <limits>
# include <cstring>

class ScalarConverter {
private:
    const char  *_input;

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
    int         _getType(const char *val);


    class ConversionErrorExcpetion : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("ScalarConverter: ConversionErrorException");
        }
    };

    void        _fromInt(const char *input);
    void        _fromChar(const char *input);
    void        _fromFloat(const char *input);
    void        _fromDouble(const char *input);

    bool        _checkLimits(const char *value);

    ScalarConverter(const ScalarConverter &scalarConverter);
    ScalarConverter(void);
public:
    ScalarConverter &operator=(const ScalarConverter &scalarConverter);
    ScalarConverter(const char *val);
    ~ScalarConverter();
    void convert();

    void getIntType(std::ostream &out);
    void getCharType(std::ostream &out);
    void getFloatType(std::ostream &out);
    void getDoubleType(std::ostream &out);

    static const int   intType = 0;
    static const int   charType = 1;
    static const int   floatType = 2;
    static const int   doubleType = 3;
    static const int   nonScalarType = 4;
};
typedef void (ScalarConverter::*convFunction)(const char *);
//std::ostream &operator<<(const std::ostream &out, const ScalarConverter &scalarConverter);

#endif //SCALARCONVERTER_HPP
