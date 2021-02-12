#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

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
	int n, k, l;
	cin >> n >> k >> l;
	UnionFind uf_road(n);
	UnionFind uf_rail(n);
	rep(i, k)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		if (!uf_road.isConnect(a, b)) uf_road.connect(a, b);
	}
	rep(i, l)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		if (!uf_rail.isConnect(a, b)) uf_rail.connect(a, b);
	}
	map<P, ll> mp;
	rep(i, n)
	{
		mp[P(uf_road.root(i), uf_rail.root(i))]++;
	}
	rep(i, n)
	{
		cout << mp[P(uf_road.root(i), uf_rail.root(i))] << " ";
	}
	cout << endl;
	return 0;
}
