/*
https://wtg-study.tistory.com/17
20�� �����غ��ٰ� ���� �����Ͽ���.
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