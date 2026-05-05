#include "Point.hpp"

//Default
Point::Point() : _x(0), _y(0)
{
}

//Constructor
Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

//Copy constructor
Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
}

//Copy Assignment constructor 
Point &Point::operator=(const Point &copy)
{
    (void)copy;
    return *this;
}

//Destructor
Point::~Point()
{
}
//getter functions
Fixed Point::getX(void) const
{
    return _x;
}

Fixed Point::getY(void) const
{
    return _y;
}
