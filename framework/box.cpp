#include "box.hpp"
#include <glm/vec3.hpp>


//Constructors
Box::Box():
    m_min{0.0},
    m_max{0.0}
    {}


//getter
glm::vec3 const& Box::min() const 
	{return m_min;}

glm::vec3 const& Box::max() const 
	{return m_max;}
