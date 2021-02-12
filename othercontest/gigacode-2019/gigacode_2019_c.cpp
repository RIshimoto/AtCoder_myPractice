#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int d, ans;
	cin >> d;
	long long sum;
	int a[d], b[d];
	bool ok;

	rep(i, d) cin >> a[i];
	rep(i, d) cin >> b[i];
	ans = 2e9 + 1;
	sum = 0;
	ok = true;
	rep(i, d)
	{
		sum += a[i];
		if (sum >= b[i])
		{
			ans = min(ans, b[i]);
			ok = false;
		}
	}
	if (ok)  ans = -1;
	cout << ans << endl;
	return 0;
}
