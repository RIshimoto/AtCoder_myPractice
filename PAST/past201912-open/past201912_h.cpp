#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, q, mn_all, mn_odd;
	ll ans;
	cin >> n;
	int c[n];
	int type3, type2;

	rep(i, n) cin >> c[i];
	mn_all = mn_odd = 1e9;
	rep(i, n) 
	{
		if (i % 2 == 0)
			mn_odd = min(mn_odd, c[i]);
		mn_all = min(mn_all, c[i]);
	}
	ans = type2 = type3 = 0;
	cin >> q;
	rep(i, q)
	{
		int m, x, a;
		cin >> m;
		if (m == 1)
		{
			cin >> x >> a;
			x--;
			if (x % 2 == 0)
			{
				if (c[x] - type2 - type3 >= a)
				{
					c[x] -= a;
					ans += a;
					mn_odd = min(mn_odd, c[x]);
					mn_all = min(mn_all, c[x]);
				}
			}
			else
			{
				if (c[x] - type3 >= a)
				{
					c[x] -= a;
					ans += a;
					mn_all = min(mn_all, c[x]);
				}
			}

		}
		else if (m == 2)
		{
			cin >> a;
			if (mn_odd >= a)
			{
				type2 += a;
				int l = n / 2;
				if (n % 2 != 0) l++;
				ans += a * l;
				mn_odd -= a;
				mn_all = min(mn_all, mn_odd);
			}
		}
		else if (m == 3)
		{
			cin >> a;
			if (mn_all >= a)
			{
				type3 += a;
				ans += a * n;
				mn_all -= a;
				mn_odd -= a;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
