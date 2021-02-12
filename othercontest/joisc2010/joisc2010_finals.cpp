#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;

struct UnionFind
{
	vector<int> uni;

	UnionFind(int n) : uni(n, -1) {}
	int root(int a)
	{
		if (uni[a] < 0) return a;
		return uni[a] = root(uni[a]);
	}

	bool connect(int a, int b)
	{
		a = root(a);
		b = root(b);
		if (a == b) return false;
		if (uni[a] > uni[b])
		{
			a ^= b;
			b ^= a;
			a ^= b;
		}
		uni[a] = uni[a] + uni[b];
		uni[b] = a;
		return true;
	}

	bool isConnect(int a, int b)
	{
		return root(a) == root(b);
	}

	int size(int a)
	{
		return -uni[root(a)];
	}
};

signed main(void)
{
	int n, m, k;
	int a, b, c;
	int cnt;
	ll ans;
	cin >> n >> m >> k;
	vector<pair<ll, P>> g(m);
	UnionFind uf(n);

	rep(i, m)
	{
		cin >> a >> b >> c;
		a--; b--;
		g[i] = make_pair(c, P(a, b));
	}
	sort(g.begin(), g.end());
	ans = cnt = 0;
	rep(i, m)
	{
		if (!uf.isConnect(g[i].second.first, g[i].second.second))
		{
			uf.connect(g[i].second.first, g[i].second.second);
			cnt++;
			if (cnt > n - k) break;
			ans += g[i].first;
		}
	}
	cout << ans << endl;
	return 0;
}
