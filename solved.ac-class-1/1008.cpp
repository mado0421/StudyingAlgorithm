#include <iostream>

int main() {
	int a, b;

	std::cin >> a >> b;

	std::cout.precision(10);
	std::cout << static_cast<double>(a) / static_cast<double>(b);
	
	return 0;
}