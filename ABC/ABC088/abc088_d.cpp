#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P=pair<int, int>;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

signed main(void)
{
	int h, w;
	int black;
	cin >> h >> w;
	char maze[h][w];
	int step[h][w];

	black = 0;
	rep(i, h) rep(j, w) step[i][j] = 0;
	rep(i, h) rep(j, w) 
	{
		cin >> maze[i][j];
		if (maze[i][j] == '#')
			black++;
	}
	queue<P> que;
	que.push(P(0, 0));
	step[0][0] = 1;
	while(!que.empty())
	{
		auto now = que.front(); que.pop();
		auto x = now.first;
		auto y = now.second;
		rep(i, 4)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= h) continue;
			if (ny < 0 || ny >= w) continue;
			if (maze[nx][ny] == '#') continue;
			if (step[nx][ny] != 0) continue;
			step[nx][ny] = step[x][y] + 1;
			que.push(P(nx, ny));
		}
	}
	if (step[h - 1][w - 1] == 0) 
		cout << - 1 << endl;
	else
		cout << h * w - black - step[h - 1][w - 1] << endl;
	return 0;
}
