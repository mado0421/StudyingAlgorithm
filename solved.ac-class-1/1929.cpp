#include <iostream>
#include <memory.h>

using namespace std;

// M 이상 N 이하 소수 모두 출력
// 2초, 256MB
// 1 <= M <= N <= 1,000,000

int main() {
	int M, N;
	bool isPrime[1'000'001];
	memset(isPrime, false, sizeof(isPrime));
    isPrime[1] = true;

	
	cin >> M >> N;

	for (int i = 2; i < N; i++) {
		for (int j = 2; i * j <= N; j++) isPrime[i * j] = true;
	}

	for (int i = M; i <= N; i++) if (!isPrime[i]) cout << i << "\n";

	return 0;
}