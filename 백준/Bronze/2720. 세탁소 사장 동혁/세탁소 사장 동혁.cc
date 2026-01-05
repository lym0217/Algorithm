#include<iostream>
#include<vector>

using namespace std;
int arr[501][5];
int main()
{
	int t, n, a, b, c, d, m;
	for (int j = 0; j < 5; j++) arr[0][j] = 0;
	for (int i = 1; i <= 25; i++) {
		arr[i][0] = i / 25;
		arr[i][1] = (i % 25) / 10;
		arr[i][2] = ((i % 25) % 10) / 5;
		arr[i][3] = ((i % 25) % 10) % 5;
		arr[i][4] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
	}
	for (int i = 26; i <= 500; i++) {
		a = (i - 25 <= 0 ? 0 : i - 25);
		b = (i - 10 <= 0 ? 0 : i - 10);
		c = (i - 5 <= 0 ? 0 : i - 5);
		d = (i - 1 <= 0 ? 0 : i - 1);
		m = min(arr[d][4], min(arr[c][4], min(arr[a][4], arr[b][4])));
		if (m == arr[d][4]) {
			arr[i][0] = arr[d][0];
			arr[i][1] = arr[d][1];
			arr[i][2] = arr[d][2];
			arr[i][3] = arr[d][3] + 1;
			arr[i][4] = arr[d][4] + 1;
		}
		else if (m == arr[c][4]) {
			arr[i][0] = arr[c][0];
			arr[i][1] = arr[c][1];
			arr[i][2] = arr[c][2] + 1;
			arr[i][3] = arr[c][3];
			arr[i][4] = arr[c][4] + 1;
		}
		else if (m == arr[b][4]) {
			arr[i][0] = arr[b][0];
			arr[i][1] = arr[b][1] + 1;
			arr[i][2] = arr[b][2];
			arr[i][3] = arr[b][3];
			arr[i][4] = arr[b][4] + 1;
		}
		else if (m == arr[a][4]) {
			arr[i][0] = arr[a][0] + 1;
			arr[i][1] = arr[a][1];
			arr[i][2] = arr[a][2];
			arr[i][3] = arr[a][3];
			arr[i][4] = arr[a][4] + 1;
		}
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr[n][0] << " " << arr[n][1] << " " << arr[n][2] << " " << arr[n][3] << "\n";
	}
	return 0;
}