#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int h, w, a, b;
bool ans = false;
string mp[20];
void dfs(int x = 1, int y = 1, int l = 0, int r = 0, char pre = 'S')
{
	if (mp[x][y] == '#') return;
	if (x == h - 2 && y == w - 2) 
	{
		if (l == a && r == b) ans = true;
		return;
	}
	if (pre == 'E')
		dfs(x + 1, y, l, r + 1, 'S');
	else
		dfs(x + 1, y, l, r, 'S');
	if(pre == 'S')
		dfs(x, y + 1, l + 1, r, 'E');
	else
		dfs(x, y + 1, l, r, 'E');
	if (pre ==) 
}
signed main(void)
{
	cin >> a >> b >> h >> w;
	rep(i, h) cin >> mp[i];
	dfs();
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
