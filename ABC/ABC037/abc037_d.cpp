#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int MAX = 1010;
const int mod = 1e9 + 7;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int h, w;
int tab[MAX][MAX];
vector<vector<ll>> dp(MAX, vector<ll>(MAX, -1));
vector<vector<bool>> visit(MAX, vector<bool>(MAX, false));
ll dfs(int x, int y)
{
	ll cnt = 1;
	if (visit[x][y]) 
		return dp[x][y];
	visit[x][y] = true;
	rep(i, 4)
	{
		int next_x = x + dx[i];
		int next_y = y + dy[i];
		if (next_x < 0 || next_y < 0) continue;
		if (next_x >= h || next_y >= w) continue;
		if (tab[next_x][next_y] <= tab[x][y]) continue;
		cnt += dfs(next_x, next_y);
		cnt %= mod;
	}
	return dp[x][y] = cnt;
}

signed main(void)
{
	ll ans = 0;

	cin >> h >> w;
	rep(i, h) rep(j, w) cin >> tab[i][j];
	rep(i, h) rep(j, w)
	{
		ans += dfs(i, j);
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
