#include <bits/stdc++.h>
#define INF 100000
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

vector<vector<int>> G;
vector<int> dist, ans;

void bfs(int now)
{
	rep(i, dist.size()) dist.at(i) = INF;
	queue<int> que;
	que.push(now);
	dist[now] = 0;
	while(!que.empty())
	{
		int v = que.front();
		que.pop();
		for(int nv : G[v])
		{
			if (dist[nv] > dist[v] + 1)
				dist[nv] = dist[v] + 1;
			else
				continue;
			que.push(nv);
		}
	}
	rep(i, dist.size())
	{
		if (dist[i] == INF) continue;
		ans[dist[i]]++;
	}
}

signed main(void)
{
	int n, x, y;

	cin >> n >> x >> y;
	--x; --y;
	G.resize(n);
	dist.resize(n);
	ans.resize(n);
	rep(i, n) ans.at(i) = 0;
	rep(i, n - 1)
	{
		G[i].push_back(i + 1);
		G[i + 1].push_back(i);
	}
	G[x].push_back(y);
	G[y].push_back(x);
	rep(i, n)
		bfs(i);
	for(int i = 1; i < n; i++)
		cout << ans.at(i) / 2 << endl;
	return 0;
}
