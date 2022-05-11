#include <iostream>
#include <memory.h>

using namespace std;

int main() {
	bool trig[42];

	memset(trig, false, sizeof(trig));

	for (int i = 0; i < 10; i++) {
		int value;
		cin >> value;
		trig[value % 42] = true;
	}

	int count = 0;

	for (int i = 0; i < 42; i++) 
		if (trig[i]) count++;
	
	cout << count;

	return 0;
}