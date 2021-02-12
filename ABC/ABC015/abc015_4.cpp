#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	int W, N, K;
	cin >> W >> N >> K;
	int dp[W + 1][N + 1][K + 1];
	int a[N + 1], b[N + 1];
	int ans = 0;
	a[0] = b[0] = 0;
	rep(i, N) cin >> a[i] >> b[i];
	for(int i = 0; i <= W; i++)
		for(int j = 0; j <= N; j++)
			for(int k = 0; k <= K; k++)
				dp[i][j][k] = 0;
	rep(i, W)
	{
		rep(j, N)
		{
			rep(k, K)
			{
				if (i - a[k - 1] > 0)
				dp[i][j][k] = max(dp[i][j][k], dp[i - a[k - 1]][j - 1][k -1] + b[k - 1]);
				dp[i][j][k] = max(dp[i][j][k], dp[i][j][k - 1]);
			}
		}
	}
	cout << dp[W][N][K] << endl;
	return 0;
}
