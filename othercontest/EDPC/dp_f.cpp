#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < (b); i++)
using namespace std;
const int MAX = 3010;

int dp[MAX][MAX];
int solve(string s, string t)
{
	int n, m;

	n = s.size();
	m = t.size();
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (s[i] == t[j])
				dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
			else
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
		}
	}
	return dp[n][m];
}

signed main(void)
{
	string s, t;
	string out;
	int n, m;
	int ans;

	cin >> s >> t;
	ans = solve(s, t);
	n = s.size();
	m = t.size();
	while (ans > 0)
	{
		if (s[n - 1] != t[m - 1])
		{
			if (dp[n][m] == dp[n - 1][m])
				n--;
			else if (dp[n][m] == dp[n][m - 1])
				m--;
		}
		else 
		{
			out.push_back(s[n - 1]);
			n--;
			m--;
			ans--;
		}
	}
	reverse(out.begin(), out.end());
	cout << out << endl;
	return 0;
}
