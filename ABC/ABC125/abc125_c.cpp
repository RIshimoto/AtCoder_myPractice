#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y)
{
	if (y == 0) return x;
	return gcd(y, x % y); 
}

signed main(void)
{
	int n;
	cin >> n;
	ll a[n], l[n], r[n], m[n];

	rep(i, n) cin >> a[i];
	l[0] = a[0];
	rep(i, n - 1)
	{
		l[i + 1] = gcd(l[i], a[i + 1]);
	}
	r[n - 1] = a[n - 1];
	for(int i = n - 1; i >= 1; i--)
	{
		r[i - 1] = gcd(r[i], a[i - 1]);
	}
	rep(i, n)
	{
		if (i == 0) 
			m[i] = r[1];
		else if (i == n - 1) 
			m[i] = l[n - 2];
		else
			m[i] = gcd(l[i - 1], r[i + 1]);
	}
	ll ans = 1;
	rep(i, n) 
	{
		if (ans < m[i])
			ans = m[i];
	}
	cout << ans << endl;
	return 0;
}
