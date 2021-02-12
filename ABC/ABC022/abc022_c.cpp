#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++) 
#define INF 1001001001
using namespace std;

signed main(void)
{
	long long n, m; cin >> n >> m;
	long long graph[n][n];
	long long ans, tmp;
	
	rep(i, n) rep(j, n) graph[i][j] = INF;
	rep(i, m)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		graph[a][b] = c;
		graph[b][a] = c;
	}
	rep(i, n) graph[i][i] = 0;
	for(int k = 1; k < n; k++)
		for(int i = 1; i < n; i++)
			for(int j = 1; j < n; j++)
				graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
	ans = INF;
	for(int i = 1; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if (graph[0][i] != INF && graph[0][j] != INF)
				ans = min(ans, graph[i][j] + graph[0][i] + graph[0][j]);
		}
	}
	if (ans == INF)
		ans = -1;
	cout << ans << endl;
	return 0;
}
