#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point inside(5, 5);
    Point vertex(0, 0);
    Point edge(5, 0);
    Point outside(15, 15);

    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "vertex: " << bsp(a, b, c, vertex) << std::endl;
    std::cout << "egde: " << bsp(a, b, c, edge) << std::endl;
    std::cout << "outside" << bsp(a, b, c, outside) << std::endl;

    return 0;
}