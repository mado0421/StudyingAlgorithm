#include <iostream>
#include <stack>

using namespace std;

int main() {
	int nData, idx;

	cin >> nData;

	while (nData--) {
		char str[51];
		stack<int> s;

		idx = 0;
		cin >> str;

		while ('\0' != str[idx]) {
			if ('(' == str[idx])		s.push(0);
			else if (')' == str[idx]) {
				if (s.empty()) {
					goto NO;
					break;
				}
				s.pop();
			}
			idx++;
		}

		if (s.empty()) { cout << "YES\n"; continue; }
	NO:
		cout << "NO\n";
	}

	return 0;
}