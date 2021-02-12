#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const ll INF = 1000000000000000001;
signed main(void)
{
	int h, w, K;
	ll v;
	cin >> h >> w >> K >> v;
	int a[h][w];
	ll table[h * w + 1], dp[h][w];

	rep(i, h * w + 1) table[i] = INF; 
	rep(i, h) rep(j, w) 
	{
		cin >> a[i][j];
		dp[i][j] = a[i][j];
	}
	for(int i = h - 2; i >= 0; i--)
		dp[i][w - 1] += dp[i + 1][w - 1];
	for(int i = w - 2; i >= 0; i--)
		dp[h - 1][i] += dp[h - 1][i + 1] ;
	for(int i = h - 2; i >= 0; i--)
	{
		for(int j = w - 2; j >= 0; j--)
		{
			dp[i][j] += dp[i + 1][j] + dp[i][j + 1] - dp[i + 1][j + 1];
		}
	}
	for(int i = 1; i <= h ; i++)
	{
		for(int j = 1; j <= w; j++)
		{
			ll sum = 1e18;
			for(int k = 0; k + i - 1 < h; k++)
			{
				for(int l = 0; l + j  - 1 < w; l++)
				{
					ll tmp;
					tmp = dp[k][l];
					if (k + i < h)
						tmp -= dp[k + i][l];
					if (l + j < w)
						tmp -= dp[k][l + j];
					if (k + i < h && l + j < w)
						tmp += dp[k + i][l + j];
					if (tmp < sum)
						sum = tmp;
				}
			}
			if (table[i * j] > sum + (ll)i * j * K)
				table[i * j] = sum + (ll)i * j * K;
		}
	}
	int ans = 0;
	for(int i = 1; i <= h * w; i++)
	{
		if (table[i] <= v)
			ans = max(ans, i);
	}
	cout << ans << endl;
	return 0;
}
