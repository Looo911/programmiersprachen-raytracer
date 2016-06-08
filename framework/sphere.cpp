#include "sphere.hpp"
#include <glm/vec3.hpp>
#include <cmath>


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


//
float Sphere::volume() const
	{
		return 4.0f / 3.0f * (M_PI* m_radius * m_radius * m_radius);
	}