#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

const long long INF = 1LL << 60;
const int MAX_N = 110;
const int MAX_V = 100100;

int N;
long long W, w[MAX_N], v[MAX_N];
long long dp[MAX_N][MAX_V];
signed main(void)
{
	cin >> N >> W;
	rep(i, N) cin >> w[i] >> v[i];
	for(int i = 0; i < MAX_N; i++)
	for(int j = 0; j < MAX_V; j++)
		dp[i][j] = INF;
	dp[0][0] = 0;
	rep(i, N)
	{
		for(int j = 0; j < MAX_V; j++)
		{
			if (j - v[i] >= 0)
				dp[i][j] = min(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
			dp[i][j] = min(dp[i][j], dp[i - 1][j]);
		}
	}
	int ans = 0;
	for(int j = 0; j < MAX_V; j++)
	{
		if (W >= dp[N][j])
		{
			ans = j;
		}
	}
	cout << ans << endl;
	return 0;
}
