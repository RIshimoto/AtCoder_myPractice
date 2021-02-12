#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

long long dp[90];
long long ryuka(long long i)
{
	if (i == 0) return 2;
	if (i == 1) return 1;
	if (dp[i] != -1) return dp[i];
	return dp[i] = ryuka(i - 1) + ryuka(i - 2);
}

signed main(void)
{
	int n;
	cin >> n;

	rep(i, 90) dp[i] = -1;
	cout << ryuka(n) << endl;
	return 0;
}
