#include <iostream>
#include <vector>

using namespace std;

bool visited[101];
vector<int> graph[101];
int cnt = 0;
void bfs(int a)
{
    visited[a] = true;
    cnt++;
    for(int i=0; i<graph[a].size(); i++){
        int b = graph[a][i];
        if(!visited[b]) bfs(b);
    }
}
int main(){
    int n, m, x, y;
    
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(1);
    cout << cnt-1 << "\n";
    return 0;
}