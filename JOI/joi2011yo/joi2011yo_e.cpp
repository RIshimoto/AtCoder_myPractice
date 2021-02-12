#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P=pair<int, int>;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

string maze[1000];
signed main(void)
{
	int h, w, n, to;
	int ans;
	P start;

	cin >> h >> w >> n;
	rep(i, h) 
	{
		cin >> maze[i];
		rep(j, w)
		if (maze[i][j] == 'S')
			start = P(i, j);
	}
	ans = 0;
	to = 1;
	while (to <= n)
	{
		queue<P> que;
		vector<vector<int>> step(h, vector<int>(w, 0));
		que.push(start);
		while (!que.empty())
		{
			auto now = que.front();
			que.pop();
			auto x = now.first;
			auto y = now.second;
			if (maze[x][y] == to + '0')
			{
				start = P(x, y);
				ans += step[x][y];
				break;
			}
			rep(i, 4)
			{
				int nx = x + dx[i];	
				int ny = y + dy[i];	
				if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
				if (maze[nx][ny] == 'X') continue;
				if (step[nx][ny] != 0) continue;
				step[nx][ny] = step[x][y] + 1;
				que.push(P(nx, ny));
			}
		}
		to++;
	}
	cout << ans << endl;
	return 0;
}
