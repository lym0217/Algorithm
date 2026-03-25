#include<iostream>
#include<string>
#include<deque>

using namespace std;

string str[64];
deque<char> rst;

int cut(int x, int y, int size) {
	if (size == 1) {
		if (str[x][y] == '0') {
			rst.push_back('0');
			return 0;
		}
		else {
			rst.push_back('1');
			return 1;
		}
	}
	rst.push_back('(');
	int cut_size = size / 2;
	int a = cut(x, y, cut_size);
	int b = cut(x, y + cut_size, cut_size);
	int c = cut(x + cut_size, y, cut_size);
	int d = cut(x + cut_size, y + cut_size, cut_size);
	rst.push_back(')');
	if (a + b + c + d == 4) {
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.push_back('1');
		return 1;
	}
	else if (a + b + c + d == 0) {
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.pop_back();
		rst.push_back('0');
		return 0;
	}
	else return 10;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	cut(0, 0, n);
	while(!rst.empty()){
		cout << rst.front();
		rst.pop_front();
	}
	
	return 0;
}