#include<iostream>

using namespace std;

int paper[128][128];
int w = 0, b = 0;

int cut(int x, int y, int size) {
	if (size == 1) return paper[x][y];
	int cut_size = size / 2;
	int temp = cut(x, y, cut_size) + cut(x, y + cut_size, cut_size) + cut(x + cut_size, y, cut_size) + cut(x + cut_size, y + cut_size, cut_size);
	if (temp == 1 || temp == 2 || temp == 3) {
		b += temp;
		w += (4 - temp);
		return 10;
	}
	else if (temp == 0) return 0;
	else if (temp == 4) return 1;
	else if (temp >= 10) {
		b += temp % 10;
		w += (4 - temp % 10 - temp / 10);
		return 10;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> paper[i][j];
	}
	int temp = cut(0, 0, n);
	if (temp == 0) w++;
	else if (temp == 1) b++;
	cout << w << "\n" << b << "\n";
	return 0;
}