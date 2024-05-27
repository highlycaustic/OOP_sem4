#include "randminmax.h"
#include <cmath>
#include <iostream>
#include <vector>

namespace vect {

	// Процедура заполнения вектора случайными числами в заданном диапазоне
	void arrRandom(std::vector<int>& arr, int min, int max) {
		for (int i = 0; i < arr.size(); ++i) {
			arr[i] = randMinMax(min, max);
		}
	}

	// Процедура заполнения вектора факториалами
	void arrFactorial(std::vector<int>& arr) {
		for (int i = 0; i < arr.size(); ++i) {
			if (i == 0) {
				arr[i] = 1;
			}
			else if (i == 1) {
				arr[i] = 2;
			}
			else {
				arr[i] = arr[i - 1] * (i + 1);
			}
		}
	}

	// Процедура вывода вектора
	void outputArray(std::vector<int>& arr) {
		std::cout << "Элементы массива: ";
		for (int i = 0; i < arr.size(); ++i) {
			std::cout << arr[i] << " ";
		}
		std::cout << '\n';
	}
}