#include <string>
#include <vector>

int a[5] = {1,2,3,4,5};
int b[8] = {2,1,2,3,2,4,2,5};
int c[10] = {3,3,1,1,2,2,4,4,5,5};
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int aa=0, bb=0,cc=0;
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == a[i%5]) aa++;
        if(answers[i] == b[i%8]) bb++;
        if(answers[i] == c[i%10]) cc++;
    }
    if(aa > bb){
        if(aa > cc) answer.push_back(1);
        else if(aa < cc) answer.push_back(3);
        else{
            answer.push_back(1);
            answer.push_back(3);
        }
    }
    else if(aa < bb){
        if(bb > cc) answer.push_back(2);
        else if(bb < cc) answer.push_back(3);
        else{
            answer.push_back(2);
            answer.push_back(3);
        }
    }
    else {
        if(aa > cc){
            answer.push_back(1);
            answer.push_back(2);
        }
        else if(aa < cc) answer.push_back(3);
        else{
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        }
    }
    return answer;
}