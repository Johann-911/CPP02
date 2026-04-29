#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;

    std::cout << a.getRawBits();
    std::cout << b.getRawBits();
    std::cout << c.getRawBits();
    return 0;  
}