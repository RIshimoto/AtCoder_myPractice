#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
struct edge{int to, cost;};

signed main(void)
{
	int n, m;
	cin >> n >> m;
	vector<edge> graph[n];
	rep(i, m)
	{
		int a, b, l;
		cin >> a >> b >> l;
		a--; b--;
		graph[a].push_back({b, l});
		graph[b].push_back({a, l});
	}
	ll ans = 0;
	rep(i, n)
	{
		map<int, int> mp;
		for(auto u : graph[i])
		{
			mp[u.cost]++;
		}
		for(auto p : mp)
		{
			auto k = p.first;
			auto v = p.second;
			if (k >= 1270) break;
			ans += (ll)v * mp[2540 - k];
		}
		if (mp[1270] <= 0) continue;
		ans += mp[1270] * (mp[1270] - 1) / 2;
	}
	cout << ans << endl;
	return 0;
}
