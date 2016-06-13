#include "shape.hpp"
#include "color.hpp"

Shape::Shape():
    name_{"default"},
    color_{0.0f, 0.0f, 0.0f} 
    {}

Shape::Shape(std::string const& name, Color const& clr):
    name_{name},
    color_{clr} 
    {}

Shape::~Shape()
{
}

Color Shape::color() const
{
  return color_;
}
	
std::string Shape::name() const
{
  return name_;
}