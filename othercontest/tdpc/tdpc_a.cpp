#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define MAXN 110
#define MAXM 10010
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int n;
	int p[MAXN];
	vector<vector<bool>> dp(MAXN, vector<bool>(MAXM, false));

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	rep(i, MAXN) dp[i][0] = true;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < MAXM; j++)
		{
			if (j - p[i] >= 0 && dp[i - 1][j - p[i]] || dp[i - 1][j])
				dp[i][j] = true;
		}
	}
	ll cnt = 0;
	rep(i, MAXM)
	{
		if (dp[n][i])
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
