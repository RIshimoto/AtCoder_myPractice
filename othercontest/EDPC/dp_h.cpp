#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;
typedef long long ll;

#define MAXH 1010
#define MAXW 1010
const int mod = 1e9 + 7;

char grid[MAXH][MAXW];
ll dp[MAXH][MAXW];
int H, W;
ll dfs(int x, int y)
{
	if (dp[x][y] != -1) 	return dp[x][y];
	if (x > H || y > W) 	return 0;
	if (grid[x][y] == '#')	return 0;
	if (x == H && y == W) 	return 1;
	ll cnt = 0;
	cnt += dfs(x + 1, y) % mod;
	cnt %= mod;
	cnt += dfs(x, y + 1) % mod;
	cnt %= mod;
	return dp[x][y] = cnt;
}

signed main(void)
{
	cin >> H >> W;
	rep(i, H) rep(j ,W) cin >> grid[i][j];
	rep(i, H) rep(j, W) dp[i][j] = -1;
	dfs(1, 1);
	cout << dp[1][1] << endl;
	return 0;
}
