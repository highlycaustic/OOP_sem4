#include <iostream>
#include <arrmethods.h>

// раскомментировать строку ниже, чтобы отключить assert()
// #define NDEBUG
#include <cassert> // для assert

bool checkArrRandom(std::vector<int> test_arr) {
	return true; // ДОПИСАТЬ
}

int main() {

	{
		std::vector<int> test_arr(1);
		assert(checkArrRandom(test_arr));
	}

	setlocale(LC_ALL, "Russian");

	int n;

	std::cout << "Введите натуральное число n: ";
	std::cin >> n;

	std::vector<int> arr(n);

	//arrFactorial(arr);
	arrRandom(arr, -60, 10);
	outputArray(arr);

	return 0;
}