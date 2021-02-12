#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

ll gcd(ll x, ll y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

signed main(void)
{
	int n, k;
	cin >> n >> k;
	ll a[n];
	map<ll, ll> mp, g;
	ll ans;
	rep(i, n) 
	{
		cin >> a[i];
		mp[a[i]]++; 
	}
	for(auto p : mp)
	{
		g[p.first] = gcd(p.first, k);
	}
	ans = 0;
	for(auto p : mp)
	{
		if (g[p.first] * g[p.first] % k == 0)
			ans += p.second * (p.second - 1) / 2; 
		for(auto q : mp)
		{
			if (p >= q) continue; 
			if (g[p.first] * g[q.first] % k == 0)
				ans += p.second * q.second;
		}
	}
	cout << ans << endl;
	return 0;
}
