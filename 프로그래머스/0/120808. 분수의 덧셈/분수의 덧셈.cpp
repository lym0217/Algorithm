#include <string>
#include <vector>

using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int rst1 = numer1*denom2 + numer2*denom1;
    int rst2 = denom1*denom2;
    int g = gcd(rst1,rst2);
    answer.push_back(rst1/g);
    answer.push_back(rst2/g);
    return answer;
}