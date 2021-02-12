#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;

ll calc(ll a, ll b, ll p)
{
	if (b == 0) return 1;
	if (b % 2 == 0)
	{
		long long d = calc(a, b / 2, p);
		return (d * d) % p;
	}
	else
		return (a * calc(a, b - 1, p)) % p;
}

ll f(ll n)
{
	return (n + 1) * n % mod * calc(2, mod - 2, mod) % mod;
}

signed main(void)
{
	int a, b;
	ll ans;
	cin >> a >> b;
	ans = 0;
	for(int i = a; i <= b; i++)
	{
		ans += i * f(i) % mod;
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
