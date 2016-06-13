#ifndef BOX_HPP
#define BOX_HPP

#include "shape.hpp"
#include <glm/vec3.hpp>

class Box : public Shape
{
public:
	//constructors
	 Box();
	 Box(std::string const& name, Color const& clr, glm::vec3 const& min, glm::vec3 const& max );
	 Box(glm::vec3 const& min, glm::vec3 const& max);

	 //getter
	 glm::vec3 const& min() const;
	 glm::vec3 const& max() const;

	 //functions
	 float volume() const override;
	 float area() const override;


private:
	glm::vec3 m_min;
	glm::vec3 m_max;
};

#endif