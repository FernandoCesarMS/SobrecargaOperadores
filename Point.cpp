#include <iostream>

#include "Point.h"

std::ostream &operator<<(std::ostream &out, const Point &p){
  out << "(" << p.getX() << ", " << p.getY() << ")";
  return out;
}

std::istream &operator>>(std::istream &in, Point &p){
  in >> p.x;
  in >> p.y;
  return in;
}

Point Point::operator+(const Point &p){
  double _x = this->getX() + p.getX();
  double _y = this->getY() + p.getY();
  return *new Point(_x, _y);
}

Point &Point::operator+=(const Point &p)
{
  this->x += p.getX();
  this->y += p.getY();
  return *this;
}