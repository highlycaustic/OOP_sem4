#include <iostream>
#include <trianglecalc.h>

int main(){
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