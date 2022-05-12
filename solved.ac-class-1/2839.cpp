#include <iostream>

int main() {

	int n;

	std::cin >> n;

	/*
	* 5로 나눠서 0이 되는지 확인
	* 안되면 3을 빼보고 다시 5로 나눠지는지 확인
	* 3을 뺐는데 0보다 작아지면 답 없음
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