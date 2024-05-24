#include <iostream>
#include <arrmethods.h>

// раскомментировать строку ниже, чтобы отключить assert()
// #define NDEBUG
#include <cassert> // для assert

bool checkArrRandom(std::vector<int> test_arr) {
	
	arrRandom(test_arr, 0, 0);
	if (test_arr[0] != 0)
		return false;
	arrRandom(test_arr, -1, 1);
	if ((test_arr[0] >= -1) && (test_arr[0] <= 1)) // поменять и на или !!!!!!!!!!!!!!!!!!!!!!!
		return false;

	return true;
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
	arrRandom(arr, 30, -30);
	outputArray(arr);

	return 0;
}