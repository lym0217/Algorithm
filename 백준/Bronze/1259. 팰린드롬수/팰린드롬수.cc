#include <iostream>
using namespace std;

int main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        if(n>=10000){
            if((n/10000 == n%10) && ((n%10000)/1000 == (n/10)%10)) cout << "yes\n";
            else cout << "no\n";
        }else if(n>=1000){
            if((n/1000 == n%10) && ((n%1000)/100 == (n/10)%10)) cout << "yes\n";
            else cout << "no\n";
        }
        else if(n>=100){
            if(n/100 == n%10) cout << "yes\n";
            else cout << "no\n";
        }
        else if(n>=10){
            if(n/10 == n%10) cout << "yes\n";
            else cout << "no\n";
        }
        else cout << "yes\n";
    }
    return 0;
}