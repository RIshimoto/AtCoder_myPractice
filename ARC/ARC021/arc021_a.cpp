#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
signed main(void)
{
	int a[4][4];
	rep(i, 4) rep(j, 4) cin >> a[i][j];
	rep(i, 4) rep(j, 4) rep(k, 4)
	{
		int x, y;
		x = i + dx[k];
		y = j + dy[k];
		if (x >= 4 || x < 0 || y >= 4 || y < 0)
			continue;
		if (a[x][y] == a[i][j])
		{
			cout << "CONTINUE" << endl;
			return 0;
		}
	}
	cout << "GAMEOVER" << endl;
	return 0;
}
