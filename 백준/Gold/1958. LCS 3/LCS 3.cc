#include<iostream>
#include<string.h>

using namespace std;

char str1[101], str2[101], str3[101];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> str1 >> str2 >> str3;

	int str1_len = strlen(str1), str2_len = strlen(str2), str3_len = strlen(str3), max_len = 0;
	int*** cnt = new int** [str1_len + 1];

	for (int i = 0; i <= str1_len; i++) {
		cnt[i] = new int*[str2_len + 1];
		for (int j = 0; j <= str2_len; j++) {
			cnt[i][j] = new int[str3_len + 1];
		}
	}
	for (int i = 0; i <= str1_len;i++) {
		for (int j = 0; j <= str2_len; j++) {
			for (int k = 0; k <= str3_len; k++) {
				if (i == 0 || j == 0 || k == 0) cnt[i][j][k] = 0;
				else if (str1[i - 1] == str2[j - 1] && str2[j - 1] == str3[k - 1]) {
					cnt[i][j][k] = cnt[i - 1][j - 1][k - 1] + 1;
					max_len = max(max_len, cnt[i][j][k]);
				}
				else cnt[i][j][k] = max(max(cnt[i - 1][j][k], cnt[i][j - 1][k]), cnt[i][j][k - 1]);
			}
		}
	}
	cout << max_len << "\n";

	for (int i = 0; i <= str1_len; i++) {
		for (int j = 0; j <= str2_len; j++) delete[] cnt[i][j];
		delete[] cnt[i];
	}
	delete[] cnt;
	return 0;
}