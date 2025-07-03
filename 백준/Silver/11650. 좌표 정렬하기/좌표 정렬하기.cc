#include <iostream>
#include <algorithm>
using namespace std;
long long arr[258257];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    
    long long n,x,y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        arr[i]=(x+100000)*1000000 + (y+100000);
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout << arr[i]/1000000-100000 << " " << arr[i]%1000000-100000 << "\n";
}