#include<iostream>

using namespace std;
int arr[101][101];
long long rst[101][101] = { 0, };

int main()
{
	int n, k;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	rst[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0) continue;
			rst[i + arr[i][j]][j] += rst[i][j];
			rst[i][j + arr[i][j]] += rst[i][j];
		}
	}
	cout << rst[n - 1][n - 1] << endl;
	return 0;
}