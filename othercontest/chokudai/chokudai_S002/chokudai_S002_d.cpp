#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll n, ans;
	cin >> n;
	ans = 0;
	rep(i, n)
	{
		ll a, b;
		cin >> a >> b;
		ans += max(a, b);
	}
	cout << ans << endl;
	return 0;
}
