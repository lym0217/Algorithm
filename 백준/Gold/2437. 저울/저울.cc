#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n, arr[1001];
	long long max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	if(arr[0] != 1) {
		cout << 1 << endl;
		return 0;
	}
	else {
		max = 1;
		for (int i = 1; i < n; i++) {
			if (max+1 < arr[i]) break;
			max += arr[i];
		}
		cout << max + 1 << endl;
	}
	return 0;
}