#include<iostream>
#include<functional>
#include<queue>
#define INF 999999999

using namespace std;

vector<pair<int, int>> node[1001];
int dis[1001] = { 0, };

void dijkstra(int start) {
	priority_queue <pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
	dis[start] = 0;
	pq.push(make_pair(0, start));
	while (!pq.empty()) {
		int cur = pq.top().second;
		int cur_dis = pq.top().first;
		pq.pop();
		if (dis[cur] < cur_dis) continue;
		for (int i = 0; i < node[cur].size(); i++) {
			int next = node[cur][i].first;
			int next_dis = cur_dis + node[cur][i].second;
			if (dis[next] > next_dis) {
				dis[next] = next_dis;
				pq.push(make_pair(next_dis, next));
			}
		}
	}
}
int main()
{
	int V, K, S, E;
	int u, v, w;

	cin >> V >> K;
	for (int i = 0; i < K; i++) {
		cin >> u >> v >> w;
		node[u].push_back(make_pair(v, w));
	}
	cin >> S >> E;
	for (int i = 1; i <= V; i++) dis[i] = INF;
	dijkstra(S);
	cout << dis[E] << endl;
	return 0;
}