#include "Fixed.hpp"

//Deafult cons
Fixed::Fixed() : _rawValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

//copy cons
Fixed::Fixed(const Fixed &copy) : _rawValue(copy._rawValue)
{
    // std::cout << "Copy constructor called" << std::endl;
}

//copy assignment cons
Fixed &Fixed::operator=(const Fixed &copy)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &copy)
        _rawValue = copy._rawValue;
    return *this;
}

//destructor
Fixed::~Fixed()
{
    // std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed (const int intValue) : _rawValue(intValue * 256)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float floatValue) : _rawValue(roundf(floatValue * 256))
{
    // std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (_rawValue / 256.0f);
}

int Fixed::toInt(void) const
{
    return (_rawValue / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

//operator 
//pre inc
Fixed &Fixed::operator++()
{
    _rawValue += 1;
    return *this;
}
//post inc
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    _rawValue += 1;
    return temp;
} 
//pre decr
Fixed &Fixed::operator--()
{
    _rawValue -= 1;
    return *this;
}
//post decr
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    _rawValue -= 1;
    return temp;
}

//bools
bool Fixed::operator>(const Fixed &other) const
{
    return _rawValue > other._rawValue;
}

bool Fixed::operator<(const Fixed &other) const
{
    return _rawValue < other._rawValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return _rawValue >= other._rawValue;
}

bool Fixed::operator<=(const Fixed &other) const 
{
    return _rawValue <= other._rawValue;
}

bool Fixed::operator==(const Fixed &other) const
{
    return _rawValue == other._rawValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return _rawValue != other._rawValue;
}

Fixed Fixed::operator+(const Fixed &other)const
{
    Fixed res;
    res.setRawBits(_rawValue + other._rawValue);
    return res;
}

Fixed Fixed::operator-(const Fixed &other) const 
{
    Fixed res;
    res.setRawBits(_rawValue - other._rawValue);
    return res;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed res;
    res.setRawBits((_rawValue * other._rawValue) / 256);
    return res;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed res;
    res.setRawBits((_rawValue / other._rawValue) * 256);
    return res;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{   
    if(a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _rawValue;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    _rawValue = raw;
}
