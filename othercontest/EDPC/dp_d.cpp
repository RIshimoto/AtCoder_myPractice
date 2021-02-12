#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int N, W;
	cin >> N >> W;
	long long w[N + 1], v[N + 1], dp[N + 1][W + 1];
	
	for(int i = 1; i <= N; i++) cin >> w[i] >> v[i];
	rep(i, N + 1) rep(j, W + 1) dp[i][j] = 0; 
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= W; j++)
		{
			if (j - w[i] >= 0)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			dp[i][j] = max(dp[i][j], dp[i - 1][j]);	
		}
	}
	cout << dp[N][W] << endl;
	return 0;
}
