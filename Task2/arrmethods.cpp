#include <cmath>
#include <iostream>
#include <random>

// Процедура заполнения массива случайными числами в заданном диапазоне
void arrRandom(std::vector<int>& arr, int a, int b) {
	std::random_device rd; // Случайное число, предоставляемое железным ГСЧ
	std::mt19937 gen(rd()); // Полученное выше число используется в качестве сида для вихря Мерсенна
	std::uniform_int_distribution<> distr(a, b); // Распределение случайных чисел с ограничением от a до b включительно

	for (int i = 0; i < arr.capacity(); ++i) {
		arr[i] = distr(gen);
	}
}

// Процедура заполнения массива факториалами
void arrFactorial(std::vector<int>& arr) {
	for (int i = 0; i < arr.capacity(); ++i) {
		arr[i] = std::tgamma(i + 2); // Используется Гамма-функция, которая при i + 1 равна факториалу, и единица сверху для соответсвия индекса в массиве условию задачи
	}
}

// Процедура вывода массива
void outputArray(std::vector<int>& arr) {
	std::cout << "Элементы массива: ";
	for (int i = 0; i < arr.capacity(); ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
}