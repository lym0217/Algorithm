#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0, a =1, b =2;
    if(n == 1) answer = a;
    else if(n==2) answer = b;
    else {
        for(int i=3; i<=n; i++){
            answer = (a+b)%1234567;
            a = b ;
            b = answer;
        }
    }
    return answer;
}