#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int dy[] = {-1, 0, 1};
int h, w;
string c[10];
vector<char> out;
bool dfs(int x, int y)
{
	bool ok = false;
	if (x == 0)
		return true;
	rep(i, 3)
	{
		int next_x = x - 1; 
		int next_y = y + dy[i];
		if (next_x < 0) continue;
		if (next_y < 0 || next_y >= w) continue;
		if (c[next_x][next_y] == 'x') continue;
		if (!ok)
		{
			ok = dfs(next_x, next_y);
			if (ok) 
			{
				if (dy[i] ==  -1) out.push_back('L');
				else if (dy[i] ==  0) out.push_back('S');
				else if (dy[i] ==  1) out.push_back('R');
			}
		}
	}
	return ok;
}

signed main(void)
{
	cin >> h >> w;
	rep(i, h) cin >> c[i];
	rep(i, w)
	{
		if (c[h - 1][i] == 's')
		{
			if (dfs(h - 1, i))
			{
				reverse(out.begin(), out.end());
				rep(i, out.size())
					cout << out[i];
			}
			else
				cout << "impossible" << endl;
		}
	}
	return 0;
}
