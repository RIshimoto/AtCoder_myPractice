#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

vector<vector<ll>> sum(130, vector<ll>(130, 0));
signed main(void)
{
	ll h, w, k, v;
	ll tmp;
	ll ans;

	cin >> h >> w >> k >> v;
	for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++)
		cin >> sum[i][j];
	rep(i, h) rep(j, w)
		sum[i + 1][j + 1] += sum[i][j + 1] + sum[i + 1][j] - sum[i][j];
	ans = 0;
	for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++)
	{
		for (int s = 1;  i - s >= 0; s++)
		{
			for (int t = 1; j - t >= 0; t++)
			{
				tmp = sum[i][j]
				- sum[i - s][j]
				- sum[i][j - t]
				+ sum[i - s][j - t]
				+ (s * t) * k;
				if (tmp <= v) ans = max(ans, (ll)s * t);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
