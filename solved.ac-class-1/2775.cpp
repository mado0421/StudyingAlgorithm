#include <iostream>

using namespace std;

// a�� bȣ -> (a-1)���� 1~bȣ�� ��
// k���� nȣ
// 0��, 1ȣ���� ����
// 0���� iȣ���� i��
// 
// 01(1) 02(2) 03(3) 04(4)
// 11(1) 12(3) 13(6) 14(10)
// 21(1) 22(4) 23(10)24(20)
// 31(1) 32(5) 33(15)34(35)
// 
// 33: 21 + 22 + 23 == 11 + (11+12) + (11+12+13) == 01 + (01+01+02) + (01+01+02+01+02+03)
// 
//

int GetLower(int k, int n) {
	int result = 0;

	if (k == 0) return n;

	for (int i = 1; i <= n; i++) {
		result += GetLower(k - 1, i);
	}

	return result;
}

int main() {
	int T, k, n;
	
	cin >> T;

	while (T--) {
		cin >> k >> n;

		cout << GetLower(k, n) << "\n";
	}

	return 0;
}