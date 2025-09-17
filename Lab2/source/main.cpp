#define GLM_ENABLE_EXPERIMENTAL

#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0;
const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();

int main()
{
	glm::vec3 n(0, 1, 0);
	glm::vec3 p(1, 0, 1);
	glm::vec3 x(-3, 3, 2);
	
	glm::vec3 v = x - p;
	n = glm::normalize(n);

	return 0;
}