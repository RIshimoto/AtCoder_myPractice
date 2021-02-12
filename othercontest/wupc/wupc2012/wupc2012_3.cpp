#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX 500
using namespace std;
using P = pair<int, int>;
typedef long long ll;

int n, m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
vector<string> S(MAX);
int bfs(P s, P g)
{
	vector<vector<int>> label(n, vector<int>(m, -1));
	queue<P> que;
	que.push(s);
	label[s.first][s.second] = 0;
	while (!que.empty())
	{
		auto now = que.front(); que.pop();
		int x = now.first;
		int y = now.second;

		if (g == now) return label[x][y];
		rep(i, 4)
		{
			int nx, ny;
			nx = x + dx[i]; 
			ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (S[nx][ny] == '#') continue;
			if (label[nx][ny] != -1) continue;
			label[nx][ny] = label[x][y] + 1;
			que.push(P(nx, ny));
		}
	}
	return -1;
}

signed main(void)
{
	P s, c, g; 
	cin >> n >> m;
	rep(i, n)
	{
		cin >> S[i];
		rep(j, m)
		{
			if (S[i][j] == 'S')
				s = P(i, j);
			else if (S[i][j] == 'C')
				c = P(i, j);
			else if (S[i][j] == 'G')
				g = P(i, j);
		}
	}
	ll ans = 0;
	if (bfs(s, c) == -1)
	{
		cout << -1 << endl;
		return 0;
	}
	else
		ans += bfs(s, c); 
	if (bfs(c, g) == -1)
	{
		cout << -1 << endl;
		return 0;
	}
	else
		ans += bfs(c, g); 
	cout << ans << endl;
	return 0;
}
