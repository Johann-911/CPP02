#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c) 
{
  Fixed bx = b.getX() - a.getX();
  Fixed by = b.getY() - a.getY();
  Fixed cx = c.getX() - a.getX();
  Fixed cy = c.getY() - a.getY();
  return bx * cy - by * cx;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
  Fixed cross1 = area(a, b, point);
  Fixed cross2 = area(b, c, point);
  Fixed cross3 = area(c, a, point);

  if (cross1 == 0 || cross2 == 0 || cross3 == 0)
    return false;

  bool positive1 = cross1 > 0;
  bool positive2 = cross2 > 0;
  bool positive3 = cross3 > 0;

  return (positive1 == positive2) && (positive2 == positive3);
}