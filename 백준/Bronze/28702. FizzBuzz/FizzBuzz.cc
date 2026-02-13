#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, c;
    int n;
    cin >> a >> b >> c;
    if(a != "FizzBuzz" && a != "Buzz" && a != "Fizz") n = stoi(a) + 3;
    else if(b != "FizzBuzz" && b != "Buzz" && b != "Fizz") n = stoi(b) + 2;
    else if(c != "FizzBuzz" && c != "Buzz" && c != "Fizz") n = stoi(c) + 1;

    if(n%3 == 0 && n%5 == 0) cout << "FizzBuzz\n";
    else if(n%3 == 0 && n%5 != 0) cout << "Fizz\n";
    else if(n%3 != 0 && n%5 == 0) cout << "Buzz\n";
    else cout << n << "\n";
    return 0;
}