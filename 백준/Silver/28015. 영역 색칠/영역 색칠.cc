#include<iostream>

using namespace std;

int arr[101][101];

int main()
{
	int n, m, k;
	int cnt1 = 0, cnt2 = 0, check = 0, sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cnt1 = cnt2 = check = 0;
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2 && (arr[i][j] != arr[i][j - 1] || j == 0)) {
				cnt2++;
			}
			else if (arr[i][j] == 1 && (arr[i][j] != arr[i][j - 1] || j == 0)) {
				cnt1++;
			}
			else if (arr[i][j] == 0 && arr[i][j - 1] != 0) {
				if (cnt1 > cnt2) sum += cnt1;
				else if (cnt1 < cnt2) sum += cnt2;
				else if(cnt1 == cnt2 && cnt1 != 0 && cnt2 != 0) sum += cnt1 + 1;
				cnt1 = cnt2 = 0;
			}
			if (!arr[i][m - 1]) check = 1;
		}
		if (check) {
			if (cnt1 > cnt2) sum += cnt1;
			else if (cnt1 < cnt2) sum += cnt2;
			else if (cnt1 == cnt2 && cnt1 != 0 && cnt2 != 0) sum += cnt1 + 1;
		}
	}
	cout << sum << endl;
	return 0;
}