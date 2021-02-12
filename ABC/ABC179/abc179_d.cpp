#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX 510000
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const int mod = 998244353;
ll dp[200010];
signed main(void)
{
	int n, k;

	cin >> n >> k;
	vector<P> vec(n);
	rep(i, k)
	{
		int l, r;
		cin >> l >> r;
		vec[i] = P(l, r);
	}
	rep(i, n) dp[i] = 0;
	dp[1] = 1;
	for(int i = 1; i <= n; i++)
	{
		rep(p, k)
		{
			for(int j = vec[p].first; j <= vec[p].second; j++)
			{
				if (i - j >= 0)
					dp[i] += dp[i - j];
				dp[i] %= mod;
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}
