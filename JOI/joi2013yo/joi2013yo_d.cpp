#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll,ll>;
#define D 210
#define N 210

int dp[N][D];
signed main(void)
{
	int d, n;
	cin >> d >> n;
	int tmp[d + 1];
	int a[n], b[n], c[n];

	for (int i = 1; i <= d; i++)
		cin >> tmp[i];
	rep(i, n) cin >> a[i] >> b[i] >> c[i];
	for (int i = 2; i <= d; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] <= tmp[i] && tmp[i] <= b[j])
			{
				for (int k = 0; k < n; k++)
				{
					int sum = abs(c[j] - c[k]);
					if (a[k] <= tmp[i - 1] && tmp[i - 1] <= b[k])
						dp[j][i] = max(dp[j][i], dp[k][i - 1] + sum);
				}
			}
		}
	}
	int ans = 0;
	rep(i, n) ans = max(ans, dp[i][d]);
	cout << ans << endl;
	return 0;
}
