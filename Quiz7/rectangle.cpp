#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>

Rectangle::Rectangle(): lb(), rt(), center(), area(0.0)
{
}

Rectangle::Rectangle(Coordinate lbval, Coordinate rtval): lb(lbval), rt(rtval)
{
}

Coordinate Rectangle::getLB() const
{
  return lb;
}

Coordinate Rectangle::getRT() const
{
  return rt;
}