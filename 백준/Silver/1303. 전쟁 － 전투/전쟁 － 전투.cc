#include<iostream>
#include<vector>

using namespace std;
int n,m,w,b;
char arr[101][101];
void WW(int x, int y){
    if(x<0 || x>=m || y<0 || y>=n) return ;
    arr[x][y] = '0';
    w++;
    if(arr[x-1][y] == 'W') WW(x-1,y);
    if(arr[x+1][y] == 'W') WW(x+1,y);
    if(arr[x][y-1] == 'W') WW(x,y-1);
    if(arr[x][y+1] == 'W') WW(x,y+1);
}

void BB(int x, int y){
    if(x<0 || x>=m || y<0 || y>=n) return ;
    arr[x][y] = '0';
    b++;
    if(arr[x-1][y] == 'B') BB(x-1,y);
    if(arr[x+1][y] == 'B') BB(x+1,y);
    if(arr[x][y-1] == 'B') BB(x,y-1);
    if(arr[x][y+1] == 'B') BB(x,y+1);
}
int main()
{
    int cnt_w = 0, cnt_b = 0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 'W'){
                w=0;
                WW(i,j);
                cnt_w+=w*w;
            }
            else if(arr[i][j] == 'B'){
                b=0;
                BB(i,j);
                cnt_b+=b*b;
            }
        }
    }
    cout << cnt_w << " " << cnt_b << endl;
    return 0;
}