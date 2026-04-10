#include<iostream>
#include<queue>

using namespace std;

int n, m;
queue<pair<int, int>> q;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x = 0, y = 0;

	cin >> n >> m;
	int** arr = new int* [m+2];
	for (int i = 0; i <= m + 1; i++) arr[i] = new int[n + 2];
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) q.push(make_pair(i, j));
		}
	}
	while (!q.empty()) {
		x = q.front().first, y = q.front().second;
		q.pop();
		if (x + 1 <= m && (arr[x + 1][y] == 0 || arr[x + 1][y] > arr[x][y] + 1)) {
			arr[x + 1][y] = arr[x][y] + 1;
			q.push(make_pair(x + 1, y));
		}
		if (y + 1 <= n && (arr[x][y + 1] == 0 || arr[x][y + 1] > arr[x][y] + 1)) {
			arr[x][y + 1] = arr[x][y] + 1;
			q.push(make_pair(x, y + 1));
		}
		if (x - 1 > 0 && (arr[x - 1][y] == 0 || arr[x - 1][y] > arr[x][y] + 1)) {
			arr[x - 1][y] = arr[x][y] + 1;
			q.push(make_pair(x - 1, y));
		}
		if (y - 1 > 0 && (arr[x][y - 1] == 0 || arr[x][y - 1] > arr[x][y] + 1)) {
			arr[x][y - 1] = arr[x][y] + 1;
			q.push(make_pair(x, y - 1));
		}
	}
	bool chk = false;
	int day = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == 0) {
				chk = true;
				break;
			}
			if (day < arr[i][j]) day = arr[i][j];
		}
		if (chk) break;
	}
	if (chk) cout << "-1\n";
	else cout << day - 1 << "\n";
	for (int i = 0; i <= m + 1; i++) delete[] arr[i];
	delete[] arr;
	return 0;
}