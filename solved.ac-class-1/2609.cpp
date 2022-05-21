#include <iostream>

//https://chbuljumeok1997.tistory.com/48 ¸¦ Âü°í

using namespace std;

int GetGreatestCommonFactor(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;	// 24 18 -> 6	18 6 -> 0
		a = b;			// a = 18		a = 6
		b = temp;		// b = 6		b = 0
	}
	return a;
}

int GetLowestCommonMultiple(int a, int b, int gcf) {
	return (a * b) / gcf;
}

int main() {
	int a, b, lcm, gcf;

	cin >> a >> b;

	if (a > b) gcf = GetGreatestCommonFactor(a, b);
	else gcf = GetGreatestCommonFactor(b, a);

	lcm = GetLowestCommonMultiple(a, b, gcf);

	cout << gcf << "\n" << lcm;

	return 0;
}