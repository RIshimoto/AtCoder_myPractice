#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

const long long mod = 1000000007;

long long f(long long n)
{
	long long ans;

	ans = 1;
	for (long long i = n; i > 0; i--)
	{
		ans *= i;
		ans %= mod;
	}
	return ans;
}

signed main(void)
{
	long long n, m;
	cin >> n >> m;
	if (m == n)
		cout << 2 * f(m) * f(n) % mod << endl;
	else if (abs(m - n) == 1)
		cout << f(m) * f(n) % mod << endl;
	else
		cout << 0 << endl;
	return 0;
}
