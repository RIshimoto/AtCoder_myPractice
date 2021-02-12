#include <bits/stdc++.h> 
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const long long INF = 1000000000000;
const int MAX_N = 210;
const int MAX_V = 1010;

int N;
long long  W, v[MAX_N], w[MAX_N];
long long dp[MAX_N][MAX_V];
signed main(void)
{
	cin >> N >> W;
	rep(i, N) cin >> v[i] >> w[i]; 
	rep(i, N)
	{
		if (w[i] > 1000)  data_b = false;
	}
	rep(i, N)

	rep(i, MAX_N) rep(j, MAX_V) dp[i][j] = INF;
	dp[0][0] = 0;
	rep(i, N)
	{
		rep(j, MAX_V)
		{
			if (j - v[i] >= 0)
				dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
		}
	}
	}
	else if (N <= 200)
	long long res = 0;
	rep(i, MAX_V)
	{
		if (dp[N][i] <= W) res = i;
	}
	cout << res << endl;
	return 0;
}
