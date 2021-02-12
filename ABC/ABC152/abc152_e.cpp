#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < n; i++)
using namespace std;
typedef long long ll;
const int MAX_N = 10010;
const int MAX_A = 1000010;
const int mod = 1e9 + 7;


ll calc(ll a, ll b, ll p)
{
	if (b == 0) return 1;
	if (b % 2 == 0)
	{
		ll d = calc(a, b / 2, p);
		return (d * d) % p;
	}
	else
		return (a * calc(a, b - 1, p)) % p;
}

vector<ll> lcm(MAX_A, 0); 
void f(ll n)
{
	ll x = n;
	for(ll i = 2; i * i <= n; i++)
	{
		ll cnt = 0;
		while (x % i == 0)
		{
			cnt++;
			x /= i;
		}
		lcm[i] = max(lcm[i], cnt);
	}
	if (x != 0)
		lcm[x] = max(lcm[x], 1ll); 
}

signed main(void)
{
	int n;
	cin >> n;
	int a[n];
	ll ans, l;

	rep(i, n) 
	{
		cin >> a[i];
		f(a[i]);
	}
	l = 1;
	for(int i = 1; i < MAX_A; i++)
	{
		rep(j, lcm[i])
		{
			l *= i;
			l %= mod;
		}
	}
	ans = 0;
	rep(i, n)
	{
		ans += l * calc(a[i], mod - 2, mod);
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
