#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

vector<int> graph[10010];
int c[10010];
int n, m;
bool visit[10010];
bool check(void)
{
	rep(i, m)
	{
		if(!visit[c[i]])
			return false; 
	}
	return true;
}

bool dfs(int v, int p = -1)
{
	bool ok = false;
	visit[v] = true;
	if (check())
		return true;
	for(auto nv : graph[v])
	{
		if (nv == p) continue;
		if (visit[nv]) continue;
		ok = dfs(nv, v);
		if (!ok)
			visit[nv] = false;
	}
	return ok;
}

signed main(void)
{
	cin >> n >> m;
	rep(i, n) visit[i] = false;
	rep(i, n - 1)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	rep(i, m)
	{
		cin >> c[i];
		c[i]--;
	}
	if (dfs(c[0]))
		cout << "Yes" << endl;
	else
		cout << "trumpet" << endl;
	return 0;
}
