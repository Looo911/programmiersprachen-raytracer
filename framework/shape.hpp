#ifndef SHAPE_HPP
#define SHAPE_HPP
#include "material.hpp"
#include <ostream>

class Shape
{
public:
	//constr./Destr
	Shape();
	Shape(std::string const& name, Material const& mtrl);
	virtual ~Shape();

	//getter
	Material const& material() const;
	std::string const& name() const;

	virtual float area() const = 0;
	virtual float volume() const = 0;

	virtual std::ostream& print(std::ostream& os) const;


private:
	std::string name_;
	Material material_;

};

//dingsoperator
std::ostream& operator <<(std::ostream& os, Shape const& s);


#endif