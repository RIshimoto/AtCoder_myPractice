#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

const int mod = 1e9 + 7;
signed main(void)
{
	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	ll ans;
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	rep(i, n)
	{
		if (a[i] == 0) continue;
		a[i] += mod;
		a[i] %= mod;
	}
	sort(a.rbegin(), a.rend());
	ans = 1;
	rep(i, k)
	{
		ans *= a[i];
		if (ans < 0) ans += mod;
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
