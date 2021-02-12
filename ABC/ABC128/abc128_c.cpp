#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, m, cnt, ans;
	cin >> n >> m;
	vector<int> s[m];
	int p[m];
	bool ok;

	rep(i, m)
	{
		int k;
		cin >> k;
		rep(j, k)
		{
			int st;
			cin >> st; 
			s[i].push_back(st);
		}
	}
	rep(i, m) cin >> p[i];
	ans = 0;
	for(int bit = 0; bit < (1 << n); bit++)
	{
		vector<int> v;
		for(int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
			{
				v.push_back(i + 1);
			}
		}
		ok = true;
		rep(j, m)
		{
			cnt = 0;
			rep(k, s[j].size())
			{
				rep(i, v.size())
				{
					if (v[i] == s[j][k])
						cnt++;
				}
			}
			if (cnt % 2 != p[j])
				ok = false;
		}
		if (ok) ans++;
	}
	cout << ans << endl;
	return 0;
}
