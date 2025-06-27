#include <iostream>

using namespace std;
int n, Max_res = -1000000001, Min_res = 1000000001;
int cal[5], arr[12];

void f(int d, int res){
    if(d>=n){
        Max_res = max(res, Max_res);
        Min_res = min(res, Min_res);
        return ;
    }
    for(int i=0; i<4; i++){
        if(cal[i]!=0){
            cal[i]--;
            switch (i) {
                case 0:
                    f(d+1, res+arr[d]);
                    break;
                case 1:
                    f(d+1, res-arr[d]);
                    break;
                case 2:
                    f(d+1, res*arr[d]);
                    break;
                case 3:
                    f(d+1, res/arr[d]);
                    break;
                default:
                    break;
            }
            cal[i]++;
        }
    }
}
int main() {
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<4; i++) cin >> cal[i];
    
    f(1, arr[0]);
    cout << Max_res << endl << Min_res << endl;
    return 0;
}