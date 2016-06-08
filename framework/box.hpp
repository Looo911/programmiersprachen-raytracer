#ifndef BOX_HPP
#define BOX_HPP

#include "shape.hpp"
#include <glm/vec3.hpp>

class Box
{
public:
	 Box();

	 glm::vec3 const& min() const;
	 glm::vec3 const& max() const;


private:
	glm::vec3 m_min;
	glm::vec3 m_max;
};

#endif