#include<iostream>
using namespace std;
int arr[201][201], rst[1001], c[201] = { 0, };
int n, m;
void graph(int x, int count) {
	for (int i = 0; i < n; i++) {
		if (arr[x][i] == 1 && c[i] == 0) {
			c[i] = count;
			graph(i, count);
		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < m; i++) cin >> rst[i];
	int count = 1;
	for (int i = 0; i < n; i++) {
		if (c[i] == 0) {
			c[i] = count;
			graph(i, count);
			count++;
		}
	}
	int s = rst[0] - 1, e, check = c[s];
	for (int i = 1; i < m; i++) {
		e = rst[i] - 1;
		if (check != c[e]) {
			check = 0;
			break;
		}
	}
	if (!check) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}