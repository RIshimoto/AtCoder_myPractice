#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

signed main(void)
{
	int n; cin >> n;
	int a[n]; rep(i, n) cin >> a[i];
	ll ans, sum;

	map<ll, ll> m;
	sum = 0; 
	rep(j, n)
		m[a[j]]++;
	for(auto k : m)
	{
		ll value1 = k.second;
		sum += value1 * (value1 - 1) / 2;
	}
	rep(i, n)
	{
		ans = sum;
		ans -= m[a[i]] * (m[a[i]] - 1) / 2;
		ans += (m[a[i]] - 1) * (m[a[i]] - 2) / 2;
		cout << ans << endl;
	}
	return 0;
}
