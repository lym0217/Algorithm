#include<iostream>

using namespace std;

int arr[10000] = { 0, }, ptr1[10000] = { 0, }, ptr2[10000] = { 0, };
int main()
{
	int n, m, num, cnt_n=0;

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		if (cnt_n != n) {
			bool ck1 = false;
			for (int j = 0; j < cnt_n; j++) {
				if (arr[j] == num) {
					ptr2[arr[j]]++;
					ck1 = true;
					break;
				}
			}
			if (!ck1) {
				arr[cnt_n] = num;
				ptr1[cnt_n++] = i;
				ptr2[num] = 1;
			}
		}
		else {
			bool ck = false;
			for (int j = 0; j < n; j++) {
				if (num == arr[j]) {
					ptr2[arr[j]]++;
					ck = true;
					break;
				}
			}
			if (!ck) {
				int min = 101;
				arr[101] = 1001;
				ptr2[1001] = 9999;
				for (int j = 0; j < n; j++) {
					if (ptr2[arr[min]] > ptr2[arr[j]]) min = j;
					else if (ptr2[arr[min]] == ptr2[arr[j]]) {
						if (ptr1[min] > ptr1[j]) min = j;
					}
				}
				ptr2[arr[min]] = 0;
				arr[min] = num;
				ptr1[min] = i;
				ptr2[arr[min]] = 1;
			}
		}
	}
	int tmp;
	for (int i = 0; i < n; i++) {
		for(int j=i+1; j<n; j++){
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) continue;
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}