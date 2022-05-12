#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	if (1 == n) { cout << 1; return 0; }
	n -= 1;
	for (int i = 1; n > 0; i++) {
		if (0 < n - 6 * i) n -= 6 * i;
		else { cout << ++i; return 0; }
	}

	return 0;
}