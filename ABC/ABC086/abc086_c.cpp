#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; cin >> n;
	int t[n + 1], x[n + 1], y[n + 1];
	bool ok;

	t[0] = 0;
	x[0] = 0;
	y[0] = 0;
	FOR(i, 1, n + 1) cin >> t[i] >> x[i] >> y[i];
	ok = true;
	rep(i, n)
	{	
		int z = abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
		if (t[i + 1] - t[i] >= z) 
		{
			if ((t[i + 1] - t[i] - z) % 2 != 0)
				ok = false;
		}
		else
			ok = false;
	}
	if (ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
