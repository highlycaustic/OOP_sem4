#include "arrmethods.h"
#include "vectmethods.h"
#include <iostream>

// раскомментировать строку ниже, чтобы отключить assert()
// #define NDEBUG
#include <cassert> // для assert

bool checkArrRandom(std::vector<int> test_arr) { // Вектор test_arr копируется в функцию
	
	using namespace vect;

	arrRandom(test_arr, 0, 0); // Заполнение вектора test_arr одним элементом со значением 0
	if (test_arr[0] != 0) // Проверка, равен ли элемент 0
		return false;

	arrRandom(test_arr, -1, 1); // Заполнение вектора test_arr одним элементом со случайным значением от -1 до 1
	if ((test_arr[0] < -1) || (test_arr[0] > 1)) // Проверка, входит ли элемент в диапазон [-1;1]
		return false;

	test_arr.resize(5); // Расширение вектора test_arr до 5 элементов
	arrRandom(test_arr, -5, 5); // Заполнение вектора test_arr 5 элементами со случайным значением от -5 до 5
	for (int i = 0; i < test_arr.size(); ++i) {
		if ((test_arr[0] < -5) || (test_arr[0] > 5)) // Проверка, входят ли все элементы в диапазон [-5;5]
			return false;
	}

	return true;

}

bool checkArrFactorial(std::vector<int> test_arr) { // ДОДЕЛАТЬ!!!!!

	//test_arr.resize(5);
	//arrFactorial(test_arr);

	return true;
}

void arrExec() {
	
	using namespace dynarr;

	int n;
	int min;
	int max;

	std::cout << "Введите натуральное число n: ";
	std::cin >> n;
	std::cout << "Введите нижний предел генерации случайных чисел: ";
	std::cin >> min;
	std::cout << "Введите верхний предел генерации случайных чисел: ";
	std::cin >> max;

	int* rand_arr = new int[n];
	int* fact_arr = new int[n];

	arrRandom(rand_arr, n, min, max);
	std::cout << "Массив случайных чисел. ";
	outputArray(rand_arr, n);

	arrFactorial(fact_arr, n);
	std::cout << "Массив факториалов. ";
	outputArray(fact_arr, n);

}

void vectExec() {

	using namespace vect;

	int n;
	int min;
	int max;

	std::cout << "Введите натуральное число n: ";
	std::cin >> n;
	std::cout << "Введите нижний предел генерации случайных чисел: ";
	std::cin >> min;
	std::cout << "Введите верхний предел генерации случайных чисел: ";
	std::cin >> max;

	std::vector<int> rand_vect(n);
	std::vector<int> fact_vect(n);

	arrRandom(rand_vect, min, max);
	std::cout << "Массив случайных чисел. ";
	outputArray(rand_vect);

	arrFactorial(fact_vect);
	std::cout << "Массив факториалов. ";
	outputArray(fact_vect);

}

int main() {

	{
		std::vector<int> test_arr(1);
		assert(checkArrRandom(test_arr));
	}

	setlocale(LC_ALL, "Russian");

	std::cout << "Выберите режим работы:" << '\n';
	std::cout << "1. Динамические массивы." << '\n';
	std::cout << "2. Векторы." << '\n';
	std::cout << "0. Выход." << '\n';

	int input;
	std::cin >> input;
	switch (input) {
	case 1:
		system("cls");
		arrExec();
		break;
	case 2:
		system("cls");
		vectExec();
		break;
	case 0:
		exit(1);
	}

	return 0;

}