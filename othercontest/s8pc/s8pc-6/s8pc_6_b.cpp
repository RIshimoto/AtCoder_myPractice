#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	ll a[n], b[n], ans;
	rep(i, n) cin >> a[i] >> b[i];

	ans = 1e18;
	rep(i, n) rep(j, n)
	{
		ll sum = 0;
		rep(k, n)
		{
			sum += abs(a[i] - a[k]) + abs(a[k] - b[k]) + abs(b[k] - b[j]);
		}
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
