#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

vector<int> v[200005];
vector<int> sum;
void dfs(int n, int p = -1)
{
	for(int nv : v[n])
	{
		if (nv == p) continue;
		sum[nv] += sum[n];
		dfs(nv, n);
	}
}

signed main(void)
{
	int n, q;
	cin >> n >> q;

	sum.resize(n, 0);
	rep(i, n - 1)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	rep(i, q)
	{
		int p, x;
		cin >> p >> x;
		p--;
		sum[p] += x;
	}
	dfs(0);
	rep(i, n)
		printf("%d%c", sum[i], i == n - 1 ? '\n': ' ');
	return 0;
}
