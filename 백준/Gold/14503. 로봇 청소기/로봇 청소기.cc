
#include<iostream>

using namespace std;

int arr[51][51], cnt = 0;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, x, y, d;

	cin >> n >> m >> x >> y >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> arr[i][j];
	}
	while (1) {
		if (arr[x][y] == 0) {
			arr[x][y] = 2;
			cnt++;
		}
		bool clr = false;
		for (int i = 3; i >= 0; i--) {
			switch ((d + i) % 4)
			{
			case 0:
				if (arr[x - 1][y] == 0) {
					clr = true;
					x = x - 1;
					d = (d + i) % 4;
				}
				break;
			case 1:
				if (arr[x][y + 1] == 0) {
					clr = true;
					y = y + 1;
					d = (d + i) % 4;
				}
				break;
			case 2:
				if (arr[x + 1][y] == 0) {
					clr = true;
					x = x + 1;
					d = (d + i) % 4;
				}
				break;
			case 3:
				if (arr[x][y - 1] == 0) {
					clr = true;
					y = y - 1;
					d = (d + i) % 4;
				}
				break;
			}
			if (clr) break;
		}
		if (!clr) {
			if (d == 0) {
				if (arr[x + 1][y] == 1) break;
				else x = x + 1;
			}
			else if (d == 1) {
				if (arr[x][y - 1] == 1) break;
				else y = y - 1;
			}
			else if (d == 2) {
				if (arr[x - 1][y] == 1) break;
				else x = x - 1;
			}
			else if (d == 3) {
				if (arr[x][y + 1] == 1) break;
				else y = y + 1;
			}
		}

	}
	cout << cnt << "\n";
	return 0;
}