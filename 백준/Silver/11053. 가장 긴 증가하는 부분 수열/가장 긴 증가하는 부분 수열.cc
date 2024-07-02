#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n, max, arr[1001], len[1001];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		len[i] = 1;
		max = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (max < len[j]) max = len[j];
			}
		}
		if (i != 0) len[i] = max + 1;
	}
	int max_len = 0;
	for (int i = 0; i < n; i++) {
		if (max_len < len[i]) max_len = len[i];
	}
	cout << max_len << endl;
	return 0;
}