#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX 510000
using namespace std;
typedef long long ll;

const int mod = 998244353; 
ll fac[MAX];
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

void COMinit(void)
{
	fac[0] = fac[1] = 1;
	for(int i = 2; i <= MAX; i++)
	{
		fac[i] = fac[i - 1] * i;
		fac[i] %= mod;
	}
}

ll nCr(ll n, ll r)
{
	ll denom = fac[r] * fac[n - r] % mod;
	return fac[n] * calc(denom, mod - 2, mod) % mod;
}

signed main(void)
{
	ll a, b, c, d, ans;
	cin >> a >> b >> c >> d;
	ans = nCr((c - a) * (d - b), 
	return 0;
}
