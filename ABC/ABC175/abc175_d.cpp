#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
struct edge{int to, cost;};
vector<edge> graph[100010];

int k, cnt;
ll ans;
void dfs(int v, long long c = 0)
{
	cnt++;
	if (cnt > k)
		return;
	c += (ll)graph[v][0].cost;
	ans = max(ans, c);
	dfs(graph[v][0].to, c);
}

signed main(void)
{
	int n;
	cin >> n >> k;
	int p[n], c[n];
	rep(i, n) 
	{
		cin >> p[i];
		p[i]--;
	}
	rep(i, n) cin >> c[i];
	rep(i, n)
		graph[i].push_back({p[i], c[i]});
	ans = -1e18;
	rep(i, n)
	{
		cnt = 0;
		dfs(i);
	}
	cout << ans << endl;
	return 0;
}
