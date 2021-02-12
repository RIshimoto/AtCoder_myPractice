#include <bits/stdc++.h>
#define rep(i, n) for(long long  i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
using P = pair<ll, ll>;
static const ll MAX = 100010;
static const ll INFTY = 1e18;
struct edge{ll to, cost;};

ll n;
ll dist[MAX];
bool check[MAX];
vector<edge> G[MAX];
void dijkstra(ll s)
{
	priority_queue<P, vector<P>, greater<P>> pq;

	for(ll i = 1; i <= n; i++)
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

ll p, q, s;
set<ll> d_next;
void bfs(ll v)
{
	queue<ll > que;
	vector<ll> step(n + 1, 0);

	ll now = v; 
	que.push(v);
	while (!que.empty())
	{
		now = que.front();
		que.pop();
		if (step[now] > s) continue;
		rep(i, G[now].size())
		{
			if (step[G[now][i].to] != 0) continue;
			step[G[now][i].to] = step[now] + 1;
			que.push(G[now][i].to);
			if (step[G[now][i].to] != 1)
			d_next.insert(G[now][i].to);
		}
	}
}

signed main(void)
{
	int a, b;
	ll m, k;
	cin >> n >> m >> k >> s;
	set<ll> st;
	cin >> p >> q;
	rep(i, k) {cin >> a; st.insert(a);}
	rep(i, m)
	{
		cin >> a >> b;
		G[a].push_back({b, p});
		G[b].push_back({a, p});
	}
	for (auto itr = st.begin(); itr != st.end(); itr++)
		G[0].push_back({*itr, INFTY});
	bfs(0);
	rep(i, n + 1) rep(j, G[i].size())
	{
		if (d_next.count(G[i][j].to))
			G[i][j].cost = q;
	}
	rep(i, n + 1) rep(j, G[i].size())
	{
		if (st.count(G[i][j].to))
			G[i][j].cost = INFTY;
	}
	rep(i, n) rep(j, G[i].size())
		if (G[i][j].to == n)
			G[i][j].cost = 0;
	dijkstra(1);
	cout << dist[n] << endl;
	return 0;
}
