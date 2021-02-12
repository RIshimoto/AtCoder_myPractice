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
	if (n == 0) return 1;
	ll x = f(n / 2);
	x *= x;
	if (n % 2 != 0) x *= 2;
	return x % mod;
}

long long nCr(long long n, long long r)
 {
  long long x = 1;
  long long y  = 1;
  for (long long i = 1; i <= r; ++i )
	 {
    x *= (n-i+1);
		x %= mod;
    y  *= i;
		y %= mod;
  }
  return x * calc(y, mod - 2, mod) % mod;
}

signed main(void)
{
	int n;
	cin >> n;
	ll a[n], b[n];
	ll ans, cnt;
	rep(i, n) cin >> a[i] >> b[i];
	cnt = 0;
	rep(i, n - 1)
	{
		for(int j = i + 1; j < n; j++)
		{
			if (a[i] * a[j] + b[i] * b[j] == 0)
				cnt++;
		}
	}
	ans = (((f(n) - 1) % mod) - cnt) % mod;
	cout << ans << endl;
	return 0;
}
