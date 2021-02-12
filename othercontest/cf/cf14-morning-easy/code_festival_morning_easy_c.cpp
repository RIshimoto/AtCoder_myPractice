#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
static const int MAX = 1010;
static const int INFTY = (1 << 21);

int n, M[MAX][MAX];
bool check[MAX];
vector<int> G[MAX];
void dijkstra(int s, int dist[])
{
	priority_queue<P, vector<P>, greater<P>> pq;

	rep(i, n)
	{
		dist[i] = INFTY;
		check[i] = false;
	}
	pq.push(P(0, s));
	dist[s] = 0;
	while (!pq.empty())
	{
		P p = pq.top(); pq.pop();
		int minv = p.first;
		int u = p.second;

		check[u] = true;
		if (dist[u] < minv) continue;
		for(auto v : G[u])
		{
			if (M[u][v] == INFTY) continue;
			if (check[v]) continue;
			if (dist[v] > dist[u] + M[u][v])
			{
				dist[v] = dist[u] + M[u][v];
				pq.push(P(dist[v], v));
			}
		}
	}
}

signed main(void)
{
	int m, s, t;
	int d_to[MAX], d_from[MAX];
	cin >> n >> m >> s >> t;
	s--; t--;
	rep(i, n) rep(j, n) M[i][j] = INFTY;
	rep(i, m)
	{
		int a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		G[a].push_back(b);
		G[b].push_back(a);
		M[a][b] = c;
		M[b][a] = c;
	}
	dijkstra(s, d_to);
	dijkstra(t, d_from);
	rep(i, n)
	{
		if (i == s || i == t) continue;
		if (d_to[i] == INFTY || d_from[i] == INFTY) continue;
		if (d_to[i] == d_from[i])
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
