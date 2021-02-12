#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int r, n, m;
	cin >> r >> n >> m;
	double ans, d, len[n];
	d = (double)2 * r / n;
	rep(i, n)
	{
		len[i] = 2 * sqrtl(powl(r, 2) - powl(abs(r - d * i), 2));
	}
	ans = 0;
	for(int i = -1 * m; i < n; i++)
	{
		double tmp = 0;
		if (i + m >= 0 && i + m < n) 
			tmp = max(tmp, len[i + m]);
		if (i >= 0 && i < n)
			tmp = max(tmp, len[i]);
		ans += tmp;
	}
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
