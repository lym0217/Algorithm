#include<iostream>
using namespace std;
int arr[101][2], rst[10001] = { 0, };
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) cin >> arr[i][0] >> arr[i][1];
	for (int i = 0; i < m; i++) {
		for (int j = 1; j <= 1101; j++) {
			if (j == arr[i][1]) {
				if (rst[j] == 0) rst[j] = arr[i][0];
				else rst[j] = min(rst[j],arr[i][0]);
			}
			else {
				if (rst[j] == 0) {
					if (j % arr[i][1] == 0 || (j>arr[i][1] && rst[j - arr[i][1]] != 0)) rst[j] = rst[j - arr[i][1]] + arr[i][0];
				}
				else {
					if (rst[j] > rst[j - arr[i][1]] + arr[i][0]) {
						if ((j > arr[i][1] && rst[j - arr[i][1]] != 0) || j - arr[i][1] == 0) rst[j] = rst[j - arr[i][1]] + arr[i][0];
					}
				}
			}
		}
	}
	int min = 9999999;
	for (int i = n; i <= 1101; i++) {
		if (min > rst[i] && rst[i]) min = rst[i];
	}
	cout << min << endl;
	return 0;
}