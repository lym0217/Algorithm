#include<iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, n;
	long* arr = new long[1000001];
	for (int j = 1; j <= 1000000; j++) arr[j] = 1;
	for (int j = 2; j <= 1000000; j++) {
		for (int k = 1; k * j <= 1000000; k++) {
			arr[k * j] += j;
		}
		arr[j] += arr[j - 1];
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << arr[n] << "\n";
	}
	delete[] arr;
	return 0;
}