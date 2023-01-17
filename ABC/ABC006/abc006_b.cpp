#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const long long mod = 10007;
long long dp[1000010];

/*long long trifib(int n)
{
    if (n == 1 || n == 2) return 0;
    if (n == 3) return 1;
    if (dp[n] != -1) return dp[n];
    return dp[n] = (trifib(n - 1) + trifib(n - 2) + trifib(n - 3)) % mod;
}*/

int main(void)
{
	int n; cin >> n;
	rep(i, 100010) dp[i] = -1;
	dp[0] = dp[1] = dp[2] = 0;
	dp[3] = 1;

	for (int i = 4; i <= n; i++)
	    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;
	cout << dp[n] << endl;
	return (0);
}
