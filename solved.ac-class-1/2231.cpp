#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 2; i < n; i++) {
		int result = i, temp = i;

		while (temp / 10) {
			result += temp % 10;
			temp /= 10;
		}

		result += temp % 10;

		if (n == result) {
			cout << i;
			return 0;
		}
	}

	cout << 0;

	return 0;
}