#include<iostream>
#include<stack>

using namespace std;

string str;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack<char> st, cal, ans_cal;
	stack<int> ans, num_t;
	bool p = false;

	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0' && str[i] <= '9') st.push(str[i]);
		else {
			int num = 0, n = 1;
			while (!st.empty()) {
				num += (int)(st.top()-48) * n;
				n *= 10;
				st.pop();
			}
			ans.push(num);
			cal.push(str[i]);
		}
	}
	int num = 0, n = 1;
	while (!st.empty()) {
		num += (int)(st.top() - 48) * n;
		n *= 10;
		st.pop();
	}
	ans.push(num);
	while (!cal.empty()) {
		if (cal.top() == '-') {
			ans_cal.push(cal.top());
			num_t.push(ans.top());
			ans.pop();
		}
		else {
			int temp = ans.top();
			ans.pop();
			temp += ans.top();
			ans.pop();
			ans.push(temp);
		}
		cal.pop();
	}
	int res = ans.top();
	ans.pop();
	while (!num_t.empty()) {
		res -= num_t.top();
		num_t.pop();
	}
	cout << res << "\n";
	return 0;
}