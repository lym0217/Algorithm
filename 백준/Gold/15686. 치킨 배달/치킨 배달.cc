#include <iostream>
#include <cmath>

int n, m, sum_d = 10000001;
int map[51][51], house[101], chicken[50];
int chk[14] = {0,}, cb_arr[50];

using namespace std;
void cb(int hp, int cp, int next, int depth){
    if(depth == m){
        int sum = 0;
        for(int i=0; i<hp; i++){
            int min_d = 100000;
            for(int j=0; j<m; j++){
                min_d = min(min_d, abs((house[i]/100)-(chicken[cb_arr[j]]/100)) +abs((house[i]%100)-(chicken[cb_arr[j]]%100)));
            }
            sum += min_d;
        }
        sum_d = min(sum_d, sum);
        return;
    }
    for(int i=next; i<cp; i++){
        cb_arr[depth] = i;
        cb(hp,cp,i+1,depth+1);
    }
}
int main(){
    int h_p = 0, c_p = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
            if(map[i][j] == 1) house[h_p++] = i*100+j;
            else if(map[i][j] == 2) chicken[c_p++]=i*100+j;
        }
    }
    cb(h_p, c_p, 0, 0);
    cout << sum_d << "\n";
    return 0;
}