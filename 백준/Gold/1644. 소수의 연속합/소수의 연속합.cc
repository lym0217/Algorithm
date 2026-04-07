#include<iostream>
#include<vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n, sum = 0;
	vector<long long> v;
	cin >> n;
	int* arr = new int[n + 1];
	for (int j = 1; j <= n; j++) arr[j] = 0;
	v.push_back(sum);
	for (int j = 2; j <= n; j++) {
		if (arr[j] == 0) {
			sum += j;
			v.push_back(sum);
		}
		for (int k = 2; k * j <= n; k++) arr[k * j] = 1;
	}

	int p = 0, cnt = 0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] - v[p] == n) cnt++;
		else if (v[i] - v[p] > n) {
			while (v[i]-v[p] >= n) {
				if (v[i] - v[p] == n) cnt++;
				p++;
			}
		}
	}
	cout << cnt << "\n";
	delete[] arr;
	return 0;
}