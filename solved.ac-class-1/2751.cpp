/*
시간 초과가 떠서 아래 글을 보고 함
https://4z7l.github.io/2020/09/04/algorithms-boj-2751.html

#include <iostream>

using namespace std;

void QuickSort(int arr[], int start, int end) {
	if (start >= end) return;

	int p = start, l = p + 1, r = end;

	while (l <= r) {
		while (l <= end && arr[l] <= arr[p]) l++;
		while (r > start && arr[r] >= arr[p]) r--;

		if (l > r) swap(arr[r], arr[p]);
		else swap(arr[l], arr[r]);
	}

	QuickSort(arr, start, r - 1);
	QuickSort(arr, r + 1, end);
}

int main() {
	int N;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) cin >> arr[i];

	QuickSort(arr, 0, N - 1);

	for (int i = 0; i < N; i++) cout << arr[i] << "\n";

	delete[] arr;
	return 0;
}
*/

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

void merge(int* arr, int* sortedArr, int begin, int middle, int end) {
    int sortedInd = begin;
    int i = begin;
    int j = middle+1;


    while (i <= middle && j <= end) {
        if (arr[i] < arr[j]) sortedArr[sortedInd] = arr[i++];
        else  sortedArr[sortedInd] = arr[j++];

        sortedInd++;
    }

    //왼쪽이 오른쪽보다 모두 작은 경우
    if (i > middle) {
        while (j <= end) {
            sortedArr[sortedInd++] = arr[j++];
        }
    }
    //오른쪽이 왼쪽보다 모두 작은 경우
    if (j > end) {
        while (i <= middle) {
            sortedArr[sortedInd++] = arr[i++];
        }
    }

    for (int k = begin; k <= end; k++) arr[k] = sortedArr[k];

}

void mergeSort(int* arr, int* sortedArr, int begin, int end) {
    int middle;
    if (begin<end) {
        middle = (begin + end) / 2;
        mergeSort(arr, sortedArr, begin, middle);
        mergeSort(arr, sortedArr, middle + 1, end);
        merge(arr, sortedArr, begin, middle, end);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int* sortedArr = new int[n];
    mergeSort(arr, sortedArr, 0, n-1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}
