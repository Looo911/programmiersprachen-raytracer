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

std::ostream& Shape::print(std::ostream& os) const
{
	os 	<< "Color:  " << color_ << "\n"
		<< "Name:   " << name_ << "\n";

	return os;
}

std::ostream& operator <<(std::ostream& os, Shape const& s)
{
	return s.print(os);
}


Color Shape::color() const
{
  return color_;
}
	
std::string Shape::name() const
{
  return name_;
}