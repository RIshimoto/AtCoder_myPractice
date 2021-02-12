#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

vector<int> tree[110];
vector<bool> visited;
bool flag;
void dfs(int v, int p = -1)
{
	for(int i = 0; i < tree[v].size(); i++)
	{
		if (p == tree[v][i]) continue;
		if (visited[tree[v][i]]) 
		{
			flag = false;
			return;	
		}
		visited[tree[v][i]] = true;
		dfs(tree[v][i], v);
	}
}

signed main(void)
{
	int n, m;
	int ans;
	cin >> n >> m;

	visited = vector<bool>(n, false);
	ans = 0;
	rep(i, m) 
	{
		int u, v;
		cin >> u >> v;
		u--; v--;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	rep(i, n) 
	{
		if (!visited[i])
		{
			flag = true;
			dfs(i);
			if (flag) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
