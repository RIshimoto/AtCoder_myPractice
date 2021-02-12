#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int h, w;
int t[100][100];
bool visited[100][100];
int ans;
void dfs(int x, int y, int cnt)
{
	if (x < 0 || x >= h || y < 0 || y >= w) 
		return ;
	if (t[x][y] == 0)
		return;
	ans =  max(ans, cnt);
	rep(i, 4) 
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!visited[nx][ny])
		{
			visited[x][y] = true;
			dfs(nx, ny, cnt + 1);
			visited[x][y] = false;
		}
	}
}

signed main(void)
{
	cin >> w >> h;
	rep(i, h) rep(j, w) cin >> t[i][j];
	rep(i, h) rep(j, w) 
	{
		if (t[i][j] == 1)
			dfs(i, j, 1);
	}
	cout << ans << endl;
	return 0;
}
