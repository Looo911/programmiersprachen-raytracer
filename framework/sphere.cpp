#include "sphere.hpp"
#include <glm/vec3.hpp>


//Constructors
Sphere::Sphere():
    m_center{0.0},
    m_radius{1.0f}
    {}


//getter
glm::vec3 const& Sphere::center() const 
	{return m_center;}

float Sphere::radius() const 
	{return m_radius;}

