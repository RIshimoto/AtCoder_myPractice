#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	int s[n][3], dp[n][3];
	rep(i, n) rep(j, 3) cin >> s[i][j];
	rep(i, n) rep(j, 3) dp[i][j] = 0;
	dp[0][0] = s[0][0];
	dp[0][1] = s[0][1];
	dp[0][2] = s[0][2];
	for(int i = 0; i < n - 1; i++)
	{
		rep(j, 3) // to
		{
			rep(k, 3) // from
			{
				if (j == k) continue;
				dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + s[i + 1][k]);
			}
		}
	}
	ans = 0;
	rep(i, n){rep(j, 3) cout << dp[i][j] << " "; cout << endl;}
	rep(i, 3) ans = max(ans, dp[n - 1][i]); 
	cout << ans << endl; 
	return 0;
}
