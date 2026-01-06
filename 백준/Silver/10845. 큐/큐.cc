#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n, x;
	string str;
	queue<int> Q;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			Q.push(x);
		}
		else if (str == "pop") {
			if (Q.empty()) cout << "-1\n";
			else {
				cout << Q.front() << "\n";
				Q.pop();
			}
		}
		else if (str == "size") cout << Q.size() << "\n";
		else if (str == "empty") {
			if (Q.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (str == "front") {
			if (Q.empty()) cout << "-1\n";
			else cout << Q.front() << "\n";
		}
		else if (str == "back") {
			if (Q.empty()) cout << "-1\n";
			else cout << Q.back() << "\n";
		}
	}
	return 0;
}