#include <iostream>
#include <deque>
using namespace std;
int main(){
    int t, n;
    
    cin >> t;
    for(int i=0; i<t; i++){
        string str, s;
        deque<int> arr;
        bool dir = true, error_check = false;
        
        cin >> str;
        cin >> n;
        cin >> s;
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else {
                if (num != 0) {
                    arr.push_back(num);
                    num = 0;
                }
            }
        }
        if (num != 0) arr.push_back(num);
        for(char c : str){
            if(c == 'R') dir = !dir;
            else {
                if(arr.empty()){
                    error_check = true;
                    break;
                }
                if(dir) arr.pop_front();
                else arr.pop_back();
            }
        }
        if(error_check) cout << "error";
        else{
            cout << "[";
            if(dir){
                if(!arr.empty()){
                    while(1){
                        cout << arr.front();
                        arr.pop_front();
                        if(arr.empty()) break;
                        else cout << ",";
                    }
                }
            }
            else{
                if(!arr.empty()){
                    while(1){
                        cout << arr.back();
                        arr.pop_back();
                        if(arr.empty()) break;
                        else cout << ",";
                    }
                }
            }
            cout << "]";
        }
        cout << endl;
    }
    return 0;
}