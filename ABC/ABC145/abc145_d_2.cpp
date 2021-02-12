#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int MAX = 1e6 + 10;
const int mod = 1e9 + 7;
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

int main(void)
{
	COMinit();
	int x, y;
	cin >> x >> y;
	int n, m;

	if ((x + y) % 3 != 0)
		cout << 0 << endl;
	else
	{
		n = (2 * y - x) / 3;
		m = (x - n) / 2;
		if (n < 0 || m < 0)
			cout << 0 << endl;
		else
		{
			ll ans = nCr(n + m, n);
			cout << ans << endl;
		}
	}
	return 0;
}
