#include<iostream>
using namespace std;
int main()
{
	int a, b, cnt = 0, chk = 0;
	cin >> a >> b;
	while(1) {
		if (a == b) break;
		else if (a > b) {
			chk = 1;
			break;
		}
		if (b % 10 == 1) {
			b /= 10;
		}
		else {
			if (b % 2 == 0) b /= 2;
			else {
				chk = 1;
				break;
			}
		}
		cnt++;
	}
	if (chk) cout << "-1" << endl;
	else cout << cnt + 1 << endl;
	return 0;
}