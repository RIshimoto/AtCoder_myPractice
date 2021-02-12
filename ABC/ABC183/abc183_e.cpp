#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;
#define MAXH 510
#define MAXW 510

const int mod = 1e9 + 7;

char grid[MAXH][MAXW];
ll dp[MAXH][MAXW][MAXW];
int H, W;

ll calc(ll a, ll b, ll p)
{
	if (b == 0) return 1;
	if (b % 2 == 0)
	{
		ll d = calc(a, b / 2, p);
		return (d * d) % p;
	}
	else
		return (a * calc(a, b - 1, p)) % p;
}

ll dfs(int x, int y, int cntr, int cntd, int cntrd)
{
	if (dp[cntr][cntd][cntrd] != -1) return dp[cntr][cntd][cntrd];
	if (x < 0 || x >= H || y < 0 || y >= W) return 0;
	if (grid[x][y] == '#')	return 0;
	if (x == H - 1 && y == W - 1)
	{
		ll r = 1, d = 1, rd = 1;
		if (cntr - 1 >= 0)
			r = calc(2, cntr - 1, mod);
		if (cntd - 1 >= 0)
			d = calc(2, cntd - 1, mod);
		if (cntrd - 1 >= 0)
			rd = calc(2, cntrd - 1, mod);
		return dp[cntr][cntd][cntrd] = (r * d) % mod * rd % mod;
		//return ((r * d) % mod * rd % mod);
		//return ((r + d) % mod + rd) % mod;
		//return 1;
	}
	ll cnt = 0;
	cnt += dfs(x + 1, y, cntr + 1, cntd, cntrd) % mod;
	cnt %= mod;
	cnt += dfs(x + 1, y + 1, cntr, cntd, cntrd + 1) % mod;
	cnt %= mod;
	cnt += dfs(x, y + 1, cntr, cntd + 1, cntrd) % mod;
	cnt %= mod;
	return dp[cntr][cntd][cntrd] = cnt;
}

signed main(void)
{
	cin >> H >> W;
	rep(i, H) rep(j ,W) cin >> grid[i][j];
	rep(i, MAXH) rep(j, MAXW) rep(k, MAXW) dp[i][j][k] = -1;
	cout << dfs(0, 0, 0, 0, 0) << endl;
	return 0;
}

