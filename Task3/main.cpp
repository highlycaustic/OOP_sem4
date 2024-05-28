#include "TriangleClass.h"
#include <iostream>
#include <fstream>

void printObj(Triangle* obj) {
	std::cout << "Triangle" << '\n';
	std::cout << "Side A: " << obj->getSideA() << '\n';
	std::cout << "Side B: " << obj->getSideB() << '\n';
	std::cout << "Side C: " << obj->getSideC() << '\n';
	std::cout << "Perimeter: " << obj->getPerimeter() << '\n';
	std::cout << "Area: " << obj->getArea() << '\n';
}

int main() {
	Triangle *tri_obj = new Triangle();
	printObj(tri_obj);
	std::cout << '\n';

	int arr_size = 3;

	Triangle* tri_arr1 = new Triangle[arr_size];
	Triangle* tri_arr2 = new Triangle[arr_size];

	std::cout << "tri_arr1 ref content:" << '\n';
	for (int i = 0; i < arr_size; ++i) {
		printObj(&tri_arr1[i]);
		std::cout << '\n';
	}

	std::ofstream file_obj;
	file_obj.open("1.txt", std::ios::app);

	for (int i = 0; i < arr_size; ++i) {
		tri_arr2[i].setSideA(1.5);
		tri_arr2[i].setSideB(1.5);
		file_obj.write((char*)&tri_arr2[i], sizeof(tri_arr2[i]));
	}
	file_obj.close();

	std::cout << "File 1.txt content:" << '\n';
	std::ifstream file_obj2;
	file_obj2.open("1.txt", std::ios::in);
	for (int i = 0; i < arr_size; ++i) {
		file_obj2.read((char*)&tri_arr1[i], sizeof(tri_arr1[i]));
		printObj(&tri_arr1[i]);
		std::cout << '\n';
	}
	file_obj2.close();
	return 0;

}