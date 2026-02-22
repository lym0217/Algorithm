#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0, px, py, d[10];
    for(int i=1; i<=n; i++){
        px = (i-1)/w;
        py = px%2==0 ? (i-1)%w : w-1-(i-1)%w;
        d[py] = px;
    }
    px = (num-1)/w;
    py = px%2==0 ? (num-1)%w : w-1-(num-1)%w;
    answer = d[py]+1 - px;
    return answer;
}