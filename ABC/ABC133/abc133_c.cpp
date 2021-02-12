#include <bits/stdc++.h>
#define FOR(i, a, b) for(long long i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long l, r;
	long long ans;
	cin >> l >> r;

	ans = 2018;
	r = min(r, l + 4038);
		FOR(i, l, r) FOR(j, i + 1, r + 1)
		{
			ans = min(i * j % 2019, ans);
		}
	cout << ans << endl;
	return 0;
}
