#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll x, y, a, b;
	ll ans;
	cin >> x >> y >> a >> b;
	ans = 0;
	while (x < y / a&& x * (a - 1) < b)
	{
		x *= a;
		ans++;
	}
	if (y - 1 - x >= 0)
	ans += ((y - 1) - x) / b;
	cout << ans << endl;
	return 0;
}
