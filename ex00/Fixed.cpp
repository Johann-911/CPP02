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
