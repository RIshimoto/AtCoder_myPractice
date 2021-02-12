#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<double, double>;

signed main(void)
{
	int n, m;
	double ans;
	cin >> n >> m;
	vector<P> a(n), x(m);
	double r[n];

	rep(i, n) cin >> a[i].first >> a[i].second >> r[i];
	rep(i, m) cin >> x[i].first >> x[i].second;
	ans = 1e9;
	rep (i, m)
	{
		rep(j, n)
		{
			double d;
			d = sqrtl((a[j].first- x[i].first) * (a[j].first - x[i].first) + (a[j].second - x[i].second) * (a[j].second - x[i].second));
			d = abs(d - r[j]);
			if (ans > d) ans = d;
		}
		for (int j = i + 1; j < m; j++)
		{
			double d;
			d = sqrtl((x[j].first- x[i].first) * (x[j].first - x[i].first) + (x[j].second - x[i].second) * (x[j].second - x[i].second));
			d /= 2;
			if (ans > d) ans = d;
		}
	}
	rep(i, n)
	{
		if (ans > r[i])
			ans = r[i];
	}
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
