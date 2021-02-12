#include <bits/stdc++.h>
#define rep(i, n) for(long long  i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
using P = pair<ll, ll>;
static const ll MAX = 30010;
static const ll INFTY = 1e18;
struct edge{ll to, cost;};

ll n;
ll dist[MAX];
bool check[MAX];
vector<edge> G[MAX];
void dijkstra(ll s, ll g)
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
		ll minv = p.first;
		ll u = p.second;
		if (u == g) return;
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
	int m, k, s, g;
	ll ans;
	cin >> n >> m >> k >> s >> g;
	P x[k + 1];

	rep(i, m)
	{
		ll a, b, d;
		cin >> a >> b >> d;
		G[a].push_back({b, d});
		G[b].push_back({a, d});
	}
	rep(i, k) cin >> x[i].first >> x[i].second;
	x[k].first = INFTY;
	x[k].second = INFTY;
	ans = 1e18;
	rep(i, n)
	{
		ll sum, l, r;
		sum = 0;
		dijkstra(s, i);
		l = dist[i] - dist[s];
		dijkstra(i, g);
		r = dist[g] - dist[i];
		rep(i, k)
		{
			if (x[i].first <= l && l < x[i + 1].first)
				sum += x[i].second;
			if (x[i].first <= r && r < x[i + 1].first)
				sum += x[i].second;
		}
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
