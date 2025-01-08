#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

#define NUM 2000000

using namespace std;
vector<int> arr;
vector<int> ptr;
int main()
{
    int n, sum = 0;
    cin >> n;
    arr.assign(n,0);
    ptr.assign(NUM,0);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        sum+=arr[i];
        for(int j=sum; j>=1; j--){
            if(j == sum) ptr[j] = 1;
            else{
                if(ptr[j] == 1){
                    ptr[j + arr[i]] = 1;
                }
            }
            if(j == arr[i]) ptr[j] = 1;
        }
    }
    bool chk = true;
    for(int i=1; i<=NUM; i++){
        if(ptr[i] == 0){
            cout << i << endl;
            return 0;
        }
    }
    if(chk) cout << sum + 1 << endl;
    return 0;
}