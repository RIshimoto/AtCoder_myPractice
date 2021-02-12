#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <= (n); i++)
#define MAX 100
using namespace std;

signed main(void)
{
	int n, m;
	int dp[110][110][110];

	cin >> n >> m;
	rep(i, MAX) rep(j, MAX) rep(k, MAX) dp[i][j][k] = 0;
	rep(i, n)
	{
		int a, b, c, w;
		cin >> a >> b >> c >> w;
		dp[a][b][c] = w;
	}
	rep(i, MAX) rep(j, MAX) rep(k, MAX)
	{
		if (i - 1 >= 0)
			dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k]);
		if (j - 1 >= 0)
			dp[i][j][k] = max(dp[i][j][k], dp[i][j - 1][k]);
		if (k - 1 >= 0)
			dp[i][j][k] = max(dp[i][j][k], dp[i][j][k - 1]);
	}
	rep(i, m)
	{
		int x, y, z;
		cin >> x >> y >> z;
		cout << dp[x][y][z] << endl;
	}
	return 0;
}
