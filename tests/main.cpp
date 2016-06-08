#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <box.hpp>
#include <sphere.hpp> 

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
	REQUIRE (a.volume() ==  Approx(113.1f));
}
/*
TEST_CASE("test sphere area", "[function]")
{
	Sphere a{{2.0f, 3.0f, 4.0f}, {3.0f}};
	REQUIRE (a.area() ==  113.1f);
}
*/



int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
