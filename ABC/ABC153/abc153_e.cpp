#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF (int)1e9
using namespace std;
typedef long long ll;

const int MAX_N = 10010;
const int MAX_H = 10010;
int dp[MAX_N][MAX_H];
int main(void)
{
	int h, n;
	int a[1001], b[1001];
	int ans;
	
	cin >> h >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	rep(i, MAX_N) rep(j, MAX_H) dp[i][j] = INF;
	rep(i, MAX_N) dp[i][0] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j < MAX_H; j++)
		{
			if (j - a[i] >= 0)
				dp[i][j] = min(dp[i][j], dp[i][j - a[i]] + b[i]);
			dp[i][j] = min(dp[i][j], dp[i - 1][j]);
		}
	}
	ans = INF;
	for(int i = h; i < MAX_H; i++)
	{
		ans = min(dp[n][i], ans);
	}
	cout << ans << endl;
	return 0;
}
