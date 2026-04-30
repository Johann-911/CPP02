#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


class Fixed 
{
    private:
        int _rawValue;
        static const int _fractionalBits = 8;    
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed  &copy);
        ~Fixed();
        
        Fixed(const int intValue);
        Fixed(const float floatValue);
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void)const;
        void setRawBits(int const raw);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);



#endif 