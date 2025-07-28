#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    
    int n;
    
    cin >> n;
    if(n == 1 || n == 2) cout << 1 << "\n";
    else{
        long long a = 1, b = 1, t = 0;
        for(int i=3; i<=n; i++){
            t = a + b;
            a = b;
            b = t;
        }
        cout << t << "\n";
    }
    return 0;
}