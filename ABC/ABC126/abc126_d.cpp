#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
const int MAX = 1e5;
struct edge{int to, dist;};

vector<edge> graph[MAX];
vector<int> color(MAX, -1);
int dfs(int v, int p = -1)
{
	for(auto nv : graph[v])
	{
		if (nv.to == p) continue;
		if (color[nv.to] != -1) continue;
		if (nv.dist % 2 != 0)
			color[nv.to] = color[v] ^ 1;
		else
			color[nv.to] = color[v];
		dfs(nv.to, v);
	}
}
signed main(void)
{
	int n;
	cin >> n;
	rep(i, n - 1)
	{
		int u, v, w;
		cin >> u >> v >> w;
		u--; v--;
		graph[u].push_back({v, w});
		graph[v].push_back({u, w});
	}
	color[0] = 0;
	dfs(0);
	rep(i, n) cout << color[i] << endl;
	return 0;
}
