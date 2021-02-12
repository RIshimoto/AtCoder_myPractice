#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX_A 10
static const int MAX = 100;
static const int INF = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
static const int mod = 1000000007;

int n, M[MAX][MAX];
int a, b;

void dijkstra()
{
	int minv;
	int d[MAX], cnt[MAX], color[MAX];

	rep(i, n)
	{
		d[i] = INF;
		color[i] = WHITE;
	}

	d[a] = 0;
	cnt[a] = 1;
	color[0] = GRAY;
	while(1)
	{
		minv = INF;
		int u = -1;
		rep(i, n)
		{
			if (minv > d[i] && color[i] != BLACK)
			{
				u = i;
				minv = d[i];
			}
		}
		if (u == -1) break;
		color[u] = BLACK;
		rep(v, n)
		{
			if (color[v] != BLACK && M[u][v] != INF)
			{
				if (d[v] > d[u] + M[u][v])
				{
					d[v] = d[u] + M[u][v];
					color[v] = GRAY;
					cnt[v] = cnt[u];
				}
				else if (d[v] == d[u] + M[u][v])
				{
					cnt[v] += cnt[u];
					cnt[v] %= mod;
				}
			}
		}
	}
	cout << cnt[b] << endl; 
}
signed main(void)
{
	int m; 
	cin >> n >> a >> b >> m;
	a--; b--;

	rep(i, n) rep(j, n) M[i][j] = INF;
	rep(i, m)
	{
		int x,y;
		cin >> x >> y;
		x--; y--;
		M[x][y] = 1;
		M[y][x] = 1;
	}
	dijkstra();
	return 0;
}
