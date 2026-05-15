#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(int i=0; i<intStrs.size(); i++){
        string num = "";
        for(int j=s; j<s+l; j++) num.push_back(intStrs[i][j]);
        if(stoi(num)>k) answer.push_back(stoi(num));
    }
    return answer;
}