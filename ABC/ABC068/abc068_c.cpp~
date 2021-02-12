#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	bool g[n], h[n];
	bool ok;

	rep(i, n) {g[i] = false; h[i] = false;}
	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		--a; --b;
		if (a == 0)
			g[b] = true;
		else if (b == n - 1)
			h[a] = true;
	}
	ok = false;
	FOR(i, 1, n - 1)
	{
		if (g[i] && h[i])
			ok = true;
	}
	if (ok)
		cout << "POSSIBLE" << endl;
	else
		cout << "IMPOSSIBLE" << endl;
	return 0;
}
