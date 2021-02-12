#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int mod = 1e9 + 7;
long long calc(long long a, long long b, long long p)
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
signed main(void)
{
	long long n, k;
	cin >> n >> k;
	long long sum[n + 1], ans;
	int l, r;
	ans = 0;
	rep(i, n + 1) sum[i] = i;
	rep(i, n) sum[i + 1] += sum[i];
	for(int i = k; i <= n + 1; i++)
	{
		if (n - i >= 0)
			ans += (sum[n] - sum[n - i]) - sum[i - 1];
		ans += 1;
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
