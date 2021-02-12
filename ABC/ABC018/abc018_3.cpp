#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const int inf = 1e9;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
signed main(void)
{
	int r, c, k; 
	cin >> r >> c >> k;
	string s[r];
	ll mp[r + 2][c + 2];

	rep(i, r) cin >> s[i];
	queue<P> que;
	rep(i, r) rep(j, c)
	{
		if (s[i][j] == 'x')
		{
			mp[i + 1][j + 1] = 0;
			que.push(P((i + 1), (j + 1)));
		}
		else
			mp[i + 1][j + 1] = inf;
	}
	for(int i = 0; i <= c + 1; i++) 
	{
		mp[0][i] = 0;
		mp[r + 1][i] = 0;
		que.push(P(0, i));
		que.push(P(r + 1, i));
	}
	for(int i = 0; i <= r + 1; i++) 
	{
		mp[i][0] = 0;
		mp[i][c + 1] = 0;
		que.push(P(i, 0));
		que.push(P(i, c + 1));
	}
	while(!que.empty())
	{
		auto q = que.front();
		que.pop();
		int x = q.first;
		int y = q.second;
		rep(i, 4)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx > r + 1 || ny > c + 1) continue;
			if (nx < 0 || ny < 0) continue;
			if (mp[x][y] + 1 < mp[nx][ny])
			{
				mp[nx][ny] = mp[x][y] + 1;
				que.push(P(nx, ny)); 
			}
		}
	}
	ll ans = 0;
	rep(i, r + 2) rep(j, c + 2)
	{
		if (mp[i][j] >= k)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
