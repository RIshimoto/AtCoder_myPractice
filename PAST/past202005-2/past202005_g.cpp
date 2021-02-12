#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int dx[3], dy[3];
vector<vector<bool>> visit(900, vector<bool>(900, false));
int ans = 1e9;
int n, X, Y;
int u[900], v[900];
void dfs(int x, int y, int cnt = 0)
{
	cout << x << ", " << y << endl;
	if (x == X && y == Y)
	{
		ans = min(ans, cnt);
		return;
	}
	visit[x][y] = true;
	rep(i, 3)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (x < -200 || y < -200) continue;
		if (x >= 200 || y >= 200) continue;
		if (visit[nx][ny]) continue;
		bool ok = false;
		rep(i, n)
		{
			if (u[i] == nx && v[i] == ny) ok = true;
		}
		if (ok) continue;
		dfs(nx, ny, cnt + 1);
	}
}
signed main(void)
{
	cin >> n >> X >> Y;
	rep(i, n) cin >> u[i] >> v[i];
	if (Y < 0 && X > 0)
	{
		cout << -1 << endl;
		return 0;
	}
	else if (X <= 0)
	{
		dx[0] = -1;
		dy[0] = 1;
		dx[1] = 0;
		dy[1] = 1;
		dx[2] = 1;
		dy[2] = 0;
	}
	else
	{
		dx[0] = 1;
		dy[0] = 1;
		dx[1] = 0;
		dy[1] = 1;
		dx[2] = 1;
		dy[2] = 0;
	}
	dfs(0, 0);
	cout << ans << endl;
	return 0;
}
