#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; cin >> n;
	int c[n - 1], s[n - 1], f[n - 1];
	rep(i, n - 1) cin >> c[i] >> s[i] >> f[i];

	int now, next, x;
	rep(i, n)
	{
		x = 0;
		now = 0;
		FOR(j, i, n - 1)
		{
			next = s[j];
			while (now > next)
				next += f[j];
			now = next + c[j];
			x = now;
		}
		cout << x << endl;
	}
	return 0;
}
