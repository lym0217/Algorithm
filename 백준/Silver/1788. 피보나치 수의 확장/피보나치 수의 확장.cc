#include<iostream>

using namespace std;

int arr[2000] = { 0, };
int main()
{
	int n;
	long long a = 0, b = 1, temp = 0;
	cin >> n;
	if (n == 0) cout << "0" << endl << a << endl;
	else if (n == 1) cout << "1" << endl << b << endl;
	else if (n < 0) {
		for (int i = -1; i >= n; i--) {
			temp = (b - a)%1000000000;
			b = a;
			a = temp;
		}
		if (a == 0) cout << "0" << endl << a << endl;
		else if (a > 0) cout << "1" << endl << a % 1000000000 << endl;
		else cout << "-1" << endl << (-a) % 1000000000 << endl;
	}
	else if (n > 1) {
		for (int i = 2; i <= n; i++) {
			temp = (a + b) % 1000000000;
			a = b;
			b = temp;
		}
		if (b == 0) cout << "0" << endl << b << endl;
		else if (b > 0) cout << "1" << endl << b % 1000000000 << endl;
		else cout << "-1" << endl << (-b) % 1000000000 << endl;
	}
	return 0;
}