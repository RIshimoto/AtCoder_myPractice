#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const ll MAX = 1010;

ll n, m;
ll a[MAX], b[MAX];
ll dp[MAX][MAX];
ll solve(void)
{
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (a[i] == b[j])
				dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
			else
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
		}
	}
	return dp[n][m];
}

signed main(void)
{
	ll ans;

	cin >> n >> m;
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	ans = abs(n - m);
	ans += min(n, m) - solve();
	cout << ans << endl;
	return 0;
}
