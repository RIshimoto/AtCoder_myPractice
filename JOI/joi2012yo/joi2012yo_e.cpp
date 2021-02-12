#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;

const int dx1[] = {-1, -1, 0, 0, 1, 1};
const int dy1[] = {0, 1, -1, 1, 0, 1};
const int dx2[] = {-1, -1, 0, 0, 1, 1};
const int dy2[] = {-1, 0, -1, 1, -1, 0};

int h, w;
char s[110][110];
bool visited[110][110];
bool check(int i, int j)
{
	rep(i, h) rep(j, w) visited[i][j] = false;
	queue<P> que;
	que.push(P(i, j));
	while (!que.empty())
	{
		auto now = que.front();
		que.pop();
		i = now.first;
		j = now.second;
		if (visited[i][j]) continue;
		visited[i][j] = true;
		rep(k, 6)
		{
			int ni, nj;
			ni = i + (i % 2 == 0 ? dx1[k] : dx2[k]);
			nj = j + (i % 2 == 0 ? dy1[k] : dy2[k]);
			if (ni < 0 || ni >= h || nj < 0 || nj >= w)
				return (false);
			if (s[ni][nj] == '1') continue;
			if (visited[ni][nj]) continue;
			que.push(P(ni, nj));
		}
	}
	return (true);
}

signed main(void)
{
	cin >> w >> h;

	rep(i, h) rep(j, w) cin >> s[i][j];
	rep(i, h) rep(j, w)
	{
		if (s[i][j] == '0' && check(i, j))
			s[i][j] = '1';
	}

	rep(i, h) rep(j, w) visited[i][j] = false;
	int ans = 0;
	rep(i, h) rep(j, w)
	{
		queue<P> que;
		if (s[i][j] == '1')
			que.push(P(i, j));
		while (!que.empty())
		{
			auto now = que.front();
			que.pop();
			auto x = now.first;
			auto y = now.second;

			if (visited[x][y]) continue;
			visited[x][y] = true;

			int sum, nx, ny;
			sum = 6;
			rep(i, 6)
			{
				nx = x + (x % 2 == 0 ? dx1[i] : dx2[i]);
				ny = y + (x % 2 == 0 ? dy1[i] : dy2[i]);
				if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
				if (s[nx][ny] == '0') continue;
				if (s[nx][ny] == '1') sum--; 
				if (visited[nx][ny]) continue;
				que.push(P(nx, ny));
			}
			ans += sum;
		}
	}
	cout << ans << endl;
	return 0;
}
