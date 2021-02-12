#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int INF = (int)1e9;
signed main(void)
{
	int n, k;
	cin >> n >> k;
	int h[n], dp[n];
	rep(i, n) cin >> h[i];
	rep(i, n) dp[i] = INF;
	dp[0] = 0;
	for(int i = 1; i < n; i++)
	{
		for(int j = 1; j <= k; j++)
		{
			if (i - j >= 0)
			dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
		}
	}
	cout << dp[n - 1] << endl;
	return 0;
}
