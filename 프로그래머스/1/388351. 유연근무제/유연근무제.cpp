#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    for(int i=0; i<schedules.size(); i++){
        int endline = schedules[i]/100*100 + (schedules[i]%100>=50 ? 100 + schedules[i]%10 : schedules[i]%100+10), std = startday, ck = 0;
        for(int j=0; j<7; j++){
            if(std == 6 || std == 7){
                std = std%7+1;
                continue;
            }
            if(timelogs[i][j]>endline){
                ck = 1;
                break;
            }
            std=std%7+1;
        }
        if(!ck) answer++;
    }
    return answer;
}