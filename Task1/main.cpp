#include <iostream>
#include <trianglecalc.h>

// раскомментировать строку ниже, чтобы отключить assert()
// #define NDEBUG
#include <cassert> // для assert

#define _USE_MATH_DEFINES

int main(){

	assert(triangleSideLength(0, 0, 0, 0) < FLT_EPSILON); // Проверка отрезка в нулевых координатах
	assert((triangleSideLength(5, 5, -5, 5) - 10.0) < FLT_EPSILON); // Проверка отрезка в I - II четвертях
	assert((triangleSideLength(7, 9, -11, -13) - 28.42534080710379) < FLT_EPSILON); // Проверка I - III четверти

	assert((trianglePerimeter(10.0, 20.0, 30.0) - 60.0) < FLT_EPSILON);
	assert((trianglePerimeter(10.123456, 20.987987, 30.456654) - 61.568097) < FLT_EPSILON);
	//assert((trianglePerimeter(-16.6665, -16.6665, 66.666) - 33.333) < FLT_EPSILON);

	setlocale(LC_ALL, "Russian");

	int ax, ay, bx, by, cx, cy;
	
	std::cout << "Введите координаты x, y точки A: ";
	std::cin >> ax >> ay;
	std::cout << "Введите координаты x, y точки B: ";
	std::cin >> bx >> by;
	std::cout << "Введите координаты x, y точки C: ";
	std::cin >> cx >> cy;

	std::cout << "Заданы вершины треугольника ABC: ";
	std::cout << "A(" << ax << ", " << ay << "), ";
	std::cout << "B(" << bx << ", " << by << "), ";
	std::cout << "C(" << cx << ", " << cy << ")" << "\n";

	float sideA = triangleSideLength(ax, ay, bx, by);
	float sideB = triangleSideLength(bx, by, cx, cy);
	float sideC = triangleSideLength(cx, cy, ax, ay);

	std::cout << trianglePerimeter(sideA, sideB, sideC) << "\n";
	std::cout << triangleArea(sideA, sideB, sideC);
	return 0;
}