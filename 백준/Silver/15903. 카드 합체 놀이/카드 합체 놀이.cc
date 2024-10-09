#include<iostream>
#include<vector>
#include<queue>
#include<functional>

using namespace std;

int main()
{
	int n, m, num;
	priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long>> pq;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num;
		pq.push(num);
	}
	unsigned long long a, b, count = 0;
	for (int i = 0; i < m; i++) {
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		pq.push(a + b);
		pq.push(a + b);
	}

	while (!pq.empty()) {
		count += pq.top();
		pq.pop();
	}
	cout << count << endl;
	return 0;
}