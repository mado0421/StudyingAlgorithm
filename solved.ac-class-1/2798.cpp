#include <iostream>

using namespace std;

int main() {
	int N, M, temp, currMax = 0;
	cin >> N >> M;
	int* cards = new int[N];

	for (int i = 0; i < N; i++) cin >> cards[i];

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				temp = cards[i] + cards[j] + cards[k];
				if (temp <= M && temp > currMax) currMax = temp;
			}
		}
	}

	cout << currMax;

	delete[] cards;
	return 0;
}