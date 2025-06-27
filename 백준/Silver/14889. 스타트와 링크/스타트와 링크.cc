#include <iostream>

using namespace std;

int arr[21][21], comb[258257], check[21]={0,}, st[21];
int n, cnt = 0;

void f(int d, int s){
    if(d>=n/2){
        int sum = 0;
        for(int i=0; i<n/2; i++){
            for(int j=i+1; j<n/2; j++) sum+=arr[st[i]][st[j]];
        }
        comb[cnt++] = sum;
        return ;
    }
    for(int i=s; i<n; i++){
        st[d]=i;
        f(d+1,i+1);
    }
}
int main() {
    int Min_res = 10000000;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> arr[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) arr[i][j]+=arr[j][i];
    }
    f(0, 0);
    for(int i=0; i<cnt/2; i++){
        Min_res = min(max(comb[i],comb[cnt-1-i]) - min(comb[i],comb[cnt-1-i]), Min_res);
    }
    cout << Min_res << endl;
    return 0;
}