#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
#define MAXN 510
#define MAXM 510

signed main(void)
{
	int n, m;
	cin >> n >> m;
	int v[MAXN], t[MAXN];
	for(int i = 1; i <= n; i++)
		cin >> v[i] >> t[i];
	int dp[MAXN][MAXM];
	rep(i, MAXN) dp[i][0] = 0;
	rep(i, MAXM) dp[0][i] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if (j - t[i] >= 0)	
				dp[i][j] = max(dp[i][j], dp[i - 1][j - t[i]] + v[i]);
			dp[i][j] = max(dp[i][j], dp[i - 1][j]); 
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}
