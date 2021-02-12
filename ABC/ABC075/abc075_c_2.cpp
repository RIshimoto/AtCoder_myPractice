#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

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
	int n, m;
	int ans;

	cin >> n >> m;
	int a[m], b[m];
	rep(i, m) cin >> a[i] >> b[i];
	ans = 0;
	rep(i, m)
	{
		UnionFind uf(n + 1);
		rep(j, m)
		{
			if (i == j) continue;
			if (!uf.isConnect(a[j], b[j])) 
				uf.connect(a[j], b[j]);
		}
		for (int j = 1; j <= n; j++)
		{
			if (uf.size(j) != n)
			{
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

