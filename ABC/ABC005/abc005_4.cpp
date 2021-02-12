#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int d[n][n], dp[n][n], table[n * n + 1];
	rep(i, n) rep(j, n) cin >> d[i][j];
	int q;
	cin >> q;
	int p[q];
	rep(i, q) cin >> p[i];

	rep(i, n) rep(j, n) dp[i][j] = 0;
	dp[n - 1][n - 1] = d[n - 1][n - 1];
	for(int i = n - 2; i >= 0; i--)
		dp[i][n - 1] = d[i][n - 1] + dp[i + 1][n - 1];
	for(int j = n - 2; j >= 0; j--)
		dp[n - 1][j] = d[n - 1][j] + dp[n - 1][j + 1];
	for(int i = n - 2; i >= 0; i--)
	{
		for(int j = n - 2; j >= 0; j--)
		{	
			dp[i][j] = dp[i + 1][j] + dp[i][j + 1] - dp[i + 1][j + 1];
			dp[i][j] += d[i][j];
		}
	}
	rep(i, n * n + 1) table[i] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			for(int k = 0; k + i - 1 < n; k++)
			{
				for(int l = 0; l + j - 1 < n; l++) 
				{
					int tmp;
					tmp = dp[k][l];
					if (l + j < n) 
						tmp -= dp[k][l + j];
					if (k + i < n)
						tmp -= dp[k + i][l];
					if (k + i < n && l + j < n)
						tmp += dp[k + i][l + j];
					table[i * j] = max(table[i * j], tmp);
				}
			}
		}
	}
	rep(i, n * n + 1)
	{
		if (table[i + 1] < table[i])
			table[i + 1] = table[i];
	}
	rep(i, q) cout << table[p[i]] << endl;
	return 0;
}
