#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int dx[8] = {0, -1, 0, 1, -1, 1, -1, 1};
int dy[8] = {-1, 0, 1, 0, -1, 1, 1, -1};

signed main(void)
{
	int h, w, cnt;
	cin >> h >> w;
	string s[h];

	rep(i, h) cin >> s[i];
	rep(i, h) rep(j, w)
	{
		cnt = 0;
		if (s[i][j] == '#') continue;
		for (int k = 0; k < 8; k++)
		{
			if (i + dx[k] < 0 || j + dy[k] < 0 ||\
					i + dx[k] >= h || j + dy[k] >= w) continue;
			if (s[i + dx[k]][j + dy[k]] == '#') cnt++;
		}
		s[i][j] = cnt + '0';
	}
	rep(i, h)
	{
		rep(j, w)
			cout << s[i][j];
		cout << endl;
	}
	return 0;
}
