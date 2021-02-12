#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
#define MAX 110

const int mod = 10000;
signed main(void)
{
	ll dp[MAX][3][3];
	int n, k;
	int a, b, c;
	vector<int> schedule(n + 1, -1);
	cin >> n >> k;

	for (int i = 1; i <= k; i++)
	{
		int a, b;
		cin >> a >> b;
		schedule[a] = b;
	}
	rep(i, MAX) rep(j, 3) rep(k, 3) dp[i][j][k] = 0;
	dp[0][0][0] = 1;
	for (int i = 0; i < n; i++)
	{
		if (schedule[i] != -1)
		{
			for (a = 1; a <= 3; a++)
			{
				for (b = 1; b <= 3; b++)
				{
					for (c = 1; c <= 3; c++)
					{
						if (a == b && b == c) continue;
						dp[i + 1][b][c] += dp[i][a][b];
						dp[i + 1][b][c] %= mod;
					}
				}
			}
		}
		else
		{
			c = schedule[i];
			for (a = 0; a < 3; a++)
			{
				for (b = 0; b < 3; b++)
				{
					if (a == b && b == c)
						continue;
					dp[i + 1][b][c] += dp[i][a][b];
					dp[i + 1][b][c] %= mod;
				}
			}
		}
	}
	ll ans = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			ans += dp[n][i][j];
			cout << dp[n][i][j] << " ";
		}
	cout << ans << endl;
	return 0;
}
