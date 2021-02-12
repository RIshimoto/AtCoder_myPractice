#include <bits/stdc++.h>
#define For(i, a, b) for(long long i = (a); i < (b); i++)
#define rep(i, n) For(i, 0, n)
using namespace std;

const int mod = 1000000007;
signed main(void)
{
	long long n; cin >> n;
	long long a[n];
	long long ans, sum, cnt;

	rep(i, n) cin >> a[i];
	ans = 0;
	rep(k, 60) 
	{
		cnt = sum = 0;
		rep(i, n)
		{
			if (a[i] >> k & 1)
				cnt++;
		}
		sum = cnt * (n - cnt);
		rep(i, k)
		{
			sum *= 2;
			sum %= mod;
		}
		ans += sum;
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
