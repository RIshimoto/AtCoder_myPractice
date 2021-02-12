#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;

const int mod = 1e9 + 7;
signed main(void)
{
	int n;
	cin >> n;
	vector<ll> dp(n + 1, 1);

	dp[0] = dp[1] = dp[2] = 0;
	for (int j = 6; j <= n; j++)
	{
		int i;
		for (i = 3; i * 2 < j; i++)
		{
			if (j - i >= 3)
				dp[j] += (dp[i] + dp[j - i]) % mod;
			dp[j] %= mod;
		}
		if (i * 2 == j)
			dp[j] += dp[i];
		dp[j] %= mod;
	}
	//rep(i, n + 1) cout << dp[i] << " ";
	cout << dp[n] << endl;
	return 0;
}
