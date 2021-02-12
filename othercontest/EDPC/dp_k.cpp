#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int MAXK = 100010;

int dp[MAXK];
signed main(void)
{
	int n, k;
	cin >> n >> k;
	int a[n];
	rep(i, n) cin >> a[i];
	for (int j = 0; j <= k; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (j - a[i] >= 0 && dp[j - a[i]] == 0) 
				dp[j] = 1;
		}
	}
	cout << (dp[k] == 1 ? "First" : "Second") << endl;
	return 0;
}
