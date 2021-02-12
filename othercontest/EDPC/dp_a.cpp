#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

const int INF = (int)1e9;
signed main(void)
{
	int n;
	cin >> n;
	int h[n], dp[n];
	rep(i, n) cin >> h[i];
	rep(i, n) dp[i] = INF;
	dp[0] = 0;
	for(int i = 1; i < n; i++)
	{
		dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i]);
		if (i - 2 >= 0)
		dp[i] = min(dp[i - 2] + abs(h[i] - h[i - 2]), dp[i]);
	}
	cout << dp[n - 1] << endl;
	return 0;
}
