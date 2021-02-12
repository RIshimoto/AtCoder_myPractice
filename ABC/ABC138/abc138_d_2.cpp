#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

vector<ll> sum(200100, 0);
vector<int> G[200100];

void dfs(int v, int p = -1)
{
	for (auto x : G[v])
	{
		if (x == p) continue;
		sum[x] += sum[v];
		dfs(x, v);
	}
}

signed main(void)
{
	int n, q;
	cin >> n >> q;
	rep(i, n - 1) 
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	rep(i, q)
	{
		int p;
		ll x;
		cin >> p >> x;
		p--;
		sum[p] += x;
	}
	dfs(0);
	rep(i, n) printf("%lld%c", sum[i], (i == n - 1 ? '\n' : ' '));
	return 0;
}

