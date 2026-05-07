#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    int rows = board.size();
    for(int i=0; i<rows; i++){
        int cols = board[i].size();
        for(int j=0; j<cols; j++){
            if(i+j<=k) answer+=board[i][j];
        }
    }
    return answer;
}