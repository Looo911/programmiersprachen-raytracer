#include "box.hpp"
#include <glm/vec3.hpp>
#include <cmath>


//Constructors
Box::Box() :
    Shape{},
    m_min{0.0},
    m_max{0.0}
    {}

Box::Box(glm::vec3 const& min, glm::vec3 const& max) :
	Shape{},
	m_min{min},
	m_max{max}
	{}

Box::Box(std::string const& name, Material const& mtrl, glm::vec3 const& min, glm::vec3 const& max )
    : Shape{name, mtrl},
    m_min{min},
	m_max{max}
	{}

//getter
glm::vec3 const& Box::min() const 
	{return m_min;}

glm::vec3 const& Box::max() const 
	{return m_max;}


//functions
float Box::volume() const
	{
		auto diff = m_max - m_min;
		return diff.x * diff.y * diff.z;
	}

float Box::area() const
{ 	
	auto diff = m_max - m_min;

	return 2*(diff.y*diff.z + diff.x*diff.z + diff.x*diff.y); 
}
/*
bool Box::intersect(box b, ray r) {
    double tmin = -INFINITY, tmax = INFINITY;
 
    for (int i = 0; i < 3; ++i) {
        double t1 = (b.min.x - origin.x)*r.dir_inv[i];
        double t2 = (b.max[i] - r.origin[i])*r.dir_inv[i];
 
        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }

    for (int i = 0; i < 3; ++i) {
        double t1 = (b.min[i] - r.origin[i])*r.dir_inv[i];
        double t2 = (b.max[i] - r.origin[i])*r.dir_inv[i];
 
        tmin = max(tmin, min(t1, t2));
        tmax = min(tmax, max(t1, t2));
    }
 
    return tmax > max(tmin, 0.0);
}
*/

std::ostream& Box::print(std::ostream& os) const
{
	Shape::print(os);
	os << "Min:   ("
	   << m_min.x << ", "
	   << m_min.y << ", "
	   << m_min.z << ")" << "\n" 
	   << "Max:   ("
	   << m_max.x << ", "
	   << m_max.y << ", "
	   << m_max.z << ")" << "\n";

	return os;
}