#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> ans;
    ans.push(arr[0]);
    answer.push_back(arr[0]);
    for(int i : arr){
        if(ans.back() != i){
            answer.push_back(i);
            ans.push(i);
        }
    }
    return (vector<int>)answer;
}