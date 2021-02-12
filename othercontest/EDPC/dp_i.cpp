#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); i++)
using namespace std;
typedef long long ll;

const int MAXN = 3000;
int N;
double dp[MAXN][MAXN];
signed main(void)
{
	cin >> N;

	double p[N];
	rep(i, N) cin >> p[i];
	dp[0][0] = 1;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			dp[i][j] = dp[i - 1][j] * (1 - p[i]);
			if (j - 1 >= 0)
			dp[i][j] += dp[i - 1][j - 1] * p[i];
		}
	}
	double ans = 0;
	for (int j = N; j > N / 2; j--)
		ans += dp[N][j];
	cout << fixed << setprecision(15) << ans << endl;
	return 0;
}
