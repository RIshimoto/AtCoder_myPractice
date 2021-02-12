#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
using PP = pair<int, P>;
static const int MAX = 110;
static const int INF = (1 << 21);

int h, w;
string s[MAX];
int M[MAX][MAX], dist[MAX][MAX];
bool check[MAX][MAX];

void dijkstra(int x, int y)
{
	priority_queue<PP, vector<PP>, greater<PP>> pq;

	rep(i, h) rep(j, w)
	{
		dist[i][j] = INF;
		check[i][j] = false;
	}

	pq.push(PP(0, P(x, y)));
	dist[x][y] = 0;
	while (!pq.empty())
	{
		auto p = pq.top(); pq.pop();
		int u = p.second.first;
		int v = p.second.second;
		check[u][v] = true;

		if (dist[u][v] < p.first) continue;
		vector<int> dx(4), dy(4);
		dx[0] = 1; dx[1] = -1; dx[2] = 0; dx[3] = 0;
		dy[0] = 0; dy[1] = 0; dy[2] = 1; dy[3] = -1;
		if (u % 2 == 1)
		{
			dx.push_back(1);
			dy.push_back(1);

			dx.push_back(-1);
			dy.push_back(1);
		}
		else
		{
			dx.push_back(-1);
			dy.push_back(-1);

			dx.push_back(1);
			dy.push_back(-1);
		}
		rep(i, 6)
		{	
			int nu = u + dx[i]; 
			int nv = v + dy[i]; 
			if (check[nu][nv]) continue;
			if (nu >= h || nv >= w) continue;
			if (nu < 0 || nv < 0) continue;
			if (dist[nu][nv] > dist[u][v] + M[nu][nv])
			{
				dist[nu][nv] = dist[u][v] + M[nu][nv];
				pq.push(PP(dist[nu][nv], P(nu, nv)));
			}
		}
	}
}

signed main(void)
{
	P start, goal;

	cin >> h >> w;
	rep(i, h) rep(j, w) M[i][j] = INF;
	rep(i, h) 
	{
		cin >> s[i];
		rep(j, w)
		{
			if (s[i][j] == 's')
			{
				start.first = i;
				start.second = j;
			}
			else if (s[i][j] == 't')
			{
				goal.first = i;
				goal.second = j;
				M[i][j] = 0;
			}
			else
				M[i][j] = s[i][j] - '0';
		}
	}
	dijkstra(start.first, start.second);
	cout << dist[goal.first][goal.second] << endl;
	return 0;
}
