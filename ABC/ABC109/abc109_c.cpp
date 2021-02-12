#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y)
{
	if (y == 0) return x;
	return gcd(y, x%y);
}

signed main(void)
{
	ll n, x;
	cin >> n >> x;
	vector<ll> v(n), diff(n);
	ll g;

	rep(i, n)
	{
		cin >> v[i];
		diff[i] = abs(v[i] - x);
	}
	g = diff[0];
	for(ll i = 1; i < n; i++)
	{
		g = gcd(g, diff[i]);
	}
	cout << g << endl;
	return 0;
}
