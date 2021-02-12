#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF 1e9
using namespace std;

signed main(void)
{
	int n;
	string s;
	cin >> n >> s;
	vector<int> dp(n, INF), w(n, 0);
	rep(i, n)
	{
		if (s[i] == 'X')
			w[i] = 1;
	}
	dp[0] = 0;
	rep(i, n)
	{
		if (i - 1 >= 0)
			dp[i] = min(dp[i - 1] + w[i], dp[i]);
		if (i - 2 >= 0)
			dp[i] = min(dp[i - 2] + w[i], dp[i]);
		if (i - 3 >= 0)
			dp[i] = min(dp[i - 3] + w[i], dp[i]);
	}
	cout << dp[n - 1] << endl;
	return 0;
}
