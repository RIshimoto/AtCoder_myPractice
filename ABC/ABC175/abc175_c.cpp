#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	ll x, k, d, cnt, ans1, ans2;
	cin >> x >> k >> d;
	x = abs(x);
	if (x / d < k)
	{
		cnt = x / d;
		ans1 = x - cnt * d;
		ans2 = abs(ans1 - d);
		k -= cnt;
		if (k % 2 == 0)
			cout << ans1 << endl;
		else
			cout << ans2 << endl;
	}
	else
		cout << x - k * d << endl;
	return 0;
}
