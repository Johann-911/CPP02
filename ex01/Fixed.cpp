#include "Fixed.hpp"

//Deafult cons
Fixed::Fixed() : _rawValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//copy cons
Fixed::Fixed(const Fixed &copy) : _rawValue(copy._rawValue)
{
    std::cout << "Copy constructor called" << std::endl;
}

//copy assignment cons
Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &copy)
        _rawValue = copy._rawValue;
    return *this;
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed (const int intValue) : _rawValue(intValue * 256)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float floatValue) : _rawValue(roundf(floatValue * 256))
{
    std::cout << "Float constructor called" << std::endl;
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

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _rawValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _rawValue = raw;
}
