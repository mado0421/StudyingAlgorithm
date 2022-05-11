#include <iostream>

int main() {
	int result = 0;

	for (int i = 0; i < 5; i++) {
		int n; 
		std::cin >> n;
		result += n * n;
	}

	std::cout << result % 10;

	return 0;
}