#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, d, ans;
	cin >> a >> b >> c >> d;
	int e[c][a];
	rep(i, c) rep(j, a) cin >> e[i][j];
	ans = 0;
	for(int bit = 1; bit < (1 << c); bit++)
	{
		vector<int> v, s(a);
		rep(i, c)
		{
			if (bit & (1 << i))
			{
				v.push_back(i);
			}
		}
		if (v.size() < d)
			continue;
		int mn = 1e9;
		rep(i, v.size())
		{
			rep(j, a)
			{
				s[j] = e[v[i]][j];
			}
			sort(s.rbegin(), s.rend());
			mn = min(mn, s[b - 1]);
		}
		ans = max(mn, ans);
	}
	cout << ans << endl;
	return 0;
}
