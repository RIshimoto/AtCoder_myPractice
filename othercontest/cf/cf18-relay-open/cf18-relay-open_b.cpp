#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

vector<char> ctoi(256);
vector<bool> flag(4, false);
map<char, P> sp;
char p[] = {'L', 'R', 'U', 'D'};
char q[] = {'W', 'X', 'Y', 'Z'};
int g_x, g_y, x, y;
bool ok;
string s;
void dfs(int i)
{
	rep(j, 4)
	{
		if (!flag[j])
		{
			ctoi[q[i]] = p[j];
			if (i == 3)
			{
				x = y = 0;
				rep(k, s.size())
				{
					x += sp[ctoi[s[k]]].first;
					y += sp[ctoi[s[k]]].second;
					if(x == g_x && y == g_y)
						ok = true;
				}
			}
			else
			{
				flag[j] = true;
				dfs(i + 1);
				flag[j] = false;
			}
		}
	}
}
signed main(void)
{
	cin >> s >> g_x >> g_y;
	sp['L'] = P(-1, 0);
	sp['R'] = P(1, 0);
	sp['U'] = P(0, 1);
	sp['D'] = P(0, -1);
	ok = false;
	if (g_x == 0 && g_y == 0)
		ok = true;
	dfs(0);
	if (ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
