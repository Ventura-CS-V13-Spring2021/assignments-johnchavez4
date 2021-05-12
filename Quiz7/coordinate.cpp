#include "coordinate.hpp"
#include <iostream>

Coordinate::Coordinate(): x(0.0), y(0.0)
{
}

Coordinate::Coordinate(double xval, double yval): x(xval), y(yval)
{
}

int Coordinate::getX() const
{
  return x;
}

int Coordinate::getY() const
{
  return y;
}

void Coordinate::setXY(double xval, double yval)
{
  x = xval;
  y = yval;
}

void Coordinate::printXY() const
{
  std::cout << "Left-bottom coordinates: " << x << ", " << y << 
  "\nRight-top: " << x << ", " << y << std::endl;
}