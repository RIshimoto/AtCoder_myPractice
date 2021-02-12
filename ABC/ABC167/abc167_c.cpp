#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, x;
	cin >> n >> m >> x;
	int c[n], a[n][m];
	int ans;
	bool flag;
	rep(i, n)
	{
		cin >> c[i];
		rep(j, m)
		{
			cin >> a[i][j];
		}
	}
	ans = 1e9;
	flag = false;
	for(int bit = 1; bit < (1 << n); bit++)
	{
		vector<int> v;
		rep(i, n)
		{
			if (bit >> i & 1)
			{
				v.push_back(i);
			}
		}
		int sum_c, sum_a[m];
		sum_c = 0;
		rep(i, m) sum_a[i] = 0;
		rep(i, v.size())
		{
			sum_c += c[v[i]];
			rep(j, m)
			{
				sum_a[j] += a[v[i]][j];
			}
		}
		bool ok;
		ok = true;
		rep(i, m)
		{
			if (sum_a[i] < x)
			{
				ok = false;
				break;
			}
		}
		if (ok)
		{
			flag = true;
			ans = min(sum_c, ans);
		}
	}
	if (!flag) ans = -1;
	cout << ans << endl;
	return 0;
}
