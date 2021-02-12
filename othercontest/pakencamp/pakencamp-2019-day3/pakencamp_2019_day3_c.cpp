#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	ll ans, sum;

	rep(i, n) rep(j, m) cin >> a[i][j];
	ans = 0;
	rep(i, m - 1)
	{
		for(int j = i + 1; j < m; j++)
		{
			sum = 0;
			rep(k, n)
			{
				sum += max(a[k][i], a[k][j]);
			}
			ans = max(ans, sum);
		}
	}
	cout << ans << endl;
	return 0;
}
