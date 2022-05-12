/*
	문제가 틀리면 cout << "\n";을 붙여보도록 하자.
*/
#include <iostream>
#include <memory.h>

using namespace std;

enum class Commend {
	PUSH,
	POP,
	SIZE,
	EMPTY,
	TOP
};

Commend SortOut(const char* str) {
	if (0 == strcmp(str, "push")) return Commend::PUSH;
	else if (0 == strcmp(str, "pop")) return Commend::POP;
	else if (0 == strcmp(str, "size")) return Commend::SIZE;
	else if (0 == strcmp(str, "empty")) return Commend::EMPTY;
	else return Commend::TOP;
}

int main() {
	int nCommend, idx = 0;
	int stack[10'000];
	char str[6];
	memset(stack, 0, sizeof(stack));

	cin >> nCommend;
	
	while (nCommend--) {
		cin >> str;

		switch (SortOut(str))
		{
		case Commend::PUSH: 
			cin >> stack[idx++];	
			break;
		case Commend::POP:  
			if (idx)	cout << stack[idx-- - 1] << "\n";
			else		cout << -1 << "\n";
			break;
		case Commend::SIZE: 
			cout << idx << "\n";
			break;
		case Commend::EMPTY: 
			if (idx)	cout << 0<< "\n"; 
			else		cout << 1<< "\n"; 
			break;
		case Commend::TOP: 
			if (idx) cout << stack[idx-1] << "\n";
			else cout << -1 << "\n";
			break;
		}
	}

	return 0;
}