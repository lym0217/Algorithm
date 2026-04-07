#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;
int main()
{
	int n;
	long double area = 0, x1, x2, y1, y2, temp_x, temp_y;
	bool dir = false;

    cin >> n;
    cin >> x2 >> y2;
	temp_x = x2;
	temp_y = y2;
	for (int i = 1; i < n; i++) {
		cin >> x1 >> y1;
		if (x1 > x2) area += ((x1 - x2) * (y1 + y2 + 200000) / (double)2);
		else if (x1 < x2) area -= ((x2 - x1) * (y1 + y2 + 200000) / (double)2);
		x2 = x1;
		y2 = y1;
	}
	if (temp_x > x2) area += ((temp_x - x2) * (temp_y + y2 + 200000) / (double)2);
	else if (temp_x < x2) area -= ((x2 - temp_x) * (temp_y + y2 + 200000) / (double)2);
	printf("%.1Lf\n", abs(area));
	return 0;
}