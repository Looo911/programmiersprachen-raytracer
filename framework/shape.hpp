#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "color.hpp"

class Shape
{
public:
	//constr./Destr
	Shape();
	Shape(std::string const& name, Color const& clr);
	virtual ~Shape();

	//getter
	Color color() const;
	std::string name() const;

	virtual float area() const = 0;
	virtual float volume() const = 0;

	virtual std::ostream& print(std::ostream& os) const;


private:
	std::string name_;
	Color color_;

};

//dingsoperator
std::ostream& operator <<(std::ostream& os, Shape const& s);


#endif