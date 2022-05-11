#include <iostream>

int Reverse(int value) {
	int result = 0;

	while (value != 0) {
		int temp = value % 10;
		result *= 10;
		result += temp;
		value /= 10;
	}

	return result;
}

int main() {
	int a, b;

	std::cin >> a >> b;

	a = Reverse(a);
	b = Reverse(b);

	if (a > b) std::cout << a;
	else std::cout << b;

	return 0;
}