/*
https://wtg-study.tistory.com/17
20분 생각해보다가 보고 참고하였음.
*/
#include <iostream>

using namespace std;

int main() {
	int n, j, count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;

		for (j = 2; j < value; j++)
			if (0 == value % j) break;
		if (j == value) count++;
	}

	cout << count;

	return 0;
}