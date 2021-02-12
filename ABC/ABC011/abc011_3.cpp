#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const long long INF = 1LL << 60;
long long dp[310];
int main(void)
{
	rep(i, 310) dp[i] = INF;
	int n; cin >> n;
	int ng[310]; rep(i, 310) ng[i] = 0;
	for(int i = 1;i <= 3; i++)
	{
		int a;
		cin >> a;
		ng[a] = 1;
		if (ng[n])
		{
			cout << "NO" << endl;
			return (0);
		}
	}
	dp[n] = 0;
	for (int i = n; i >= 0 ; i--)
	{
		if (ng[i])
			continue;
		for (int j = 1; j <= 3; j++)
			dp[i - j] = min(dp[i] + 1, dp[i - j]);
	}
	if (dp[0] <= 100)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
