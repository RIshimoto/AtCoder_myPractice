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
		ll d = calc(a, b / 2, mod);
		return (d * d) % p;
	}
	else
		return (a * calc(a, b - 1, p)) % p;
}
signed main(void)
{
	ll n, q;
	cin >> n >> q;
	vector<int> a(n), c(q + 2);
	int from, to;
	ll sum[n];

	rep(i, n) cin >> a[i];
	sum[0] = 0;
	for (int i = 1; i < n; i++) 
		sum[i] = calc(a[i - 1], a[i], mod);
	rep(i, n)
	{
		sum[i + 1] += sum[i] % mod;
		sum[i + 1] %= mod;
	}
	from = 0;
	ll ans = 0;
	rep(i, q)
	{
		cin >> to;
		to--;
		int x = from; 
		int y = to; 
		if (x > y) swap(x, y);
		ll dist = (sum[y] - sum[x]);
		if (dist < 0) dist += mod;
		ans += dist;
		ans %= mod;
		from = to;
	}
	ans += sum[from] % mod;
	ans %= mod;
	cout << ans << endl;

	return 0;
}
