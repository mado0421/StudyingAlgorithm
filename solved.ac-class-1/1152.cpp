#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char str[1'000'001];
	char* pch;
	int i = 0;

	/*
	*	cin >> str; �� ����ϸ� ���鹮�ڸ��� ��� �Է¹ް� �Ǿ� �� ���� ������� ���Ե� ������ �Է¹��� �� ����.
	*	cin.getline()�� �̿��ϸ� �ǵ��Ѵ�� ������ �� �ִ�.
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