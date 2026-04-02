#include<iostream>
#include<queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, num, sum = 0, a, b;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		pq.push(num);
	}
	while (1) {
		a = pq.top();
		pq.pop();
		if (pq.empty()) break;
		b = pq.top();
		pq.pop();
		sum += a + b;
		pq.push(a + b);
	}
	cout << sum << "\n";
	return 0;
}