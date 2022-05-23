#include <iostream>
#include <vector>

using namespace std;


int main() {
	int n, x, y;
	vector<pair<int, int>> v;
	cin >> n;

	while (n--) {
		cin >> x >> y;

		v.push_back(pair<int, int>(x, y));
	}

	for (int i = 0; i < v.size(); i++) {
		int rank = 1;
		for (int j = 0; j < v.size(); j++) {
			if (i == j)continue;
			if (v[i].first < v[j].first && v[i].second < v[j].second) rank++;
		}
		cout << rank << " ";
	}

	return 0;
}