#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int MAXN = 3010;

ll dp[MAXN][MAXN];
int a[MAXN];
ll f(int l, int r)
{
	if (dp[l][r] != -1) return dp[l][r];
	if (l == r) return dp[l][r] = a[l];
	dp[l][r] = max(a[l] - f(l + 1, r),  a[r] - f(l, r - 1));
	return dp[l][r];
}

signed main(void)
{
	int n;
	cin >> n;
	rep(i, n) cin >> a[i];
	rep(i, MAXN) rep(j, MAXN) dp[i][j] = -1;
	f(0, n - 1);
	rep(i, n) {rep(j, n) cout << dp[i][j]; cout << endl;}
	cout << dp[0][n - 1] << endl;
	return 0;
}
