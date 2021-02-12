#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
#define mxn 1010

vector<int> graph[mxn], p(mxn, 0);
ll solv(int v = 0, int q = -1)
{
	ll sum = 0;
	for(auto u : graph[v]) sum += solv(u, v);
	if (q != -1) p[v] -= p[q];
	return sum += p[v];
}

int dfs(int v)
{
	int cnt = 1e9;
	if (p[v] != 0) cnt = p[v];
	for(auto u : graph[v])
	{
		cnt = min(cnt, dfs(u));
	}
	p[v] = cnt;
	return cnt;
}

signed main(void)
{
	int n, m;

	cin >> n >> m;
	for(int i = 1; i <= n - 1; i++)
	{
		int p;
		cin >> p;
		graph[p].push_back(i);
	}
	rep(i, m)
	{
		int b, c;
		cin >> b >> c;
		p[b] = c;
	}
	for(auto u : graph[0]) dfs(u);
	cout << solv() << endl;
	return 0;
}
