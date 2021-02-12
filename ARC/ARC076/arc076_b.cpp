#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;
using TP = tuple<int, int, int>;

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
	int n;
	cin >> n;
	vector<P> x(n), y(n);
	vector<TP> diff;
	UnionFind uf(n);

	rep(i, n) cin >> x[i].first >> y[i].first;
	rep(i, n) 
	{
		x[i].second = i;
		y[i].second = i;
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	int now = 0;
	rep(i, n - 1)
	{
		diff.push_back(
				TP(x[i + 1].first - x[i].first, 
					x[i + 1].second,
					x[i].second )
						);
		diff.push_back(
				TP(y[i + 1].first - y[i].first, 
					y[i + 1].second,
					y[i].second	)
						);
	}
	sort(diff.begin(), diff.end());
	ll ans = 0;
	rep(i, diff.size())
	{
		int a = get<0>(diff[i]);
		int b = get<1>(diff[i]);
		int c = get<2>(diff[i]);
		if (!uf.isConnect(b, c))
		{
			uf.connect(b, c);
			ans += a;
		}
	}
	cout << ans << endl;
	return 0;
}
