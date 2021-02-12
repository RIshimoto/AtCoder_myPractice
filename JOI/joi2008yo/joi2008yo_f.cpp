#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
static const ll MAX = 30010;
static const ll INFTY = (1 << 21);
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
	int m;
	cin >> n >> m;
	rep(i, m)
	{
		int a, b, c, d;
		cin >> a;
		if (a == 0)
		{
			cin >> b >> c;
			b--; c--;
			dijkstra(b);
			cout << ((dist[c] != INFTY) ? dist[c] : -1) << endl;
		}
		else
		{
			cin >> b >> c >> d;
			b--; c--;
			G[b].push_back({c, d});
			G[c].push_back({b, d});
		}
	}
	return 0;
}
