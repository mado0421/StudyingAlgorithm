#include <iostream>

int main() {
	int prev = 0;
	bool ascending = true, descending = true;

	for (int i = 0; i < 8; i++) {
		int n;
		std::cin >> n;

		if (0 == i) {
			if (1 != n) ascending = false;
			if (8 != n) descending = false;
			if (!ascending && !descending) { std::cout << "mixed"; return 0; }
			prev = n;
			continue;
		}

		if (-1 != (prev - n)) ascending = false;
		if ( 1 != (prev - n)) descending = false;

		prev = n;
	}

	if (ascending) std::cout << "ascending";
	else if (descending) std::cout << "descending";
	else std::cout << "mixed";

	return 0;
}