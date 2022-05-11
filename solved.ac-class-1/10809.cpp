#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char word[101];
	int appearance[26];

	memset(appearance, -1, sizeof(appearance));

	cin >> word;

	for (int i = 0; word[i] != '\0'; i++) 
		if(-1 == appearance[word[i] - 97]) appearance[word[i] - 97] = i;

	for (int i = 0; i < 26; i++) 
		cout << appearance[i] << " ";

	return 0;
}