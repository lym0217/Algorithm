#include<iostream>

using namespace std;
int d[31]= {0,};
int main()
{
    int n;
    
    for(int i=0; i<28; i++){
        cin >> n;
        d[n]=1;
    }
    for(int i=1; i<=30; i++){
        if(d[i] == 0) cout << i << "\n";
    }
    return 0;
}