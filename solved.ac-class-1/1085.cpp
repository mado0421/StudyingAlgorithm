#include <iostream>

using namespace std;

/*
1 �� w, h �� 1,000
1 �� x �� w-1
1 �� y �� h-1
x, y, w, h�� ����

(x, y)�� ������ ���簢�� �ȿ� ����
*/

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int min = 1000;
	if (w - x < x) min = w - x;
	else min = x;

	if (h - y < min) min = h - y;
	if (y < min) min = y;

	cout << min;

	return 0;
}