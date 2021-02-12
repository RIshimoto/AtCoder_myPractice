#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, q;
	cin >> n >> q;
	vector<vector<bool>> graph(n, vector<bool>(n, false));
	rep(i, q)
	{
		int a, b, c;
		cin >> c;
		if (c == 1)
		{
			cin >> a >> b;
			a--; b--;
			graph[a][b] = true;
		}
		else if (c == 2)
		{
			cin >> a;
			a--;
			rep(i, n)
			{
				if (graph[i][a])
					graph[a][i] = true;
			}
		}
		else if (c == 3)
		{
			cin >> a;
			a--;
			vector<int> to;
			rep(i, n)
			{
				if (graph[a][i])
					to.push_back(i);
			}
			rep(i, to.size())
			{
				rep(j, n)
				{
					if (a == j) continue;
					if (graph[to[i]][j])
						graph[a][j] = true;
				}
			}
		}
	}
	rep(i, n)
	{
		rep(j, n)
		{
			if (graph[i][j])
				cout << "Y";
			else
				cout << "N";
		}
		cout << endl;
	}
	return 0;
}
