#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
signed main(void)
{
	int x, y, to;
	string w, tab[9];
	cin >> x >> y >> w;
	x--; y--;
	if (w == "U")
		to = 0;
	else if (w == "RU")
		to = 1;
	else if (w == "R")
		to = 2;
	else if (w == "RD")
		to = 3;
	else if (w == "D")
		to = 4;
	else if (w == "LD")
		to = 5;
	else if (w == "L")
		to = 6;
	else if (w == "LU")
		to = 7;
	rep(i, 9) cin >> tab[i];
	rep(i, 4)
	{
		cout << tab[y][x];
		int next_x = x + dx[to];
		int next_y = y + dy[to];
		if (next_x < 0 || next_x >= 9 || next_y < 0 || next_y >= 9)
		{
			switch(to)
			{
				case 1:
					if (next_x >= 9 && next_y < 0)
						to += 4;
					else if (next_x >= 9)
						to -= 2;
					else if (next_y < 0)
						to += 2;
					break;
				case 3:
					if (next_x >= 9 && next_y >= 9)
						to += 4;
					else if (next_x >= 9)
						to += 2;
					else if (next_y >= 9)
						to -= 2;
					break;
				case 5:
					if (next_x < 0 && next_y >= 9)
						to += 4;
					else if (next_x < 0)
						to -= 2;
					else if (next_y >= 9)
						to += 2;
					break;
				case 7:
					if (next_x < 0 && next_y < 0)
						to += 4;
					else if (next_x < 0)
						to += 2;
					else if (next_y < 0)
						to -= 2;
					break;
				default:
					to += 4;
					break;
			}
			if (to < 0) to += 8;
			to %= 8;
		}
		next_x = x + dx[to];
		next_y = y + dy[to];
		if (next_x < 0 || next_x >= 9 || next_y < 0 || next_y >= 9)
			continue;
		x += dx[to];
		y += dy[to];
	}
	cout << endl;
	return 0;
}
