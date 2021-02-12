#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	ll a[n];
	vector<ll> ans(n, 0);
	rep(i, n) cin >> a[i];
	rep(i, n)
	{
		ll sum = 0;
		for(int k = i; k < n; k++)
		{
			sum += a[k];
			ans[k - i] = max(ans[k - i], sum);
		}
	}
	rep(i, n)
		cout << ans[i] << endl;
	return 0;
}
