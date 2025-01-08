#include<iostream>
#include<vector>

using namespace std;

vector<int> num;
int n, m;

int f(int h){
    long long sum = 0;
    for(int i=0; i<n; i++){
        if(num[i]>h) sum+=num[i]-h;
    }
    if(sum >= m) return true;
    else return false;
}
int main()
{
    int max_h = 0, min_h = 1, h = 0, rst = 0;
    cin >> n >> m;
    num.assign(n,0);

    for(int i=0; i<n; i++){
        cin >> num[i];
        max_h = max_h < num[i] ? num[i] : max_h;
    }
    while(min_h <= max_h){
        h = (min_h + max_h) / 2;
        if(f(h)){
            if(rst < h) rst = h;
            min_h = h + 1;
        }
        else {
            max_h = h - 1;
        }
    }
    cout << rst << endl;
    return 0;
}