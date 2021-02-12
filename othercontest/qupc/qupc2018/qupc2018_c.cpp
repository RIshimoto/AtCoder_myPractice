#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF 1e9
using namespace std;
using P = pair<int, int>;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
signed main(void)
{
	int h, w, X;
	cin >> h >> w >> X;
	queue<pair<P, int>> inosisi;
	queue<P> search;
	vector<vector<int>> dist(h,vector<int>(w, -1));
	vector<string> s(h);
	P goal;

	rep(i, h) 
	{
		cin >> s[i];
		rep(j, w)
		{
			if (s[i][j] == 'S')
			{
				search.push(P(i, j));
				dist[i][j] = 0;
			}
			else if (s[i][j] == 'G')
			{
				goal.first = i;
				goal.second = j;
			}
			else if (s[i][j] == '@')
			{
				inosisi.push(make_pair(P(i, j), 0));
			}
		}
	}
	while (!inosisi.empty())
	{
		auto current = inosisi.front(); inosisi.pop();
		auto x = current.first.first;
		auto y = current.first.second;
		auto z = current.second;
		if (s[x][y] == '#') continue;
		if (s[x][y] == 'G')
		{
			cout << -1 << endl;
			return 0;
		}
		s[x][y] = '#';
		rep(i, 4)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + 1;
			if (nz > X) break;
			if (nx >= h || nx < 0 || ny >= w || ny < 0) continue;
			if (s[nx][ny] == '#') continue;
			inosisi.push(make_pair(P(nx, ny), nz));
		}
	}
	while (!search.empty())
	{
		auto current = search.front(); search.pop();
		auto x = current.first;
		auto y = current.second;
		if (s[x][y] == 'G')
		{
			cout << dist[x][y] << endl;
			return 0;
		}
		rep(i, 4)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= h || nx < 0 || ny >= w || ny < 0) continue;
			if (s[nx][ny] == '#') continue;
			if (dist[nx][ny] != -1) continue;
			dist[nx][ny] = dist[x][y] + 1;
			search.push(P(nx, ny));
		}
	}
	cout << dist[goal.first][goal.second] << endl;
	return 0;
}
