#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n;
	string s;
	cin >> n >> s;
	int c[n];
	vector<int> dp(n, 1e9);
	rep(i, n) cin >> c[i];
	dp[0] = 0;
	rep(i, n)
	{
		for(int j = 1; j < n - i; j++) 
		{
			bool ok = true;
			rep(k, j / 2)
			{
				if (s[i - k] != s[i + j - 1 - k])
					ok = false;
			}
			if (ok)
				dp[i + j] = min(dp[i + j], dp[i] + c[j]);
		}
	}
	rep(i, n) cout << dp[i] << " ";
	return 0;
}
