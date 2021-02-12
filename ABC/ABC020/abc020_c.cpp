#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;
static const int MAX = 100;
static const int INFTY = 1e9 + 100;

int h, w;
string s[10];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int M[MAX][MAX], dist[MAX][MAX];
bool check[MAX][MAX];

void dijkstra(int x, int y)
{
	priority_queue<pair<int, P>, vector<pair<int, P>>, greater<pair<int, P>>> pq;

	rep(i, h) rep(j, w)
	{
		dist[i][j] = INFTY;
		check[i][j] = false;
	}

	pq.push(make_pair(0, P(x, y)));
	dist[x][y] = 0;
	while (!pq.empty())
	{
		auto p = pq.top(); pq.pop();
		int u = p.second.first;
		int v = p.second.second;
		check[u][v] = true;
		
		rep(i, 4)
		{
			int nu = u + dx[i]; 
			int nv = v + dy[i]; 
			if (nu >= h || nv >= w) continue;
			if (nu < 0 || nv < 0) continue;
			if (dist[nu][nv] > dist[u][v] + M[nu][nv])
			{
				dist[nu][nv] = dist[u][v] + M[nu][nv];
			}
			if (!check[nu][nv])
				pq.push(make_pair(dist[nu][nv], P(nu, nv)));
		}
	}
}

signed main(void)
{
	int T;
	P start, goal;

	cin >> h >> w >> T;
	rep(i, h) 
	{
		cin >> s[i];
		rep(j, s[i].size())
		{
			if (s[i][j] == 'S')
			{
				start.first = i;
				start.second = j;
			}
			else if (s[i][j] == 'G')
			{
				goal.first = i;
				goal.second = j;
			}
		}
	}
	int lo, hi, mid;
	lo = 1; hi = T + 1;
	while (hi - lo != 1)
	{
		mid = (lo + hi) / 2;
		rep(i, h) rep(j, w)
		{
			if (s[i][j] == '#')
				M[i][j] = mid;
			else
				M[i][j] = 1;
		}
		dijkstra(start.first, start.second);
		if (T < dist[goal.first][goal.second])
			hi = mid;
		else
			lo = mid;
	
	}
	cout << lo << endl;
	return 0;
}
