#include<iostream>
#include<vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n, s, num, sum = 0;
	vector<long long> v;

	cin >> n >> s;
	v.push_back(0);
	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
		v.push_back(sum);
	}
	int st = 0, ed = 1, min_len = 100001;
	while (ed <= n) {
		if (v[ed] - v[st] >= s) {
			while (v[ed] - v[st] >= s) {
				if (ed - st < min_len) min_len = ed - st;
				st++;
			}
		}
		else ed++;
	}
	if (min_len == 100001) cout << "0\n";
	else cout << min_len << "\n";
	return 0;
}