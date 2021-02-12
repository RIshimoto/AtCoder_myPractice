#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int MAX = 2010;

int n;
ll a[MAX], dp[MAX][MAX];
ll ans;
ll dfs(int l, int r, int s)
{
	if (dp[l][r] != -1)
		return (dp[l][r]);
	if (l == r)
	{
		if (s) dp[l][r] = 0;
		return dp[l][r] = a[l];
	}
	if (s)
	{
		if (a[l] > a[r])
			return dp[l][r] = dfs((l + 1) % n, r, 0);
		else
			return dp[l][r] = dfs(l, (r + n - 1) % n, 0);
	}
	return dp[l][r] = max(dfs((l + 1) % n, r, 1) + a[l],\
								dfs(l, (r + n - 1) % n, 1) + a[r]);
}

signed main(void)
{
	cin >> n;

	memset(dp, -1, sizeof(dp));
	rep(i, n) cin >> a[i];
	for (int k = 0; k < n; k++)
		ans = max(ans, dfs((k + 1) % n, ((k - 1) + n) % n, 1) + a[k]);
	cout << ans << endl;
	return 0;
}
