#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <box.hpp>
#include <sphere.hpp> 
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

TEST_CASE("test box volume", "[function]")
{
	Box a{{2.0f, 3.0f, 4.0f}, {4.0f, 6.0f, 8.0f}};
	REQUIRE (a.volume() == 24.0f);
}

TEST_CASE("test box area", "[function]")
{
	Box a{{2.0f, 3.0f, 4.0f}, {4.0f, 6.0f, 8.0f}};
	REQUIRE (a.area() == 52.0f);
}


TEST_CASE("test sphere volume", "[function]")
{
	Sphere a{{2.0f, 3.0f, 4.0f}, 3.0f};
	REQUIRE (a.volume() ==  Approx(113.097335529));
}

TEST_CASE("test sphere area", "[function]")
{
	Sphere a{{2.0f, 3.0f, 4.0f}, {3.0f}};
	REQUIRE (a.area() ==  Approx(113.097335529));
}

TEST_CASE("Sphere with name and colorful color", "[constructor]")
{
	Sphere a{"KEINE KUGEL", {1.0f, 1.0f, 1.0f},
	 {2.0f, 3.0f, 4.0f} , {3.0f}};
	REQUIRE (a.name() ==  ("KEINE KUGEL"));
	REQUIRE (a.color() ==  Color (1.0f, 1.0f, 1.0f));
	std::cout << a << "\n";

}

TEST_CASE("Not a Sphere with name and colorful color + cout", "[constructor]")
{
	Box a{"WIRKLICH KEINE KUGEL", {1.0f, 1.0f, 1.0f},
	 {2.0f, 3.0f, 4.0f}, {4.0f, 6.0f, 8.0f}};
	REQUIRE (a.name() ==  ("WIRKLICH KEINE KUGEL"));
	REQUIRE (a.color() ==  Color (1.0f, 1.0f, 1.0f));
	std::cout << a << "\n";

}


TEST_CASE("intersectRaySphere","[intersect]")
{
	//Ray
	glm::vec3 ray_origin{0.0,0.0,0.0};
	//raydirectionhastobenormalized!
	//youcanuse:
	//v = glm::normalize(some_vector)
	glm::vec3 ray_direction{0.0,0.0,1.0};
	//Sphere
	glm::vec3 sphere_center{0.0,0.0,5.0};
	float sphere_radius{1.0};
	float distance{0.0};
	auto result=glm::intersectRaySphere(ray_origin,
		ray_direction, sphere_center,sphere_radius * sphere_radius,
		distance);
	REQUIRE(distance==Approx(4.0f));
}





int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
