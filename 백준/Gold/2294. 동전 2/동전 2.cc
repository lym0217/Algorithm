#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n, k, ms;
    
    cin >> n >> k;
    
    int *arr = new int[n];
    int *bl = new int[k+2];
    
    for(int i=0; i<=k; i++) bl[i] = -1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        bl[arr[i]] = 1;
    }
    for(int i=1; i<=k; i++){
        ms = 100001;
        if(bl[i] == 1) continue;
        for (int j=0; j<n; j++) {
            if(i-arr[j] <= 0) continue;
            if(bl[i-arr[j]] == -1) continue;
            ms = min(ms, bl[i-arr[j]]);
        }
        bl[i] = ms+1;
    }
    if(bl[k] == 100002) cout << "-1\n";
    else cout << bl[k] << "\n";
    delete[] arr;
    delete[] bl;
    return 0;
}