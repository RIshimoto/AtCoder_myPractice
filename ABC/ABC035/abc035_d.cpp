#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define MAX = (int)1e9;
using namespace std;


int dijkstra(int from, int to, int v)
{
	int d[v];
	bool check[v];

	rep (i, v)
	{
		d[i] = MAX;
		check[v] = false;
	}
	d[from] = 0;
	rep(i, v)
	{
		int now = 0;
		int nowd = MAX;
		rep(j, v)
		{
			if (nowd > d[j] && !check[now])
			{
				nowd = d[j];
				now = j;
			}
		}
		if (nowd == MAX) break;
		check[now] = true;
	}
}

signed main(void)
{
	int n, m, t;
	vector<int> g[n];

	rep(i, 
}
