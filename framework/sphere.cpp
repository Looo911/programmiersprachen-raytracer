#include "sphere.hpp"
#include <glm/vec3.hpp>
#include <cmath>
#define _USE_MATH_DEFINES



//Constructors
Sphere::Sphere():
	Shape{},
    m_center{0.0},
    m_radius{1.0f}
    {}

Sphere::Sphere(glm::vec3 const& ctr, float r):
	Shape{},
	m_center{ctr},
	m_radius{r}
	{}

Sphere::Sphere(std::string const& name, Color const& clr, glm::vec3 const& ctr, float r):
	Shape{name, clr},
	m_center{ctr},
	m_radius{r}
	{}



//getter
glm::vec3 const& Sphere::center() const 
	{return m_center;}

float Sphere::radius() const 
	{return m_radius;}


//functions
float Sphere::volume() const
	{
		return 4.0f / 3.0f * (M_PI* m_radius * m_radius * m_radius);
	}

float Sphere::area() const
	{
		return 4.0f* M_PI * m_radius * m_radius;
	}

std::ostream& Sphere::print(std::ostream& os) const
{
	Shape::print(os);
	os << "Radius:  " << m_radius << "\n"
	   << "Center:   ("
	   << m_center.x << ", "
	   << m_center.y << ", "
	   << m_center.z << ")" << "\n";

	return os;
}