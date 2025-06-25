#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, k, a;
    long long sum = 0;
    vector<int> arr;
    
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    cin >> m >> k;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) continue;
        if(arr[i] - m <= 0){
            sum++;
            continue;
        }
        else{
            sum++;
            sum += ((arr[i] - m) / k);
            if((arr[i] - m) % k != 0) sum++;
        }
    }
    cout << sum << endl;
    return 0;
}