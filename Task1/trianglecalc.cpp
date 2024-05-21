#include <cmath>

float triangleSideLength(int x1, int y1, int x2, int y2) {
	return std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
}

float trianglePerimeter(float sideA, float sideB, float sideC) {
	return sideA + sideB + sideC;
}

float triangleArea(float sideA, float sideB, float sideC) {
	float halfPerimeter = trianglePerimeter(sideA, sideB, sideC) / 2;
	return std::sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));
}
