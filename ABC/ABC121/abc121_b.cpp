#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, c, sum, ans;
	cin >> n >> m >> c;
	int b[m];
	int a[n][m];

	rep(i, m) cin >> b[i];
	rep(i, n) rep(j, m) cin >> a[i][j];
	ans = 0;
	rep(i, n)
	{
		sum = 0;
		rep(j, m)
		{
			sum += a[i][j] * b[j];
		}
		if (sum  + c > 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
