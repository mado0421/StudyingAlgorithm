#include <iostream>

int main() {

	int n;

	std::cin >> n;

	/*
	* 5�� ������ 0�� �Ǵ��� Ȯ��
	* �ȵǸ� 3�� ������ �ٽ� 5�� ���������� Ȯ��
	* 3�� ���µ� 0���� �۾����� �� ����
	*/
	int count = 0;
	while (0 < n) {
		if (0 == n % 5) {
			count += n / 5;
			break;
		}
		else {
			n -= 3;
			count++;
			if (0 > n) { std::cout << -1; return 0; }
		}

	}

	std::cout << count;

	return 0;
}