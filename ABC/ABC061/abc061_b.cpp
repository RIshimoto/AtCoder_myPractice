#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> g[n];
	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		--a; --b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	rep(i, n)
	{
		cout << g[i].size() << endl;
	}
	return 0;
}
