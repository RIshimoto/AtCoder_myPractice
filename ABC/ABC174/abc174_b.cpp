#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n, d, cnt;
	cin >> n >> d;
	ll x[n], y[n];
	rep(i, n) cin >> x[i] >> y[i];
	cnt = 0;
	rep(i, n)
	{
		if ((ll)d * d >= x[i] * x[i] + y[i] * y[i])
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
