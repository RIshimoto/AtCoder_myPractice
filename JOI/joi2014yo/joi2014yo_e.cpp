#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;
static const int MAX = 5100;
static const int INFTY = 1e9;
struct edge{ll to, cost;};

ll n;
ll dist[MAX];
bool check[MAX];
vector<edge> G[MAX];
void dijkstra(ll s)
{
	priority_queue<P, vector<P>, greater<P>> pq;

	for(ll i = 0; i < n; i++)
	{
		dist[i] = INFTY;
		check[i] = false;
	}

	pq.push(P(0, s));
	dist[s] = 0;
	while (!pq.empty())
	{
		P p = pq.top(); pq.pop();
		ll minv = p.first;
		ll u = p.second;
		check[u] = true;
		if (dist[u] < minv) continue;
		rep(i, G[u].size())
		{
			if (check[G[u][i].to]) continue;
			if (dist[G[u][i].to] > dist[u] + G[u][i].cost)
			{
				dist[G[u][i].to] = dist[u] + G[u][i].cost;
				pq.push(P(dist[G[u][i].to], G[u][i].to));
			}
		}
	}
}

signed main(void)
{
	int k;
	cin >> n >> k;
	vector<P> cost(n);
	vector<int> tmpG[n];
	rep(i, n)
	{
		int c, d;
		cin >> c >> d;
		cost[i] = P(c, d);
	}
	rep(i, k)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		tmpG[a].push_back(b);
		tmpG[b].push_back(a);
	}
	rep(i, n)
	{
		queue<int> que;
		vector<int> step(n, 0);
		que.push(i);
		step[i] = 1;
		while (!que.empty())
		{
			int now = que.front(); que.pop();
			if (step[now] > cost[i].second) continue;
			for (auto to : tmpG[now])
			{
				if (step[to] != 0) continue;
				step[to] = step[now] + 1;
				G[i].push_back({to, cost[i].first});
				que.push(to);
			}
		}
	}
	dijkstra(0);
	cout << dist[n - 1] << endl;
	return 0;
}
