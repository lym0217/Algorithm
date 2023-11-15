#include<stdio.h>
#include<iostream>

using namespace std;

int arr[301][301], rst[301][301] = { 0, };

int main()
{
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	rst[0][0] = arr[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) continue;
			if (i == 0) {
				rst[i][j] = rst[i][j - 1] + arr[i][j];
				continue;
			}if (j == 0) {
				rst[i][j] = rst[i - 1][j] + arr[i][j];
				continue;
			}
			rst[i][j] = arr[i][j] + (rst[i][j - 1] > rst[i - 1][j] ? rst[i][j - 1] : rst[i - 1][j]);
		}
	}
	cout << rst[n - 1][m - 1] << endl;
	return 0;
}