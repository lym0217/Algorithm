#include<iostream>
#include<vector>
#define NUM 1000000007
using namespace std;


int main()
{
    int n, m;

    cin >> n >> m;
    long long **arr = new long long*[n];
    for(int i=0; i<n; i++) arr[i]=new long long[m];
    for(int i=0; i<n; i++) arr[i][0] = 1;
    for(int i=0; i<m; i++) arr[0][i] = 1;
    
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            arr[i][j] = ((arr[i-1][j]%NUM) + (arr[i-1][j-1]%NUM) + (arr[i][j-1]%NUM))%NUM;   
        }
    }
    cout << arr[n-1][m-1] << endl;

    for(int i=0; i<n; i++) delete[] arr[i];
    delete[] arr;
    return 0;
}