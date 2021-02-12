#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, k, ans;
	cin >> n >> k;
	long long a[n];

	rep(i, n) cin >> a[i];
	rep(i, n - 1) a[i + 1] += a[i];
	ans = 0;
	for (long long i = k - 1; i < n; i++)
	{
		ans += a[i];
		if (i - k >= 0)
			ans -= a[i - k];
	}
	cout << ans << endl;
	return 0;
}
