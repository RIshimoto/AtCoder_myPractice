#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int l, x, y, s, d;
	cin >> l >> x >> y >> s >> d;
	double ans;
	ans = 1e9;
	if (s > d)
	{
		ans = min((double) (d + l - s) / (x + y), ans);
		if (y - x > 0)
			ans = min((double)(s - d) / (y - x), ans);
	}
	else
	{
		ans = min((double)(d - s) / (x + y), ans);
		if (y - x > 0)
			ans = min((double)(s + l - d) / (y - x), ans);
	}
	cout << fixed << setprecision(20) << ans << endl;	
	return 0;
}
