#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
signed main(void)
{
	int h, w;
	cin >> h >> w;
	char s[h][w];
	bool ok, flag;

	rep(i, h) rep(j, w) cin >> s[i][j];
	ok = true;
	rep(i, h) 
	{
		rep(j, w)
		{
			if (s[i][j] == '#')
			{
				flag = false;
				rep(k, 4)
				{
					if (i + dy[k] < 0 || i + dy[k] >= h ||\
							j + dx[k] < 0 || j + dx[k] >= w)
						continue;
					if (s[i + dy[k]][j + dx[k]] == '#')
						flag = true;
				}
				if (!flag) ok = false; 
			}
		}
	}
	if (!ok)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
