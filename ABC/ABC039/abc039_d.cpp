#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int dx[] = {1, -1, 0, 0, 1, -1, -1 ,1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
signed main(void)
{
	int h, w;
	cin >> h >> w;
	string s[h], ans[h], conf[h];
	bool ok;

	rep(i, h) cin >> s[i];
	rep(i, h) 
	{
		rep(j, w)
		{
			if (s[i][j] == '#')
			{
				ok = true;
				rep(k, 8)
				{
					if (i + dx[k] >= h || j + dy[k] >= w \
							|| i + dx[k] < 0 || j + dy[k] < 0)
						continue;
					if (s[i + dx[k]][j + dy[k]] != '#')
						ok = false;
				}
				if (ok)
					ans[i] += '#';
				else
					ans[i] += '.';
			}
			else
				ans[i] += s[i][j];
		}
	}
	rep(i, h) 
	{
		rep(j, w)
		{
			if (ans[i][j] == '.')
			{
				ok = false;
				rep(k, 8)
				{
					if (i + dx[k] >= h || j + dy[k] >= w \
							|| i + dx[k] < 0 || j + dy[k] < 0)
						continue;
					if (ans[i + dx[k]][j + dy[k]] == '#')
						ok = true;
				}
				if (ok)
					conf[i] += '#';
				else
					conf[i] += '.';
			}
			else
				conf[i] += ans[i][j];
		}
	}
	ok = true;
	rep(i, h)
	{
		if (conf[i] != s[i])
			ok = false;
	}
	if (ok)
	{
		cout << "possible" << endl;
		rep(i, h) cout << ans[i] << endl;
	}
	else
		cout << "impossible" << endl;
	return 0;
}
