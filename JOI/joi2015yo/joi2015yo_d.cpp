#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll,ll>;
#define N 1010
#define M 1010
const int INF = 1e9;

int dp[N][M];
signed main(void)
{
	int n, m;
	cin >> n >> m;
	int d[n + 1], w[m + 1];

	for (int i = 1; i <= n; i++) cin >> d[i];
	for (int i = 1; i <= m; i++) cin >> w[i];
	for (int i = 0; i <= n; i++) for (int j = 0; j <= m; j++)
		dp[i][j] = INF;
	dp[0][0] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < m; j++)
		{
			for (int k = 1; j + k <= m; k++)
				dp[i+1][j+k] = min(dp[i+1][j+k], dp[i][j] + d[i+1] * w[j+k]);
		}
	}
	int ans = INF;
	for (int j = 1; j <= m; j++)
		ans = min(ans, dp[n][j]);
	cout << ans << endl;
	return 0;
}
