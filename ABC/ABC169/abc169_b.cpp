#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	vector<ll> a(n);
	ll ans;
	rep(i, n) 
	{
		cin >> a[i];
		if (a[i] == 0)
		{
			cout << 0 << endl;
			return 0;
		}
	}
	ans = 1;
	rep(i, n)
	{
		if (a[i] > 1000000000000000000 / ans)
		{
			cout << -1 << endl;
			return 0;
		}
		ans *= a[i];
	}
	cout << ans << endl;
	return 0;
}
