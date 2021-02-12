#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
#define MAX 1000
#define MAX_N 110

int n;
int a[MAX_N];
ll dp[MAX_N][MAX];

signed main(void)
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dp[1][a[1]] = 1;
	for (int k = 1; k < n - 1; k++)
	{
		for (int b = 0; b <= 20; b++)
		{
			if (b - a[k + 1] >= 0) 
				dp[k + 1][b] += dp[k][b - a[k + 1]];
			dp[k + 1][b] += dp[k][b + a[k + 1]];
		}
	}
	cout << dp[n - 1][a[n]] << endl;
	return (0);
}
