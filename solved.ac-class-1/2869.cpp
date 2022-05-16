#include <iostream>
#include <cmath>

int main() {
	int A, B, V;

	std::cin >> A >> B >> V;

	long double a = static_cast<long double>(V - A);	// float로 하면 자료형 정확도가 떨어져서 틀린 값이 나온다.
	long double b = static_cast<long double>(A - B);
	long double c = std::ceil(a / b);
	int d = static_cast<int>(c);
	d++;

	std::cout << d;

	return 0;
}