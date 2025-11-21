#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T, n;
	char D[3], turn[3];
	cin >> T;
	for (int T_c = 0; T_c < T; T_c++) {
		char Up[3][3] = { 'w','w','w','w','w','w','w','w','w' };
		char Down[3][3] = { 'y','y','y','y','y','y','y','y','y' };
		char Front[3][3] = { 'r','r','r','r','r','r','r','r','r' };
		char Back[3][3] = { 'o','o','o','o','o','o','o','o','o' };
		char Left[3][3] = { 'g','g','g','g','g','g','g','g','g' };
		char Right[3][3] = { 'b','b','b','b','b','b','b','b','b' };
		char change[3][3];
		cin >> n;
		for (int k = 0; k < n; k++) {
			cin >> D;
			switch (D[0]) {
			case 'U':
				if (D[1] == '-') {
					turn[0] = Front[0][0];
					turn[1] = Front[0][1];
					turn[2] = Front[0][2];
					Front[0][0] = Left[0][0];
					Front[0][1] = Left[0][1];
					Front[0][2] = Left[0][2];
					Left[0][0] = Back[0][0];
					Left[0][1] = Back[0][1];
					Left[0][2] = Back[0][2];
					Back[0][0] = Right[0][0];
					Back[0][1] = Right[0][1];
					Back[0][2] = Right[0][2];
					Right[0][0] = turn[0];
					Right[0][1] = turn[1];
					Right[0][2] = turn[2];

					change[2][0] = Up[0][0];
					change[1][0] = Up[0][1];
					change[0][0] = Up[0][2];
					change[2][1] = Up[1][0];
					change[1][1] = Up[1][1];
					change[0][1] = Up[1][2];
					change[2][2] = Up[2][0];
					change[1][2] = Up[2][1];
					change[0][2] = Up[2][2];
				}
				else {
					turn[0] = Front[0][0];
					turn[1] = Front[0][1];
					turn[2] = Front[0][2];
					Front[0][0] = Right[0][0];
					Front[0][1] = Right[0][1];
					Front[0][2] = Right[0][2];
					Right[0][0] = Back[0][0];
					Right[0][1] = Back[0][1];
					Right[0][2] = Back[0][2];
					Back[0][0] = Left[0][0];
					Back[0][1] = Left[0][1];
					Back[0][2] = Left[0][2];
					Left[0][0] = turn[0];
					Left[0][1] = turn[1];
					Left[0][2] = turn[2];

					change[0][2] = Up[0][0];
					change[1][2] = Up[0][1];
					change[2][2] = Up[0][2];
					change[0][1] = Up[1][0];
					change[1][1] = Up[1][1];
					change[2][1] = Up[1][2];
					change[0][0] = Up[2][0];
					change[1][0] = Up[2][1];
					change[2][0] = Up[2][2];
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) Up[i][j] = change[i][j];
				}
				break;
			case 'D':
				if (D[1] == '+') {
					turn[0] = Front[2][0];
					turn[1] = Front[2][1];
					turn[2] = Front[2][2];
					Front[2][0] = Left[2][0];
					Front[2][1] = Left[2][1];
					Front[2][2] = Left[2][2];
					Left[2][0] = Back[2][0];
					Left[2][1] = Back[2][1];
					Left[2][2] = Back[2][2];
					Back[2][0] = Right[2][0];
					Back[2][1] = Right[2][1];
					Back[2][2] = Right[2][2];
					Right[2][0] = turn[0];
					Right[2][1] = turn[1];
					Right[2][2] = turn[2];

					change[0][2] = Down[0][0];
					change[1][2] = Down[0][1];
					change[2][2] = Down[0][2];
					change[0][1] = Down[1][0];
					change[1][1] = Down[1][1];
					change[2][1] = Down[1][2];
					change[0][0] = Down[2][0];
					change[1][0] = Down[2][1];
					change[2][0] = Down[2][2];

					change[0][2] = Down[0][0];
					change[1][2] = Down[0][1];
					change[2][2] = Down[0][2];
					change[0][1] = Down[1][0];
					change[1][1] = Down[1][1];
					change[2][1] = Down[1][2];
					change[0][0] = Down[2][0];
					change[1][0] = Down[2][1];
					change[2][0] = Down[2][2];
				}
				else {
					turn[0] = Front[2][0];
					turn[1] = Front[2][1];
					turn[2] = Front[2][2];
					Front[2][0] = Right[2][0];
					Front[2][1] = Right[2][1];
					Front[2][2] = Right[2][2];
					Right[2][0] = Back[2][0];
					Right[2][1] = Back[2][1];
					Right[2][2] = Back[2][2];
					Back[2][0] = Left[2][0];
					Back[2][1] = Left[2][1];
					Back[2][2] = Left[2][2];
					Left[2][0] = turn[0];
					Left[2][1] = turn[1];
					Left[2][2] = turn[2];

					change[2][0] = Down[0][0];
					change[1][0] = Down[0][1];
					change[0][0] = Down[0][2];
					change[2][1] = Down[1][0];
					change[1][1] = Down[1][1];
					change[0][1] = Down[1][2];
					change[2][2] = Down[2][0];
					change[1][2] = Down[2][1];
					change[0][2] = Down[2][2];
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) Down[i][j] = change[i][j];
				}
				break;
			case 'F':
				if (D[1] == '-') {
					turn[0] = Up[2][0];
					turn[1] = Up[2][1];
					turn[2] = Up[2][2];
					Up[2][0] = Right[0][0];
					Up[2][1] = Right[1][0];
					Up[2][2] = Right[2][0];
					Right[0][0] = Down[0][2];
					Right[1][0] = Down[0][1];
					Right[2][0] = Down[0][0];
					Down[0][0] = Left[0][2];
					Down[0][1] = Left[1][2];
					Down[0][2] = Left[2][2];
					Left[0][2] = turn[2];
					Left[1][2] = turn[1];
					Left[2][2] = turn[0];

					change[2][0] = Front[0][0];
					change[1][0] = Front[0][1];
					change[0][0] = Front[0][2];
					change[2][1] = Front[1][0];
					change[1][1] = Front[1][1];
					change[0][1] = Front[1][2];
					change[2][2] = Front[2][0];
					change[1][2] = Front[2][1];
					change[0][2] = Front[2][2];
				}
				else {
					turn[0] = Up[2][0];
					turn[1] = Up[2][1];
					turn[2] = Up[2][2];
					Up[2][0] = Left[2][2];
					Up[2][1] = Left[1][2];
					Up[2][2] = Left[0][2];
					Left[0][2] = Down[0][0];
					Left[1][2] = Down[0][1];
					Left[2][2] = Down[0][2];
					Down[0][0] = Right[2][0];
					Down[0][1] = Right[1][0];
					Down[0][2] = Right[0][0];
					Right[0][0] = turn[0];
					Right[1][0] = turn[1];
					Right[2][0] = turn[2];

					change[0][2] = Front[0][0];
					change[1][2] = Front[0][1];
					change[2][2] = Front[0][2];
					change[0][1] = Front[1][0];
					change[1][1] = Front[1][1];
					change[2][1] = Front[1][2];
					change[0][0] = Front[2][0];
					change[1][0] = Front[2][1];
					change[2][0] = Front[2][2];
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) Front[i][j] = change[i][j];
				}
				break;
			case 'B':
				if (D[1] == '-') {
					turn[0] = Up[0][0];
					turn[1] = Up[0][1];
					turn[2] = Up[0][2];
					Up[0][0] = Left[2][0];
					Up[0][1] = Left[1][0];
					Up[0][2] = Left[0][0];
					Left[0][0] = Down[2][0];
					Left[1][0] = Down[2][1];
					Left[2][0] = Down[2][2];
					Down[2][0] = Right[2][2];
					Down[2][1] = Right[1][2];
					Down[2][2] = Right[0][2];
					Right[0][2] = turn[0];
					Right[1][2] = turn[1];
					Right[2][2] = turn[2];

					change[2][0] = Back[0][0];
					change[1][0] = Back[0][1];
					change[0][0] = Back[0][2];
					change[2][1] = Back[1][0];
					change[1][1] = Back[1][1];
					change[0][1] = Back[1][2];
					change[2][2] = Back[2][0];
					change[1][2] = Back[2][1];
					change[0][2] = Back[2][2];
				}
				else {
					turn[0] = Up[0][0];
					turn[1] = Up[0][1];
					turn[2] = Up[0][2];
					Up[0][0] = Right[0][2];
					Up[0][1] = Right[1][2];
					Up[0][2] = Right[2][2];
					Right[0][2] = Down[2][2];
					Right[1][2] = Down[2][1];
					Right[2][2] = Down[2][0];
					Down[2][0] = Left[0][0];
					Down[2][1] = Left[1][0];
					Down[2][2] = Left[2][0];
					Left[0][0] = turn[2];
					Left[1][0] = turn[1];
					Left[2][0] = turn[0];

					change[0][2] = Back[0][0];
					change[1][2] = Back[0][1];
					change[2][2] = Back[0][2];
					change[0][1] = Back[1][0];
					change[1][1] = Back[1][1];
					change[2][1] = Back[1][2];
					change[0][0] = Back[2][0];
					change[1][0] = Back[2][1];
					change[2][0] = Back[2][2];
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) Back[i][j] = change[i][j];
				}
				break;
			case 'L':
				if (D[1] == '-') {
					turn[0] = Up[0][0];
					turn[1] = Up[1][0];
					turn[2] = Up[2][0];
					Up[0][0] = Front[0][0];
					Up[1][0] = Front[1][0];
					Up[2][0] = Front[2][0];
					Front[0][0] = Down[0][0];
					Front[1][0] = Down[1][0];
					Front[2][0] = Down[2][0];
					Down[0][0] = Back[2][2];
					Down[1][0] = Back[1][2];
					Down[2][0] = Back[0][2];
					Back[0][2] = turn[2];
					Back[1][2] = turn[1];
					Back[2][2] = turn[0];

					change[2][0] = Left[0][0];
					change[1][0] = Left[0][1];
					change[0][0] = Left[0][2];
					change[2][1] = Left[1][0];
					change[1][1] = Left[1][1];
					change[0][1] = Left[1][2];
					change[2][2] = Left[2][0];
					change[1][2] = Left[2][1];
					change[0][2] = Left[2][2];
				}
				else {
					turn[0] = Up[0][0];
					turn[1] = Up[1][0];
					turn[2] = Up[2][0];
					Up[0][0] = Back[2][2];
					Up[1][0] = Back[1][2];
					Up[2][0] = Back[0][2];
					Back[0][2] = Down[2][0];
					Back[1][2] = Down[1][0];
					Back[2][2] = Down[0][0];
					Down[0][0] = Front[0][0];
					Down[1][0] = Front[1][0];
					Down[2][0] = Front[2][0];
					Front[0][0] = turn[0];
					Front[1][0] = turn[1];
					Front[2][0] = turn[2];

					change[0][2] = Left[0][0];
					change[1][2] = Left[0][1];
					change[2][2] = Left[0][2];
					change[0][1] = Left[1][0];
					change[1][1] = Left[1][1];
					change[2][1] = Left[1][2];
					change[0][0] = Left[2][0];
					change[1][0] = Left[2][1];
					change[2][0] = Left[2][2];
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) Left[i][j] = change[i][j];
				}
				break;
			case 'R':
				if (D[1] == '-') {
					turn[0] = Up[0][2];
					turn[1] = Up[1][2];
					turn[2] = Up[2][2];
					Up[0][2] = Back[2][0];
					Up[1][2] = Back[1][0];
					Up[2][2] = Back[0][0];
					Back[0][0] = Down[2][2];
					Back[1][0] = Down[1][2];
					Back[2][0] = Down[0][2];
					Down[0][2] = Front[0][2];
					Down[1][2] = Front[1][2];
					Down[2][2] = Front[2][2];
					Front[0][2] = turn[0];
					Front[1][2] = turn[1];
					Front[2][2] = turn[2];

					change[2][0] = Right[0][0];
					change[1][0] = Right[0][1];
					change[0][0] = Right[0][2];
					change[2][1] = Right[1][0];
					change[1][1] = Right[1][1];
					change[0][1] = Right[1][2];
					change[2][2] = Right[2][0];
					change[1][2] = Right[2][1];
					change[0][2] = Right[2][2];
				}
				else {
					turn[0] = Up[0][2];
					turn[1] = Up[1][2];
					turn[2] = Up[2][2];
					Up[0][2] = Front[0][2];
					Up[1][2] = Front[1][2];
					Up[2][2] = Front[2][2];
					Front[0][2] = Down[0][2];
					Front[1][2] = Down[1][2];
					Front[2][2] = Down[2][2];
					Down[0][2] = Back[2][0];
					Down[1][2] = Back[1][0];
					Down[2][2] = Back[0][0];
					Back[0][0] = turn[2];
					Back[1][0] = turn[1];
					Back[2][0] = turn[0];

					change[0][2] = Right[0][0];
					change[1][2] = Right[0][1];
					change[2][2] = Right[0][2];
					change[0][1] = Right[1][0];
					change[1][1] = Right[1][1];
					change[2][1] = Right[1][2];
					change[0][0] = Right[2][0];
					change[1][0] = Right[2][1];
					change[2][0] = Right[2][2];
				}
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) Right[i][j] = change[i][j];
				}
				break;
			}

		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) cout << Up[i][j];
			cout << endl;
		}
	}
	return 0;
}