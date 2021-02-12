#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P=pair<int, int>;

signed main(void)
{
	int n, m, k;
	int x, y;
	int ans = 1;
	set<P> st;

	cin >> n >> m;
	vector<int> g[n];
	rep(i, m)
	{
		cin >> x >> y;
		x--; y--;
		st.insert(make_pair(x, y));
	}
	for (int bit = 1; bit < (1 << n); bit++)
	{
		vector<int> p;
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
				p.push_back(i);
		}
		k = p.size();
		bool ok = true;
		for (int i = 0; i < k - 1; i++)
		{
			for (int j = i + 1; j < k; j++)
			{
				if (!st.count(P(p[i], p[j])))
					ok = false;
			}
		}
		if (ok) ans = max(ans, k);
	}
	cout << ans << endl;
	return 0;
}
