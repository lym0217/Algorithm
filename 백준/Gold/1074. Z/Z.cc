#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int num = 0,temp, x;

void f(int n, int r, int c){
    if(temp == 1) return;
    temp = n*n/4, x = n/2;
    if(r < x && c < x){
        num+=temp*0;
        f(n/2,r,c);
    }else if(r < x && c >= x){
        num+=temp*1;
        f(n/2,r,c-x);
    }else if(r >= x && c < x){
        num+=temp*2;
        f(n/2,r-x,c);
    }else if(r >= x && c >= x){
        num+=temp*3;
        f(n/2,r-x,c-x);
    }
}
int main()
{
    int n, r, c, N;

    cin >> n >> r >> c;

    N = pow(2,n);

    f(N,r,c);
    cout << num << "\n";
    return 0;
}