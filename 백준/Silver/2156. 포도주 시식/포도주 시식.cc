#include <iostream>
int dp[258257],arr[258257];
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    dp[0]=arr[0];
    dp[1]=dp[0]+arr[1];
    dp[2]=max(dp[0]+arr[2], arr[1]+arr[2]);
    dp[2]=max(dp[2],dp[1]);
    if(n <= 3){
        cout << dp[n-1] << endl;
        return 0;
    }
    else{
        int max_dp = dp[2];
        for(int i=3; i<n; i++){
            dp[i] = max(arr[i-1] + max(dp[i-3],(i>=4 ? dp[i-4] : 0)) + arr[i], dp[i-2] + arr[i]);
            if(dp[i] > max_dp) max_dp = dp[i];
        }
        cout << max_dp << endl;
    }
    return 0;
}