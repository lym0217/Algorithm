#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

int main()
{
	int** arr = new int*[1001];
	for (int i = 0; i < 1001; i++) arr[i] = new int[1001];
	
	char str1[1001], str2[1001], str3[1001];
	int str1_len = 0, str2_len = 0, max_len = 0, ii = 0, jj = 0;
	stack<char> st;
	cin >> str1 >> str2;
	str1_len = strlen(str1);
	str2_len = strlen(str2);
	for (int i = 0; i <= str1_len; i++) {
		for (int j = 0; j <= str2_len; j++) arr[i][j] = 0;
	}

	for (int i = 1; i <= str1_len; i++) {
		for (int j = 1; j <= str2_len; j++) {
			if (str1[i - 1] == str2[j - 1]) {
				arr[i][j] = arr[i - 1][j - 1] + 1;
				if (max_len < arr[i][j]) {
					max_len = arr[i][j];
					ii = i;
					jj = j;
				}
			}
			else arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
		}
	}
	cout << max_len << "\n";
	if (max_len == 0) return 0;
	while (ii != 0 && jj != 0) {
		if (str1[ii - 1] == str2[jj - 1]) {
			st.push(str1[ii - 1]);
			ii--;
			jj--;
		}
		else {
			if (arr[ii - 1][jj] > arr[ii][jj - 1]) ii--;
			else jj--;
		}
	}
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	cout << "\n";
	return 0;
}