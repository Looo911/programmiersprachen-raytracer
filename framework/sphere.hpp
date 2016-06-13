#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"
#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

class Sphere : public Shape
{
public:
	//constructors
	 Sphere();
	 Sphere(glm::vec3 const& ctr, float r);
	 Sphere(std::string const& name, Color const& clr, glm::vec3 const& ctr, float r);

	 //getter
	 glm::vec3 const& center() const;
	 float radius() const;

	 //functions
	 float volume() const override;
	 float area() const override;

	 std::ostream& print(std::ostream& os) const override;

	 bool intersect(glm::vec3 const& orig,
   			glm::vec3 const& dir, float& dist) const;


private:
	float m_radius;
	glm::vec3 m_center;
};

#endif