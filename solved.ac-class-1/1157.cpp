#include <iostream>
#include <memory.h>

int main() {
	int frequency[26];
	char str[1'000'001];

	memset(frequency, 0, sizeof(frequency));

	std::cin >> str;

	// check frequency
	for (int i = 0; '\0' != str[i]; i++) {
		if (islower(str[i])) frequency[str[i] - 97]++;
		else frequency[str[i] - 65]++;
	}

	// find highest frequency
	int highestValue = -1;
	for (int i = 0; i < 26; i++) 
		if (highestValue < frequency[i]) highestValue = frequency[i];
	
	// find highest idx, if idx is multiple, 
	int highestIdx = 0;
	int overlapCount = 0;
	for (int i = 0; i < 26; i++)
		if (frequency[i] == highestValue) { highestIdx = i; overlapCount++; }

	if (1 < overlapCount) std::cout << "?";
	else std::cout << static_cast<char>(highestIdx + 65);

	return 0;
}