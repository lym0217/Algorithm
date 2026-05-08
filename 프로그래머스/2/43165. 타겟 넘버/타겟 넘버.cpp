#include <string>
#include <vector>

using namespace std;
void f(vector<int>& number, int t, int *ans,int deep){
    if(deep == 0){
        if(t == 0) (*ans)++;
        return ;
    }
    f(number, t-number[deep-1], ans, deep-1);
    f(number, t+number[deep-1], ans, deep-1);
}
int solution(vector<int> numbers, int target) {
    int answer = 0;
    f(numbers,target,&answer,numbers.size());
    return answer;
}