#include <iostream>
#include <arrfunc.h>

int main() {
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