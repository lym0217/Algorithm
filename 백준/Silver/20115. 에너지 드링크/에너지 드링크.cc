#include<iostream>

using namespace std;


int main()
{
    int n, num;
    long long sum = 0, max = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        if(max < num) max = num;
        sum += num;
    }
    if((sum-max)%2==1) cout << ((sum-max)/2)+max << ".5" << endl;
    else cout << ((sum-max)/2)+max << endl;
    return 0;
}