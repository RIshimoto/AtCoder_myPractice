#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++) 
using namespace std;

int n, m;
bool graph[60][60];
bool visited[60];
void dfs(int x)
{
	if (visited[x]) return;
	visited[x] = true;
	for (int i = 0; i < n; i++)
	{
		if (graph[x][i])
			dfs(i);
	}
}
signed main(void)
{
	int ans;
	cin >> n >> m;
	int a[m], b[m];

	rep(i, m)
	{
		cin >> a[i] >> b[i];
		a[i]--; b[i]--;
		graph[a[i]][b[i]] = true;
		graph[b[i]][a[i]] = true;
	}
	ans = 0;
	rep(i, m)
	{
		bool connected = true;
		rep(i, n) visited[i] = false;
		graph[a[i]][b[i]] = false;
		graph[b[i]][a[i]] = false;
		dfs(0);
		rep(i, n)
		{
			if (!visited[i])
				connected = false;
		}
		if (!connected)
			ans++;
		graph[a[i]][b[i]] = true;
		graph[b[i]][a[i]] = true;
	}
	cout << ans << endl;
}
