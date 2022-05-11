#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char str[1'000'001];
	char* pch;
	int i = 0;

	/*
	*	cin >> str; 을 사용하면 공백문자마다 끊어서 입력받게 되어 한 번에 띄어쓰기까지 포함된 문장을 입력받을 수 없다.
	*	cin.getline()을 이용하면 의도한대로 구현할 수 있다.
	*/
	cin.getline(str, 1'000'000);

	pch = strtok(str, " ");
	while (pch != NULL)
	{
		i++;
		pch = strtok(NULL, " ");
	}

	cout << i;




	return 0;
}