#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int r, c, d, ans;
	cin >> r >> c >> d;
	int s[r][c];
	rep(i, r) rep(j, c) cin >> s[i][j];

	ans = 0;
	rep(i, r) rep(j, c)
	{
		if (i + j <= d && (i + j) % 2 == d % 2)
			ans = max(ans, s[i][j]);
	}
	cout << ans << endl;
	return 0;
}
