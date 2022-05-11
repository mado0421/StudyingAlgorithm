#include <iostream>

using namespace std;

void PrintRepeatly(int n, char c) {
	for (int i = 0; i < n; i++) cout << c;
}

int main() {
	int nTestCase;

	cin >> nTestCase;

	for (int i = 0; i < nTestCase; i++) {
		int repeat;
		char str[21];
		cin >> repeat >> str;
		
		for (int j = 0; '\0' != str[j]; j++) {
			PrintRepeatly(repeat, str[j]);
		}
		cout << "\n";
	}

	return 0;
}