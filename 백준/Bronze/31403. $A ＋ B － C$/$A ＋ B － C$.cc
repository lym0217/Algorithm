#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    string str;
    cin >> a >> b >> c;
    cout << a+b-c << "\n";
    str = to_string(a)+to_string(b);
    cout << stoi(str) - c << "\n";
    return 0;
}