#include <iostream>
#include <cmath>

int main() {
	int A, B, V;

	std::cin >> A >> B >> V;

	long double a = static_cast<long double>(V - A);	// float�� �ϸ� �ڷ��� ��Ȯ���� �������� Ʋ�� ���� ���´�.
	long double b = static_cast<long double>(A - B);
	long double c = std::ceil(a / b);
	int d = static_cast<int>(c);
	d++;

	std::cout << d;

	return 0;
}