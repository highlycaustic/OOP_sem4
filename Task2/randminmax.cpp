#include <random>

int randMinMax(int min, int max) {
	static std::random_device rd; // Случайное число, предоставляемое железным ГСЧ
	static std::mt19937 gen(rd()); // Полученное выше число используется в качестве сида для вихря Мерсенна
	std::uniform_int_distribution<> distr(min, max); // Распределение случайных чисел с ограничением от a до b включительно
	return distr(gen);
}