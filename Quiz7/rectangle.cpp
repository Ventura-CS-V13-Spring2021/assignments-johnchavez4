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

double Rectangle::getArea()
{
  return area;
}

Coordinate Rectangle::getCenter()
{
  return center;
}

void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
  lb = lbval;
  rt = rtval;
}

void Rectangle::printRectangle() const
{
  std::cout << "Left-bottom coordinates: " << lb.getX() << ", " << lb.getY() << "\nCenter: "
  << lb.getX() + ((rt.getX() - lb.getX())/2) << ", " << lb.getY() + ((rt.getY() - lb.getY())/2)
  << "\nRight-top: " << rt.getX() << ", " << rt.getY() << "\nArea: "
  << (rt.getX() - lb.getX()) * (rt.getY() - lb.getY()) << "\n" << std::endl;
}