#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int y, m, d;
	long long ans;

	cin >> y >> m >> d;
	ans = 0;
	if (m == 1 || m == 2) 
	{
		y--;
		m += 12;
	}
	ans = 365 * y + y / 4 - y / 100 + y / 400 + 306 * (m + 1) / 10 + d - 429;
	ans = 735369 - ans;
	cout << ans << endl;
	return 0;
}
