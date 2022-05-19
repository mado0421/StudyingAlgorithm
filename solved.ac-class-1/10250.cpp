#include <iostream>

using namespace std;

int main() {

	int T, H, W, N, w, h;

	cin >> T;
	while (T--) {
		cin >> H >> W >> N;
		h = N % H;
		if (!h) h = H;
		w = ((N-1) / H) + 1;
		cout << h * 100 + w << "\n";
	}

	return 0;
}