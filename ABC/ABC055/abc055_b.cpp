#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
signed main(void)
{
	long long n, ans;
	cin >> n;
	ans = 1;
	for (long long i = 1; i <= n; i++)
	{
		ans *= i;
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
