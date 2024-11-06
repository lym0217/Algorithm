#include<iostream>
#include<algorithm>
using namespace std;

int arr1[2][3], arr2[2][3];
int main()
{
	int n, a, b, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (i) {
			arr1[1][0] = max(arr1[0][0], arr1[0][1]) + a;
			arr1[1][1] = max(max(arr1[0][0], arr1[0][1]), arr1[0][2]) +b;
			arr1[1][2] = max(arr1[0][1], arr1[0][2])+c;
			arr2[1][0] = min(arr2[0][0], arr2[0][1])+a;
			arr2[1][1] = min(min(arr2[0][0], arr2[0][1]), arr2[0][2])+b;
			arr2[1][2] = min(arr2[0][1], arr2[0][2])+c;
			arr1[0][0] = arr1[1][0];
			arr1[0][1] = arr1[1][1];
			arr1[0][2] = arr1[1][2];
			arr2[0][0] = arr2[1][0];
			arr2[0][1] = arr2[1][1];
			arr2[0][2] = arr2[1][2];
		}
		else {
			arr1[0][0] = a;
			arr1[0][1] = b;
			arr1[0][2] = c;
			arr2[0][0] = a;
			arr2[0][1] = b;
			arr2[0][2] = c;
		}
	}
	cout << max(max(arr1[0][0], arr1[0][1]), arr1[0][2]) << " " << min(min(arr2[0][0], arr2[0][1]), arr2[0][2]) << endl;

	return 0;
}